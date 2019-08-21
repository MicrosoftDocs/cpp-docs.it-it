---
title: funzioni _itoa, _itow
ms.date: 08/19/2019
apiname:
- itoa
- _itoa
- ltoa
- _ltoa
- ultoa
- _ultoa
- _i64toa
- _ui64toa
- _itow
- _ltow
- _ultow
- _i64tow
- _ui64tow
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
- api-ms-win-crt-convert-l1-1-0.dll
- ntoskrnl.exe
apitype: DLLExport
f1_keywords:
- _itoa
- _ltoa
- _ultoa
- _i64toa
- _ui64toa
- _itow
- _ltow
- _ultow
- _i64tow
- _ui64tow
- itoa
- ltoa
- ultoa
- i64toa
- ui64toa
- itow
- ltow
- ultow
- i64tow
- ui64tow
- itot
- _itot
- ltot
- _ltot
- ultot
- _ultot
- i64tot
- _i64tot
- ui64tot
- _ui64tot
- _MAX_ITOSTR_BASE16_COUNT
- _MAX_ITOSTR_BASE10_COUNT
- _MAX_ITOSTR_BASE8_COUNT
- _MAX_ITOSTR_BASE2_COUNT
- _MAX_LTOSTR_BASE16_COUNT
- _MAX_LTOSTR_BASE10_COUNT
- _MAX_LTOSTR_BASE8_COUNT
- _MAX_LTOSTR_BASE2_COUNT
- _MAX_ULTOSTR_BASE16_COUNT
- _MAX_ULTOSTR_BASE10_COUNT
- _MAX_ULTOSTR_BASE8_COUNT
- _MAX_ULTOSTR_BASE2_COUNT
- _MAX_I64TOSTR_BASE16_COUNT
- _MAX_I64TOSTR_BASE10_COUNT
- _MAX_I64TOSTR_BASE8_COUNT
- _MAX_I64TOSTR_BASE2_COUNT
- _MAX_U64TOSTR_BASE16_COUNT
- _MAX_U64TOSTR_BASE10_COUNT
- _MAX_U64TOSTR_BASE8_COUNT
- _MAX_U64TOSTR_BASE2_COUNT
helpviewer_keywords:
- _itot function
- ui64toa function
- _ui64toa function
- converting integers
- itot function
- _i64tow function
- _i64toa function
- _itow function
- ui64tow function
- integers, converting
- itoa function
- _ui64tow function
- i64tow function
- itow function
- i64toa function
- converting numbers, to strings
- _itoa function
ms.assetid: 46592a00-77bb-4e73-98c0-bf629d96cea6
ms.openlocfilehash: afe7a190fe6630e3fbcb42d0d782e050952f56fc
ms.sourcegitcommit: 9d4ffb8e6e0d70520a1e1a77805785878d445b8a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/20/2019
ms.locfileid: "69630400"
---
# <a name="itoa-_itoa-ltoa-_ltoa-ultoa-_ultoa-_i64toa-_ui64toa-_itow-_ltow-_ultow-_i64tow-_ui64tow"></a>itoa, _itoa, ltoa, _ltoa, ultoa, _ultoa, _i64toa, _ui64toa, _itow, _ltow, _ultow, _i64tow, _ui64tow

Converte un intero in una stringa. Sono disponibili versioni più sicure di queste funzioni. vedere [_itoa_s, funzioni _itow_s](itoa-s-itow-s.md).

## <a name="syntax"></a>Sintassi

```C
char * _itoa( int value, char *buffer, int radix );
char * _ltoa( long value, char *buffer, int radix );
char * _ultoa( unsigned long value, char *buffer, int radix );
char * _i64toa( long long value, char *buffer, int radix );
char * _ui64toa( unsigned long long value, char *buffer, int radix );

wchar_t * _itow( int value, wchar_t *buffer, int radix );
wchar_t * _ltow( long value, wchar_t *buffer, int radix );
wchar_t * _ultow( unsigned long value, wchar_t *buffer, int radix );
wchar_t * _i64tow( long long value, wchar_t *buffer, int radix );
wchar_t * _ui64tow( unsigned long long value, wchar_t *buffer, int radix );

// These Posix versions of the functions have deprecated names:
char * itoa( int value, char *buffer, int radix );
char * ltoa( long value, char *buffer, int radix );
char * ultoa( unsigned long value, char *buffer, int radix );

// The following template functions are C++ only:
template <size_t size>
char *_itoa( int value, char (&buffer)[size], int radix );

template <size_t size>
char *_itoa( long value, char (&buffer)[size], int radix );

template <size_t size>
char *_itoa( unsigned long value, char (&buffer)[size], int radix );

template <size_t size>
char *_i64toa( long long value, char (&buffer)[size], int radix );

template <size_t size>
char * _ui64toa( unsigned long long value, char (&buffer)[size], int radix );

template <size_t size>
wchar_t * _itow( int value, wchar_t (&buffer)[size], int radix );

template <size_t size>
wchar_t * _ltow( long value, wchar_t (&buffer)[size], int radix );

template <size_t size>
wchar_t * _ultow( unsigned long value, wchar_t (&buffer)[size], int radix );

template <size_t size>
wchar_t * _i64tow( long long value, wchar_t (&buffer)[size], int radix );

template <size_t size>
wchar_t * _ui64tow( unsigned long long value, wchar_t (&buffer)[size],
   int radix );
```

### <a name="parameters"></a>Parametri

*value*<br/>
Numero da convertire.

*buffer*<br/>
Buffer che include il risultato della conversione.

*radix*<br/>
Base da utilizzare per la conversione del *valore*, che deve essere compreso nell'intervallo 2-36.

*size*<br/>
Lunghezza del buffer in unità del tipo di carattere. Questo parametro viene dedotto dall'argomento del *buffer* in C++.

## <a name="return-value"></a>Valore restituito

Ognuna di queste funzioni restituisce un puntatore al *buffer*. Non vi è restituzione di errori.

## <a name="remarks"></a>Note

Le funzioni **_itoa**, **_ltoa**, **_ultoa**, **_i64toa**e **_ui64toa** convertono le cifre dell'argomento *valore* specificato in una stringa di caratteri con terminazione null e archiviano il risultato (fino a 33 caratteri per **_itoa** , **_ltoa**e **_ultoa**e 65 per **_i64toa** e **_ui64toa**) nel *buffer*. Se la *radice* è uguale a 10 e il *valore* è negativo, il primo carattere della stringa archiviata è il **-** segno meno (). Le funzioni **_itow**, **_ltow**, **_ultow**, **_i64tow**e **_ui64tow** sono rispettivamente versioni a caratteri wide di **_itoa**, **_ltoa**, **_ultoa**, **_i64toa**e **_ui64toa**.

> [!IMPORTANT]
> Queste funzioni possono scrivere oltre la fine di un buffer troppo piccolo. Per evitare sovraccarichi del buffer, verificare che il *buffer* sia sufficientemente grande da mantenere le cifre convertite più il carattere null finale e un carattere di segno. L'utilizzo improprio di queste funzioni può causare gravi problemi di sicurezza nel codice.

Per impostazione predefinita, a causa del potenziale problema di sicurezza, queste funzioni causano l'avviso di deprecazione [C4996](../../error-messages/compiler-warnings/compiler-warning-level-3-c4996.md): **Questa funzione o variabile potrebbe non essere sicura. In alternativa** , è consigliabile usare *safe_function* **. Per disabilitare la deprecazione, usare _CRT_SECURE_NO_WARNINGS.** Si consiglia di modificare il codice sorgente per usare il *safe_function* suggerito dal messaggio di avviso. Le funzioni più sicure non scrivono più caratteri della dimensione del buffer specificata. Per ulteriori informazioni, vedere [_itoa_s, funzioni _itow_s](itoa-s-itow-s.md).

Per usare queste funzioni senza l'avviso di deprecazione, definire la macro del preprocessore **_CRT_SECURE_NO_WARNINGS** prima di includere le intestazioni CRT. Per eseguire questa operazione, è possibile usare la riga di comando in un prompt dei comandi per gli sviluppatori aggiungendo l'opzione del compilatore **/D_CRT_SECURE_NO_WARNINGS** al comando **CL** . In caso contrario, definire la macro nei file di origine. Se si usano le intestazioni precompilate, definire la macro nella parte superiore del file di inclusione dell'intestazione precompilata, *PCH. h* (*stdafx. h* in Visual Studio 2017 e versioni precedenti). Per definire la macro nel codice sorgente, usare una direttiva **#define** prima di includere qualsiasi intestazione CRT, come nell'esempio seguente:

```C
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdlib.h>
```

In C++queste funzioni presentano overload di modello che richiamano le relative controparti più sicure. Per altre informazioni, vedere [Secure Template Overloads](../../c-runtime-library/secure-template-overloads.md).

I nomi POSIX **ITOA**, **ltoa**e **ultoa** esistono come alias per le funzioni **_itoa**, **_ltoa**e **_ultoa** . I nomi POSIX sono deprecati perché non seguono le convenzioni del nome di funzione specifiche dell'implementazione di ISO C. Per impostazione predefinita, queste funzioni generano un avviso di deprecazione [C4996](../../error-messages/compiler-warnings/compiler-warning-level-3-c4996.md): **Il nome POSIX per questo elemento è deprecato. Usare invece ISO C e C++ il nome conforme:** *new_name*. Si consiglia di modificare il codice sorgente per usare le versioni più sicure di queste funzioni, **_itoa_s**, **_ltoa_s**o **_ultoa_s**. Per ulteriori informazioni, vedere [_itoa_s, funzioni _itow_s](itoa-s-itow-s.md).

Per la portabilità del codice sorgente, può essere preferibile mantenere i nomi POSIX nel codice. Per usare queste funzioni senza l'avviso di deprecazione, definire entrambe le macro del preprocessore **_CRT_NONSTDC_NO_WARNINGS** e **_CRT_SECURE_NO_WARNINGS** prima di includere le intestazioni CRT. Per eseguire questa operazione, è possibile usare la riga di comando in un prompt dei comandi per gli sviluppatori aggiungendo le opzioni del compilatore **/D_CRT_SECURE_NO_WARNINGS** e **/D_CRT_NONSTDC_NO_WARNINGS** al comando **CL** . In caso contrario, definire le macro nei file di origine. Se si usano le intestazioni precompilate, definire le macro nella parte superiore del file di inclusione dell'intestazione precompilata. Per definire le macro nel codice sorgente, usare **#define** direttive prima di includere qualsiasi intestazione CRT, come nell'esempio seguente:

```C
#define _CRT_NONSTDC_NO_WARNINGS 1
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdlib.h>
```

### <a name="maximum-conversion-count-macros"></a>Numero massimo di macro di conversione

Per semplificare la creazione di buffer protetti per le conversioni, CRT include alcune utili macro. Definiscono le dimensioni del buffer necessarie per convertire il valore più lungo possibile di ogni tipo Integer, inclusi il carattere di terminazione null e il carattere di segno, per diverse basi comuni. Per assicurarsi che il buffer di conversione sia sufficientemente grande da ricevere qualsiasi conversione nella base specificata dalla *radice*, utilizzare una di queste macro definite quando si alloca il buffer. Ciò consente di evitare errori di sovraccarico del buffer quando si convertono i tipi integrali in stringhe. Queste macro sono definite quando si include stdlib. h o WCHAR. h nell'origine.

Per usare una di queste macro in una funzione di conversione di stringhe, dichiarare il buffer di conversione del tipo di carattere appropriato e usare il valore della macro per il tipo integer e la base come dimensione del buffer. Questa tabella elenca le macro appropriate per ogni funzione per le basi elencate:

||||
|-|-|-|
|Funzioni|radix|Macro|
|**_itoa**, **_itow**|16<br/>10<br/>8<br/>2|**_MAX_ITOSTR_BASE16_COUNT**<br/>**_MAX_ITOSTR_BASE10_COUNT**<br/>**_MAX_ITOSTR_BASE8_COUNT**<br/>**_MAX_ITOSTR_BASE2_COUNT**|
|**_ltoa**, **_ltow**|16<br/>10<br/>8<br/>2|**_MAX_LTOSTR_BASE16_COUNT**<br/>**_MAX_LTOSTR_BASE10_COUNT**<br/>**_MAX_LTOSTR_BASE8_COUNT**<br/>**_MAX_LTOSTR_BASE2_COUNT**|
|**_ultoa**, **_ultow**|16<br/>10<br/>8<br/>2|**_MAX_ULTOSTR_BASE16_COUNT**<br/>**_MAX_ULTOSTR_BASE10_COUNT**<br/>**_MAX_ULTOSTR_BASE8_COUNT**<br/>**_MAX_ULTOSTR_BASE2_COUNT**|
|**_i64toa**, **_i64tow**|16<br/>10<br/>8<br/>2|**_MAX_I64TOSTR_BASE16_COUNT**<br/>**_MAX_I64TOSTR_BASE10_COUNT**<br/>**_MAX_I64TOSTR_BASE8_COUNT**<br/>**_MAX_I64TOSTR_BASE2_COUNT**|
|**_ui64toa**, **_ui64tow**|16<br/>10<br/>8<br/>2|**_MAX_U64TOSTR_BASE16_COUNT**<br/>**_MAX_U64TOSTR_BASE10_COUNT**<br/>**_MAX_U64TOSTR_BASE8_COUNT**<br/>**_MAX_U64TOSTR_BASE2_COUNT**|

In questo esempio viene utilizzata una macro del conteggio delle conversioni per definire un buffer sufficientemente grande da contenere un Long Long **senza segno** in base 2:

```cpp
#include <wchar.h>
#include <iostream>
int main()
{
    wchar_t buffer[_MAX_U64TOSTR_BASE2_COUNT];
    std:wcout << _ui64tow(0xFFFFFFFFFFFFFFFFull, buffer, 2) << std::endl;
}
```

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine Tchar.h|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|--------------------------------------|--------------------|-----------------------|
|**_itot**|**_itoa**|**_itoa**|**_itow**|
|**_ltot**|**_ltoa**|**_ltoa**|**_ltow**|
|**_ultot**|**_ultoa**|**_ultoa**|**_ultow**|
|**_i64tot**|**_i64toa**|**_i64toa**|**_i64tow**|
|**_ui64tot**|**_ui64toa**|**_ui64toa**|**_ui64tow**|

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**itoa**, **ltoa**, **ultoa**|\<stdlib.h>|
|**_itoa**, **_ltoa**, **_ultoa**, **_i64toa**, **_ui64toa**|\<stdlib.h>|
|**_itow**, **_ltow**, **_ultow**, **_i64tow**, **_ui64tow**|\<stdlib.h> or \<wchar.h>|

Queste funzioni e macro sono specifiche di Microsoft. Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

In questo esempio viene illustrato l'utilizzo di alcune funzioni di conversione di tipo Integer. Si noti l'uso della macro **_CRT_SECURE_NO_WARNINGS** per silenziare C4996 di avviso.

```C
// crt_itoa.c
// Compile by using: cl /W4 crt_itoa.c
// This program makes use of the _itoa functions
// in various examples.

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>      // for printf
#include <string.h>     // for strnlen
#include <stdlib.h>     // for _countof, _itoa fns, _MAX_COUNT macros

int main(void)
{
    char buffer[_MAX_U64TOSTR_BASE2_COUNT];
    int r;

    for (r = 10; r >= 2; --r)
    {
        _itoa(-1, buffer, r);
        printf("base %d: %s (%d chars)\n", r, buffer,
            strnlen(buffer, _countof(buffer)));
    }
    printf("\n");

    for (r = 10; r >= 2; --r)
    {
        _i64toa(-1LL, buffer, r);
        printf("base %d: %s (%d chars)\n", r, buffer,
            strnlen(buffer, _countof(buffer)));
    }
    printf("\n");

    for (r = 10; r >= 2; --r)
    {
        _ui64toa(0xffffffffffffffffULL, buffer, r);
        printf("base %d: %s (%d chars)\n", r, buffer,
            strnlen(buffer, _countof(buffer)));
    }
}
```

```Output
base 10: -1 (2 chars)
base 9: 12068657453 (11 chars)
base 8: 37777777777 (11 chars)
base 7: 211301422353 (12 chars)
base 6: 1550104015503 (13 chars)
base 5: 32244002423140 (14 chars)
base 4: 3333333333333333 (16 chars)
base 3: 102002022201221111210 (21 chars)
base 2: 11111111111111111111111111111111 (32 chars)

base 10: -1 (2 chars)
base 9: 145808576354216723756 (21 chars)
base 8: 1777777777777777777777 (22 chars)
base 7: 45012021522523134134601 (23 chars)
base 6: 3520522010102100444244423 (25 chars)
base 5: 2214220303114400424121122430 (28 chars)
base 4: 33333333333333333333333333333333 (32 chars)
base 3: 11112220022122120101211020120210210211220 (41 chars)
base 2: 1111111111111111111111111111111111111111111111111111111111111111 (64 chars)

base 10: 18446744073709551615 (20 chars)
base 9: 145808576354216723756 (21 chars)
base 8: 1777777777777777777777 (22 chars)
base 7: 45012021522523134134601 (23 chars)
base 6: 3520522010102100444244423 (25 chars)
base 5: 2214220303114400424121122430 (28 chars)
base 4: 33333333333333333333333333333333 (32 chars)
base 3: 11112220022122120101211020120210210211220 (41 chars)
base 2: 1111111111111111111111111111111111111111111111111111111111111111 (64 chars)
```

## <a name="see-also"></a>Vedere anche

[Conversione dei dati](../../c-runtime-library/data-conversion.md)<br/>
[funzioni _itoa_s, _itow_s](itoa-s-itow-s.md)<br/>
