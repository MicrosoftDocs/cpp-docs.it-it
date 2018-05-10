---
title: stdin, stdout, stderr | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: conceptual
f1_keywords:
- stdin
- stderr
- stdout
dev_langs:
- C++
helpviewer_keywords:
- stdout function
- standard output stream
- standard error stream
- stdin function
- standard input stream
- stderr function
ms.assetid: badd4735-596d-4498-857c-ec8b7e670e4c
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 0f6226a6e38326a39ce2921e2a0d6219d01f005b
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="stdin-stdout-stderr"></a>stdin, stdout, stderr
## <a name="syntax"></a>Sintassi  
  
```  
  
      FILE *stdin;   
FILE *stdout;   
FILE *stderr;   
#include <stdio.h>  
```  
  
## <a name="remarks"></a>Note  
 Questi sono flussi standard per input, output e output di errore.  
  
 Per impostazione predefinita, l'input standard viene letto dalla tastiera, mentre l'output standard e l'errore standard sono visualizzati sullo schermo.  
  
 I seguenti puntatori di flusso sono disponibili per accedere ai flussi standard:  
  
|Puntatore|Flusso|  
|-------------|------------|  
|`stdin`|Input standard|  
|**stdout**|Output standard|  
|`stderr`|Errore standard|  
  
 Questi puntatori possono essere utilizzati come argomenti alle funzioni. Alcune funzioni, ad esempio **getchar** e `putchar`, usano `stdin` e **stdout** automaticamente.  
  
 Questi puntatori sono costanti e non è possibile assegnare nuovi valori. La funzione `freopen` può essere utilizzata per reindirizzare i flussi ai file su disco o altri dispositivi. Il sistema operativo consente di reindirizzare un input e output standard di programma a livello di comandi.  
  
## <a name="see-also"></a>Vedere anche  
 [I/O di flusso](../c-runtime-library/stream-i-o.md)   
 [Costanti globali](../c-runtime-library/global-constants.md)