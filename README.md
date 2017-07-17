# Rockchip
Uefi Rockchip Rk3399Pkg

## Download code
1.git clone git://git.linaro.org/uefi/linaro-edk2.git

2.add openplatformpkg to an existing edk2 checkout  
git submodule init  
git submodule update

3.git clone this Repositories to linaro-edk2/OpenPlatformPkg/Platforms/

## Build firmware
build -a AARCH64 -t GCC48 -p OpenPlatformPkg/Platforms/Rockchip/Rk3399Pkg/Rk3399-SDK.dsc -b DEBUG

## Pack firmware
Rockchip/Rk3399Pkg/Tools/loaderimage --pack --uboot file_in file_out  
file_in: Build/Rk3399-SDK/DEBUG_GCC48/FV/RK3399_SDK_UEFI.fd  
file_out: the name of generated firmware

## Download firmware    
After Pack firmware,use RK AndroidTool to download firmware,file_out instead of uboot.img  
Need pick Loader,Parameter,U-boot(uefi firmware),Trust in the RK AndroidTool
