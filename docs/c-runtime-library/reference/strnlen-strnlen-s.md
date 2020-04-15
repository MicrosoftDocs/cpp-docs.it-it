---
title: strnlen, strnlen_s, wcsnlen, wcsnlen_s, _mbsnlen, _mbsnlen_l, _mbstrnlen, _mbstrnlen_l
ms.date: 4/2/2020
api_name:
- wcsnlen
- strnlen_s
- _mbstrnlen
- _mbsnlen_l
- _mbstrnlen_l
- strnlen
- wcsnlen_s
- _mbsnlen
- _o__mbsnlen
- _o__mbsnlen_l
- _o__mbstrnlen
- _o__mbstrnlen_l
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
- api-ms-win-crt-private-l1-1-0
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
ms.openlocfilehash: db4fa65fa47dfe11d7ab56ffc5feee06f2634e2a
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81364462"
---
# <a name="strnlen-strnlen_s-wcsnlen-wcsnlen_s-_mbsnlen-_mbsnlen_l-_mbstrnlen-_mbstrnlen_l"></a>strnlen, strnlen_s, wcsnlen, wcsnlen_s, _mbsnlen, _mbsnlen_l, _mbstrnlen, _mbstrnlen_l

Ottiene la lunghezza di una stringa, usando le impostazioni locali correnti o quelle che sono state passate. Queste sono le versioni più sicure di [strlen, wcslen, mbslen, mbslen_l, mbstrlen, mbstrlen_l](strlen-wcslen-mbslen-mbslen-l-mbstrlen-mbstrlen-l.md).

> [!IMPORTANT]
> **_mbsnlen** **, _mbsnlen_l**, **_mbstrnlen**e **_mbstrnlen_l** non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime. Per altre informazioni, vedere [Funzioni CRT non supportate nelle app della piattaforma UWP (Universal Windows Platform)](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).

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

*Str*<br/>
Stringa con terminazione Null.

*Sizeinbytes*<br/>
Dimensione del buffer di stringa.

*Impostazioni internazionali*<br/>
Impostazioni locali da usare.

## <a name="return-value"></a>Valore restituito

Queste funzioni restituiscono il numero di caratteri nella stringa, escluso il valore null finale. Se non è presente alcun carattere di terminazione null all'interno dei primi *numberOfElements* byte della stringa (o caratteri wide per **wcsnlen**), viene restituito *numberOfElements* per indicare la condizione di errore; Le stringhe con terminazione null hanno lunghezze rigorosamente inferiori a *numberOfElements*.

**_mbstrnlen** e **_mbstrnlen_l** restituire -1 se la stringa contiene un carattere multibyte non valido.

## <a name="remarks"></a>Osservazioni

> [!NOTE]
> **strnlen** non sostituisce **strlen**; **strnlen** deve essere utilizzato solo per calcolare la dimensione dei dati non attendibili in ingresso in un buffer di dimensioni note, ad esempio un pacchetto di rete. **strnlen** calcola la lunghezza ma non supera la fine del buffer se la stringa non è terminata. Per altre situazioni, utilizzare **strlen**. (Lo stesso vale per **wcsnlen**, **_mbsnlen**e **_mbstrnlen**.

Ognuna di queste funzioni restituisce il numero di caratteri in *str*, escluso il carattere di terminazione null. Tuttavia, **strnlen** e **strnlen_s** interpretano la stringa come una stringa di caratteri a byte singolo e pertanto, il valore restituito è sempre uguale al numero di byte, anche se la stringa contiene caratteri multibyte. **wcsnlen** e **wcsnlen_s** sono versioni a caratteri wide di **strnlen** e **strnlen_s** rispettivamente; gli argomenti per **wcsnlen** e **wcsnlen_s** sono stringhe di caratteri wide e il numero di caratteri è in unità di caratteri wide. In caso contrario, **wcsnlen** e **strnlen** si comportano in modo identico, come **strnlen_s** e **wcsnlen_s**.

**strnlen**, **wcsnlen**e **_mbsnlen** non convalidano i relativi parametri. Se *str* è **NULL**, si verifica una violazione di accesso.

**strnlen_s** e **wcsnlen_s** convalidare i relativi parametri. Se *str* è **NULL**, le funzioni restituiscono 0.

**_mbstrnlen** convalida anche i parametri. Se *str* è **NULL**o se *numberOfElements* è maggiore di **INT_MAX**, **_mbstrnlen** genera un'eccezione di parametro non valido, come descritto in Convalida [dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, **_mbstrnlen** imposta **errno** su **EINVAL** e restituisce -1.

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa impostazione, vedere [Stato globale in CRT](../global-state.md).

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|------------------------------------|--------------------|-----------------------|
|**_tcsnlen**|**strnlen**|**strnlen**|**wcsnlen**|
|**_tcscnlen**|**strnlen**|**_mbsnlen**|**wcsnlen**|
|**_tcscnlen_l**|**strnlen**|**_mbsnlen_l**|**wcsnlen**|

**_mbsnlen** e **_mbstrnlen** restituire il numero di caratteri multibyte in una stringa di caratteri multibyte. **_mbsnlen** riconosce le sequenze di caratteri multibyte in base alla tabella codici multibyte attualmente in uso o in base alle impostazioni locali passate; non verifica la validità di caratteri multibyte. **_mbstrnlen** i test per la validità dei caratteri multibyte e riconosce le sequenze di caratteri multibyte. Se la stringa passata a **_mbstrnlen** contiene un carattere multibyte non valido, **errno** viene impostato su **EILSEQ**.

Il valore di output è influenzato dall'impostazione dell'impostazione della categoria **LC_CTYPE** delle impostazioni locali; Per ulteriori informazioni, vedere [setlocale, _wsetlocale.](setlocale-wsetlocale.md) Le versioni di queste funzioni sono identiche, tranne per il fatto che quelle che non hanno il suffisso **_l** utilizzano le impostazioni locali correnti per questo comportamento dipendente dalle impostazioni locali e le versioni che hanno il suffisso **_l** utilizzano invece il parametro locale passato. Per altre informazioni, vedere [Locale](../../c-runtime-library/locale.md).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**strnlen**, **strnlen_s**|\<string.h>|
|**wcsnlen** **wcsnlen_s**|\<string.h> o \<wchar.h>|
|**_mbsnlen** **_mbsnlen_l**|\<mbstring.h>|
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

[Manipolazione delle stringheString Manipulation](../../c-runtime-library/string-manipulation-crt.md)<br/>
[Impostazioni internazionali](../../c-runtime-library/locale.md)<br/>
[Interpretazione di sequenze di caratteri multibyteInterpretation of Multibyte-Character Sequences](../../c-runtime-library/interpretation-of-multibyte-character-sequences.md)<br/>
[setlocale, _wsetlocale](setlocale-wsetlocale.md)<br/>
[strncat, _strncat_l, wcsncat, _wcsncat_l, _mbsncat, _mbsncat_l](strncat-strncat-l-wcsncat-wcsncat-l-mbsncat-mbsncat-l.md)<br/>
[strncmp, wcsncmp, _mbsncmp, _mbsncmp_l](strncmp-wcsncmp-mbsncmp-mbsncmp-l.md)<br/>
[Funzioni strcoll](../../c-runtime-library/strcoll-functions.md)<br/>
[strncpy_s, _strncpy_s_l, wcsncpy_s, _wcsncpy_s_l, _mbsncpy_s, _mbsncpy_s_l](strncpy-s-strncpy-s-l-wcsncpy-s-wcsncpy-s-l-mbsncpy-s-mbsncpy-s-l.md)<br/>
[strrchr, wcsrchr, _mbsrchr, _mbsrchr_l](strrchr-wcsrchr-mbsrchr-mbsrchr-l.md)<br/>
[_strset, _strset_l, _wcsset, _wcsset_l, _mbsset, _mbsset_l](strset-strset-l-wcsset-wcsset-l-mbsset-mbsset-l.md)<br/>
[strspn, wcsspn, _mbsspn, _mbsspn_l](strspn-wcsspn-mbsspn-mbsspn-l.md)<br/>
