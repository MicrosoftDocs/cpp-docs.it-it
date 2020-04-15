---
title: _tzset
ms.date: 4/2/2020
api_name:
- _tzset
- _o__tzset
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
- api-ms-win-crt-time-l1-1-0.dll
- api-ms-win-crt-private-l1-1-0
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- _tzset
helpviewer_keywords:
- _tzset function
- time environment variables
- environment variables, setting time
ms.assetid: 3f6ed537-b414-444d-b272-5dd377481930
ms.openlocfilehash: b2537a3bbfd2b5cec6bdf149c520aac7e3344b1e
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81362193"
---
# <a name="_tzset"></a>_tzset

Impostare le variabili di ambiente di tempo.

> [!IMPORTANT]
> Non è possibile usare questa API nelle applicazioni eseguite in Windows Runtime. Per altre informazioni, vedere [Funzioni CRT non supportate nelle app della piattaforma UWP (Universal Windows Platform)](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).

## <a name="syntax"></a>Sintassi

```C
void _tzset( void );
```

## <a name="remarks"></a>Osservazioni

La funzione **_tzset** utilizza l'impostazione corrente della variabile di ambiente **T ,** per assegnare valori a tre variabili globali: **_daylight**, **_timezone**e **_tzname**. Queste variabili vengono utilizzate dalle funzioni [_ftime](ftime-ftime32-ftime64.md) e [localtime](localtime-localtime32-localtime64.md) per apportare correzioni dall'ora UTC (Coordinated Universal Time) all'ora locale e dalla funzione [time](time-time32-time64.md) per calcolare l'ora UTC dall'ora di sistema. Utilizzare la sintassi seguente per impostare la variabile di ambiente **T:**

> \[ **+** **set T-Tzn**_tzn_&#124;**-**]*hh*\[**:**_mm_\[**:**_ss_] ][*dzn*]

|Parametro|Descrizione|
|-|-|
| *Tzn* | Nome del fuso orario di tre lettere, ad esempio PST. È necessario specificare l'offset corretto dall'ora locale all'ora UTC. |
| *Hh* | La differenza in ore tra l'ora UTC e l'ora locale. Segno più (+) facoltativo per i valori positivi. |
| *Mm* | Minuti. Separato da *hh* da due punti (**:**). |
| *ss* | Secondi. Separato da *mm* da due punti (**:**). |
| *dzn* | Fuso orario con l'ora legale di tre lettere, ad esempio PDT. Se l'ora legale non è mai attiva nella località, impostare **T** senza un valore per *dzn*. La libreria di runtime C presupporrà le regole relative agli Stati Uniti per implementare il calcolo dell'ora legale (DST). |

> [!NOTE]
> Prestare attenzione nel calcolare il segno della differenza di tempo. Dal momento che la differenza di tempo è l'offset dall'ora locale all'ora UTC (anziché viceversa), il relativo segno potrebbe essere l'opposto di quanto ci si potrebbe intuitivamente aspettare. Per i fusi orari avanti rispetto all'ora UTC, la differenza di tempo è negativa; per quelli che sono indietro rispetto all'ora UTC, la differenza è positiva.

Ad esempio, per impostare la variabile di ambiente **T** in modo che corrisponda al fuso orario corrente in Germania, immettere quanto segue nella riga di comando:

> **impostare TST-1GDT**

Questo comando usa GST per indicare l'ora solare tedesca, presuppone che l'ora UTC sia un'ora indietro rispetto alla Germania (o, in altre parole, che la Germania sia un'ora avanti rispetto all'ora UTC) e presuppone che la Germania osservi l'ora legale.

Se non è impostato il valore **T,** **_tzset** tenta di utilizzare le informazioni sul fuso orario specificate dal sistema operativo. Nel sistema operativo Windows, queste informazioni vengono specificate nell'applicazione Data/Ora nel Pannello di controllo. Se **_tzset** non è in grado di ottenere queste informazioni, utilizza PST8PDT per impostazione predefinita, che indica il fuso orario del Pacifico.

In base al valore della variabile di ambiente **T,** alle variabili globali **_daylight**, **_timezone**e **_tzname** quando viene chiamato **_tzset:**

|Variabile globale|Descrizione|Valore predefinito|
|---------------------|-----------------|-------------------|
|**_daylight**|Valore diverso da zero se un fuso orario di ora legale è specificato nell'impostazione **t;** in caso contrario, 0.|1|
|**_timezone**|La differenza in secondi tra l'ora locale e l'ora UTC.|28800 (28800 secondi equivale a 8 ore)|
|**_tzname**[0]|Valore stringa del nome del fuso orario dalla variabile di ambiente **T;** vuoto se non è stato impostato **.**|PST|
|**_tzname**[1]|Valore stringa del fuso orario di ora legale; se il fuso orario dell'ora legale viene omesso dalla variabile ambientale **T.**|PDT|

I valori predefiniti riportati nella tabella precedente per **_daylight** e la matrice **_tzname** corrispondono a "PST8PDT". Se la zona dell'ora legale viene omessa dalla variabile di ambiente **T,** il valore di **_daylight** è 0 e le funzioni [_ftime](ftime-ftime32-ftime64.md), [gmtime](gmtime-gmtime32-gmtime64.md)e [localtime](localtime-localtime32-localtime64.md) restituiscono 0 per i relativi flag DST.

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa impostazione, vedere [Stato globale in CRT](../global-state.md).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_tzset**|\<time.h>|

La funzione **_tzset** è specifica di Microsoft.The can function is Microsoft-specific. Per altre informazioni, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

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

[Gestione del tempo](../../c-runtime-library/time-management.md)<br/>
[asctime, _wasctime](asctime-wasctime.md)<br/>
[_ftime, _ftime32, _ftime64](ftime-ftime32-ftime64.md)<br/>
[gmtime, _gmtime32, _gmtime64](gmtime-gmtime32-gmtime64.md)<br/>
[localtime, _localtime32, _localtime64](localtime-localtime32-localtime64.md)<br/>
[time, _time32, _time64](time-time32-time64.md)<br/>
[_utime, _utime32, _utime64, _wutime, _wutime32, _wutime64](utime-utime32-utime64-wutime-wutime32-wutime64.md)<br/>
