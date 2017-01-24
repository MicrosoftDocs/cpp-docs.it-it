---
title: "_setjmp3 | Microsoft Docs"
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
  - "_setjmp3"
apilocation: 
  - "msvcrt.dll"
  - "msvcr90.dll"
  - "msvcr110.dll"
  - "msvcr80.dll"
  - "msvcr110_clr0400.dll"
  - "msvcr100.dll"
  - "msvcr120.dll"
apitype: "DLLExport"
f1_keywords: 
  - "setjmp3"
  - "_setjmp3"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_setjmp3 (funzione)"
  - "setjmp3 (funzione)"
ms.assetid: 6129c2f3-8bac-4fdb-a827-44e1eebba500
caps.latest.revision: 6
caps.handback.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _setjmp3
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Funzione CRT interna.  Nuova implementazione della funzione `setjmp`.  
  
## Sintassi  
  
```  
int _setjmp3(    OUT jmp_buf env,    int count,    (optional parameters) );  
```  
  
#### Parametri  
 \[out\] `env`  
 Indirizzo del buffer per l'archiviazione di informazioni sullo stato.  
  
 \[in\] `count`  
 Numero di `DWORD` aggiuntivi di informazioni archiviati in `optional parameters`.  
  
 \[in\] `optional parameters`  
 Dati aggiuntivi propagati da `setjmp` intrinseco.  Il primo `DWORD` è un puntatore a funzione usato per rimuovere i dati in eccesso e tornare a uno stato di registro non volatile.  Il secondo `DWORD` è il livello Try da ripristinare.  Eventuali altri dati sono salvati nella matrice di dati generica in `jmp_buf`.  
  
## Valore restituito  
 Restituisce sempre 0.  
  
## Note  
 Non usare questa funzione in un programma C\+\+.  Si tratta di una funzione intrinseca che non supporta C\+\+.  Per altre informazioni sull'uso di `setjmp`, vedere [Utilizzo di setjmp\/longjmp](../cpp/using-setjmp-longjmp.md).  
  
## Requisiti  
  
## Vedere anche  
 [Riferimento alfabetico alle funzioni](../c-runtime-library/reference/crt-alphabetical-function-reference.md)   
 [setjmp](../c-runtime-library/reference/setjmp.md)