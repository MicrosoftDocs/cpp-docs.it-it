---
title: "stdin, stdout, stderr | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "stdin"
  - "stderr"
  - "stdout"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "flusso di errore standard"
  - "flusso di input standard"
  - "flusso di output standard"
  - "stderr (funzione)"
  - "stdin (funzione)"
  - "stdout (funzione)"
ms.assetid: badd4735-596d-4498-857c-ec8b7e670e4c
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 6
---
# stdin, stdout, stderr
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

## Sintassi  
  
```  
  
      FILE *stdin;   
FILE *stdout;   
FILE *stderr;   
#include <stdio.h>  
```  
  
## Note  
 Questi sono flussi standard per input e output, e per l'output di errore.  
  
 Per impostazione predefinita, l'input standard viene letto dalla tastiera, mentre l'output standard e l'errore standard sono visualizzati sullo schermo.  
  
 I seguenti puntatori di flusso sono disponibili per accedere ai flussi standard:  
  
|Puntatore|Stream|  
|---------------|------------|  
|`stdin`|Input standard|  
|**stdout**|Output standard|  
|`stderr`|Errore standard|  
  
 Questi puntatori possono essere utilizzati come argomenti alle funzioni.  Alcune funzioni, ad esempio **getchar** e `putchar`, utilizzano automaticamente `stdin` e **stdout**.  
  
 Questi puntatori sono costanti e non è possibile assegnare nuovi valori.  La funzione di `freopen` può essere utilizzata per reindirizzare i flussi ai file su disco o altri dispositivi.  Il sistema operativo consente di reindirizzare a uno standard input dei programmi e a un output a livello di comandi.  
  
## Vedere anche  
 [I\/O di flusso](../c-runtime-library/stream-i-o.md)   
 [Costanti globali](../c-runtime-library/global-constants.md)