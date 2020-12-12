---
description: 'Altre informazioni su: _matherr'
title: _matherr
ms.date: 04/05/2018
api_name:
- _matherr
api_location:
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
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- _matherr
- matherr
helpviewer_keywords:
- _matherr function
- matherr function
ms.assetid: b600d66e-165a-4608-a856-8fb418d46760
ms.openlocfilehash: 406f9fe43ed64b24637f94cc5bf1ef01d4c94567
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97299631"
---
# <a name="_matherr"></a>_matherr

Gestisce gli errori matematici.

## <a name="syntax"></a>Sintassi

```C
int _matherr( struct _exception * except );
```

### <a name="parameters"></a>Parametri

*ad eccezione*<br/>
Puntatore alla struttura contenente le informazioni sull'errore.

## <a name="return-value"></a>Valore restituito

**_matherr** restituisce 0 per indicare un errore o un valore diverso da zero per indicare l'esito positivo. Se **_matherr** restituisce 0, è possibile visualizzare un messaggio di errore e **errno** è impostato su un valore di errore appropriato. Se **_matherr** restituisce un valore diverso da zero, non viene visualizzato alcun messaggio di errore e **errno** rimane invariato.

Per altre informazioni sui codici restituiti, vedere [_doserrno, errno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

## <a name="remarks"></a>Commenti

La funzione **_matherr** elabora gli errori generati dalle funzioni a virgola mobile della libreria matematica. Queste funzioni chiamano **_matherr** quando viene rilevato un errore.

Per una gestione speciale degli errori, è possibile fornire una definizione diversa di **_matherr**. Se si usa la versione collegata in modo dinamico della libreria di runtime del linguaggio C (CRT), è possibile sostituire la routine predefinita **_matherr** in un eseguibile client con una versione definita dall'utente. Tuttavia, non è possibile sostituire la routine predefinita **_matherr** in un client DLL della DLL CRT.

Quando si verifica un errore in una routine matematica, **_matherr** viene chiamato con un puntatore a una struttura di tipo **_exception** (definita in \<math.h> ) come argomento. La struttura **_exception** contiene gli elementi seguenti.

```C
struct _exception
{
    int    type;   // exception type - see below
    char*  name;   // name of function where error occurred
    double arg1;   // first argument to function
    double arg2;   // second argument (if any) to function
    double retval; // value to be returned by function
};
```

Il membro del **tipo** specifica il tipo di errore matematico. È uno dei valori seguenti, definito in \<math.h> :

|Macro|Significato|
|-|-|
| **_DOMAIN** | Errore dominio argomento |
| **_SING** | Singolarità degli argomenti |
| **_OVERFLOW** | Errore di intervallo di overflow |
| **_PLOSS** | Perdita parziale di significato |
| **_TLOSS** | Perdita totale di significato |
| **_UNDERFLOW** | Il risultato è troppo piccolo per essere rappresentato. (Questa condizione non è attualmente supportata). |

Il membro della struttura **name** è un puntatore a una stringa con terminazione Null che contiene il nome della funzione che ha causato l'errore. I membri della struttura **arg1** e **arg2** specificano i valori che hanno causato l'errore. Se viene fornito un solo argomento, viene archiviato in **arg1**.

Il valore restituito predefinito dell'errore specificato è **retval**. Se si modifica il valore restituito, deve specificare se si è verificato un errore effettivamente.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_matherr**|\<math.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibility](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

```C
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

```Output
Special: using absolute value: log: _DOMAIN error
log( -2.0 ) = 6.931472e-01
Special: using absolute value: log10: _DOMAIN error
log10( -5.0 ) = 6.989700e-01
Normal: log( 0.0 ) = -inf
```

## <a name="see-also"></a>Vedere anche

[Supporto della virgola mobile](../../c-runtime-library/floating-point-support.md)<br/>
