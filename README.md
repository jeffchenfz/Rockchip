# Rockchip
Uefi Rockchip Rk3399Pkg

## Download code
```  
$ git clone https://github.com/tianocore/edk2.git  
...  
$ git clone https://github.com/tianocore/edk2-platforms.git
...  
$ git clone https://github.com/tianocore/edk2-non-osi.git  
...  
$ git clone this Repositories to edk2-platforms/Platform/  
```

## Build firmware
build -a AARCH64 -t GCC48 -p OpenPlatformPkg/Platforms/Rockchip/Rk3399Pkg/Rk3399-SDK.dsc -b DEBUG

## Pack firmware
Rockchip/Rk3399Pkg/Tools/loaderimage --pack --uboot file_in file_out  
file_in: Build/Rk3399-SDK/DEBUG_GCC48/FV/RK3399_SDK_UEFI.fd  
file_out: the name of generated firmware

## Download firmware
After Pack firmware,use RK AndroidTool to download firmware,file_out instead of uboot.img.  
Need pick Loader,Parameter,U-boot(uefi firmware),Trust in the RK AndroidTool.
