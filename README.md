# AzureTestRepo
用于展示***作为新生***的我的任务的完成情况。

## 任务清单：
- [ ] C++基础任务
- [ ] ROS2基础任务
- [ ] 视觉里程计
- [ ] 完整的机器人视觉slam的VO
- [ ] docker使用

## 学习记录：

| 日期| 学习过程（关键信息：知识点、技能 查阅平台 链接）| 遇到问题（关键信息：自己没想通的问题点）|解决过程（关键信息：分析思路、与别人的交流）|
|--------|--------------------------------------------------------|--------------------------------------------------------|--------------------------------------------------------|
|10.10|加入组织|||
|10.11|安装Ubuntu|出现掉帧，怀疑显卡驱动未安装好|摆烂，明天再解决|
|10.12|安装显卡驱动|Ubuntu “附加驱动”中不能直接安装NVIDIA驱动|<p>**1.** 尝试看网上教程安装驱动，用``Ubuntu-driver``安装了NVIDIA的闭源驱动，但仍然有掉帧</p><p>**2.** 后来安装了开源的**X.Org**，流畅了许多，但不支持分数缩放（不能将DPI缩放到125%）</p><p>**3.** 最终留在了NVIDIA官方（解决过程也比较坎坷，还要对驱动进行***签名***并添加到grub kernel以过**Secure Boot**）</p>|
|10.13|开始安装各种基本[软件](./AppList.md)| ``raw.githubusercontent.com`` 出现443错误，说明被拒绝访问，不确定原因|``ping raw.githubusercontent.com``发现全部被代理到``localhost``，检查代理软件无问题，只能运用``hosts``把域名强行代理到``185.199.108.133``(真实映射的IP)，怀疑此域名被GFW污染……
|10.14|学习基本Markdown语法，更新我的软件列表||