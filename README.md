# AzureTestRepo

用于展示***作为新生***的我的任务的完成情况。

## [学习路线](https://github.com/AzureSpace531/navigation_group/blob/main/%E5%AF%BC%E8%88%AA%E7%BB%84%E5%AD%A6%E4%B9%A0%E8%B7%AF%E7%BA%BF.md#c)

## 任务清单：

- [X] 环境准备
- [X] [C++基础任务](https://github.com/AzureSpace531/navigation_group/blob/main/%E5%AF%BC%E8%88%AA%E7%BB%84%E6%8B%9B%E6%96%B0%E4%BB%BB%E5%8A%A1/basic_task/Cpp_task%E8%AE%B2%E8%A7%A3.md)
  - [ ] [Google C++ Style Guide](https://zh-google-styleguide.readthedocs.io/en/latest/google-cpp-styleguide/contents/)
  - [ ] 基础语法：
    - [ ] 类与对象
    - [ ] 继承
    - [ ] STL中vector和map的简单用法
    - [X] 结构体
  - [ ] C++11：
    - [ ] 匿名函数
    - [ ] 列表初始化
    - [ ] for each循环
- [ ] [ROS2基础任务](https://github.com/AzureSpace531/navigation_group/tree/main/%E5%AF%BC%E8%88%AA%E7%BB%84%E6%8B%9B%E6%96%B0%E4%BB%BB%E5%8A%A1/ros2/%E5%9F%BA%E7%A1%80)
- [ ] 视觉里程计
- [ ] 完整的机器人视觉slam的VO
- [ ] docker使用

## 学习记录：

| 日期  | 学习过程| 遇到问题| 解决过程 |
| ----- | ------ | ------------------------ | ----------------------------------- |
| 10.10 | 加入组织|||
| 10.11 | 安装[Ubuntu](https://ubuntu.com/download/desktop)| 出现掉帧，怀疑显卡驱动未安装好| 摆烂，明天再解决|
| 10.12 | 安装显卡驱动 <br />[知乎](https://zhuanlan.zhihu.com/p/308407850)| Ubuntu “附加驱动”中不能直接安装NVIDIA驱动| **1.** 尝试看网上教程安装驱动，用 ``Ubuntu-driver``安装了**NVIDIA的闭源驱动**，但仍然有掉帧 <br> **2.** 后来安装了开源的**X.Org**，流畅了许多，但不支持分数缩放（不能将DPI缩放到125%）**3.** 最终留在了**NVIDIA官方**（解决过程也比较坎坷，还要对驱动进行***签名***并添加到grub kernel以过[**Secure Boot**](https://support.microsoft.com/en-us/windows/windows-11-and-secure-boot-a8ff1202-c0d9-42f5-940f-843abef64fad "强迫症，为了应付微软……")）|
| 10.13 | 开始安装各种基本[软件](./AppList.md) <br>[icorgi&#39;s blog](https://www.icorgi.cn/2022/04/10/412.html)| ``raw.githubusercontent.com`` 出现443错误，说明被拒绝访问，不确定原因 | ``ping raw.githubusercontent.com``，发现全部被代理到 ``localhost``检查代理软件无问题，开始网上找[资料](https://www.icorgi.cn/2022/04/10/412.html) 运用 ``hosts``把域名强行代理到 ``185.199.108.133``(真实映射的IP)，怀疑此域名被GFW污染……|
| 10.14 | 学习基本[Markdown语法](https://markdown.com.cn)，撰写我的[软件列表](./AppList.md)|||
| 10.15 | 完善Ubuntu，学习Git|push日志的时候不小心push错了| 1. 找到一个第三方的微信（[wewechat++](https://gitee.com/spark-community-works-collections/wewechat-plus-plus))，以及国内的一个Debian软件商店（[spark-store](https://spark-app.store/)），有许多的国产软件可用。<br />2. push日志的时候不小心push错了，把旧的README push上去了，学习如何[回滚](https://blog.csdn.net/qq_40032778/article/details/127236410#:~:text=gitlab%E8%BF%9C%E7%A8%8B%E5%BA%93%E4%BB%A3%E7%A0%81%E7%89%88%E6%9C%AC%E5%9B%9E%E6%BB%9A%E6%96%B9%E6%B3%95%201%20git%20log%20%E6%9F%A5%E7%9C%8B%E6%8F%90%E4%BA%A4%E5%8E%86%E5%8F%B2%EF%BC%8C%E6%89%BE%E5%87%BA%E8%A6%81%E5%9B%9E%E6%BB%9A%E5%88%B0%E7%9A%84%20commit-%20id%202,--hard%20commit-id%20%3A%E5%9B%9E%E6%BB%9A%E5%88%B0commit-id%203%20git%20reset%20--hard%20HEAD~3%EF%BC%9A%E5%B0%86%E6%9C%80%E8%BF%913%E6%AC%A1%E7%9A%84%E6%8F%90%E4%BA%A4%E5%9B%9E%E6%BB%9A)（为保留记录，我用的是revert)。 |
| 10.16 | 开始尝试编写[基础任务](./cpp_task/base_robot.cpp)，<br /> 尝试在Windows上手CLion，Ubuntu继续使用[VS Code](./AppList.md)<br />[C++随机数（`rand`和 `srand`）函数用法详解](http://c.biancheng.net/view/1352.html "不理想的生成方式")<br />[如何优雅的用C++生成随机数](https://zhuanlan.zhihu.com/p/442008589 "更随机的随机数") | 用 ``rand()``和 ``srand()``所生成的随机数不够随机| 找到文章[如何优雅的用C++生成随机数](https://zhuanlan.zhihu.com/p/442008589 "更随机的随机数")。目前已成功生成较好的随机数|
| 10.17 | 继续编写[基础任务](./cpp_task/base_robot.cpp)，定义了 ``boom``和 ``ramdom``函数，方便调用。| 函数实参与形参类型不符||
| 10.18 | 完成C++基础任务，准备补充学习语法<br />准备重新安装Ubuntu 20.04，因为ROS Neotic不支持Ubuntu 22.04|| 误打误撞，靠吃点老本把基础任务做出来了|
| 10.19 | 继续完善C++基础任务|如果炸膛，如何让机器人再来一局|通过递归完成操作。
| 10.20 | 当天忙，要准备入党申请……|||
| 10.21 | 重新安装Ubuntu 20.04，重新完成基本环境搭建 |||
| 10.22 | 完善[cpp基础任务](./cpp_task/base_robot.cpp)，重构部分代码，使代码更模块化 || 定义robot结构体，方便扩展机器人个数，编写status函数用于结果输出，增强代码可扩展性？|
| 10.23 | 当天有英语考试，暂时休息 |
| 10.24 | 当天作业繁忙，暂时休息 |
| 10.25 | 学习C++指针的内容 | 还是挺复杂的，容易把逻辑搞混 | 实践出真知 |
| 10.26 | 初步接触ROS | | 听了些ROS的讲座，晚上回来计划学习一下基本理论。