---
description: 'Altre informazioni su: _strnicmp, _wcsnicmp, _mbsnicmp, _strnicmp_l, _wcsnicmp_l, _mbsnicmp_l'
title: _strnicmp, _wcsnicmp, _mbsnicmp, _strnicmp_l, _wcsnicmp_l, _mbsnicmp_l
ms.date: 4/2/2020
api_name:
- _wcsnicmp
- _strnicmp_l
- _wcsnicmp_l
- _strnicmp
- _mbsnicmp
- _mbsnicmp_l
- _o__mbsnicmp
- _o__mbsnicmp_l
- _o__strnicmp
- _o__strnicmp_l
- _o__wcsnicmp
- _o__wcsnicmp_l
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
- api-ms-win-crt-string-l1-1-0.dll
- ntoskrnl.exe
- api-ms-win-crt-private-l1-1-0.dll
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- wcsnicmp_l
- _strnicmp
- _ftcsnicmp
- mbsnicmp_l
- _ftcsncicmp
- mbsnicmp
- _tcsncicmp
- _mbsnicmp
- _tcsnicmp
- strnicmp_l
- _wcsnicmp
- _wcsnicmp_l
- CORECRT_WSTRING/_wcsnicmp
- CORECRT_WSTRING/_wcsnicmp_l
- string/_strnicmp
- string/_strnicmp_l
helpviewer_keywords:
- tcsnicmp function
- _tcsncicmp function
- _mbsnicmp_l function
- mbsnicmp_l function
- wcsnicmp_l function
- wcsnicmp function
- string comparison [C++], lowercase
- ftcsnicmp function
- strnicmp_l function
- strncmp function
- _strnicmp function
- strings [C++], comparing characters of
- _wcsnicmp_l function
- tcsncicmp function
- string comparison [C++], strncmp function
- _mbsnicmp function
- ftcsncicmp function
- _tcsnicmp function
- _ftcsncicmp function
- _strnicmp_l function
- _ftcsnicmp function
- characters [C++], comparing
- mbsnicmp function
- _wcsnicmp function
ms.assetid: df6e5037-4039-4c85-a0a6-21d4ef513966
ms.openlocfilehash: d43a0879bf044f71b9f71b6c5d97d0bd3b1353d6
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97306079"
---
# <a name="_strnicmp-_wcsnicmp-_mbsnicmp-_strnicmp_l-_wcsnicmp_l-_mbsnicmp_l"></a>_strnicmp, _wcsnicmp, _mbsnicmp, _strnicmp_l, _wcsnicmp_l, _mbsnicmp_l

Confronta il numero specificato di caratteri di due stringhe senza fare distinzione tra maiuscole e minuscole.

> [!IMPORTANT]
> non è possibile usare **_mbsnicmp** e **_mbsnicmp_l** nelle applicazioni eseguite nel Windows Runtime. Per altre informazioni, vedere [Funzioni CRT non supportate nelle app della piattaforma UWP (Universal Windows Platform)](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).

## <a name="syntax"></a>Sintassi

```C
int _strnicmp(
   const char *string1,
   const char *string2,
   size_t count
);
int _wcsnicmp(
   const wchar_t *string1,
   const wchar_t *string2,
   size_t count
);
int _mbsnicmp(
   const unsigned char *string1,
   const unsigned char *string2,
   size_t count
);
int _strnicmp_l(
   const char *string1,
   const char *string2,
   size_t count,
   _locale_t locale
);
int _wcsnicmp_l(
   const wchar_t *string1,
   const wchar_t *string2,
   size_t count,
   _locale_t locale
);
int _mbsnicmp_l(
   const unsigned char *string1,
   const unsigned char *string2,
   size_t count,
   _locale_t locale
);
```

### <a name="parameters"></a>Parametri

*String1*, *string2*<br/>
Stringhe che terminano con Null da confrontare.

*count*<br/>
Numero di caratteri da confrontare.

*locale*<br/>
Impostazioni locali da usare.

## <a name="return-value"></a>Valore restituito

Indica la relazione tra le sottostringhe, come indicato di seguito.

|Valore restituito|Descrizione|
|------------------|-----------------|
|< 0|la sottostringa *String1* è minore di *string2* substring.|
|0|la sottostringa *String1* è identica alla sottostringa *string2* .|
|> 0|la sottostringa *String1* è maggiore di *string2* substring.|

In seguito a un errore di convalida del parametro, queste funzioni restituiscono **_NLSCMPERROR**, definito in \<string.h> e \<mbstring.h> .

## <a name="remarks"></a>Commenti

La funzione **_strnicmp** consente di confrontare ordinali, al massimo, i primi caratteri di *conteggio* di *String1* e *string2*. Il confronto viene eseguito senza fare distinzione tra maiuscole e minuscole convertendo ogni carattere in minuscolo. **_strnicmp** è una versione senza distinzione tra maiuscole e minuscole di **strncmp**. Il confronto termina se viene raggiunto un carattere di terminazione null in entrambe le stringhe prima che vengano confrontati i caratteri di *conteggio* . Se le stringhe sono uguali quando viene raggiunto un carattere di terminazione null in entrambe le stringhe prima che vengano confrontati i caratteri di *conteggio* , la stringa più corta è minore.

I caratteri da 91 a 96 nella tabella ASCII ('[', '\\', ']', '^', '_' e '\`') sono considerati minori rispetto a qualsiasi carattere alfabetico. Questo ordinamento è identico a quello di **stricmp**.

**_wcsnicmp** e **_mbsnicmp** sono versioni a caratteri wide e a caratteri multibyte di **_strnicmp**. Gli argomenti di **_wcsnicmp** sono stringhe a caratteri wide. i **_mbsnicmp** sono stringhe di caratteri multibyte. **_mbsnicmp** riconosce le sequenze di caratteri multibyte in base alla tabella codici multibyte corrente e restituisce **_NLSCMPERROR** su un errore. Per altre informazioni, vedere [Tabelle codici](../../c-runtime-library/code-pages.md). A parte ciò, queste tre funzioni si comportano in modo identico. Queste funzioni sono interessate dalle impostazioni locali: le versioni che non hanno il suffisso **_L** usano le impostazioni locali correnti per il comportamento dipendente dalle impostazioni locali. le versioni che hanno il suffisso **_L** usano invece le *impostazioni locali* passate. Per altre informazioni, vedere [Locale](../../c-runtime-library/locale.md).

Tutte queste funzioni convalidano i relativi parametri. Se *String1* o *string2* è un puntatore null, viene richiamato il gestore di parametri non validi, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, queste funzioni restituiscono **_NLSCMPERROR** e impostano **errno** su **EINVAL**.

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa situazione, vedere [stato globale in CRT](../global-state.md).

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|------------------------------------|--------------------|-----------------------|
|**_tcsncicmp**|**_strnicmp**|**_mbsnicmp**|**_wcsnicmp**|
|**_tcsnicmp**|**_strnicmp**|**_mbsnbicmp**|**_wcsnicmp**|
|**_tcsncicmp_l**|**_strnicmp_l**|**_mbsnicmp_l**|**_wcsnicmp_l**|

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_strnicmp**, **_strnicmp_l**|\<string.h>|
|**_wcsnicmp**, **_wcsnicmp_l**|\<string.h> o \<wchar.h>|
|**_mbsnicmp**, **_mbsnicmp_l**|\<mbstring.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

Vedere l'esempio per [strncmp](strncmp-wcsncmp-mbsncmp-mbsncmp-l.md).

## <a name="see-also"></a>Vedi anche

[Manipolazione di stringhe](../../c-runtime-library/string-manipulation-crt.md)<br/>
[strcat, wcscat, _mbscat](strcat-wcscat-mbscat.md)<br/>
[strcmp, wcscmp, _mbscmp](strcmp-wcscmp-mbscmp.md)<br/>
[strcpy, wcscpy, _mbscpy](strcpy-wcscpy-mbscpy.md)<br/>
[strncat, _strncat_l, wcsncat, _wcsncat_l, _mbsncat, _mbsncat_l](strncat-strncat-l-wcsncat-wcsncat-l-mbsncat-mbsncat-l.md)<br/>
[strncmp, wcsncmp, _mbsncmp, _mbsncmp_l](strncmp-wcsncmp-mbsncmp-mbsncmp-l.md)<br/>
[strncpy, _strncpy_l, wcsncpy, _wcsncpy_l, _mbsncpy, _mbsncpy_l](strncpy-strncpy-l-wcsncpy-wcsncpy-l-mbsncpy-mbsncpy-l.md)<br/>
[strrchr, wcsrchr, _mbsrchr, _mbsrchr_l](strrchr-wcsrchr-mbsrchr-mbsrchr-l.md)<br/>
[_strset, _strset_l, _wcsset, _wcsset_l, _mbsset, _mbsset_l](strset-strset-l-wcsset-wcsset-l-mbsset-mbsset-l.md)<br/>
[strspn, wcsspn, _mbsspn, _mbsspn_l](strspn-wcsspn-mbsspn-mbsspn-l.md)<br/>
