# C++ 日志分析工具

一个使用 C++ 编写的命令行日志分析程序，可读取文本日志、统计日志级别，并按级别和关键词筛选日志行。

## 功能

- 读取用户指定的日志文件
- 统计日志总行数以及 INFO、WARNING、ERROR 数量
- 按日志级别筛选
- 按关键词筛选
- 同时使用级别和关键词筛选

输入 `*` 表示不限制对应的筛选条件。当前关键词匹配区分大小写。

## 编译和运行

在项目文件夹的终端中执行：

```powershell
g++ -std=c++17 main.cpp filter.cpp -o log_analyzer.exe
.\log_analyzer.exe
程序启动后依次输入日志文件名、级别和关键词:

sample.log
ERROR
*

