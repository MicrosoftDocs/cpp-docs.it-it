---
title: _tzset
ms.date: 11/04/2016
apiname:
- _tzset
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
- api-ms-win-crt-time-l1-1-0.dll
apitype: DLLExport
f1_keywords:
- _tzset
helpviewer_keywords:
- _tzset function
- time environment variables
- environment variables, setting time
ms.assetid: 3f6ed537-b414-444d-b272-5dd377481930
ms.openlocfilehash: 6312297e6daa9b4790674bd26d21812d5bee34c6
ms.sourcegitcommit: 1819bd2ff79fba7ec172504b9a34455c70c73f10
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/09/2018
ms.locfileid: "51330255"
---
# <a name="tzset"></a>_tzset

Impostare le variabili di ambiente di tempo.

> [!IMPORTANT]
> Non è possibile usare questa API nelle applicazioni eseguite in Windows Runtime. Per altre informazioni, vedere [Funzioni CRT non supportate nelle app della piattaforma UWP (Universal Windows Platform)](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).

## <a name="syntax"></a>Sintassi

```C
void _tzset( void );
```

## <a name="remarks"></a>Note

Il **tzset** funzione Usa l'impostazione corrente della variabile di ambiente **TZ** per assegnare valori alle tre variabili globali: **Daylight**, **TimeZone** , e **tzname**. Queste variabili vengono usate per la [ftime](ftime-ftime32-ftime64.md) e [localtime](localtime-localtime32-localtime64.md) funzioni per apportare correzioni dall'ora UTC (coordinated universal time) all'ora locale e dal [ora](time-time32-time64.md) funzione calcolare l'ora UTC dall'ora di sistema. Usare la sintassi seguente per impostare il **TZ** variabile di ambiente:

> **impostato TZ =**_tzn_ \[ **+** &#124; **-**]*hh* \[ **:**_mm_\[**:**_ss_]] [*dzn*]

|Parametro|Descrizione|
|-|-|
| *tzn* | Nome del fuso orario di tre lettere, ad esempio PST. È necessario specificare l'offset corretto dall'ora locale all'ora UTC. |
| *hh* | La differenza in ore tra l'ora UTC e l'ora locale. Segno più (+) facoltativo per i valori positivi. |
| *mm* | Minuti. Separate dalle *hh* da due punti (**:**). |
| *ss* | Secondi. Separate dalle *mm* da due punti (**:**). |
| *dzn* | Fuso orario con l'ora legale di tre lettere, ad esempio PDT. Se l'ora legale è mai attiva nella località, impostare **TZ** senza un valore per *dzn*. La libreria di runtime C presupporrà le regole relative agli Stati Uniti per implementare il calcolo dell'ora legale (DST). |

> [!NOTE]
> Prestare attenzione nel calcolare il segno della differenza di tempo. Dal momento che la differenza di tempo è l'offset dall'ora locale all'ora UTC (anziché viceversa), il relativo segno potrebbe essere l'opposto di quanto ci si potrebbe intuitivamente aspettare. Per i fusi orari avanti rispetto all'ora UTC, la differenza di tempo è negativa; per quelli che sono indietro rispetto all'ora UTC, la differenza è positiva.

Ad esempio, per impostare il **TZ** variabile di ambiente in modo che corrisponda al fuso orario corrente in Germania, immettere quanto segue nella riga di comando:

> **impostato TZ = codice GST 1GDT**

Questo comando usa GST per indicare l'ora solare tedesca, presuppone che l'ora UTC sia un'ora indietro rispetto alla Germania (o, in altre parole, che la Germania sia un'ora avanti rispetto all'ora UTC) e presuppone che la Germania osservi l'ora legale.

Se il **TZ** valore non è impostato, **tzset** tenta di usare le informazioni del fuso orario specificate dal sistema operativo. Nel sistema operativo Windows, queste informazioni vengono specificate nell'applicazione Data/Ora nel Pannello di controllo. Se **tzset** non è possibile ottenere queste informazioni, Usa PST8PDT per impostazione predefinita, che indica il fuso orario del Pacifico.

In base il **TZ** valore variabile di ambiente, i valori seguenti vengono assegnati alle variabili globali **Daylight**, **TimeZone**, e **tzname** quando si **tzset** viene chiamato:

|Variabile globale|Descrizione|Valore predefinito|
|---------------------|-----------------|-------------------|
|**Daylight**|Valore diverso da zero se è specificato un orario di--l'ora legale **TZ** configurazione; in caso contrario, 0.|1|
|**TimeZone**|La differenza in secondi tra l'ora locale e l'ora UTC.|28800 (28800 secondi equivale a 8 ore)|
|**tzname**[0]|Valore del nome del fuso orario dalla stringa **TZ** variabile di ambiente; vuoto se **TZ** non è stata impostata.|PST|
|**tzname**[1]|Valore stringa del fuso orario ora legale; vuoto se viene specificato--l'ora legale fuso **TZ** variabile di ambiente.|PDT|

I valori predefiniti illustrati nella tabella precedente per **Daylight** e il **tzname** matrice corrispondono a "PST8PDT". Se la zona DST viene omessa dal **TZ** variabile di ambiente, il valore di **Daylight** è uguale a 0 e il [ftime](ftime-ftime32-ftime64.md), [gmtime](gmtime-gmtime32-gmtime64.md)e [localtime](localtime-localtime32-localtime64.md) funzioni restituiscono 0 per i flag DST.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_tzset**|\<time.h>|

Il **tzset** funzione è specifico di Microsoft. Per altre informazioni, vedere [Compatibility](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

```C
// crt_tzset.cpp
// This program uses _tzset to set the global variables
// named _daylight, _timezone, and _tzname. Since TZ is
// not being explicitly set, it uses the system time.

#include <time.h>
#include <stdlib.h>
#include <stdio.h>

int main( void )
{
    _tzset();
    int daylight;
    _get_daylight( &daylight );
    printf( "_daylight = %d\n", daylight );
    long timezone;
    _get_timezone( &timezone );
    printf( "_timezone = %ld\n", timezone );
    size_t s;
    char tzname[100];
    _get_tzname( &s, tzname, sizeof(tzname), 0 );
    printf( "_tzname[0] = %s\n", tzname );
    exit( 0 );
}
```

```Output
_daylight = 1
_timezone = 28800
_tzname[0] = Pacific Standard Time
```

## <a name="see-also"></a>Vedere anche

[Gestione dell'ora](../../c-runtime-library/time-management.md)<br/>
[asctime, _wasctime](asctime-wasctime.md)<br/>
[_ftime, _ftime32, _ftime64](ftime-ftime32-ftime64.md)<br/>
[gmtime, _gmtime32, _gmtime64](gmtime-gmtime32-gmtime64.md)<br/>
[localtime, _localtime32, _localtime64](localtime-localtime32-localtime64.md)<br/>
[time, _time32, _time64](time-time32-time64.md)<br/>
[_utime, _utime32, _utime64, _wutime, _wutime32, _wutime64](utime-utime32-utime64-wutime-wutime32-wutime64.md)<br/>
