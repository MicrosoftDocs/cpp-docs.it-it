---
title: "_acmdln, _tcmdln, _wcmdln | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_wcmdln"
  - "_acmdln"
apilocation: 
  - "msvcrt.dll"
apitype: "DLLExport"
f1_keywords: 
  - "_acmdln"
  - "acmdln"
  - "_wcmdln"
  - "wcmdln"
  - "_tcmdln"
  - "tcmdln"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_acmdln (variabile globale)"
  - "_tcmdln (variabile globale)"
  - "_wcmdln (variabile globale)"
  - "acmdln (variabile globale)"
  - "tcmdln (variabile globale)"
  - "wcmdln (variabile globale)"
ms.assetid: 4fc0a6a0-3f93-420a-a19f-5276061ba539
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# _acmdln, _tcmdln, _wcmdln
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Variabile globale CRT interna.  Riga di comando  
  
## Sintassi  
  
```  
char * _acmdln; wchar_t * _wcmdln;  #ifdef WPRFLAG    #define _tcmdln _wcmdln #else    #define _tcmdln _acmdln  
```  
  
## Note  
 Nelle variabili CRT interne viene archiviata l'intera riga di comando.  Sono esposte nei simboli esportati per CRT, ma non sono progettate per l'uso nel codice.  `_acmdln` archivia i dati come stringa di caratteri.  `_wcmdln` archivia i dati come stringa di caratteri wide.  `_tcmdln` può essere definita come `_acmdln` o  `_wcmdln`, a seconda del tipo più appropriato.  
  
## Vedere anche  
 [Variabili globali](../c-runtime-library/global-variables.md)