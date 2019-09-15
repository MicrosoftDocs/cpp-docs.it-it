---
title: strnlen, strnlen_s, wcsnlen, wcsnlen_s, _mbsnlen, _mbsnlen_l, _mbstrnlen, _mbstrnlen_l
ms.date: 11/04/2016
api_name:
- wcsnlen
- strnlen_s
- _mbstrnlen
- _mbsnlen_l
- _mbstrnlen_l
- strnlen
- wcsnlen_s
- _mbsnlen
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
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- wcsnlen
- strnlen_s
- _mbsnlen
- _mbsnlen_l
- _tcsnlen
- _tcscnlen
- _mbstrnlen_l
- wcsnlen_s
- _mbstrnlen
- strnlen
- _tcscnlen_l
helpviewer_keywords:
- _tcscnlen function
- _mbstrnlen function
- _mbsnlen_l function
- lengths, strings
- mbstrnlen function
- mbsnlen_l function
- _mbstrnlen_l function
- _tcscnlen_l function
- wcsnlen_l function
- _tcsnlen function
- _mbsnlen function
- strnlen function
- mbsnlen function
- wcsnlen_s function
- strnlen_s function
- mbstrnlen_l function
- wcsnlen function
- string length
- strnlen_l function
ms.assetid: cc05ce1c-72ea-4ae4-a7e7-4464e56e5f80
ms.openlocfilehash: 6613c79bd9637b857dbf825eca2b37c71c154bec
ms.sourcegitcommit: f19474151276d47da77cdfd20df53128fdcc3ea7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/12/2019
ms.locfileid: "70947005"
---
# <a name="strnlen-strnlen_s-wcsnlen-wcsnlen_s-_mbsnlen-_mbsnlen_l-_mbstrnlen-_mbstrnlen_l"></a>strnlen, strnlen_s, wcsnlen, wcsnlen_s, _mbsnlen, _mbsnlen_l, _mbstrnlen, _mbstrnlen_l

Ottiene la lunghezza di una stringa, usando le impostazioni locali correnti o quelle che sono state passate. Queste sono le versioni più sicure di [strlen, wcslen, mbslen, mbslen_l, mbstrlen, mbstrlen_l](strlen-wcslen-mbslen-mbslen-l-mbstrlen-mbstrlen-l.md).

> [!IMPORTANT]
> **_mbsnlen**, **_mbsnlen_l**, **_mbstrnlen**e **_mbstrnlen_l** non possono essere usati nelle applicazioni eseguite nel Windows Runtime. Per altre informazioni, vedere [Funzioni CRT non supportate nelle app della piattaforma UWP (Universal Windows Platform)](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).

## <a name="syntax"></a>Sintassi

```C
size_t strnlen(
   const char *str,
   size_t numberOfElements
);
size_t strnlen_s(
   const char *str,
   size_t numberOfElements
);
size_t wcsnlen(
   const wchar_t *str,
   size_t numberOfElements
);
size_t wcsnlen_s(
   const wchar_t *str,
   size_t numberOfElements
);
size_t _mbsnlen(
   const unsigned char *str,
   size_t numberOfElements
);
size_t _mbsnlen_l(
   const unsigned char *str,
   size_t numberOfElements,
   _locale_t locale
);
size_t _mbstrnlen(
   const char *str,
   size_t numberOfElements
);
size_t _mbstrnlen_l(
   const char *str,
   size_t numberOfElements,
   _locale_t locale
);
```

### <a name="parameters"></a>Parametri

*str*<br/>
Stringa con terminazione Null.

*numberOfElements*<br/>
Dimensione del buffer di stringa.

*locale*<br/>
Impostazioni locali da usare.

## <a name="return-value"></a>Valore restituito

Queste funzioni restituiscono il numero di caratteri nella stringa, escluso il valore null finale. Se non esiste alcun terminatore null entro i primi byte *NumberOfElements* della stringa (o caratteri wide per **wcsnlen**), viene restituito *NumberOfElements* per indicare la condizione di errore. le stringhe con terminazione null hanno lunghezze rigorosamente inferiori a *NumberOfElements*.

**_mbstrnlen** e **_mbstrnlen_l** restituiscono-1 se la stringa contiene un carattere multibyte non valido.

## <a name="remarks"></a>Note

> [!NOTE]
> **strnlen** non è una sostituzione per **strlen**; **strnlen** è progettato per essere usato solo per calcolare le dimensioni dei dati non attendibili in arrivo in un buffer di dimensioni note, ad esempio un pacchetto di rete. **strnlen** calcola la lunghezza ma non oltrepassa la fine del buffer se la stringa è senza terminazione. Per altre situazioni, usare **strlen**. (Lo stesso vale per **wcsnlen**, **_mbsnlen**e **_mbstrnlen**).

Ognuna di queste funzioni restituisce il numero di caratteri in *Str*, escluso il carattere null di terminazione. Tuttavia, **strnlen** e **strnlen_s** interpretano la stringa come una stringa di caratteri a byte singolo e pertanto il valore restituito è sempre uguale al numero di byte, anche se la stringa contiene caratteri multibyte. **wcsnlen** e **wcsnlen_s** sono rispettivamente versioni a caratteri wide di **strnlen** e **strnlen_s** ; gli argomenti per **wcsnlen** e **wcsnlen_s** sono stringhe a caratteri wide e il numero di caratteri si trova in unità a caratteri wide. In caso contrario, **wcsnlen** e **strnlen** si comportano in modo identico, come **strnlen_s** e **wcsnlen_s**.

**strnlen**, **wcsnlen**e **_mbsnlen** non convalidano i relativi parametri. Se *Str* è **null**, si verifica una violazione di accesso.

**strnlen_s** e **wcsnlen_s** convalidano i relativi parametri. Se *Str* è **null**, le funzioni restituiscono 0.

**_mbstrnlen** convalida inoltre i relativi parametri. Se *Str* è **null**o se *NumberOfElements* è maggiore di **INT_MAX**, **_mbstrnlen** genera un'eccezione di parametro non valido, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, **_mbstrnlen** imposta **errno** su **EINVAL** e restituisce-1.

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|------------------------------------|--------------------|-----------------------|
|**_tcsnlen**|**strnlen**|**strnlen**|**wcsnlen**|
|**_tcscnlen**|**strnlen**|**_mbsnlen**|**wcsnlen**|
|**_tcscnlen_l**|**strnlen**|**_mbsnlen_l**|**wcsnlen**|

**_mbsnlen** e **_mbstrnlen** restituiscono il numero di caratteri multibyte in una stringa di caratteri multibyte. **_mbsnlen** riconosce le sequenze di caratteri multibyte in base alla tabella codici multibyte attualmente in uso o in base alle impostazioni locali passate. non verifica la validità del carattere multibyte. **_mbstrnlen** verifica la validità dei caratteri multibyte e riconosce le sequenze di caratteri multibyte. Se la stringa passata a **_mbstrnlen** contiene un carattere multibyte non valido, **errno** viene impostato su **EILSEQ**.

Il valore di output è influenzato dall'impostazione della categoria **LC_CTYPE** delle impostazioni locali. Per ulteriori informazioni [, vedere setlocale, _wsetlocale](setlocale-wsetlocale.md) . Le versioni di queste funzioni sono identiche, ad eccezione del fatto che quelle che non hanno il suffisso **suffisso** usano le impostazioni locali correnti per questo comportamento dipendente dalle impostazioni locali e le versioni con il suffisso **suffisso** usano invece il parametro delle impostazioni locali passato. Per altre informazioni, vedere [Locale](../../c-runtime-library/locale.md).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**strnlen**, **strnlen_s**|\<string.h>|
|**wcsnlen**, **wcsnlen_s**|\<string.h> o \<wchar.h>|
|**_mbsnlen**, **_mbsnlen_l**|\<mbstring.h>|
|**_mbstrnlen**, **_mbstrnlen_l**|\<stdlib.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

```C
// crt_strnlen.c

#include <string.h>

int main()
{
   // str1 is 82 characters long. str2 is 159 characters long

   char* str1 = "The length of a string is the number of characters\n"
               "excluding the terminating null.";
   char* str2 = "strnlen takes a maximum size. If the string is longer\n"
                "than the maximum size specified, the maximum size is\n"
                "returned rather than the actual size of the string.";
   size_t len;
   size_t maxsize = 100;

   len = strnlen(str1, maxsize);
   printf("%s\n Length: %d \n\n", str1, len);

   len = strnlen(str2, maxsize);
   printf("%s\n Length: %d \n", str2, len);
}
```

```Output
The length of a string is the number of characters
excluding the terminating null.
Length: 82

strnlen takes a maximum size. If the string is longer
than the maximum size specified, the maximum size is
returned rather than the actual size of the string.
Length: 100
```

## <a name="see-also"></a>Vedere anche

[Modifica di stringhe](../../c-runtime-library/string-manipulation-crt.md)<br/>
[Impostazioni locali](../../c-runtime-library/locale.md)<br/>
[Interpretazione di sequenze di caratteri multibyte](../../c-runtime-library/interpretation-of-multibyte-character-sequences.md)<br/>
[setlocale, _wsetlocale](setlocale-wsetlocale.md)<br/>
[strncat, _strncat_l, wcsncat, _wcsncat_l, _mbsncat, _mbsncat_l](strncat-strncat-l-wcsncat-wcsncat-l-mbsncat-mbsncat-l.md)<br/>
[strncmp, wcsncmp, _mbsncmp, _mbsncmp_l](strncmp-wcsncmp-mbsncmp-mbsncmp-l.md)<br/>
[Funzioni strcoll](../../c-runtime-library/strcoll-functions.md)<br/>
[strncpy_s, _strncpy_s_l, wcsncpy_s, _wcsncpy_s_l, _mbsncpy_s, _mbsncpy_s_l](strncpy-s-strncpy-s-l-wcsncpy-s-wcsncpy-s-l-mbsncpy-s-mbsncpy-s-l.md)<br/>
[strrchr, wcsrchr, _mbsrchr, _mbsrchr_l](strrchr-wcsrchr-mbsrchr-mbsrchr-l.md)<br/>
[_strset, _strset_l, _wcsset, _wcsset_l, _mbsset, _mbsset_l](strset-strset-l-wcsset-wcsset-l-mbsset-mbsset-l.md)<br/>
[strspn, wcsspn, _mbsspn, _mbsspn_l](strspn-wcsspn-mbsspn-mbsspn-l.md)<br/>
