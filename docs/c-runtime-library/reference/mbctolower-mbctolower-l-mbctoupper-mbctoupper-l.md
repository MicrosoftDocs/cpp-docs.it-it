---
description: 'Altre informazioni su: _mbctolower, _mbctolower_l, _mbctoupper, _mbctoupper_l'
title: _mbctolower, _mbctolower_l, _mbctoupper, _mbctoupper_l
ms.date: 4/2/2020
api_name:
- _mbctolower_l
- _mbctoupper_l
- _mbctoupper
- _mbctolower
- _o__mbctolower
- _o__mbctolower_l
- _o__mbctoupper
- _o__mbctoupper_l
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
- api-ms-win-crt-private-l1-1-0.dll
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- mbctoupper_l
- mbctolower_l
- _mbctolower
- _mbctolower_l
- _mbctoupper
- mbctoupper
- mbctolower
- _mbctoupper_l
helpviewer_keywords:
- _mbctolower function
- mbctolower_l function
- totupper function
- _mbctoupper function
- totlower function
- _mbctoupper_l function
- mbctolower function
- _totupper function
- _mbctolower_l function
- mbctoupper_l function
- _totlower function
- mbctoupper function
ms.assetid: 787fab71-3224-4ed7-bc93-4dcd8023fc54
ms.openlocfilehash: abf09a7a96fc1df9f34f3263638c68da4f9991d1
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97146445"
---
# <a name="_mbctolower-_mbctolower_l-_mbctoupper-_mbctoupper_l"></a>_mbctolower, _mbctolower_l, _mbctoupper, _mbctoupper_l

Testa e converte il caso di un carattere multibyte.

> [!IMPORTANT]
> Non è possibile usare questa API nelle applicazioni eseguite in Windows Runtime. Per altre informazioni, vedere [Funzioni CRT non supportate nelle app della piattaforma UWP (Universal Windows Platform)](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).

## <a name="syntax"></a>Sintassi

```C
unsigned int _mbctolower(
   unsigned int c
);
unsigned int _mbctolower_l(
   unsigned int c,
   _locale_t locale
);
unsigned int _mbctoupper(
   unsigned int c
);
unsigned int _mbctoupper_l(
   unsigned int c,
   _locale_t locale
);
```

### <a name="parameters"></a>Parametri

*c*<br/>
Caratteri multibyte da convertire.

*locale*<br/>
Impostazioni locali da usare.

## <a name="return-value"></a>Valore restituito

Ognuna di queste funzioni restituisce il carattere convertito *c*, se possibile. In caso contrario, restituisce il carattere *c* non modificato.

## <a name="remarks"></a>Commenti

Le funzioni testano un carattere *c* e, se possibile, applicano una delle seguenti conversioni.

|Routine|Converte|
|--------------|--------------|
|**_mbctolower**, **_mbctolower_l**|Carattere maiuscolo in carattere minuscolo.|
|**_mbctoupper**, **_mbctoupper_l**|Carattere minuscolo in carattere maiuscolo.|

La configurazione dell'impostazione della categoria **LC_CTYPE** delle impostazioni locali influisce sul valore di output. Per altre informazioni, vedere [setlocale](setlocale-wsetlocale.md). La versione di questa funzione senza il suffisso **_L** usa le impostazioni locali correnti per questo comportamento dipendente dalle impostazioni locali; la versione con il suffisso **_L** è identica, ma usa il parametro delle impostazioni locali passato. Per altre informazioni, vedere [Locale](../../c-runtime-library/locale.md).

Nelle versioni precedenti, **_mbctolower** era denominato **jtolower** e **_mbctoupper** era denominato **jtoupper**. Per il nuovo codice, utilizzare invece i nuovi nomi.

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa situazione, vedere [stato globale in CRT](../global-state.md).

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine Tchar.h|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|--------------------------------------|--------------------|-----------------------|
|**_totlower**|**ToLower**|**_mbctolower**|**towlower**|
|**_totlower_l**|**_tolower_l**|**_mbctolower_l**|**_towlower_t**|
|**_totupper**|**ToUpper**|**_mbctoupper**|**towupper**|
|**_totupper_l**|**toupper_l**|**_mbctoupper_l**|**_towupper_l**|

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|--------------|---------------------|
|**_mbctolower**, **_mbctolower_l**|\<mbstring.h>|
|**_mbctoupper**, **_mbctoupper_l**|\<mbstring.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibility](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedi anche

[Conversione dati](../../c-runtime-library/data-conversion.md)<br/>
[_mbbtombc, _mbbtombc_l](mbbtombc-mbbtombc-l.md)<br/>
[_mbcjistojms, _mbcjistojms_l, _mbcjmstojis, _mbcjmstojis_l](mbcjistojms-mbcjistojms-l-mbcjmstojis-mbcjmstojis-l.md)<br/>
[_mbctohira, _mbctohira_l, _mbctokata, _mbctokata_l](mbctohira-mbctohira-l-mbctokata-mbctokata-l.md)<br/>
[_mbctombb, _mbctombb_l](mbctombb-mbctombb-l.md)<br/>
