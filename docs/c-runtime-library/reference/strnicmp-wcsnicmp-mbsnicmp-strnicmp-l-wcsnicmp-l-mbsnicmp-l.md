---
title: _strnicmp, _wcsnicmp, _mbsnicmp, _strnicmp_l, _wcsnicmp_l, _mbsnicmp_l
ms.date: 11/04/2016
apiname:
- _wcsnicmp
- _strnicmp_l
- _wcsnicmp_l
- _strnicmp
- _mbsnicmp
- _mbsnicmp_l
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
- api-ms-win-crt-string-l1-1-0.dll
- ntoskrnl.exe
apitype: DLLExport
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
ms.openlocfilehash: 38f5697e0c7fe147a481249888595b7d51cfe93c
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62209690"
---
# <a name="strnicmp-wcsnicmp-mbsnicmp-strnicmpl-wcsnicmpl-mbsnicmpl"></a>_strnicmp, _wcsnicmp, _mbsnicmp, _strnicmp_l, _wcsnicmp_l, _mbsnicmp_l

Confronta il numero specificato di caratteri di due stringhe senza fare distinzione tra maiuscole e minuscole.

> [!IMPORTANT]
> **mbsnicmp** e **mbsnicmp_l** non può essere utilizzato nelle applicazioni eseguite nel Runtime di Windows. Per altre informazioni, vedere [Funzioni CRT non supportate nelle app della piattaforma UWP (Universal Windows Platform)](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).

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

*string1*, *string2*<br/>
Stringhe che terminano con Null da confrontare.

*count*<br/>
Numero di caratteri da confrontare.

*locale*<br/>
Impostazioni locali da usare.

## <a name="return-value"></a>Valore restituito

Indica la relazione tra le sottostringhe, come indicato di seguito.

|Valore restituito|Descrizione|
|------------------|-----------------|
|< 0|*String1* sottostringa è minore di *string2* sottostringa.|
|0|*String1* è identica alla sottostringa *string2* sottostringa.|
|> 0|*String1* è maggiore di sottostringa *string2* sottostringa.|

Errore di convalida dei parametri, queste funzioni restituiscono **_NLSCMPERROR**, che è definito nel \<String. h > e \<Mbstring. h >.

## <a name="remarks"></a>Note

Il **strnicmp** funzione esegue un confronto ordinale al massimo i primi *conteggio* caratteri del *string1* e *string2*. Il confronto viene eseguito senza fare distinzione tra maiuscole e minuscole convertendo ogni carattere in minuscolo. **strnicmp** è una versione di maiuscole e minuscole **strncmp**. Il confronto termina se viene raggiunto un carattere di terminazione null in entrambe le stringhe prima *conteggio* i caratteri vengono confrontati. Se le stringhe sono uguali quando un carattere di terminazione null viene raggiunta in entrambe le stringhe prima *conteggio* i caratteri vengono confrontati, la stringa più corta sarà minore.

I caratteri da 91 a 96 nella tabella ASCII ('[', '\\', ']', '^', '_' e '\`') sono considerati minori rispetto a qualsiasi carattere alfabetico. Questo ordinamento è identico a quello del **stricmp**.

**wcsnicmp** e **mbsnicmp** sono versioni a caratteri wide e caratteri multibyte di **strnicmp**. Gli argomenti di **wcsnicmp** sono caratteri wide, mentre quelli di stringhe **mbsnicmp** sono stringhe a caratteri multibyte. **mbsnicmp** riconosce le sequenze di caratteri multibyte in base alla tabella codici multibyte corrente e restituisce **_NLSCMPERROR** in caso di errore. Per altre informazioni, vedere [Tabelle codici](../../c-runtime-library/code-pages.md). A parte ciò, queste tre funzioni si comportano in modo identico. Queste funzioni vengono influenzate dalle impostazioni locali, ovvero le versioni che non hanno le **l** suffisso usano le impostazioni locali correnti per il comportamento dipendente dalle impostazioni locali; le versioni che hanno il **l** suffisso Usare invece i *delle impostazioni locali* che viene passato. Per altre informazioni, vedere [Locale](../../c-runtime-library/locale.md).

Tutte queste funzioni convalidano i relativi parametri. Se uno dei due *string1* oppure *string2* è un puntatore null, viene richiamato il gestore di parametri non validi, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, queste funzioni restituiscono **_NLSCMPERROR** e impostare **errno** al **EINVAL**.

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

## <a name="see-also"></a>Vedere anche

[Modifica di stringhe](../../c-runtime-library/string-manipulation-crt.md)<br/>
[strcat, wcscat, _mbscat](strcat-wcscat-mbscat.md)<br/>
[strcmp, wcscmp, _mbscmp](strcmp-wcscmp-mbscmp.md)<br/>
[strcpy, wcscpy, _mbscpy](strcpy-wcscpy-mbscpy.md)<br/>
[strncat, _strncat_l, wcsncat, _wcsncat_l, _mbsncat, _mbsncat_l](strncat-strncat-l-wcsncat-wcsncat-l-mbsncat-mbsncat-l.md)<br/>
[strncmp, wcsncmp, _mbsncmp, _mbsncmp_l](strncmp-wcsncmp-mbsncmp-mbsncmp-l.md)<br/>
[strncpy, _strncpy_l, wcsncpy, _wcsncpy_l, _mbsncpy, _mbsncpy_l](strncpy-strncpy-l-wcsncpy-wcsncpy-l-mbsncpy-mbsncpy-l.md)<br/>
[strrchr, wcsrchr, _mbsrchr, _mbsrchr_l](strrchr-wcsrchr-mbsrchr-mbsrchr-l.md)<br/>
[_strset, _strset_l, _wcsset, _wcsset_l, _mbsset, _mbsset_l](strset-strset-l-wcsset-wcsset-l-mbsset-mbsset-l.md)<br/>
[strspn, wcsspn, _mbsspn, _mbsspn_l](strspn-wcsspn-mbsspn-mbsspn-l.md)<br/>
