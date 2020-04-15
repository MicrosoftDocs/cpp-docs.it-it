---
title: _ismbclower, _ismbclower_l, _ismbcupper, _ismbcupper_l
ms.date: 4/2/2020
api_name:
- _ismbclower
- _ismbclower_l
- _ismbcupper_l
- _ismbcupper
- _o__ismbclower
- _o__ismbclower_l
- _o__ismbcupper
- _o__ismbcupper_l
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
- api-ms-win-crt-private-l1-1-0
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- _ismbcupper
- _ismbclower
helpviewer_keywords:
- _ismbcupper function
- ismbclower function
- _ismbclower_l function
- ismbcupper_l function
- _ismbclower function
- ismbcupper function
- ismbclower_l function
- _ismbcupper_l function
ms.assetid: 17d89587-65bc-477c-ba8f-a84e63cf59e7
ms.openlocfilehash: 9a0991d974c33cff22044364f7a4351f160215a8
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81342921"
---
# <a name="_ismbclower-_ismbclower_l-_ismbcupper-_ismbcupper_l"></a>_ismbclower, _ismbclower_l, _ismbcupper, _ismbcupper_l

Verifica se un carattere multibyte è minuscolo o maiuscolo.

> [!IMPORTANT]
> Non è possibile usare questa API nelle applicazioni eseguite in Windows Runtime. Per altre informazioni, vedere [Funzioni CRT non supportate nelle app della piattaforma UWP (Universal Windows Platform)](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).

## <a name="syntax"></a>Sintassi

```C
int _ismbclower(
   unsigned int c
);
int _ismbclower_l(
   unsigned int c,
   _locale_t locale
);
int _ismbcupper(
   unsigned int c
);
int _ismbcupper_l(
   unsigned int c,
   _locale_t locale
);
```

### <a name="parameters"></a>Parametri

*C*<br/>
Carattere da testare.

*Impostazioni internazionali*<br/>
Impostazioni locali da usare.

## <a name="return-value"></a>Valore restituito

Ognuna di queste routine restituisce un valore diverso da zero se il carattere soddisfa la condizione di test oppure 0 in caso contrario. Se *c*<è 255 ed è presente una routine **di _ismbb** corrispondente (ad esempio, **_ismbcalnum** corrisponde a **_ismbbalnum**), il risultato è il valore restituito della routine **_ismbb** corrispondente.

## <a name="remarks"></a>Osservazioni

Ognuna di queste funzioni testa una particolare condizione su un determinato carattere multibyte.

Le versioni di queste funzioni con il **suffisso _l** sono identiche, ad eccezione del fatto che usano le impostazioni locali passate anziché le impostazioni locali correnti per il comportamento dipendente dalle impostazioni locali. Per altre informazioni, vedere [Locale](../../c-runtime-library/locale.md).

|Routine|Condizione di test|Esempio della tabella codici 932|
|-------------|--------------------|---------------------------|
|**_ismbclower**|Carattere alfabetico minuscolo|Restituisce diverso da zero se e solo se *c* è una rappresentazione a byte singolo di una lettera inglese minuscola ASCII: 0x61<*c*<0x7A.|
|**_ismbclower_l**|Carattere alfabetico minuscolo|Restituisce diverso da zero se e solo se *c* è una rappresentazione a byte singolo di una lettera inglese minuscola ASCII: 0x61<*c*<0x7A.|
|**_ismbcupper**|Carattere alfabetico maiuscolo|Restituisce diverso da zero se e solo se *c* è una rappresentazione a byte singolo di una lettera inglese maiuscola ASCII: 0x41<,*c*<0x5A.|
|**_ismbcupper_l**|Carattere alfabetico maiuscolo|Restituisce diverso da zero se e solo se *c* è una rappresentazione a byte singolo di una lettera inglese maiuscola ASCII: 0x41<,*c*<0x5A.|

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa impostazione, vedere [Stato globale in CRT](../global-state.md).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_ismbclower**|\<mbstring.h>|
|**_ismbclower_l**|\<mbstring.h>|
|**_ismbcupper**|\<mbstring.h>|
|**_ismbcupper_l**|\<mbstring.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibility](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[Classificazione di caratteri](../../c-runtime-library/character-classification.md)<br/>
[Routines _ismbc](../../c-runtime-library/ismbc-routines.md)<br/>
[Impostazioni internazionali](../../c-runtime-library/locale.md)<br/>
[Interpretazione di sequenze di caratteri multibyteInterpretation of Multibyte-Character Sequences](../../c-runtime-library/interpretation-of-multibyte-character-sequences.md)<br/>
[is, isw Routines](../../c-runtime-library/is-isw-routines.md)<br/>
[Routine _ismbb](../../c-runtime-library/ismbb-routines.md)<br/>
