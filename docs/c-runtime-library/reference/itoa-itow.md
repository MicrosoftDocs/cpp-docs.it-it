---
title: itoa, funzioni itow | Documenti Microsoft
ms.custom: ''
ms.date: 03/21/2018
ms.technology:
- cpp-standard-libraries
ms.topic: reference
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
dev_langs:
- C++
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
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 95aa140eae6d8a06eff84d03cbb562444c3bd552
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="itoa-itoa-ltoa-ltoa-ultoa-ultoa-i64toa-ui64toa-itow-ltow-ultow-i64tow-ui64tow"></a>itoa itoa, ltoa, ltoa, ultoa, ultoa, _i64toa, _ui64toa, itow, ltow, ultow, _i64tow, _ui64tow

Converte un intero in una stringa. Versioni più sicure di queste funzioni sono disponibili; vedere [itoa_s, le funzioni itow_s](itoa-s-itow-s.md).

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

*valore*<br/>
Numero da convertire.

*buffer*<br/>
Buffer che contiene il risultato della conversione.

*radix*<br/>
La base da utilizzare per la conversione del *valore*, che deve essere compreso tra 2 e 36.

*size*<br/>
Lunghezza del buffer in unità del tipo di carattere. Questo parametro viene dedotta dal *buffer* argomento in C++.

## <a name="return-value"></a>Valore restituito

Ognuna di queste funzioni restituisce un puntatore a *buffer*. Non vi è restituzione di errori.

## <a name="remarks"></a>Note

Il **itoa**, **ltoa**, **ultoa**, **_i64toa**, e **_ui64toa** funzioni convertono le cifre di il dato *valore* argomento in una stringa di caratteri con terminazione null e il risultato di archivio (fino a 33 caratteri per **itoa**, **ltoa**, e  **ultoa**e i 65 anni per **_i64toa** e **_ui64toa**) in *buffer*. Se *radice* è uguale a 10 e *valore* è negativo, il primo carattere della stringa stored è il segno meno (**-**). Il **itow**, **ltow**, **ultow**, **_i64tow**, e **_ui64tow** funzioni sono caratteri wide versioni di **itoa**, **ltoa**, **ultoa**, **_i64toa**, e **_ui64toa**, rispettivamente.

> [!IMPORTANT]
> Queste funzioni è possono scrivere oltre la fine di un buffer troppo piccolo. Per evitare sovraccarichi del buffer, assicurarsi che *buffer* è sufficientemente grande da contenere le cifre convertite più il carattere null finale e un carattere di segno. Un utilizzo improprio di queste funzioni può causare seri problemi di protezione nel codice.

A causa del loro potenziale di problemi di sicurezza, per impostazione predefinita, queste funzioni causano l'avviso di deprecazione [l'avviso C4996](../../error-messages/compiler-warnings/compiler-warning-level-3-c4996.md): **questa funzione o variabile potrebbe non essere sicuro. Provare a usare** *safe_function* **invece. Per disabilitare la deprecazione, usare CRT_SECURE_NO_WARNINGS.** Si consiglia di modificare il codice di origine per utilizzare il *safe_function* suggeriti dal messaggio di avviso. Le funzioni più sicure non scrivono più caratteri rispetto alla dimensione del buffer specificati. Per altre informazioni, vedere [itoa_s, le funzioni itow_s](itoa-s-itow-s.md).

Per utilizzare queste funzioni senza l'avviso di deprecazione, definire il **CRT_SECURE_NO_WARNINGS** macro del preprocessore prima di includere le intestazioni CRT. È possibile farlo nella riga di comando in un prompt dei comandi per sviluppatori aggiungendo il **/D_CRT_SECURE_NO_WARNINGS** l'opzione del compilatore per il **cl** comando. In caso contrario, definire la macro nei file di origine. Se si usano intestazioni precompilate, definire la macro nella parte superiore dell'intestazione precompilata includere file, in genere stdafx. h. Per definire la macro nel codice sorgente, utilizzare un **#define** direttiva prima di includere qualsiasi intestazione di CRT, come nel seguente esempio:

```C
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdlib.h>
```

In C++, queste funzioni presentano overload di modello che richiamano le relative controparti più sicure. Per altre informazioni, vedere [Secure Template Overloads](../../c-runtime-library/secure-template-overloads.md).

I nomi Posix **itoa**, **ltoa**, e **ultoa** esiste come alias per il **itoa**, **ltoa**, e **ultoa** funzioni. I nomi Posix sono deprecati perché non seguono le convenzioni di denominazione (funzione) specifico dell'implementazione di ISO C. Per impostazione predefinita, queste funzioni causano l'avviso di deprecazione [l'avviso C4996](../../error-messages/compiler-warnings/compiler-warning-level-3-c4996.md): **nome il POSIX per questo elemento è stato deprecato. Usare invece il nome conforme allo standard ISO C e C++:** *nuovo_nome*. Si consiglia di modificare il codice sorgente per utilizzare le versioni più sicure di queste funzioni **itoa_s**, **ltoa_s**, o **ultoa_s**. Per altre informazioni, vedere [itoa_s, le funzioni itow_s](itoa-s-itow-s.md).

Per la portabilità del codice sorgente, è preferibile mantenere i nomi Posix nel codice. Per utilizzare queste funzioni senza l'avviso di deprecazione, definire sia il **_CRT_NONSTDC_NO_WARNINGS** e **CRT_SECURE_NO_WARNINGS** le macro del preprocessore prima di includere le intestazioni CRT. È possibile farlo nella riga di comando in un prompt dei comandi per sviluppatori aggiungendo il **/D_CRT_SECURE_NO_WARNINGS** e **/D_CRT_NONSTDC_NO_WARNINGS** opzioni del compilatore per il **cl**comando. In caso contrario, definire le macro nei file di origine. Se si usano intestazioni precompilate, definire le macro nella parte superiore dell'intestazione precompilata includono file, in genere stdafx. h. Per definire le macro nel codice sorgente, utilizzare **#define** direttive prima di includere qualsiasi intestazione di CRT, come nel seguente esempio:

```C
#define _CRT_NONSTDC_NO_WARNINGS 1
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdlib.h>
```

### <a name="maximum-conversion-count-macros"></a>Macro di conversione massima di conteggio

Per facilitare la creazione di un buffer sicuro per le conversioni, la libreria CRT include alcune macro pratico. Questi definiscono le dimensioni del buffer necessarie per convertire il valore possibile più lungo di ogni tipo di integer, inclusi il carattere di terminazione null e firmare carattere, per diverse basi comuni. Per assicurarsi che il buffer di conversione sia sufficiente per la ricezione di qualsiasi conversione nella base specificata da *radice*, utilizzare uno di questi definite macro quando il buffer. Ciò contribuisce a evitare sovraccarichi del buffer quando si converte i tipi integrali in stringhe. Queste macro sono definite quando si include STDLIB. h o WCHAR. h nell'origine.

Per utilizzare una di queste macro in una funzione di conversione di stringhe, dichiarare il buffer di conversione del tipo di carattere appropriato e usare il valore di macro per il tipo integer e base come la dimensione del buffer. Questa tabella sono elencate le macro che sono appropriate per ogni funzione per le basi elencate:

||||
|-|-|-|
|Funzioni|radix|Macro|
|**itoa**, **itow**|16<br/>10<br/>8<br/>2|**_MAX_ITOSTR_BASE16_COUNT**<br/>**_MAX_ITOSTR_BASE10_COUNT**<br/>**_MAX_ITOSTR_BASE8_COUNT**<br/>**_MAX_ITOSTR_BASE2_COUNT**|
|**ltoa**, **ltow**|16<br/>10<br/>8<br/>2|**_MAX_LTOSTR_BASE16_COUNT**<br/>**_MAX_LTOSTR_BASE10_COUNT**<br/>**_MAX_LTOSTR_BASE8_COUNT**<br/>**_MAX_LTOSTR_BASE2_COUNT**|
|**ultoa**, **ultow**|16<br/>10<br/>8<br/>2|**_MAX_ULTOSTR_BASE16_COUNT**<br/>**_MAX_ULTOSTR_BASE10_COUNT**<br/>**_MAX_ULTOSTR_BASE8_COUNT**<br/>**_MAX_ULTOSTR_BASE2_COUNT**|
|**_i64toa**, **_i64tow**|16<br/>10<br/>8<br/>2|**_MAX_I64TOSTR_BASE16_COUNT**<br/>**_MAX_I64TOSTR_BASE10_COUNT**<br/>**_MAX_I64TOSTR_BASE8_COUNT**<br/>**_MAX_I64TOSTR_BASE2_COUNT**|
|**_ui64toa**, **_ui64tow**|16<br/>10<br/>8<br/>2|**_MAX_U64TOSTR_BASE16_COUNT**<br/>**_MAX_U64TOSTR_BASE10_COUNT**<br/>**_MAX_U64TOSTR_BASE8_COUNT**<br/>**_MAX_U64TOSTR_BASE2_COUNT**|

Questo esempio Usa una macro di conteggio di conversione per definire un buffer sufficientemente grande da contenere un **long long senza segno** in base 2:

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
|**itot**|**_itoa**|**_itoa**|**_itow**|
|**_ltot**|**_ltoa**|**_ltoa**|**_ltow**|
|**ultot**|**_ultoa**|**_ultoa**|**_ultow**|
|**_i64tot**|**_i64toa**|**_i64toa**|**_i64tow**|
|**_ui64tot**|**_ui64toa**|**_ui64toa**|**_ui64tow**|

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**itoa**, **ltoa**, **ultoa**|\<stdlib.h>|
|**itoa**, **ltoa**, **ultoa**, **_i64toa**, **_ui64toa**|\<stdlib.h>|
|**itow**, **ltow**, **ultow**, **_i64tow**, **_ui64tow**|\<stdlib.h> or \<wchar.h>|

Queste funzioni e macro sono specifiche di Microsoft. Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

In questo esempio illustra l'uso di alcune delle funzioni di conversione di integer. Si noti l'uso della **CRT_SECURE_NO_WARNINGS** macro Disattiva avviso C4996.

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
[itoa_s, le funzioni itow_s](itoa-s-itow-s.md)<br/>
