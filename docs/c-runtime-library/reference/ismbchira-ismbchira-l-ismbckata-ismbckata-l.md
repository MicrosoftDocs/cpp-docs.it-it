---
title: _ismbchira, _ismbchira_l, _ismbckata, _ismbckata_l
ms.date: 11/04/2016
api_name:
- _ismbckata
- _ismbchira_l
- _ismbchira
- _ismbckata_l
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
- api-ms-win-crt-multibyte-l1-1-0.dll
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- ismbckata_l
- _ismbckata_l
- ismbckata
- ismbchira
- _ismbckata
- ismbchira_l
- _ismbchira_l
- _ismbchira
helpviewer_keywords:
- _ismbckata function
- _ismbchira function
- _ismbckata_l function
- Katakana
- ismbchira function
- _ismbchira_l function
- ismbchira_l function
- ismbdkata_l function
- Hiragana
- ismbckata function
ms.assetid: 2db388a2-be31-489b-81c8-f6bf3f0582d3
ms.openlocfilehash: 13f66c7450e05240f8bad6034bd56f5da6de20c0
ms.sourcegitcommit: f19474151276d47da77cdfd20df53128fdcc3ea7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/12/2019
ms.locfileid: "70953880"
---
# <a name="_ismbchira-_ismbchira_l-_ismbckata-_ismbckata_l"></a>_ismbchira, _ismbchira_l, _ismbckata, _ismbckata_l

**Funzioni specifiche per la tabella codici 932**

> [!IMPORTANT]
> Non è possibile usare questa API nelle applicazioni eseguite in Windows Runtime. Per altre informazioni, vedere [Funzioni CRT non supportate nelle app della piattaforma UWP (Universal Windows Platform)](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).

## <a name="syntax"></a>Sintassi

```C
int _ismbchira(
   unsigned int c
);
int _ismbchira_l(
   unsigned int c,
   _locale_t locale
);
int _ismbckata(
   unsigned int c
);
int _ismbckata_l(
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

Ognuna di queste routine restituisce un valore diverso da zero se il carattere soddisfa la condizione di test oppure 0 in caso contrario. Se *c* < = 255 ed è presente una routine **_ismbb** corrispondente (ad esempio, **_ismbcalnum** corrisponde a **_ismbbalnum**), il risultato è il valore restituito della routine **_ismbb** corrispondente.

## <a name="remarks"></a>Note

Ognuna di queste funzioni testa una particolare condizione su un determinato carattere multibyte.

Le versioni di queste funzioni con il suffisso **suffisso** sono identiche, ad eccezione del fatto che usano le impostazioni locali passate anziché le impostazioni locali correnti per il comportamento dipendente dalle impostazioni locali. Per altre informazioni, vedere [Locale](../../c-runtime-library/locale.md).

|Routine|Condizione di test (solo per la tabella codici 932)|
|-------------|-------------------------------------------|
|**_ismbchira**|Hiragana a byte doppio: 0x829F < =*c*< = 0x82F1.|
|**_ismbchira_l**|Hiragana a byte doppio: 0x829F < =*c*< = 0x82F1.|
|**_ismbckata**|Katakana a byte doppio: 0x8340 < =*c*< = 0x8396.|
|**_ismbckata_l**|Katakana a byte doppio: 0x8340 < =*c*< = 0x8396.|

**Fine della sezione specifica per la tabella codici 932**

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_ismbchira**|\<mbstring.h>|
|**_ismbchira_l**|\<mbstring.h>|
|**_ismbckata**|\<mbstring.h>|
|**_ismbckata_l**|\<mbstring.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[Classificazione di caratteri](../../c-runtime-library/character-classification.md)<br/>
[Routine _ismbc](../../c-runtime-library/ismbc-routines.md)<br/>
[Routine is, isw](../../c-runtime-library/is-isw-routines.md)<br/>
[Impostazioni locali](../../c-runtime-library/locale.md)<br/>
[Interpretazione di sequenze di caratteri multibyte](../../c-runtime-library/interpretation-of-multibyte-character-sequences.md)<br/>
