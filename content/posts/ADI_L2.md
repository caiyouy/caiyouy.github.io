---
title: "一个ADI格式的L2稳定性"
date: 2020-11-18T15:55:59+08:00
draft: true
categories: ["NMPDE2020",]
---

课本中ADI格式(2.4.27)等价于如下单步格式

$$
\begin{aligned}
&
\left(1-\frac{1}{2}\mu_x\delta_x^2\right)
\left(1-\frac{1}{2}\mu_y\delta_y^2\right)
\left(1-\frac{1}{2}\mu_z\delta_z^2\right)U_{j,k,l}^{m+1} =\\\\
&
\left(1+\frac{1}{2}\mu_x\delta_x^2\right)
\left(1+\frac{1}{2}\mu_y\delta_y^2\right)
\left(1+\frac{1}{2}\mu_z\delta_z^2\right)U_{j,k,l}^{m}
-\frac{1}{4}\mu_x\mu_y\mu_z\delta_x^2\delta_y^2\delta_z^2U_{j,k,l}^{m}
\end{aligned}
$$

使用Fourier方法，代入波形
$$U_{j,k,l}^{m} = \lambda_{s}^m 
\exp\left[i\pi
\left(\frac{s_x j}{N_x} + \frac{s_y k}{N_y} + \frac{s_z l}{N_z}
\right)\right],
$$
注意到
$$
\begin{aligned}
\delta_A^2 U_{j,k,l}^{m} 
&= U_{j,k,l}^{m}\left(
    \exp\left(i\frac{\pi s_A}{N_A}\right) -2 +
    \exp\left(-i\frac{\pi s_A}{N_A}\right)
\right)\\\\
&=U_{j,k,l}^m \left(-4\sin^2\left(\frac{\pi s_A}{2N_A}\right)\right),
\qquad A = x,y,z.
\end{aligned}
$$

所以，
$$
\begin{aligned}
&
\left(1 + 2\mu_x \sin^2\left(\frac{\pi s_x}{2N_x}\right)\right)
\left(1 + 2\mu_y \sin^2\left(\frac{\pi s_y}{2N_y}\right)\right)
\left(1 + 2\mu_z \sin^2\left(\frac{\pi s_z}{2N_z}\right)\right)
\lambda_s \\\\
=& 
\left(1 - 2\mu_x \sin^2\left(\frac{\pi s_x}{2N_x}\right)\right)
\left(1 - 2\mu_y \sin^2\left(\frac{\pi s_y}{2N_y}\right)\right)
\left(1 - 2\mu_z \sin^2\left(\frac{\pi s_z}{2N_z}\right)\right)\\\\
& +
16\mu_x\mu_y\mu_z
\sin^2\left(\frac{\pi s_x}{2N_x}\right)
\sin^2\left(\frac{\pi s_y}{2N_y}\right)
\sin^2\left(\frac{\pi s_z}{2N_z}\right)
\end{aligned}
$$

记$S_A = \mu_A \sin^2\left(\frac{\pi s_A}{2N_A}\right), A=x,y,z$, 有
$$
\lambda_s =
\frac{(1-2S_x)(1-2S_y)(1-2S_z) + 16S_xS_yS_z}{(1+2S_x)(1+2S_y)(1+2S_z)}
$$

由于$S_A \ge 0, A=x,y,z$, 可以验证$-1\le \lambda_s \le 1$. 
故格式无条件$L_2$稳定.
