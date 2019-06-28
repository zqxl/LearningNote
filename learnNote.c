// 保存成.c文件有助于在使用notepad++时有格式
/*
本地操作
*/
git init  	创建版本库

git status 	查看状态
git diff 	可以查看修改内容
git reset --hard commit_id		版本回退
git log		可以查看提交历史
git reflog	查看命令历史

git checkout -- file			丢弃工作区的修改（已修改文件，但未add时）
git reset HEAD <file>			丢弃暂存区的修改（已add,但未commit时。执行了此命令行工作区的修改仍然存在，故可使用上条命令再将工作区修改丢弃）
git reset --hard commit_id		版本回退（已经commit时。）

git rm file						删除文件（工作区删除了file后）
git checkout -- file			从版本库里恢复这个文件
	
/*
远程仓库
*/
在github上创建一个 repository 后
git remote add origin git@github.com:xxxxxxxx/xxxx.git		关联远程库
git push -u origin master									推送到远程，同时关联本地master和远程master(以后的push和pull就简化了)

/*
分支管理
*/
查看分支：				git branch
创建分支：				git branch <name>
切换分支：				git checkout <name>
创建+切换分支：			git checkout -b <name>
合并某分支到当前分支：	git merge <name>
删除分支：				git branch -d <name>





测试冲突tese