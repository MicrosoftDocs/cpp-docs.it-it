---
title: Parole riservate | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
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
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: abe67e1804d436dbd44257f6d7670a71b7f74889
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
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
|**DESCRIZIONE**|**MOBILE**1|**READWRITE**|  
|**DEV386**|**MOVEABLE**1|**REALMODE**1|  
|**SCARICABILE**|**PIÙ**|**RESIDENTE**|  
|**DINAMICA**|**NOME**|**RESIDENTNAME**1|  
|**SOLA ESECUZIONE**|**NEWFILES**2|**NELLE SEZIONI**|  
|**EXECUTEONLY**|**NODATA**1|**SEGMENTI**|  
|**ESECUZIONESCRITTURA**|**NOIOPL**1|**CONDIVISO**|  
|**EXETYPE**|**NONAME**|**SINGOLO**|  
|**EXPORTS**|**NON CONFORME**1|**STACKSIZE**|  
|**FISSO**1|**NONDISCARDABLE**|**STUB**|  
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