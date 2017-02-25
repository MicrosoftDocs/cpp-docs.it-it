---
title: "Regole gi&#224; definite | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ruoli, predefiniti"
  - "NMAKE (programma), regole predefinite"
  - "regole predefinite in NMAKE"
ms.assetid: 638cdc3f-4aba-4b4f-96e3-ad65b0364f12
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 9
---
# Regole gi&#224; definite
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Nelle regole di inferenza già definite vengono utilizzate le macro di comando e le macro di opzione fornite con NMAKE.  
  
|Regola|Comando|Valore<br /><br /> Azione|Batch<br /><br /> Regola|Piattaforma di esecuzione di nmake|  
|------------|-------------|-----------------------|----------------------|----------------------------------------|  
|.asm.exe|$\(AS\) $\(AFLAGS\) $\<|ml $\<|no|x86|  
|.asm.obj|$\(AS\) $\(AFLAGS\) \/c $\<|ml \/c $\<|sì|x86|  
|.asm.exe|$\(AS\) $\(AFLAGS\) $\<|ml64 $\<|no|[!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)]|  
|.asm.obj|$\(AS\) $\(AFLAGS\) \/c $\<|ml64 \/c $\<|sì|[!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)]|  
|.c.exe|$\(CC\) $\(CFLAGS\) $\<|cl $\<|no|Tutti|  
|.c.obj|$\(CC\) $\(CFLAGS\) \/c $\<|cl \/c $\<|sì|Tutti|  
|.cc.exe|$\(CC\) $\(CFLAGS\) $\<|cl $\<|no|Tutti|  
|.cc.obj|$\(CC\) $\(CFLAGS\) \/c $\<|cl \/c $\<|sì|Tutti|  
|.cpp.exe|$\(CPP\) $\(CPPFLAGS\) $\<|cl $\<|no|Tutti|  
|.cpp.obj|$\(CPP\) $\(CPPFLAGS\) \/c $\<|cl \/c $\<|sì|Tutti|  
|.cxx.exe|$\(CXX\) $\(CXXFLAGS\) $\<|cl $\<|no|Tutti|  
|.cxx.obj|$\(CXX\) $\(CXXFLAGS\) \/c $\<|cl \/c $\<|sì|Tutti|  
|.rc.res|$\(RC\) $\(RFLAGS\) \/r $\<|rc \/r $\<|no|Tutti|  
  
## Vedere anche  
 [Regole di inferenza](../build/inference-rules.md)