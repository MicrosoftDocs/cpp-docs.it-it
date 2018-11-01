---
title: _matherr
ms.date: 04/05/2018
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
helpviewer_keywords:
- _matherr function
- matherr function
ms.assetid: b600d66e-165a-4608-a856-8fb418d46760
ms.openlocfilehash: 980bf8a14ceace82a76562cc47d353f78dbca582
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50445721"
---
# <a name="matherr"></a>_matherr

Gestisce gli errori matematici.

## <a name="syntax"></a>Sintassi

```C
int _matherr( struct _exception * except );
```

### <a name="parameters"></a>Parametri

*except*<br/>
Puntatore alla struttura contenente le informazioni sull'errore.

## <a name="return-value"></a>Valore restituito

**matherr** restituisce 0 per indicare un errore o un valore diverso da zero per indicare l'esito positivo. Se **matherr** restituisce 0, un messaggio di errore possono essere visualizzati e **errno** è impostata su un valore di errore appropriato. Se **matherr** restituisce un valore diverso da zero, nessun messaggio di errore viene visualizzato e **errno** rimane invariato.

Per altre informazioni sui codici restituiti, vedere [_doserrno, errno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

## <a name="remarks"></a>Note

Il **matherr** funzione elabora gli errori generati dalle funzioni a virgola mobile nella libreria matematica. Queste funzioni chiamano **matherr** quando viene rilevato un errore.

Per la gestione di errori speciale, è possibile fornire una definizione diversa di **matherr**. Se si usa la versione collegata in modo dinamico della libreria run-time C (CRT), è possibile sostituire il valore predefinito **matherr** routine in un client eseguibile con una versione definita dall'utente. Tuttavia, non è possibile sostituire il valore predefinito **matherr** routine in un client DLL della DLL CRT.

Quando si verifica un errore in una routine matematica, **matherr** viene chiamato con un puntatore a un **Exception** struttura dei tipi (definito in \<Math. h >) come argomento. La struttura **_exception** contiene gli elementi seguenti.

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

Il **tipo** membro specifica il tipo di errore matematico. È uno dei valori seguenti, definiti in \<Math. h >:

|Macro|Significato|
|-|-|
**DOMINIO**|Errore di dominio di argomento
**SING**|Singolarità dell'argomento
**OVERFLOW**|Errore di intervallo di overflow
**PLOSS**|Perdita parziale di significato
**TLOSS**|Perdita totale di significato
**UNDERFLOW**|Il risultato è troppo piccolo per essere rappresentato. (Questa condizione non è attualmente supportata).

Il membro della struttura **name** è un puntatore a una stringa con terminazione Null che contiene il nome della funzione che ha causato l'errore. I membri della struttura **arg1** e **arg2** specificano i valori che hanno causato l'errore. Se un argomento viene fornito solo, questo viene archiviato in **arg1**.

Il valore restituito predefinito dell'errore specificato è **retval**. Se si modifica il valore restituito, deve specificare se si è verificato un errore effettivamente.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_matherr**|\<math.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

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

[Supporto delle funzioni a virgola mobile](../../c-runtime-library/floating-point-support.md)<br/>
