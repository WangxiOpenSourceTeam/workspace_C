## 关于git push出现 The requested URL returned error: 403的解决办法
**出现原因:** 主要是所要上传的项目是私人项目
原本的配置项(.git/config)
```yaml
[core]
	repositoryformatversion = 0
	filemode = false
	bare = false
	logallrefupdates = true
	ignorecase = true
[remote "origin"]
	url = https://github.com/WangxiOpenSourceTeam/workspace_C.git
	fetch = +refs/heads/*:refs/remotes/origin/*
[branch "master"]
	remote = origin
	merge = refs/heads/master
[branch "update"]
	remote = origin
	merge = refs/heads/update

```
但是由于该项目为私人项目所以url构建需要更改
```yaml
url = https://WangxiOpenSourceTeam@github.com/WangxiOpenSourceTeam/workspace_C.git
```
之后保存再重新push即可