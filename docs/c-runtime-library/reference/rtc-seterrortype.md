---
title: "_RTC_SetErrorType | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_RTC_SetErrorType"
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
  - "RTC_SetErrorType"
  - "_RTC_SetErrorType"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "errori di runtime"
  - "RTC_SetErrorType (funzione)"
  - "_RTC_SetErrorType (funzione)"
ms.assetid: f5f99be7-d357-4b11-b8f5-ddd3428f2b06
caps.latest.revision: 13
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 13
---
# _RTC_SetErrorType
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Associa un errore che viene rilevato dai controlli degli errori di run\-time a un tipo. Il gestore di errori elabora le modalità di output degli errori del tipo specificato.  
  
## Sintassi  
  
```  
  
int _RTC_SetErrorType(  
   _RTC_ErrorNumber  
errnum  
,  
   int  
ErrType   
);  
  
```  
  
#### Parametri  
 *errnum*  
 Numero compreso tra zero e uno minore del valore restituito da [\_RTC\_NumErrors](../../c-runtime-library/reference/rtc-numerrors.md).  
  
 *ErrType*  
 Valore da assegnare a questo *errnum*. Ad esempio, si può usare **\_CRT\_ERROR**. Se si usa `_CrtDbgReport` come gestore di errori, *ErrType* può rappresentare solo uno dei simboli definiti in [\_CrtSetReportMode](../../c-runtime-library/reference/crtsetreportmode.md). Se si ha un proprio gestore di errori \([\_RTC\_SetErrorFunc](../../c-runtime-library/reference/rtc-seterrorfunc.md)\), è possibile avere un numero di *ErrType* pari al numero di *errnum*.  
  
 Un valore *ErrType* di \_RTC\_ERRTYPE\_IGNORE ha un significato speciale per `_CrtSetReportMode`. L'errore viene ignorato.  
  
## Valore restituito  
 Valore precedente per il tipo di errore `type`.  
  
## Note  
 Per impostazione predefinita, tutti gli errori vengono impostati su *ErrType* \= 1, che corrisponde a **\_CRT\_ERROR**. Per altre informazioni sui tipi di errore predefiniti come **\_CRT\_ERROR**, vedere [\_CrtDbgReport](../../c-runtime-library/reference/crtdbgreport-crtdbgreportw.md).  
  
 Prima di chiamare questa funzione, è necessario chiamare una delle funzioni di inizializzazione dei controlli degli errori di run\-time. Vedere [Utilizzo dei controlli runtime senza la libreria di runtime del linguaggio C](../Topic/Using%20Run-Time%20Checks%20Without%20the%20C%20Run-Time%20Library.md)  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`_RTC_SetErrorType`|\<rtcapi.h\>|  
  
 Per altre informazioni, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## Librerie  
 Tutte le versioni delle [librerie di runtime C](../../c-runtime-library/crt-library-features.md).  
  
## Equivalente .NET Framework  
 Non applicabile. Per chiamare la funzione C standard, usare `PInvoke`. Per altre informazioni, vedere [Esempi di platform invoke](../Topic/Platform%20Invoke%20Examples.md).  
  
## Vedere anche  
 [\_RTC\_GetErrDesc](../../c-runtime-library/reference/rtc-geterrdesc.md)   
 [Controllo degli errori di runtime](../../c-runtime-library/run-time-error-checking.md)