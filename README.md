
# Ray Tracing Two

这是一个使用 C++ 编写的进阶光线追踪渲染器，支持运动模糊、BVH 加速结构、纹理贴图、Perlin 噪声、体积渲染等更高级的功能。

## 🌟 功能特性
✨ 新特性
- ✅ 运动模糊（Motion Blur）：真实模拟移动物体的模糊效果
- ✅ BVH 包围体层次结构（Bounding Volume Hierarchies）：加速复杂场景下的光线-物体相交计算，速度性能可实现数量级的提升
- ✅ 纹理贴图（Texture Mapping）：支持将图像贴图映射到球体或其他物体上
- ✅ Perlin 噪声（Perlin Noise）：用于生成自然的纹理，如大理石、云朵等
- ✅ 光源（Lights）：增加光源模型以支持更真实的光照
- ✅ 变换（Transforms）：支持物体的平移、缩放、旋转
- ✅ 体积渲染（Volumetric Rendering）：模拟烟雾、雾气等气体体积
- ✅ 四边形（Quadrilaterals）：除球体外引入更多基本图元，为后续扩展（如三角形、圆盘）打下基础

## 🖼️ 效果展示

<img src="images/img-final.jpg">

## 🛠 编译与运行

### 依赖

- C++11 或更高版本编译器
- 支持 `make` 或 `g++`

### make编译

```bash
mkdir build
cd build
cmake ..
make
```

### 运行

```bash
./bin/rayTracer > output.ppm
```
### g++编译

```bash
g++ -g main.cpp -o main.exe
```
### 运行

```bash
.\main.exe > output.ppm
```

你可以使用 ImageMagick 或 Photoshop 等工具查看 `.ppm` 图片。

---

## 🧮 文件结构

```
ray-tracing/
├── main.cpp           # 主程序入口
├── camera.h           # 相机类（支持景深）
├── ray.h              # 光线类
├── hittable.h         # 可被击中的物体接口
├── hittable_list.h    # 可被击中的物体列表
├── aabb.h             # 包围盒类（用于 BVH 加速）
├── bvh.h              # 包围体层次结构 BVH 实现
├── color.h            # 颜色接口
├── sphere.h           # 球体实现
├── material.h         # 材质实现（漫反射、金属等）
├── interval.h         # 工具函数
├── vec3.h             # 工具函数
├── texture.h          # 纹理类，支持图像、噪声纹理
├── rtweekend.h        # 工具函数
├── constant_medium.h  # 体积渲染
├── quad.h             # 四边形实现
├── perlin.h           # 噪声实现
├── examples           # 输出文件夹
|    ── output.ppm     # 渲染输出图像（运行后生成）
└── README.md          # 项目说明文件
```

---

## 📚 参考资料

- [Ray Tracing in One Weekend](https://raytracing.github.io/)
- [Ray Tracing: The Next Week](https://raytracing.github.io/)

---

## 📄 License

本项目遵循 MIT 开源许可协议，欢迎学习与扩展。
