---
title: _RTC_SetErrorFuncW | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
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
ms.translationtype: Machine Translation
ms.sourcegitcommit: 3f91eafaf3b5d5c1b8f96b010206d699f666e224
ms.openlocfilehash: 9c340310feb94ac181049c01d3ab1efaee2002c3
ms.contentlocale: it-it
ms.lasthandoff: 04/01/2017

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
 Nel nuovo codice usare solo `_RTC_SetErrorFuncW`. `_RTC_SetErrorFunc` è incluso nella libreria solo per la compatibilità con le versioni precedenti.  
  
 Il callback di `_RTC_SetErrorFuncW` si applica solo al componente che è stato collegato, ma non globalmente.  
  
 Verificare che l'indirizzo passato a `_RTC_SetErrorFuncW` corrisponda a quello di una funzione di gestione degli errori valida.  
  
 Se un errore è stato assegnato un tipo di -1 con [RTC_SetErrorType](../../c-runtime-library/reference/rtc-seterrortype.md), non viene chiamata la funzione di gestione degli errori.  
  
 Prima di chiamare questa funzione, è necessario chiamare una delle funzioni di inizializzazione dei controlli degli errori di run-time. Per altre informazioni, vedere [Using Run-Time Checks Without the C Run-Time Library](/visualstudio/debugger/using-run-time-checks-without-the-c-run-time-library).  
  
 La definizione di **_RTC_error_fnW** è la seguente:  
  
 **typedef int (__cdecl \*_RTC_error_fnW)(int** `errorType` **, const wchar_t \*** *filename* **, int** *linenumber* **, const wchar_t \*** `moduleName` **, const wchar_t \*** *format* **, ...);**  
  
 dove:  
  
 `errorType`  
 Tipo di errore specificato da [RTC_SetErrorType](../../c-runtime-library/reference/rtc-seterrortype.md).  
  
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
  
## <a name="see-also"></a>Vedere anche  
 [_CrtDbgReport, _CrtDbgReportW](../../c-runtime-library/reference/crtdbgreport-crtdbgreportw.md)   
 [Controllo degli errori di runtime](../../c-runtime-library/run-time-error-checking.md)
