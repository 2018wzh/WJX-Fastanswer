@echo off
title applybackup
echo 应用备份文件?（回车执行 退出按X）
pause
if not exist backupfile-do-not-open-or-delete goto nofile
applybkup.exe -key -SGREBGFDTHGFDGVDDGHYMKKHGDDSCVHGFDDSFGHTRRBNNHGDFGHTHGFHSFGHJGFJHGFXNGFXHNTFHNJTFRHAHZRETHATRYTRUHJHFGDJGAGHFHBVNHGNHJYSJGHGDFHDAGFGRYGATREHTGHJFYJFHGJHHGFGHJGFHJYJSRHSGFSHFGBNGNHGMNSHMJSJNHGFSJSYTRJHSTRYJHSYTRJTFGJ ljlvink<backupfile-do-not-open-or-delete
goto ext
:nofile
echo 没有检测到备份文件，请先执行make再执行此文件
echo 正在退出................
pause
goto ext
:ext

exit
