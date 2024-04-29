---
title: "MUSCL格式的性质"
date: 2020-12-08T15:55:59+08:00
draft: true
categories: ["NMPDE2020",]
---

> 讨论广义MUSCL格式
> $$U_{j}^{n+1} = U_{j}^n - \lambda \left(\hat{f}(U_j^n +\frac{h}{2}S_j^n, U_{j+1}^n - \frac{h}{2}S_{j+1}^n)-\hat{f}(U_{j-1}^n +\frac{h}{2}S_{j-1}^n, U_{j}^n - \frac{h}{2}S_{j}^n \right)$$
> 的局部截断误差和TVD性质, 其中$\lambda = \tau/h$,
> $$
> S_j^n = \mathrm{minmod}\left(\frac{U_{j+1}^n - U_{j}^n}{h}, \frac{U_{j}^n - U_{j-1}^n}{h}\right).
> $$
> 这里，二元函数minmod的定义为,
> $$
> \mathrm{minmod}(a, b) =
> \left\\{
> \begin{aligned}
>      &a, \quad ab \gt 0, |a| \le |b|,\\\\
>      &b, \quad ab \gt 0, |a| \ge |b|,\\\\
>      &0, \quad ab \le 0.
> \end{aligned}
> \right.$$
> 
> 并且设$\hat{f}(u_1,u_2)$是和物理通量$f(u) = au$相容的迎风数值通量, 即$\hat{f}(u_1, u_2) = au_1$.

不妨假设$a>0$, 即考虑如下格式

$$U_{j}^{n+1} = U_{j}^n - a\lambda \left(U_j^n +\frac{h}{2}S_j^n 
-U_{j-1}^n -\frac{h}{2}S_{j-1}^n\right).$$

$a<0$情形推导类似，这里省略.

## 讨论局部截断误差

数值格式改写为
$$\frac{U_{j}^{n+1} - U_{j}^n}{\tau} + a\frac{U_j^n - U_{j-1}^n}{h}
+\frac{a}{2}(S_j^n - S_{j-1}^n) = 0.$$

设$u(x,t)$是一光滑函数并满足$u(x_j, t^n) = U_j^n$. 记 $u_j^n = u(x_j, t^n), 
s_{j}^n = \mathrm{minmod}((u_{j+1}^n - u_{j}^n)/h, (u_{j}^n-u_{j-1}^n)/h)$,
则局部截断误差为
$$
\begin{aligned}
T_j^n 
&= \frac{u_j^{n+1} - u_{j}^n}{\tau} + a\frac{u_j^n - u_{j-1}^n}{h}
+\frac{a}{2}(s_{j}^n - s_{j-1}^n) - (u_t + au_x)_j^n\\\\
& = 
\frac{\tau}{2}u_{tt}(x_j, t^n) - \frac{h}{2}au_{xx}(x_j,t^n)+ 
\frac{h^2}{6}au_{xxx}(x_j,t^n)+
\frac{a}{2}(s_j^n - s_{j-1}^n)+
O(\tau^2 + h^3).
\end{aligned}
$$

下面对$s_j^n, s_{j-1}^n$可能的取值情况，分情况讨论。

- $s_j^n = 0, s_{j-1}^n = 0$.
  
  此时，
  
  $$T_j^n = \frac{\tau}{2}u_{tt}(x_j, t^n) - \frac{h}{2}au_{xx}(x_j,t^n) + O(\tau^2 + h^2).$$

<!-- *(极值点附近)* -->
- $s_j^n = 0, s_{j-1}^n = \frac{u_j^n - u_{j-1}^n}{h}$, 
  
  此时,
  $$ s_{j-1}^n =  u_x(x_j, t^n)- \frac{h}{2}u_{xx}(x_j, t^n) + \frac{h^2}{6}u_{xxx}(x_j,t^n) + O(h^3)$$
  所以
  $$
  \begin{aligned}
  T_j^n 
  & = 
  \frac{\tau}{2}u_{tt}(x_j, t^n)-
   \frac{1}{2}au_x(x_j,t^n)-
  \frac{h}{4}au_{xx}(x_j,t^n)+
  \frac{h^2}{12}au_{xxx}(x_j,t^n)+
  O(\tau^2 + h^3)
  \end{aligned}
  $$
  看似由于$-\frac{1}{2}au_x(x_j,t^n)$这项，$T^n_j = O(1)$. 
  
  但是注意到假设
  $s_j^n = 0$意味着$(u_{j+1}^n - u_{j}^n)(u_{j}^n - u_{j-1}^n) < 0$.
  由Lagrange中值定理，则存在$p_1 \in (x_{j-1}, x_{j}), p_2 \in (x_{j}, x_{j+1})$,
  使得$u_{j} - u_{j-1} = u_x(p_1)h,\,u_{j+1} - u_{j} = u_x(p_2)h$.
  故有$u_x(p_1)u_x(p_2)h^2 < 0$.

  再由连续函数的介值定理，则知存在$p_0 \in (p_1, p_2) \subset (x_{j-1}, x_{j+1})$, 使得 $u_{x}(p_0) = 0$.
  所以，$u_x(x_j,t^n) =  u_{xx}(x_0, t^n)(x_j - x_0) + O((x_j - x_0)^2)$.
  故此时截断误差实际上有,

  $$
  \begin{aligned}
  T_j^n 
  & = 
  \frac{\tau}{2}u_{tt}(x_j, t^n)-
   \frac{1}{2}au_{xx}(x_0, t^n)(x_j - x_0) -
  \frac{h}{4}au_{xx}(x_j,t^n)+
  \frac{h^2}{12}au_{xxx}(x_j,t^n)\\\\
  &\quad+
  O(\tau^2 + h^3)+
  O((x_j - x_0)^2)\\\\
  & = O(\tau + h)
  \end{aligned}
  $$

<!-- *(差分方向相同)* -->
- $s_j^n = \frac{u_{j+1}^n - u_{j}^n}{h}, s_{j-1}^n = \frac{u_j^n - u_{j-1}^n}{h}$
  
  此时
  $$\frac{1}{2}(s_j^n - s_{j-1}^n) = \frac{h}{2} u_{xx}(x_j, t^n) +
  \frac{h^3}{24} u_{xxxx}(x_j, t^n) +O(h^5)
  $$
  所以,
  $$
  \begin{aligned}
  T_j^n 
  & = 
  \frac{\tau}{2}u_{tt}(x_j, t^n)+
  \frac{h^2}{6}au_{xxx}(x_j,t^n)+
  O(\tau^2 + h^3)\\\\
  & = O(\tau + h^2)
  \end{aligned}
  $$

<!-- *(差分方向不同)* -->
- $s_j^n = \frac{u_{j+1}^n - u_{j}^n}{h}, s_{j-1}^n  = \frac{u_{j-1}^n - u_{j-2}^n}{h}$
  
  由于
  $$s_{j}^n  = \frac{u_{j+1}^n - u_{j}^n}{h} = u_x(x_j, t^n) + \frac{h}{2} u_{xx}(x_j, t^n) + O(h^2)$$
  $$s_{j-1}^n  = \frac{u_{j-1}^n - u_{j-2}^n}{h} = u_x(x_j, t^n) - \frac{3h}{2} u_{xx}(x_j, t^n)+ O(h^2)$$
  所以,
  $$\frac{1}{2}(s_j^n - s_{j-1}^n) = h u_{xx}(x_j, t^n) +O(h^2)
  $$

  $$
  \begin{aligned}
  T_j^n 
  & = \frac{\tau}{2}u_{tt}(x_j, t^n) + \frac{h}{2}au_{xx}(x_j,t^n) +
   O(\tau^2 + h^2)
  \end{aligned}
  $$
  但值得注意的是, $s_j^n = \frac{u_{j+1}^n - u_{j}^n}{h}, s_{j-1}^n  = \frac{u_{j-1}^n - u_{j-2}^n}{h}$意味着$u_{xx}(x_j,t^n) = O(h)$,
  具体解释如下.
  
  此时，由于$u_{j-1}-u_{j-2}, u_{j} - u_{j-1}, u_{j+1} - u_{j}$三者同正或同负,
  不妨假设三者同正. 同负的情形类似可证.
  则由假设
  $$u_{j-1}-u_{j-2}< u_{j} - u_{j-1},\quad u_{j} - u_{j-1} > u_{j+1} - u_{j}$$
  以及Langrange中值定理知, 存在 $q_k \in (x_{j-2+k}, x_{j-1+k}), k=0,1,2$,
  使得
  $$ u_{x}(q_0, t^n)\lt u_x(q_1, t^n),\quad u_{x}(q_1, t^n)\gt u_x(q_2, t^n).$$
  故存在$q_3 \in (p_0, p_1), q_4 \in (p_1, p_2)$,有
  $$u_{xx}(q_3,t^n) >0 , u_{xx}(q_4, t^n)<0.$$
  故存在$q_5 \in (p_3, p_4)$, 有$u_{xx}(q_5, t^n) = 0$. 所以
  $$u_{xx}(x_j, t^n) = u_{xxx}(p_5,t^n)(x_j - q_5) = O(h).$$
  所以此情形下, $T_j^n = O(\tau + h^2)$.

- 其余情形，做法类似.

上述结果总结为下表，

|截断误差| $s_j^n = \frac{u_{j+1}^n - u_{j}^n}{h}$ | $s_j^n = \frac{u_{j}^n - u_{j-1}^n}{h}$ | $s_j^n = 0$ |
|:------:| :------: | :------: | :------: |
|$s_{j-1}^n = \frac{u_{j}^n - u_{j-1}^n}{h}$| $O(\tau + h^2)$ | $O(\tau + h^2)$ | $O(\tau + h)$ |
|$s_{j-1}^n = \frac{u_{j-1}^n - u_{j-2}^n}{h}$| $O(\tau + h^2)$ | $O(\tau + h^2)$ | $O(\tau + h)$ |
|$s_{j-1}^n = 0$| $O(\tau + h)$ | $O(\tau + h)$ | $O(\tau + h)$ |

注：上表的结果表明，格式的截断误差一般是$O(\tau + h^2)$的，但是在极值点附近，截断误差只有$O(\tau + h)$.

## 讨论TVD性质

考虑使用如下结论，推导格式TVD的充分条件.
> 格式
> $$ U_j^{n+1} = U_j^n - C_{j-1/2}(U_j^n - U_{j-1}^n) + D_{j+1/2}(U_{j+1}^n - U_{j}^n)$$
> 具有TVD性质的一个充分条件是, 对于任意 $j$,
> $$
> \begin{aligned}
> C_{j-1/2} \ge 0,\\\\ D_{j+1/2} \ge 0,\\\\ C_{j+1/2} + D_{j+1/2} \le 1.
> \end{aligned}
> $$

所以，当$U_j^n \ne U_{j-1}^n$时，考虑将原有格式改写为
$$
\begin{aligned}
U_j^{n+1} 
&= U_j^n -  a\lambda
\frac{U_j^n +\frac{h}{2}S_j^n 
-U_{j-1}^n -\frac{h}{2}S_{j-1}^n}
{U_j^n - U_{j-1}^n}
(U_j^n - U_{j-1}^n)\\\\
&=U_j^n -  a\lambda
\left(1 + \frac{1}{2}\frac{hS_j^n - hS_{j-1}^n}{U_j^n - U_{j-1}^n}\right)
(U_j^n - U_{j-1}^n)，\\\\
\end{aligned}
$$
而当$U_j^n = U_{j-1}^n$时, 根据定义$S_j^n = S_{j-1}^n = 0$, 有
$$U_j^{n+1} = U_j^{n}.$$

综上，格式改写为
$$
U_j^{n+1} = 
U_j^n -  C_{j-1/2}
(U_j^n - U_{j-1}^n),
$$
其中，

$$
C_{j-1/2} =
\left\\{
\begin{aligned}
&a\lambda
\left(1 + \frac{1}{2} \frac{hS_j^n - hS_{j-1}^n}{U_j^n - U_{j-1}^n}\right),
&\quad U_j^n \ne U_{j-1}^n,\\\\
& 0,
&\quad U_j^n = U_{j-1}^n.
\end{aligned}
\right.
$$

现考虑在使得$0\le C_{j-1/2}\le 1$的条件.

当$U_j^n \ne U_{j-1}^n$时，注意到根据minmod的定义，
$$
0 \le \frac{hS_j^n}{U_j^n - U_{j-1}^n} \le 1,\quad
0 \le \frac{hS_{j-1}^n}{U_j^n - U_{j-1}^n} \le 1,
$$
所以有
$$
\frac{1}{2}a\lambda \le C_{j-1/2} \le \frac{3}{2}a\lambda.
$$

综上，当$a\lambda \le \frac{2}{3}$时，$0\le C_{j-1/2}\le 1$， 所以格式是TVD的.




