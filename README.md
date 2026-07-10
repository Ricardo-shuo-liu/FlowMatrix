# FlowMatrix

FlowMatrx通过conda进行环境管理

你可以通过以下方式来构建环境
```
conda create -n flowmatrix python=3.10

conda install -c conda-forge gcc_linux-64 gxx_linux-64

conda install -c conda-forge armadillo openblas lapack

conda install -c conda-forge gtest glog


```

当然,你也可以直接使用`flowmatrix.yml`文件实现构建环境

```
conda env create -f flowmatrix.yml
```
当然环境管理不一定是你必须要的

你也可以通过`sudo apt install`相关的内容 但是要确保不和本地的其他项目或者程序冲突
