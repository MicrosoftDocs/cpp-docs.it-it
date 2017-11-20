---
title: Mapping di costanti e variabili globali | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- _tenviron
- _TEOF
- _tfinddata_t
dev_langs: C++
helpviewer_keywords:
- tfinddatat function
- tenviron function
- TEOF type
- _TEOF type
- generic-text mappings
- _tenviron function
- _tfinddata_t function
ms.assetid: 3af4fd3e-9ed5-4ed9-96fd-7031e5126fd1
caps.latest.revision: "7"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: 55c388ddddb5fd774afb6c4e84d6a96a4c38bebe
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="constant-and-global-variable-mappings"></a>Mapping costanti e variabili globali
Il mapping di tipo standard di queste costanti di testo generico e variabili globali viene definito in TCHAR.H e varia a seconda che nel programma sia stata definita la costante `_UNICODE` o `_MBCS`.  
  
### <a name="generic-text-constant-and-global-variable-mappings"></a>Mapping di costanti di testo generico e variabili globali  
  
|Testo generico: nome dell'oggetto|SBCS (_UNICODE, _MBCS non definiti)|_MBCS definito|_UNICODE definito|  
|----------------------------------|--------------------------------------------|--------------------|-----------------------|  
|`_TEOF`|`EOF`|`EOF`|`WEOF`|  
|`_tenviron`|`_environ`|`_environ`|`_wenviron`|  
|`_tpgmptr`|`_pgmptr`|`_pgmptr`|`_wpgmptr`|  
  
## <a name="see-also"></a>Vedere anche  
 [Mapping testo generico](../c-runtime-library/generic-text-mappings.md)   
 [Data Type Mappings](../c-runtime-library/data-type-mappings.md)  (Mapping dei tipi di dati)  
 [Routine Mappings](../c-runtime-library/routine-mappings.md)  (Mapping di routine)  
 [A Sample Generic-Text Program](../c-runtime-library/a-sample-generic-text-program.md)  (Programma di testo generico di esempio)  
 [Using Generic-Text Mappings](../c-runtime-library/using-generic-text-mappings.md) (Uso di mapping di testo generico)