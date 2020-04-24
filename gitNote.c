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

git merge --no-ff -m "merge with no-ff" dev					合并分支时保留分支信息

git stash				暂存工作现场
git stash list 			查看保存的工作现场
git stash pop			恢复工作现场

git remote -v 												查看远程库信息，使用；
															本地新建的分支如果不推送到远程，对其他人就是不可见的；
git push origin branch-name									本地推送分支，使用，如果推送失败，先用git pull抓取远程的新提交；
git checkout -b branch-name origin/branch-name				本地创建和远程分支对应的分支，使用，本地和远程分支的名称最好一致；
git branch --set-upstream branch-name origin/branch-name	建立本地分支和远程分支的关联

/*
标签管理
*/
git tag <tagname>						用于新建一个标签，默认为HEAD，也可以指定一个commit id；
git tag -a <tagname> -m "blabl..."		可以指定标签信息；
git tag									可以查看所有标签。

git push origin <tagname>				可以推送一个本地标签；
git push origin --tags					可以推送全部未推送过的本地标签；
git tag -d <tagname>					可以删除一个本地标签；
git push origin :refs/tags/<tagname>	可以删除一个远程标签。


我也测试stash命令

测试stash

2020年4月24日10:48:09
