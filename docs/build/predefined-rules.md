---
title: Regole già definite
ms.date: 11/04/2016
helpviewer_keywords:
- rules, predefined
- NMAKE program, predefined rules
- predefined rules in NMAKE
ms.assetid: 638cdc3f-4aba-4b4f-96e3-ad65b0364f12
ms.openlocfilehash: b4b8ca7b0126ca42b2144aa094e7f766f6344b2a
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50609690"
---
# <a name="predefined-rules"></a>Regole già definite

Regole di inferenza predefinite usano le macro di comando e le opzioni fornite con NMAKE.

|Regola|Comando|Impostazione predefinita<br /><br /> action|Batch<br /><br /> Regola|Esecuzione di piattaforma nmake|
|----------|-------------|------------------------|--------------------|----------------------------|
|. asm.exe|$(AS) $(AFLAGS) $<|ml $<|No|x86|
|. asm.obj|$(AS) $(AFLAGS) /c $<|ml /c $<|sì|x86|
|. asm.exe|$(AS) $(AFLAGS) $<|ml64 $<|No|X64|
|. asm.obj|$(AS) $(AFLAGS) /c $<|ml64 /c $<|sì|X64|
|. c.exe|$(CC) $(CFLAGS) $<|cl $<|no|tutti|
|. c.obj|$(CC) $(CFLAGS) /c $<|cl /c $<|sì|tutti|
|. cc.exe|$(CC) $(CFLAGS) $<|cl $<|no|tutti|
|. cc.obj|$(CC) $(CFLAGS) /c $<|cl /c $<|sì|tutti|
|. cpp.exe|$(CPP) $(CPPFLAGS) $<|cl $<|no|tutti|
|. cpp.obj|$(CPP) $(CPPFLAGS) /c $<|cl /c $<|sì|tutti|
|. cxx.exe|$(CXX) $(CXXFLAGS) $<|cl $<|no|tutti|
|. cxx.obj|$(CXX) $(CXXFLAGS) /c $<|cl /c $<|sì|tutti|
|. rc.res|$(RC) $(RFLAGS) /r $<|rc /r $<|No|tutti|

## <a name="see-also"></a>Vedere anche

[Regole di inferenza](../build/inference-rules.md)