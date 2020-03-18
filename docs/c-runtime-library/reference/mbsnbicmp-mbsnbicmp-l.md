---
title: _mbsnbicmp, _mbsnbicmp_l
ms.date: 11/04/2016
api_name:
- _mbsnbicmp_l
- _mbsnbicmp
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
- _mbsnbicmp
- mbsnbicmp
- mbsnbicmp_l
- _mbsnbicmp_l
helpviewer_keywords:
- _tcsnicmp_l function
- _strnicmp function
- mbsnbicmp_l function
- _wcsnicmp_l function
- _mbsnbicmp function
- _mbsnbicmp_l function
- _tcsnicmp function
- _strnicmp_l function
- mbsnbicmp function
- _wcsnicmp function
ms.assetid: ddb44974-8b0c-42f0-90d0-56c9350bae0c
ms.openlocfilehash: c7a4d5def115101c9f3fbd6c53d649ab5b122f1c
ms.sourcegitcommit: 63784729604aaf526de21f6c6b62813882af930a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/17/2020
ms.locfileid: "79442830"
---
# <a name="_mbsnbicmp-_mbsnbicmp_l"></a>_mbsnbicmp, _mbsnbicmp_l

Confronta **n** byte di due stringhe di caratteri multibyte e ignora la distinzione tra maiuscole e minuscole.

> [!IMPORTANT]
> Non è possibile usare questa API nelle applicazioni eseguite in Windows Runtime. Per altre informazioni, vedere [Funzioni CRT non supportate nelle app della piattaforma UWP (Universal Windows Platform)](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).

## <a name="syntax"></a>Sintassi

```C
int _mbsnbicmp(
   const unsigned char *string1,
   const unsigned char *string2,
   size_t count
);
```

### <a name="parameters"></a>Parametri

*String1*, *string2*<br/>
Stringhe che terminano con Null da confrontare.

*count*<br/>
Numero di byte da confrontare.

## <a name="return-value"></a>Valore restituito

Il valore restituito indica la relazione ordinale tra le sottostringhe.

|Valore restituito|Descrizione|
|------------------|-----------------|
|< 0|sottostringa *String1* minore della sottostringa *string2* .|
|0|sottostringa *String1* identica alla sottostringa *string2* .|
|> 0|sottostringa *String1* maggiore della sottostringa *string2* .|

In un errore, **_mbsnbicmp** restituisce **_NLSCMPERROR**, che è definito in String. h e mbstring. h.

## <a name="remarks"></a>Osservazioni

La funzione **_mbsnbicmp** esegue un confronto ordinale al massimo dei primi byte di *conteggio* di *String1* e *string2*. Il confronto viene eseguito convertendo ogni carattere in minuscolo; [_mbsnbcmp](mbsnbcmp-mbsnbcmp-l.md) è una versione con distinzione tra maiuscole e minuscole di **_mbsnbicmp**. Il confronto termina se viene raggiunto un carattere di terminazione null in entrambe le stringhe prima che vengano confrontati i caratteri di *conteggio* . Se le stringhe sono uguali quando viene raggiunto un carattere di terminazione null in entrambe le stringhe prima che vengano confrontati i caratteri di *conteggio* , la stringa più corta è minore.

**_mbsnbicmp** è simile a [_mbsnbcmp](mbsnbcmp-mbsnbcmp-l.md), ad eccezione del fatto che confronta le stringhe fino al *conteggio* dei byte anziché in base ai caratteri.

Due stringhe che contengono caratteri compresi tra "Z" e "a" nella tabella ASCII ('[', '\\', ']', '^', '_' e '\`') vengono confrontate in modo diverso, a seconda della combinazione di maiuscole e minuscole. Ad esempio, le due stringhe "ABCDe" e "ABCD ^" vengono confrontate in un modo se il confronto è in minuscolo ("abcde" > "abcd ^") e viceversa ("ABCDe" < "ABCD ^") se è maiuscolo.

**_mbsnbicmp** riconosce le sequenze di caratteri multibyte in base alla tabella [codici multibyte](../../c-runtime-library/code-pages.md) attualmente in uso. Non viene influenzata dalle impostazioni locali correnti.

Se *String1* o *string2* è un puntatore null, **_mbsnbicmp** richiama il gestore di parametri non validi, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, la funzione restituisce **_NLSCMPERROR** e imposta **errno** su **EINVAL**.

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine Tchar.h|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|--------------------------------------|--------------------|-----------------------|
|**_tcsnicmp**|**_strnicmp**|**_mbsnbicmp**|**_wcsnicmp**|
|**_tcsnicmp_l**|**_strnicmp_l**|**_mbsnbicmp_l**|**_wcsnicmp_l**|

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_mbsnbicmp**|\<mbstring.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibility](../../c-runtime-library/compatibility.md) (Compatibilità).

## <a name="example"></a>Esempio

Vedere l'esempio per [_mbsnbcmp, _mbsnbcmp_l](mbsnbcmp-mbsnbcmp-l.md).

## <a name="see-also"></a>Vedere anche

[Modifica di stringhe](../../c-runtime-library/string-manipulation-crt.md)<br/>
[_mbsnbcat, _mbsnbcat_l](mbsnbcat-mbsnbcat-l.md)<br/>
[_mbsnbcmp, _mbsnbcmp_l](mbsnbcmp-mbsnbcmp-l.md)<br/>
[_stricmp, _wcsicmp, _mbsicmp, _stricmp_l, _wcsicmp_l, _mbsicmp_l](stricmp-wcsicmp-mbsicmp-stricmp-l-wcsicmp-l-mbsicmp-l.md)<br/>
