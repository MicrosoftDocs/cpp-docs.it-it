---
title: "_RTC_SetErrorFuncW | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_RTC_SetErrorFuncW"
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
  - "_RTC_SetErrorFuncW"
  - "RTC_SetErrorFuncW"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "errori di runtime"
  - "RTC_SetErrorFuncW (funzione)"
  - "_RTC_error_fnW (typedef)"
  - "_RTC_SetErrorFuncW (funzione)"
  - "RTC_error_fnW (typedef)"
ms.assetid: b3e0d71f-1bd3-4c37-9ede-2f638eb3c81a
caps.latest.revision: 15
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 15
---
# _RTC_SetErrorFuncW
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Definisce una funzione come gestore per la segnalazione dei controlli degli errori di runtime \(RTC\).  
  
## Sintassi  
  
```  
  
_RTC_error_fnW _RTC_SetErrorFuncW(  
   _RTC_error_fnW  
 function   
);  
  
```  
  
#### Parametri  
 `function`  
 L'indirizzo della funzione che gestirà i controlli degli errori di runtime.  
  
## Valore restituito  
 Funzione di errore definita in precedenza o `NULL` se in precedenza non è stata definita alcuna funzione.  
  
## Note  
 Nel nuovo codice usare solo `_RTC_SetErrorFuncW`.`_RTC_SetErrorFunc` è incluso nella libreria solo per la compatibilità con le versioni precedenti.  
  
 Il callback di `_RTC_SetErrorFuncW` si applica solo al componente che è stato collegato, ma non globalmente.  
  
 Verificare che l'indirizzo passato a `_RTC_SetErrorFuncW` corrisponda a quello di una funzione di gestione degli errori valida.  
  
 Se a un errore è stato assegnato il tipo –1 con [RTC\_SetErrorType](../../c-runtime-library/reference/rtc-seterrortype.md), la funzione di gestione degli errori non viene chiamata.  
  
 Prima di chiamare questa funzione, è necessario chiamare una delle funzioni di inizializzazione dei controlli degli errori di run\-time. Per altre informazioni, vedere [Utilizzo dei controlli runtime senza la libreria di runtime del linguaggio C](../Topic/Using%20Run-Time%20Checks%20Without%20the%20C%20Run-Time%20Library.md).  
  
 **\_RTC\_error\_fnW** viene definito come segue:  
  
 **typedef int \(\_\_cdecl \*\_RTC\_error\_fnW\)\(int**  `errorType` **, const wchar\_t \*** *filename* **, int**  *linenumber* **, const wchar\_t \*** `moduleName` **, const wchar\_t \*** *format* **, ...\);**  
  
 dove:  
  
 `errorType`  
 Tipo di errore specificato da [RTC\_SetErrorType](../../c-runtime-library/reference/rtc-seterrortype.md).  
  
 *filename*  
 File di origine in cui si è verificato l'errore o Null se non sono disponibili informazioni di debug.  
  
 *linenumber*  
 Riga in *filename* in cui si è verificato l'errore o 0 se non sono disponibili informazioni di debug.  
  
 `moduleName`  
 DLL o nome dell'eseguibile in cui si è verificato l'errore.  
  
 *format*  
 Stringa di tipo printf per visualizzare un messaggio di errore, usando i parametri rimanenti. Il primo argomento di VA\_ARGLIST è il numero di errore RTC che si è verificato.  
  
 Per un esempio che illustra come usare **\_RTC\_error\_fnW**, vedere [Personalizzazione dei controlli runtime nativi](../Topic/Native%20Run-Time%20Checks%20Customization.md).  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`_RTC_SetErrorFuncW`|\<rtcapi.h\>|  
  
 Per altre informazioni, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## Librerie  
 Tutte le versioni delle [librerie di runtime C](../../c-runtime-library/crt-library-features.md).  
  
## Equivalente .NET Framework  
 Non applicabile. Per chiamare la funzione C standard, usare `PInvoke`. Per altre informazioni, vedere [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).  
  
## Vedere anche  
 [\_CrtDbgReport, \_CrtDbgReportW](../../c-runtime-library/reference/crtdbgreport-crtdbgreportw.md)   
 [Controllo degli errori di runtime](../../c-runtime-library/run-time-error-checking.md)