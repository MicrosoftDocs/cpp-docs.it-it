---
title: Regole predefinite | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- rules, predefined
- NMAKE program, predefined rules
- predefined rules in NMAKE
ms.assetid: 638cdc3f-4aba-4b4f-96e3-ad65b0364f12
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: d0a21847bb9363099fa64825b45a90003de053da
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32369760"
---
# <a name="predefined-rules"></a>Regole già definite
Regole di inferenza predefinite utilizzano le macro di comando e le opzioni fornite con NMAKE.  
  
|Regola|Comando|Impostazione predefinita<br /><br /> action|Batch<br /><br /> Regola|Esecuzione di nmake piattaforma|  
|----------|-------------|------------------------|--------------------|----------------------------|  
|. asm.exe|$(AS) $(AFLAGS) $<|ml $<|No|x86|  
|. asm.obj|$(AS) $(AFLAGS) /c $<|ml /c $<|sì|x86|  
|. asm.exe|$(AS) $(AFLAGS) $<|ml64 $<|No|[!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)]|  
|. asm.obj|$(AS) $(AFLAGS) /c $<|ml64 /c $<|sì|[!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)]|  
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