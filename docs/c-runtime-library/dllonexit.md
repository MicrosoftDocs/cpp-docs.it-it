---
title: "__dllonexit | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "__dllonexit"
apilocation: 
  - "msvcrt.dll"
  - "msvcr110.dll"
  - "msvcr110_clr0400.dll"
  - "msvcr100.dll"
  - "msvcr80.dll"
  - "msvcr120.dll"
  - "msvcr90.dll"
  - "msvcr120_clr0400.dll"
apitype: "DLLExport"
f1_keywords: 
  - "__dllonexit"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "__dllonexit"
ms.assetid: 708f2ceb-f95c-46b0-a58d-d68b3fa36f12
caps.latest.revision: 4
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 4
---
# __dllonexit
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Registra una routine da chiamare in fase di uscita.  
  
## Sintassi  
  
```  
_onexit_t __dllonexit(  
   _onexit_t func,  
   _PVFV **  pbegin,   
   _PVFV **  pend   
   )  
```  
  
#### Parametri  
 `func`  
 Puntatore ad una funzione da eseguire al momento dell'uscita.  
  
 `pbegin`  
 Puntatore ad una variabile che punta all'inizio di un elenco di funzioni da eseguire alla disconnessione.  
  
 `pend`  
 Puntatore ad una variabile che punta alla fine di un elenco di funzioni da eseguire alla disconnessione.  
  
## Valore restituito  
 In caso di esito positivo, un puntatore alla funzione dell'utente.  In caso contrario, un puntatore null.  
  
## Note  
 La funzione `__dllonexit` è analoga alla funzione [\_onexit](../c-runtime-library/reference/onexit-onexit-m.md) tranne per il fatto che le variabili globali utilizzate dalla funzione non sono visibili a questa procedura.  Invece che variabili globali, questa funzione utilizza i parametri `pend` e `pbegin`.  
  
 Le funzioni `atexit` e `_onexit` in una DLL collegata con MSVCRT.LIB devono mantenere il proprio elenco di atexit\/\_onexit.  Questa procedura è il lavoratore che viene chiamato da tali DLL.  
  
 Il tipo `_PVFV` è definito come `typedef void (__cdecl *_PVFV)(void)`.  
  
## Requisiti  
  
|Routine|File necessario|  
|-------------|---------------------|  
|\_\_dllonexit|onexit.c|  
  
## Vedere anche  
 [\_onexit, \_onexit\_m](../c-runtime-library/reference/onexit-onexit-m.md)