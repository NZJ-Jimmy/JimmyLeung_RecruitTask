# AzureTestRepo
用于展示***作为新生***的我的任务的完成情况。

## 任务清单：
- [x] 环境准备
- [ ] C++基础任务
- [ ] ROS2基础任务
- [ ] 视觉里程计
- [ ] 完整的机器人视觉slam的VO
- [ ] docker使用

## 学习记录：

| 日期| 学习过程（关键信息：知识点、技能 查阅平台 链接）| 遇到问题（关键信息：自己没想通的问题点）|解决过程（关键信息：分析思路、与别人的交流）|
|--------|--------------------------------------------------------|--------------------------------------------------------|--------------------------------------------------------|
|10.10|加入组织|||
|10.11|安装[Ubuntu](https://ubuntu.com/download/desktop)|出现掉帧，怀疑显卡驱动未安装好|摆烂，明天再解决|
|10.12|安装显卡驱动<br>[知乎](https://zhuanlan.zhihu.com/p/308407850)|Ubuntu “附加驱动”中不能直接安装NVIDIA驱动|<p>**1.** 尝试看网上教程安装驱动，用``Ubuntu-driver``安装了**NVIDIA的闭源驱动**，但仍然有掉帧</p><p>**2.** 后来安装了开源的**X.Org**，流畅了许多，但不支持分数缩放（不能将DPI缩放到125%）</p><p>**3.** 最终留在了**NVIDIA官方**（解决过程也比较坎坷，还要对驱动进行***签名***并添加到grub kernel以过[**Secure Boot**](https://support.microsoft.com/en-us/windows/windows-11-and-secure-boot-a8ff1202-c0d9-42f5-940f-843abef64fad "强迫症，为了应付微软……")）</p>|
|10.13|开始安装各种基本[软件](./AppList.md)<br>[icorgi's blog](https://www.icorgi.cn/2022/04/10/412.html)| ``raw.githubusercontent.com`` 出现443错误，说明被拒绝访问，不确定原因|<p>``ping raw.githubusercontent.com``，发现全部被代理到``localhost``</p>检查代理软件无问题，开始网上找[资料](https://www.icorgi.cn/2022/04/10/412.html)</p>运用``hosts``把域名强行代理到``185.199.108.133``(真实映射的IP)，怀疑此域名被GFW污染……
|10.14|学习基本[Markdown语法](https://markdown.com.cn)，撰写我的[软件列表](./AppList.md)||
|10.15|完善Ubuntu||找到一个第三方的微信（[wewechat++](https://gitee.com/spark-community-works-collections/wewechat-plus-plus))，以及国内的一个Debian软件商店（[spark-store](https://spark-app.store/)），有许多的国产软件可用。
