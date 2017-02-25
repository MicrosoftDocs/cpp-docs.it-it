---
title: "_get_doserrno | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_get_doserrno"
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
  - "_get_doserrno"
  - "get_doserrno"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_get_doserrno (funzione)"
  - "get_doserrno (funzione)"
ms.assetid: 7fec7be3-6e39-4181-846b-8ef24489361c
caps.latest.revision: 19
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 19
---
# _get_doserrno
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Recupera il valore di errore restituito dal sistema operativo prima che venga convertito in un valore `errno`.  
  
## Sintassi  
  
```  
errno_t _get_doserrno(     int * pValue  );   
```  
  
#### Parametri  
 \[out\] `pValue`  
 Un puntatore a un valore integer che deve essere compilato con il valore corrente della macro globale `_doserrno`.  
  
## Valore restituito  
 Se `_get_doserrno` ha esito positivo, restituisce zero; in caso contrario, restituisce un codice di errore.  Se `pValue` è `NULL`, verrà richiamato il gestore di parametro non valido, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md).  Se l'esecuzione può continuare, la funzione imposta `errno` su`EINVAL` e restituisce `EINVAL`.  
  
## Note  
 La macro globale `_doserrno` è impostata su zero durante l'inizializzazione CRT, prima dell'inizio dell'esecuzione del processo.  È impostata sul valore di errore del sistema operativo restituito da qualsiasi chiamata di funzione a livello del sistema che restituisce un errore del sistema operativo e non viene mai reimpostata su zero durante l'esecuzione.  Quando si scrive il codice per il controllo del valore di errore restituito da una funzione, deselezionare sempre `_doserrno` usando [\_set\_doserrno](../../c-runtime-library/reference/set-doserrno.md) prima della chiamata di funzione.  Poiché un'altra chiamata di funzione potrebbe sovrascrivere `_doserrno`, verificare il valore usando `_get_doserrno` immediatamente dopo la chiamata di funzione.  
  
 È consigliabile usare [\_get\_errno](../../c-runtime-library/reference/get-errno.md) invece di `_get_doserrno` per i codici di errore portabili.  
  
 I valori possibili di `_doserrno` sono definiti in \<errno.h\>.  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|Intestazione facoltativa|  
|-------------|-------------------------------|------------------------------|  
|`_get_doserrno`|\<stdlib.h\>, \<cstdlib\> \(C\+\+\)|\<errno.h\>, \<cerrno\> \(C\+\+\)|  
  
 `_get_doserrno` è un'estensione Microsoft.  Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## Vedere anche  
 [\_set\_doserrno](../../c-runtime-library/reference/set-doserrno.md)   
 [errno, \_doserrno, \_sys\_errlist, and \_sys\_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md)