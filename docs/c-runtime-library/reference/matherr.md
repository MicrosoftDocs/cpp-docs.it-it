---
title: _matherr | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
apiname:
- _matherr
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
- _matherr
- matherr
dev_langs:
- C++
helpviewer_keywords:
- _matherr function
- matherr function
ms.assetid: b600d66e-165a-4608-a856-8fb418d46760
caps.latest.revision: 11
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
ms.sourcegitcommit: e257f037a05c45f5b98e64ea55bd125af443b0be
ms.openlocfilehash: 20ed6b9111e7dc3a25462ea9d8b79b8e9e842ed0
ms.contentlocale: it-it
ms.lasthandoff: 03/29/2017

---
# <a name="matherr"></a>_matherr
Gestisce gli errori matematici.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
      int _matherr(  
   struct _exception *except   
);  
```  
  
#### <a name="parameters"></a>Parametri  
 *except*  
 Puntatore alla struttura contenente le informazioni sull'errore.  
  
## <a name="return-value"></a>Valore restituito  
 _**matherr** restituisce 0 per indicare un errore o un valore diverso da zero per indicare l'esito positivo. Se \_**matherr** restituisce 0, può essere visualizzato un messaggio di errore e `errno` viene impostato su un valore di errore appropriato. Se \_**matherr** restituisce un valore diverso da zero, non viene visualizzato alcun messaggio di errore e `errno` rimane invariato.  
  
 Per altre informazioni sui codici restituiti, vedere [_doserrno, errno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).  
  
## <a name="remarks"></a>Note  
 La funzione _**matherr** elabora gli errori generati dalle funzioni a virgola mobile nella libreria matematica. Queste funzioni chiamano \_**matherr** quando viene rilevato un errore.  
  
 Per la gestione speciale degli errori, è possibile fornire una definizione diversa di _**matherr**. Se si usa la versione collegata in modo dinamico della libreria di runtime C (Msvcr90.dll), è possibile sostituire la routine predefinita \_**matherr** in un eseguibile client con una versione definita dall'utente. Tuttavia, non è possibile sostituire la routine predefinita `_matherr` in un client DLL di Msvcr90.dll.  
  
 Quando si verifica un errore in una routine matematica, la funzione _**matherr** viene chiamata con un puntatore a una struttura di tipo **_exception** (definita in Math.h) come argomento. La struttura **_exception** contiene gli elementi seguenti.  
  
 **int type**  
 Tipo di eccezione.  
  
 **char \*name**  
 Nome della funzione in cui si è verificato l'errore.  
  
 **double arg1**, **arg2**  
 Il primo e il secondo (se presenti) argomento della funzione.  
  
 **double retval**  
 Valore restituito dalla funzione.  
  
 **type** specifica il tipo di errore matematico. È uno dei seguenti valori, definito in Math.h.  
  
 `_DOMAIN`  
 Errore di dominio dell'argomento.  
  
 `_SING`  
 Singolarità dell'argomento.  
  
 `_OVERFLOW`  
 Errore relativo all'intervallo di overflow.  
  
 `_PLOSS`  
 Perdita parziale di significato.  
  
 `_TLOSS`  
 Perdita totale di significato.  
  
 `_UNDERFLOW`  
 Il risultato è troppo piccolo per essere rappresentato. (Questa condizione non è attualmente supportata).  
  
 Il membro della struttura **name** è un puntatore a una stringa con terminazione Null che contiene il nome della funzione che ha causato l'errore. I membri della struttura **arg1** e **arg2** specificano i valori che hanno causato l'errore. (Se viene specificato un solo argomento, viene archiviato in **arg1**.)  
  
 Il valore restituito predefinito dell'errore specificato è **retval**. Se si modifica il valore restituito, deve specificare se si è verificato un errore effettivamente.  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|`_matherr`|\<math.h>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## <a name="libraries"></a>Librerie  
 Tutte le versioni delle [librerie di runtime C](../../c-runtime-library/crt-library-features.md).  
  
## <a name="example"></a>Esempio  
  
```  
// crt_matherr.c  
/* illustrates writing an error routine for math   
 * functions. The error function must be:  
 *      _matherr  
 */  
  
#include <math.h>  
#include <string.h>  
#include <stdio.h>  
  
int main()  
{  
    /* Do several math operations that cause errors. The _matherr  
     * routine handles _DOMAIN errors, but lets the system handle  
     * other errors normally.  
     */  
    printf( "log( -2.0 ) = %e\n", log( -2.0 ) );  
    printf( "log10( -5.0 ) = %e\n", log10( -5.0 ) );  
    printf( "log( 0.0 ) = %e\n", log( 0.0 ) );  
}  
  
/* Handle several math errors caused by passing a negative argument  
 * to log or log10 (_DOMAIN errors). When this happens, _matherr  
 * returns the natural or base-10 logarithm of the absolute value  
 * of the argument and suppresses the usual error message.  
 */  
int _matherr( struct _exception *except )  
{  
    /* Handle _DOMAIN errors for log or log10. */  
    if( except->type == _DOMAIN )  
    {  
        if( strcmp( except->name, "log" ) == 0 )  
        {  
            except->retval = log( -(except->arg1) );  
            printf( "Special: using absolute value: %s: _DOMAIN "  
                     "error\n", except->name );  
            return 1;  
        }  
        else if( strcmp( except->name, "log10" ) == 0 )  
        {  
            except->retval = log10( -(except->arg1) );  
            printf( "Special: using absolute value: %s: _DOMAIN "  
                     "error\n", except->name );  
            return 1;  
        }  
    }  
    printf( "Normal: " );  
    return 0;    /* Else use the default actions */  
}  
```  
  
## <a name="output"></a>Output  
  
```  
Special: using absolute value: log: _DOMAIN error  
log( -2.0 ) = 6.931472e-001  
Special: using absolute value: log10: _DOMAIN error  
log10( -5.0 ) = 6.989700e-001  
Normal: log( 0.0 ) = -1.#INF00e+000  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Supporto delle funzioni a virgola mobile](../../c-runtime-library/floating-point-support.md)   
