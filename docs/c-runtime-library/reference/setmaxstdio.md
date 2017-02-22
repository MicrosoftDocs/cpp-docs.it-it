---
title: "_setmaxstdio | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_setmaxstdio"
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
  - "api-ms-win-crt-stdio-l1-1-0.dll"
apitype: "DLLExport"
f1_keywords: 
  - "setmaxstdio"
  - "_setmaxstdio"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_setmaxstdio (funzione)"
  - "numero massimo di file aperti"
  - "file aperti, numero massimo"
  - "setmaxstdio (funzione)"
ms.assetid: 9e966875-9ff5-47c4-9b5f-e79e83b70249
caps.latest.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 12
---
# _setmaxstdio
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Imposta un massimo per il numero dei file aperti contemporaneamente a livello di `stdio`.  
  
## Sintassi  
  
```  
int _setmaxstdio(  
   int newmax   
);  
```  
  
#### Parametri  
 `newmax`  
 Nuovo massimo per il numero dei file aperti contemporaneamente a livello di `stdio`.  
  
## Valore restituito  
 Restituisce `newmax` se l'operazione viene completata correttamente; \-1 in caso contrario.  
  
 Se `newmax` è minore o maggiore di `_IOB_ENTRIES` quindi il numero massimo di handle disponibili nel sistema operativo, il gestore non valido di parametro viene richiamato, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md).  Se l'esecuzione può continuare, questa funzione restituisce \-1 ed imposta `errno` a `EINVAL`.  
  
 Per ulteriori informazioni su questi e altri codici, vedere [\_doserrno, errno, \_sys\_errlist, e \_sys\_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).  
  
## Note  
 La funzione `_setmaxstdio` modifica il valore massimo per il numero di file che potrebbe essere contemporaneamente aperto a livello di `stdio`.  
  
 Il runtime I\/O del linguaggio C ora supporta molti altri file aperti su piattaforme Win32 che nelle versioni precedenti.  Fino a 2.048 file possono essere aperti contemporaneamente a [livello lowio](../../c-runtime-library/low-level-i-o.md) \(ovvero aperto e accessibile da `_open`, `_read`, `_write`, e così via nella famiglia di funzioni I\/O\).  Fino a 512 file possono essere aperti contemporaneamente a [livello stdio](../../c-runtime-library/stream-i-o.md) \(ovvero aperto e accessibile da `fopen`, `fgetc`, `fputc`, e così via nella famiglia di funzioni I\/O\).  Il limite di 512 file aperti a livello di `stdio` può essere aumentato a un massimo di 2.048 per utilizzare la funzione `_setmaxstdio`.  
  
 Poiché le funzioni a livello di `stdio`, come `fopen`, vengono compilate al di sopra delle funzioni `lowio`, il massimo di 2.048 è un limite superiore difficile per il numero dei file aperti contemporaneamente accessibili tramite la libreria di runtime del linguaggio C.  
  
> [!NOTE]
>  Questo limite superiore potrebbe essere al di fuori in quanto è supportato da una piattaforma Win32 e una configurazione specifiche.  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`_setmaxstdio`|\<stdio.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## Esempio  
 Consultare [\_getmaxstdio](../../c-runtime-library/reference/getmaxstdio.md) per un esempio nell'uso di `_setmaxstdio`.  
  
## Equivalente .NET Framework  
 Non applicabile. Per chiamare la funzione standard C, utilizzare `PInvoke`. Per ulteriori informazioni, vedere [Esempi di Invocazione della Piattaforma](../Topic/Platform%20Invoke%20Examples.md).  
  
## Vedere anche  
 [I\/O di flusso](../../c-runtime-library/stream-i-o.md)