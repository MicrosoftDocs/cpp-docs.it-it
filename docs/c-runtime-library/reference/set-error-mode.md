---
title: _set_error_mode | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
apiname:
- _set_error_mode
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
- api-ms-win-crt-runtime-l1-1-0.dll
apitype: DLLExport
f1_keywords:
- set_error_mode
- _set_error_mode
dev_langs:
- C++
helpviewer_keywords:
- _set_error_mode function
- set_error_mode function
ms.assetid: f0807be5-73d1-4a32-a701-3c9bdd139c5c
caps.latest.revision: 21
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.ht:
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
ms.sourcegitcommit: a82768750e6a7837bb81edd8a51847f83c294c20
ms.openlocfilehash: 205a6bed342ce1489664a5e9e37880612492b04d
ms.contentlocale: it-it
ms.lasthandoff: 04/04/2017

---
# <a name="seterrormode"></a>_set_error_mode
Modificare `__error_mode` per determinare una posizione non predefinita in cui il runtime C scrive un messaggio di errore per un errore che potrebbe terminare il programma.  
  
> [!IMPORTANT]
>  Questa API non può essere usata nelle applicazioni eseguite in [!INCLUDE[wrt](../../atl/reference/includes/wrt_md.md)]. Per altre informazioni, vedere l'articolo relativo alle [funzioni CRT non supportate con /ZW](http://msdn.microsoft.com/library/windows/apps/jj606124.aspx).  
  
## <a name="syntax"></a>Sintassi  
  
```  
int _set_error_mode(  
   int modeval   
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `modeval`  
 Destinazione dei messaggi di errore.  
  
## <a name="return-value"></a>Valore restituito  
 Restituisce la precedente impostazione o -1 se si verifica un errore.  
  
## <a name="remarks"></a>Note  
 Controlla il sink di output di errore impostando il valore di `__error_mode`. Ad esempio, è possibile indirizzare l'output a un errore standard o usare l'API `MessageBox`.  
  
 Il parametro `modeval` può essere impostato su uno dei valori seguenti.  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|`_OUT_TO_DEFAULT`|Il sink di errore è determinato da `__app_type`.|  
|`_OUT_TO_STDERR`|Il sink di errore è un errore standard.|  
|`_OUT_TO_MSGBOX`|Il sink di errore è una finestra di messaggio.|  
|`_REPORT_ERRMODE`|Segnalare il valore `__error_mode` corrente.|  
  
 Se viene passato un valore diverso da quelli elencati, viene richiamato il gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, `_set_error_mode` imposta `errno` su `EINVAL` e restituisce -1.  
  
 Quando viene usata con [assert](../../c-runtime-library/reference/assert-macro-assert-wassert.md), `_set_error_mode` visualizza l'istruzione non riuscita nella finestra di dialogo e offre la possibilità di scegliere il pulsante `Ignore` in modo da poter continuare a eseguire il programma.  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|`_set_error_mode`|\<stdlib.h>|  
  
## <a name="example"></a>Esempio  
  
```C  
// crt_set_error_mode.c  
// compile with: /c  
#include <stdlib.h>  
#include <assert.h>  
  
int main()  
{  
   _set_error_mode(_OUT_TO_STDERR);  
   assert(2+2==5);  
}  
```  
  
```Output  
Assertion failed: 2+2==5, file crt_set_error_mode.c, line 8  
  
This application has requested the Runtime to terminate it in an unusual way.  
Please contact the application's support team for more information.  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Macro assert, _assert, _wassert](../../c-runtime-library/reference/assert-macro-assert-wassert.md)
