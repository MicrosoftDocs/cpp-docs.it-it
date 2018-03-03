---
title: Parole riservate | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- code
- CONFORMING
- DISCARDABLE
- Description
- base
- APPLOADER
- Data
- DYNAMIC
- DEV386
dev_langs:
- C++
helpviewer_keywords:
- .def files [C++], reserved words
- def files [C++], reserved words
- linker [C++], reserved words
- reserved words [C++]
ms.assetid: 9b9f49e5-0739-45ab-a37e-81e3915ceb25
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 35f9a3e907b72b4b8cf8e673e771832ba3fc0527
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="reserved-words"></a>Parole riservate
Le parole seguenti sono riservate dal linker. Questi nomi possono essere utilizzati come argomenti nelle [istruzioni di definizione moduli](../../build/reference/module-definition-dot-def-files.md) solo se il nome è racchiuso tra virgolette doppie ("").  
  
||||  
|-|-|-|  
|**APPLOADER**1|**INITINSTANCE**2|**PRECARICAMENTO**|  
|**BASE**|**IOPL**|**PRIVATO**|  
|**CODICE**|**LIBRERIA**1|**PROTMODE**2|  
|**CONFORME**|**LOADONCALL**1|**PURE**1|  
|**DATI**|**LONGNAMES**2|**SOLA LETTURA**|  
|**DESCRIZIONE**|**MOBILE**1|**LETTURA/SCRITTURA**|  
|**DEV386**|**MOVEABLE**1|**REALMODE**1|  
|**SCARICABILE**|**PIÙ**|**RESIDENTE**|  
|**DINAMICA**|**NOME**|**RESIDENTNAME**1|  
|**SOLA ESECUZIONE**|**NEWFILES**2|**NELLE SEZIONI**|  
|**EXECUTEONLY**|**NODATA**1|**SEGMENTI**|  
|**ESECUZIONESCRITTURA**|**NOIOPL**1|**CONDIVISO**|  
|**EXETYPE**|**NONAME**|**SINGOLO**|  
|**EXPORTS**|**NON CONFORME**1|**STACKSIZE**|  
|**PREDEFINITO**1|**NONDISCARDABLE**|**STUB**|  
|**FUNZIONI**2|**NESSUNO**|**VERSIONE**|  
|**HEAPSIZE**|**NON CONDIVISI**|**WINDOWAPI**|  
|**IMPORTAZIONI**|**NOTWINDOWCOMPAT**1|**WINDOWCOMPAT**|  
|**PURE**1|**OGGETTI**|**WINDOWS**|  
|**INCLUDERE**2|**VECCHIO**1||  
  
 1. il linker genera un avviso ("ignorato") quando rileva il termine. Tuttavia, la parola è ancora riservata.  
  
 2. il linker ignora questa parola ma viene generato alcun avviso.  
  
## <a name="see-also"></a>Vedere anche  
 [Impostazione delle opzioni del Linker](../../build/reference/setting-linker-options.md)   
 [Opzioni del linker](../../build/reference/linker-options.md)