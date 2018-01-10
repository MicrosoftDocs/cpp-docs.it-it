---
title: Opzioni di LINK controllate dal compilatore | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: link
dev_langs: C++
helpviewer_keywords:
- LINK tool [C++], compiler-controlled options
- linker [C++], CL compiler control
- linking [C++], affected by CL features
- cl.exe compiler [C++], features that affect linking
- cl.exe compiler [C++], controlling linker
ms.assetid: e4c03896-c99c-4599-8502-e0f4bebe69d0
caps.latest.revision: "8"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: cc899fc7f1fc8c1805648e72e14ef13853841c90
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-controlled-link-options"></a>Compiler-Controlled LINK Options
Il compilatore CL chiama automaticamente i collegamenti a meno che non si specifica l'opzione/c. CL consente di controllare il linker attraverso le opzioni della riga di comando e gli argomenti. Nella tabella seguente sono riepilogate le funzionalità CL che hanno effetto sul collegamento.  
  
|Specifica CL|Azione CL che influisce sul collegamento|  
|----------------------|---------------------------------|  
|Qualsiasi estensione di file diverso da c, cxx, cpp o. def|Passa un nome di file come input di collegamento|  
|*nome del file*. def|Passa /DEF:*filename*. def|  
|/F*numero*|Passa /STACK:*numero*|  
|/FD*filename*|Passa /PDB:*filename*|  
|/FE*filename*|Passa /out:*filename*|  
|/FM*filename*|Passa /MAP:*filename*|  
|/Gy|Crea funzioni incluse nel pacchetto (COMDAT). consente il collegamento a livello di funzione|  
|/LD|Passa /DLL|  
|/LDd|Passa /DLL|  
|/link|Passa resto della riga di comando a LINK|  
|/MD o /MT|Inserisce un nome della libreria predefinita nel file con estensione obj|  
|/MDd o /MTd|Inserisce un nome della libreria predefinita nel file con estensione obj. Definisce il simbolo **debug**|  
|/nologo|Passa /NOLOGO|  
|/Zd|Passa /DEBUG|  
|/Zi o /Z7|Passa /DEBUG|  
|/Zl|Omette il nome della libreria predefinita dal file obj|  
  
 Per altre informazioni, vedere [Opzioni del compilatore](../../build/reference/compiler-options.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Impostazione delle opzioni del Linker](../../build/reference/setting-linker-options.md)   
 [Opzioni del linker](../../build/reference/linker-options.md)