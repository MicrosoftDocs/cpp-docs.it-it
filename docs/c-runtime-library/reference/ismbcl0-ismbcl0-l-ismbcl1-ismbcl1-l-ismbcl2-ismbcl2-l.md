---
title: _ismbcl0, _ismbcl0_l, _ismbcl1, _ismbcl1_l, _ismbcl2, _ismbcl2_l
ms.date: 11/04/2016
apiname:
- _ismbcl2
- _ismbcl1
- _ismbcl0
- _ismbcl2_l
- _ismbcl1_l
- _ismbcl0_l
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
- api-ms-win-crt-multibyte-l1-1-0.dll
apitype: DLLExport
f1_keywords:
- ismbcl0
- _ismbcl1_l
- _ismbcl0
- ismbcl1
- ismbcl0_l
- _ismbcl2_l
- ismbcl2
- ismbcl1_l
- _ismbcl1
- _ismbcl0_l
- _ismbcl2
- ismbcl2_l
helpviewer_keywords:
- _ismbcl0_l function
- _ismbcl2 function
- _ismbcl1_l function
- ismbcl2 function
- _ismbcl1 function
- ismbcl0_l function
- ismbcl2_l function
- ismbcl1_l function
- ismbcl0 function
- ismbcl1 function
- _ismbcl2_l function
- _ismbcl0 function
ms.assetid: ee15ebd1-462c-4a43-95f3-6735836d626a
ms.openlocfilehash: b4ea5a165e5fb06229c3fdf69c53cdf82c4f35f4
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50430888"
---
# <a name="ismbcl0-ismbcl0l-ismbcl1-ismbcl1l-ismbcl2-ismbcl2l"></a>_ismbcl0, _ismbcl0_l, _ismbcl1, _ismbcl1_l, _ismbcl2, _ismbcl2_l

**Funzioni specifiche per la tabella codici 932**, usando le impostazioni locali correnti o una categoria di stato di conversione LC_CTYPE specificata.

> [!IMPORTANT]
> Non è possibile usare questa API nelle applicazioni eseguite in Windows Runtime. Per altre informazioni, vedere [Funzioni CRT non supportate nelle app della piattaforma UWP (Universal Windows Platform)](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).

## <a name="syntax"></a>Sintassi

```C
int _ismbcl0(
   unsigned int c
);
int _ismbcl0_l(
   unsigned int c,
   _locale_t locale
);
int _ismbcl1(
   unsigned int c
);
int _ismbcl1_l(
   unsigned int c ,
   _locale_t locale
);
int _ismbcl2(
   unsigned int c
);
int _ismbcl2_l(
   unsigned int c,
   _locale_t locale
);
```

### <a name="parameters"></a>Parametri

*c*<br/>
Carattere da testare.

*locale*<br/>
Impostazioni locali da usare.

## <a name="return-value"></a>Valore restituito

Ognuna di queste routine restituisce un valore diverso da zero se il carattere soddisfa la condizione di test oppure 0 in caso contrario. Se *c* < = 255 ed è presente un corrispondente **ismbb** routine (ad esempio, **ismbcalnum** corrisponde al **ismbbalnum**), il il risultato è il valore restituito dell'oggetto corrispondente **ismbb** routine.

## <a name="remarks"></a>Note

Ognuna di queste funzioni testa una particolare condizione su un determinato carattere multibyte.

La configurazione dell'impostazione della categoria **LC_CTYPE** delle impostazioni locali influisce sul valore di output. Per altre informazioni, vedere [setlocale](setlocale-wsetlocale.md). Le versioni di queste funzioni senza il suffisso **_l** usano le impostazioni locali correnti per questo comportamento dipendente dalle impostazioni locali. Le versioni con il suffisso **_l** sono identiche, ma usano il parametro passato alle impostazioni locali. Per altre informazioni, vedere [Locale](../../c-runtime-library/locale.md).

|Routine|Condizione di test (solo per la tabella codici 932)|
|-------------|-------------------------------------------|
|**_ismbcl0**|JIS non Kanji: 0x8140< < =*c*< lt;=0x889e.|
|**_ismbcl0_l**|JIS non Kanji: 0x8140< < =*c*< lt;=0x889e.|
|**_ismbcl1**|JIS livello 1: 0x889f< < =*c*< lt;=0x9872.|
|**_ismbcl1_l**|JIS livello 1: 0x889f< < =*c*< lt;=0x9872.|
|**_ismbcl2**|JIS livello 2: 0x989f< < =*c*< lt;=0xeaa4.|
|**_ismbcl2_l**|JIS livello 2: 0x989f< < =*c*< lt;=0xeaa4.|

Le funzioni verificano che il valore specificato *c* corrispondenze le condizioni di test descritti in precedenza, ma non verifica *c* è un carattere multibyte valido. Se il byte più basso è compreso tra 0x00 - 0x3F, 0x7F, o 0xFD - 0xFF, queste funzioni restituiscono un valore diverso da zero, indicando che il carattere soddisfa la condizione di test. Usare [_ismbbtrail](ismbbtrail-ismbbtrail-l.md) per verificare se il carattere multibyte è definito.

**Fine della sezione specifica per la tabella codici 932**

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_ismbcl0**|\<mbstring.h>|
|**_ismbcl0_l**|\<mbstring.h>|
|**_ismbcl1**|\<mbstring.h>|
|**_ismbcl1_l**|\<mbstring.h>|
|**_ismbcl2**|\<mbstring.h>|
|**_ismbcl2_l**|\<mbstring.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[Classificazione di caratteri](../../c-runtime-library/character-classification.md)<br/>
[Routine _ismbc](../../c-runtime-library/ismbc-routines.md)<br/>
[Routine is, isw](../../c-runtime-library/is-isw-routines.md)<br/>
