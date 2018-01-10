---
title: stdin, stdout, stderr | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- stdin
- stderr
- stdout
dev_langs: C++
helpviewer_keywords:
- stdout function
- standard output stream
- standard error stream
- stdin function
- standard input stream
- stderr function
ms.assetid: badd4735-596d-4498-857c-ec8b7e670e4c
caps.latest.revision: "6"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 7683a0ed1e40a0b65ea3a400c460dcd23ecef2d0
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
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