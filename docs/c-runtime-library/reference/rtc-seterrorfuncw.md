---
title: _RTC_SetErrorFuncW | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
apiname:
- _RTC_SetErrorFuncW
apilocation:
- msvcrt.dll
- msvcr80.dll
- msvcr90.dll
- msvcr100.dll
- msvcr100_clr0400.dll
- msvcr110.dll
- msvcr110_clr0400.dll
- msvcr120.dll
- msvcr120_clr0400.dll
- ucrtbase.dll
apitype: DLLExport
f1_keywords:
- _RTC_SetErrorFuncW
- RTC_SetErrorFuncW
dev_langs:
- C++
helpviewer_keywords:
- run-time errors
- RTC_SetErrorFuncW function
- _RTC_error_fnW typedef
- _RTC_SetErrorFuncW function
- RTC_error_fnW typedef
ms.assetid: b3e0d71f-1bd3-4c37-9ede-2f638eb3c81a
caps.latest.revision: 15
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.mt:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
translationtype: Machine Translation
ms.sourcegitcommit: a937c9d083a7e4331af63323a19fb207142604a0
ms.openlocfilehash: d71962eca033e5d3994c82e666102f44c62e82be
ms.lasthandoff: 02/24/2017

---
# <a name="rtcseterrorfuncw"></a>_RTC_SetErrorFuncW
Definisce una funzione come gestore per la segnalazione dei controlli degli errori di runtime (RTC).  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
      _RTC_error_fnW _RTC_SetErrorFuncW(  
   _RTC_error_fnW function   
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `function`  
 L'indirizzo della funzione che gestirà i controlli degli errori di runtime.  
  
## <a name="return-value"></a>Valore restituito  
 Funzione di errore definita in precedenza o `NULL` se in precedenza non è stata definita alcuna funzione.  
  
## <a name="remarks"></a>Note  
 Nel nuovo codice usare solo `_RTC_SetErrorFuncW`. La funzione `_RTC_SetErrorFunc` è inclusa nella libreria solo per compatibilità con le versioni precedenti.  
  
 Il callback di `_RTC_SetErrorFuncW` si applica solo al componente che è stato collegato, ma non globalmente.  
  
 Verificare che l'indirizzo passato a `_RTC_SetErrorFuncW` corrisponda a quello di una funzione di gestione degli errori valida.  
  
 Se a un errore è stato assegnato il tipo -1 con [RTC_SetErrorType](../../c-runtime-library/reference/rtc-seterrortype.md), la funzione di gestione degli errori non viene chiamata.  
  
 Prima di chiamare questa funzione, è necessario chiamare una delle funzioni di inizializzazione dei controlli degli errori di run-time. Per altre informazioni, vedere [Uso dei controlli di runtime senza la libreria di runtime C](/visualstudio/debugger/using-run-time-checks-without-the-c-run-time-library).  
  
 La definizione di **_RTC_error_fnW** è la seguente:  
  
 **typedef int (__cdecl \*_RTC_error_fnW)(int** `errorType` **, const wchar_t \*** *filename* **, int** *linenumber* **, const wchar_t \*** `moduleName` **, const wchar_t \*** *format* **, ...);**  
  
 dove:  
  
 `errorType`  
 Tipo di errore specificato da [_RTC_SetErrorType](../../c-runtime-library/reference/rtc-seterrortype.md).  
  
 *filename*  
 File di origine in cui si è verificato l'errore o Null se non sono disponibili informazioni di debug.  
  
 *linenumber*  
 Riga in *filename* in cui si è verificato l'errore o 0 se non sono disponibili informazioni di debug.  
  
 `moduleName`  
 DLL o nome dell'eseguibile in cui si è verificato l'errore.  
  
 *format*  
 Stringa di tipo printf per visualizzare un messaggio di errore, usando i parametri rimanenti. Il primo argomento di VA_ARGLIST è il numero di errore RTC che si è verificato.  
  
 Per un esempio che illustra come usare **_RTC_error_fnW**, vedere [Personalizzazione dei controlli runtime nativi](/visualstudio/debugger/native-run-time-checks-customization).  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|`_RTC_SetErrorFuncW`|\<rtcapi.h>|  
  
 Per altre informazioni, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## <a name="libraries"></a>Librerie  
 Tutte le versioni delle [librerie di runtime C](../../c-runtime-library/crt-library-features.md).  
  
## <a name="net-framework-equivalent"></a>Equivalente .NET Framework  
 Non applicabile. Per chiamare la funzione C standard, usare `PInvoke`. Per altre informazioni, vedere [Platform Invoke Examples](http://msdn.microsoft.com/Library/15926806-f0b7-487e-93a6-4e9367ec689f) (Esempi di platform invoke).  
  
## <a name="see-also"></a>Vedere anche  
 [_CrtDbgReport, _CrtDbgReportW](../../c-runtime-library/reference/crtdbgreport-crtdbgreportw.md)   
 [Controllo degli errori di runtime](../../c-runtime-library/run-time-error-checking.md)
