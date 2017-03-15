---
title: "_amsg_exit | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_amsg_exit"
apilocation: 
  - "msvcrt.dll"
  - "msvcr80.dll"
  - "msvcr90.dll"
  - "msvcr100.dll"
  - "msvcr100_clr0400.dll"
  - "msvcr110.dll"
  - "msvcr110_clr0400.dll"
  - "msvcr120.dll"
  - "msvcr120_clr0400.dll"
  - "ucrtbase.dll"
apitype: "DLLExport"
f1_keywords: 
  - "_amsg_exit"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_amsg_exit"
ms.assetid: 146d4faf-d763-43a4-b264-12711196456b
caps.latest.revision: 2
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 2
---
# _amsg_exit
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Genera un determinato messaggio di errore di runtime e quindi chiude l'applicazione con il codice di errore 255.  
  
## Sintassi  
  
```cpp  
void _amsg_exit (  
   int rterrnum  
   )  
  
```  
  
#### Parametri  
 `rterrnum`  
 Il numero di identificazione di un messaggio di errore definito dal sistema di runtime.  
  
## Note  
 Questa funzione genera il messaggio di errore runtime a **stderr** per le applicazioni console, o visualizzare il messaggio in una finestra di messaggio per le applicazioni Windows.  In modalità di debug, è possibile invocare il debugger prima di uscire.  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|\_amsg\_exit|internal.h|