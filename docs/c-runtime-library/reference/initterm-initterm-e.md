---
title: "_initterm, _initterm_e | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_initterm_e"
  - "_initterm"
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
  - "api-ms-win-crt-runtime-l1-1-0.dll"
apitype: "DLLExport"
f1_keywords: 
  - "_initterm_e"
  - "initterm"
  - "_initterm"
  - "initterm_e"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "initterm (funzione)"
  - "initterm_e (funzione)"
  - "_initterm (funzione)"
  - "_initterm_e (funzione)"
ms.assetid: 85131efe-c747-429a-8897-bcdedb000172
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _initterm, _initterm_e
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Metodi interni che analizzano una tabella di puntatori a funzioni e li inizializzano.  
  
 Il primo puntatore è la posizione iniziale nella tabella e il secondo puntatore è la posizione finale.  
  
## Sintassi  
  
```  
void __cdecl _initterm(  
   PVFV *,  
   PVFV *  
);  
  
int __cdecl _initterm_e(  
   PVFV *,  
   PVFV *  
);  
```  
  
## Valore restituito  
 Un codice di errore diverso da zero se un'inizializzazione ha esito negativo e genera un errore; 0 se non si verificano errori.  
  
## Note  
 Questi metodi vengono chiamati solo internamente durante l'inizializzazione di un programma C\+\+.  Non chiamare questi metodi in un programma.  
  
 Quando questi metodi analizzano una tabella di voci rappresentate da funzioni, essi ignorano le voci `NULL` e continuano.  
  
## Vedere anche  
 [Riferimento alfabetico alle funzioni](../../c-runtime-library/reference/crt-alphabetical-function-reference.md)