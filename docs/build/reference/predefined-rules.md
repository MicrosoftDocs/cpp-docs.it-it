---
description: 'Altre informazioni su: regole predefinite'
title: Regole già definite
ms.date: 11/04/2016
helpviewer_keywords:
- rules, predefined
- NMAKE program, predefined rules
- predefined rules in NMAKE
ms.assetid: 638cdc3f-4aba-4b4f-96e3-ad65b0364f12
ms.openlocfilehash: 302c649980050764d1bb2f0e9a43b785d0175a09
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97225830"
---
# <a name="predefined-rules"></a>Regole già definite

Le regole di inferenza predefinite utilizzano le macro di comando e opzioni fornite da NMAKE.

|Regola|Comando|Predefinito<br /><br /> action|Batch<br /><br /> Regola|Platform NMAKE viene eseguito in|
|----------|-------------|------------------------|--------------------|----------------------------|
|.asm.exe|$ (AS) $ (AFLAGS) $<|ml $<|No|x86|
|. asm. obj|$ (AS) $ (AFLAGS)/c $<|ml/c $<|sì|x86|
|.asm.exe|$ (AS) $ (AFLAGS) $<|ml64 $<|No|x64|
|. asm. obj|$ (AS) $ (AFLAGS)/c $<|ml64/c $<|sì|x64|
|.c.exe|$ (CC) $ (CFLAGS) $<|CL $<|No|all|
|. c. obj|$ (CC) $ (CFLAGS)/c $<|cl/c $<|sì|all|
|.cc.exe|$ (CC) $ (CFLAGS) $<|CL $<|No|all|
|. CC. obj|$ (CC) $ (CFLAGS)/c $<|cl/c $<|sì|all|
|.cpp.exe|$ (CPP) $ (CPPFLAGS) $<|CL $<|No|all|
|. cpp. obj|$ (CPP) $ (CPPFLAGS)/c $<|cl/c $<|sì|all|
|.cxx.exe|$ (CXX) $ (CXXFLAGS) $<|CL $<|No|all|
|. cxx. obj|$ (CXX) $ (CXXFLAGS)/c $<|cl/c $<|sì|all|
|. RC. res|$ (RC) $ (RFLAGS)/r $<|RC/r $<|No|all|

## <a name="see-also"></a>Vedi anche

[Regole di inferenza](inference-rules.md)
