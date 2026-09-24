# 2026----电子信息工程----王彭麟----导航组2027考核题
exam1
{
1.cpp
 引入输入输出与算法头文件，main函数中定义整型数组，数组长度为10。调用 sort() 函数对数组做升序排序，循环遍历打印排序后的数组元素，完成输出后程序结束。
 2.cpp
 定义 Student 结构体，包含姓名、学号、成绩三个成员。 input 函数通过指针读取学生数据， display 函数通过指针打印学生信息。main里用new动态创建Student对象，调用函数完成输入、输出，再用delete释放堆内存，置空指针，防止内存泄漏。
 3.cpp
 定义 Car 类，私有成员为颜色、车牌号；公有部分有带参构造函数用于初始化私有属性、空析构函数、display成员函数输出车辆信息。main函数实例化两个Car对象，传入不同颜色与车牌参数，分别调用display打印车辆信息。
 }
 exam2
 {
 cd src          # 进入src文件夹
ls              # 列出当前目录文件，看到CMakeLists.txt、include、src等
cd src          # 再次进入内层src文件夹
ls              # 查看文件，找到源代码 daohang.cpp
g++ daohang.cpp -o daohang   # 编译：用g++编译器，把daohang.cpp源码编译成可执行文件daohang
./daohang       # 运行编译出来的程序
}
exam3
{
git 版本控制 找回历史版本 多人协作 本地仓库可上传至 远端仓库github

.gitignore   中输入.env保存在 本地不受git管理

main上创建特性分支feature不影响main线路，适合多人合作整合

从github远程仓库git clone或git fetch ＋git merge到工作区，修改完善后git add＋git commit ＋git push到github（需要管理员同意才能合并到main上）

 discard 的作用是放弃还没有commit的文件更改，只针对未提交的修改，不会影响已经提交的版本记录。
 
 reset 可以将仓库强制回退到某一个历史状态，适合单人使用、还没有推送到远端仓库的分支；它会改动原有提交历史，多人协作时不推荐使用。
 
 revert 会生成一条反向的新commit，用来抵消某次旧提交的改动。它不会修改过往提交记录，适合多人协作的分支，是团队协作里优先推荐的回退方式。
 
 总的来说，整个文件管理，版本控制是工作区，本地仓库（GitHub Desktop），GitHub远端仓库通过git的命令行实现文件管理
 }
 
