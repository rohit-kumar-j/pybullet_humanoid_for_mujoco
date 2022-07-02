# pybullet_humanoid_for_mujoco
pybullet humanoid translated to mujoco

Pybullet humanoid: [humanoid.urdf](https://github.com/bulletphysics/bullet3/blob/master/examples/pybullet/gym/pybullet_data/humanoid/humanoid.urdf)

Mujoco humanoid: [huamnoid.xml](https://github.com/deepmind/mujoco/blob/main/model/humanoid/humanoid.xml)

Translated via mujoco's compile.cc and then manually processed.


| Original mujoco humanoid | In pybllet | from compile.cc | final (scaled down by 3.75, and re-oriented)
|:----------:|:--------:|:--------:|:----------:|
![](https://user-images.githubusercontent.com/37873142/176991321-333227b0-3e1d-4df2-8158-3af725c76bc5.png) | ![](https://user-images.githubusercontent.com/37873142/176991105-ca260653-c5c9-408f-bcda-6eee0afff5f7.png)  | ![](https://user-images.githubusercontent.com/37873142/176991023-e3870b4f-7675-4a94-88cb-7b4a5a67b2cc.png) | ![](https://user-images.githubusercontent.com/37873142/176991068-6f87392c-0d23-4e42-a924-45aa26dd43d7.png)




