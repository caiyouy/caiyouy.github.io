---
title: "课本结论2.6证明"
date: 2020-11-05T15:55:59+08:00
draft: true
categories: ["NMPDE2020",]
---

> 设定义在 $(-1,1) \times \mathbb{R}\_{+}$ 上的方程
$u\_t = u_{xx}$ 的周期初边值问题的初值 $u^0$ 可以展开成Fourier级数
$u^0(x) = \displaystyle \sum\_{k=-\infty}^{\infty}a_k e^{ik \pi x}$,
且有$\displaystyle \sum\_{k=-\infty}^{\infty}|a_k|<\infty$, 又设 $U$ 是显式差分格式
>$$
\begin{aligned}
&\frac{U\_j^{m+1} - U_j^m}{\tau}
= \frac{U^m\_{j+1} - 2U^m_{j} + U^{m}_{j-1}}{h^2}\end{aligned}
>$$
>的解，则当网格比 $\mu = \frac{\tau}{h^2} \le \frac{1}{2}$时, 
对于任给的 $t\_{\max} >0$, 都有
>$$
\lim\_{\tau \to 0} \Vert e \Vert_{\infty} = 0.
$$

### 参考证明

假设原方程的解形如
$$
u(x,t) = \sum\_{k=-\infty}^{\infty} a_k e^{ik \pi (x-\omega_k t)},
$$
代入原方程得 $\omega\_k = -ik\pi$. 而对于数值解有，
$$
U\_j^m = \sum_{k=-\infty}^{\infty}a_k \lambda_k^m e^{ik \pi jh}
$$
其中$\lambda\_k = 1-4\mu \sin^2 \frac{k\pi h}{2}$. 所以对于误差
$e\_j^m$有
$$
\begin{aligned}
e\_j^m = U_j^m - u(x_j, t_m) =  
\sum\_{k=-\infty}^{\infty}a_k e^{ik \pi jh} \left(\lambda_k^m - e^{-k^2\pi^2m\tau}\right).
\end{aligned}
$$

注意到，
$$
\begin{aligned}
\left\vert\lambda\_k - e^{-k^2\pi^2\tau}\right \vert
= & \left\vert 1-4\mu \sin^2 \frac{k\pi h}{2} - e^{-k^2\pi^2\tau} \right \vert\\\\
= & \left\vert 1 - 2\mu(1 - \cos(k\pi h)) - e^{-k^2\pi^2\tau} \right \vert\\\\
= & \left \vert 1 - 2\mu
\left(\frac{1}{2}(k\pi h)^2 - \frac{1}{24}(k\pi h)^4  + O(k^6h^6) \right) 
-(1 - k^2\pi^2\tau + \frac{1}{2}k^4\pi^4\tau^2 + O(k^6 \tau^3)) \right \vert\\\\
= & \left| \frac{1}{12}\mu (k\pi h)^4 - \frac{1}{2}k^4 \pi^4 \tau^2 + O(k^6 \tau^3)  \right|\\\\
\le & \left(\frac{1}{12\mu} + \frac{1}{2}\right)k^4\pi^4 \tau^2 + O(k^6 \tau^3)\\\\
\le & C(\mu)k^4\tau^2
\end{aligned}
$$

其中 $C(\mu)$ 表示和 $\mu$ 有关的某个常数. 最后一个不等式的成立需要$k,\tau$有界.
故结合 $\mu \le \frac{1}{2}$ 时, $\vert \lambda\_k \vert \le 1$, 则有
$$
\begin{aligned}
\vert \lambda\_k^m - e^{-k^2\pi^2m\tau}\vert
& \le m \left\vert\lambda\_k - e^{-k^2\pi^2\tau}\right \vert\\\\
& \le m C(\mu) k^4 \tau^2\\\\
& \le t\_{\max} C(\mu) k^4 \tau.
\end{aligned}
$$

所以对于 $\forall \epsilon > 0$, 可以选择足够大的$N$, 使得
$$
\sum\_{|k|>N} |a_k| < \frac{\epsilon}{4},
$$

则，
$$
\begin{aligned}
|e\_j^m| 
&\le \sum\_{k=-\infty}^{\infty} \vert a_k \vert \left \vert \lambda_k^m - e^{-k^2\pi^2m\tau}\right \vert\\\\
& = \sum\_{\vert k \vert \le N} \vert a_k \vert \left \vert \lambda_k^m - e^{-k^2\pi^2m\tau}\right \vert + 
\sum\_{\vert k \vert > N} \vert a_k \vert \left \vert \lambda_k^m - e^{-k^2\pi^2m\tau}\right \vert\\\\
& \le \sum\_{\vert k \vert \le N} \vert a_k \vert t_{\max} C(\mu) k^4 \tau + 
\sum\_{\vert k \vert > N} 2\vert a_k \vert\\\\
& \le \sum\_{\vert k \vert \le N} \vert a_k \vert t_{\max} C(\mu) k^4 \tau + 
\frac{\epsilon}{2}\\\\
\end{aligned}
$$

故当$\tau$足够小时，例如 
$$\tau \le \tau\_0 := 
\frac{\epsilon}{2 \left(\displaystyle \sum\_{\vert k \vert \le N} \vert a_k \vert \right) t_{\max} C(\mu) N^4}
$$
时，有$|e\_j^m| < \epsilon$. 证毕.
