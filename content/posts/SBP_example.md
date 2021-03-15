---
title: "离散分部求和举例"
date: 2020-10-13T15:55:59+08:00
draft: false
categories: ["NMPDE2020",]
---

定义离散算子,
$$
\mathcal{L}\_h^x u_{i,j} = \frac{2}{x_{i+1} - x_{i-1}}
\left(
\frac{u_{i+1,j} - u_{i,j}}{x_{i+1} - x_{i}}
-\frac{u_{i,j} - u_{i-1,j}}{x_{i} - x_{i-1}}
\right)
$$

$$
\mathcal{L}\_h^y u_{i,j} = 
\frac{2}{y\_{j+1} - y_{j-1}}
\left(\frac{u\_{i,j+1} - u_{i,j}}{y_{j+1} - y_{j}} -
\frac{u\_{i,j} - u_{i,j-1}}{y\_{j} - y_{j-1}}
\right)
$$

定义离散内积$(\cdot, \cdot)\_h$,

$$(u, v)\_h = \sum\_{i=1}^{N-1}\sum\_{j=1}^{N-1}u_{i,j}v_{i,j}
\left(\frac{x_{i+1} - x_{i-1}}{2}\right)
\left(\frac{y_{j+1} - y_{j-1}}{2}\right)$$

故,
$$
\begin{aligned}
(-\mathcal{L}\_h^x u, u)\_h 
& = 
-\sum_{i=1}^{N-1}\sum_{j=1}^{N-1}
\left(\frac{u_{i+1,j} - u_{i,j}}{x_{i+1} - x_{i}}-
\frac{u_{i,j} - u_{i-1,j}}{x_{i} - x_{i-1}}\right)u_{i,j}
\left(\frac{y_{j+1} - y_{j-1}}{2}\right)\\\\
&=
-\sum_{j=1}^{N-1}\left(\frac{y_{j+1} - y_{j-1}}{2}\right)
\sum_{i=1}^{N-1} \left(\frac{u_{i+1,j} - u_{i,j}}{x_{i+1} - x_{i}}-
\frac{u_{i,j} - u_{i-1,j}}{x_{i} - x_{i-1}}\right)u_{i,j}
\end{aligned}
$$

注意到，
$$
\begin{aligned}
\sum_{i=1}^{N-1} \left(\frac{u_{i+1,j} - u_{i,j}}{x_{i+1} - x_{i}}-
\frac{u_{i,j} - u_{i-1,j}}{x_{i} - x_{i-1}}\right)u_{i,j}
&= 
\sum_{i=1}^{N-1} \left(\frac{u_{i+1,j} - u_{i,j}}{x_{i+1} - x_{i}}\right)u_{i,j}-
\sum_{i=1}^{N-1} \left(\frac{u_{i,j} - u_{i-1,j}}{x_{i} - x_{i-1}}\right)u_{i,j}\\\\
&=
\sum_{i=1}^{N-1} \left(\frac{u_{i+1,j} - u_{i,j}}{x_{i+1} - x_{i}}\right)u_{i,j}-
\sum_{i=0}^{N-2} \left(\frac{u_{i+1,j} - u_{i,j}}{x_{i+1} - x_{i}}\right)u_{i+1,j}\\\\
&=
-\sum_{i=1}^{N-1} \frac{(u_{i+1,j} - u_{i,j})^2}{x_{i+1} - x_{i}}
-\frac{(u_{1,j} - u_{0,j})}{x_{1} - x_{0}}u_{1,j}
+\frac{(u_{N,j} - u_{N-1,j})}{x_{N} - x_{N-1}}u_{N,j}
\end{aligned}
$$

结合边界条件 $u_{0,j} = u_{N, j} = 0$, 结果即简化为
$$
\sum_{i=1}^{N-1} \left(\frac{u_{i+1,j} - u_{i,j}}{x_{i+1} - x_{i}}-
\frac{u_{i,j} - u_{i-1,j}}{x_{i} - x_{i-1}}\right)u_{i,j}=
-\sum_{i=0}^{N-1} \frac{(u_{i+1,j} - u_{i,j})^2}{x_{i+1} - x_{i}}
$$

故,
$$
\begin{aligned}
(-\mathcal{L}\_h^x u, u)\_h 
&=
\sum_{j=1}^{N-1}\left(\frac{y_{j+1} - y_{j-1}}{2}\right)
\sum_{i=0}^{N-1} \frac{(u_{i+1,j} - u_{i,j})^2}{x_{i+1} - x_{i}}\\\\
&=
\sum_{i=0}^{N-1}\sum_{j=1}^{N-1}
\frac{y_{j+1} - y_{j-1}}{2(x_{i+1} - x_{i})}(u_{i+1,j} - u_{i,j})^2
\end{aligned}
$$

同理，
$$
\begin{aligned}
(-\mathcal{L}\_h^y u, u)\_h 
&=
\sum_{i=1}^{N-1}\sum_{j=0}^{N-1}
\frac{x_{i+1} - x_{i-1}}{2(y_{j+1} - y_{i})}(u_{i,j+1} - u_{i,j})^2
\end{aligned}
$$

故,
$$
\begin{aligned}
(-\mathcal{L}\_h u, u)\_h &=
(-\mathcal{L}\_h^x u, u)\_h +
(-\mathcal{L}\_h^y u, u)\_h \\\\
&=
\sum_{i=0}^{N-1}\sum\_{j=1}^{N-1}
\frac{y\_{j+1} - y\_{j-1}}{2(x_{i+1} - x\_{i})}(u\_{i+1,j} - u\_{i,j})^2+
\sum\_{i=1}^{N-1}\sum\_{j=0}^{N-1}
\frac{x\_{i+1} - x\_{i-1}}{2(y_{j+1} - y\_{i})}(u\_{i,j+1} - u\_{i,j})^2
\end{aligned}
$$
