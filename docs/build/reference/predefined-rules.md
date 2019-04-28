---
title: Regole già definite
ms.date: 11/04/2016
helpviewer_keywords:
- rules, predefined
- NMAKE program, predefined rules
- predefined rules in NMAKE
ms.assetid: 638cdc3f-4aba-4b4f-96e3-ad65b0364f12
ms.openlocfilehash: 7a922a239306f10121791caa8f9f088cea88c019
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62319447"
---
# <a name="predefined-rules"></a>Regole già definite

Regole di inferenza predefinite usano le macro di comando e le opzioni fornite con NMAKE.

|Regola|Comando|Impostazione predefinita<br /><br /> action|Batch<br /><br /> Regola|Esecuzione di piattaforma nmake|
|----------|-------------|------------------------|--------------------|----------------------------|
|.asm.exe|$(AS) $(AFLAGS) $<|Machine Learning $<|No|x86|
|.asm.obj|$(AS) $(AFLAGS) /c $<|ml /c $<|sì|x86|
|.asm.exe|$(AS) $(AFLAGS) $<|$ ml64 <|No|X64|
|.asm.obj|$(AS) $(AFLAGS) /c $<|ml64 /c $<|sì|X64|
|.c.exe|$(CC) $(CFLAGS) $<|$ CL <|No|tutti|
|.c.obj|$(CC) $(CFLAGS) /c $<|cl /c $<|sì|tutti|
|.cc.exe|$(CC) $(CFLAGS) $<|$ CL <|No|tutti|
|.cc.obj|$(CC) $(CFLAGS) /c $<|cl /c $<|sì|tutti|
|.cpp.exe|$(CPP) $(CPPFLAGS) $<|$ CL <|No|tutti|
|.cpp.obj|$(CPP) $(CPPFLAGS) /c $<|cl /c $<|sì|tutti|
|.cxx.exe|$(CXX) $(CXXFLAGS) $<|$ CL <|No|tutti|
|.cxx.obj|$(CXX) $(CXXFLAGS) /c $<|cl /c $<|sì|tutti|
|.rc.res|$(RC) $(RFLAGS) /r $<|rc /r $<|No|tutti|

## <a name="see-also"></a>Vedere anche

[Regole di inferenza](inference-rules.md)
