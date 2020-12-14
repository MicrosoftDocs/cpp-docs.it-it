---
description: 'Altre informazioni su: strtok, _strtok_l, wcstok, _wcstok_l, _mbstok, _mbstok_l'
title: strtok, _strtok_l, wcstok, _wcstok_l, _mbstok, _mbstok_l
ms.date: 6/24/2020
api_name:
- _mbstok_l
- _mbstok
- wcstok
- _mbstok
- strtok
- _wcstok_l
- _o__mbstok
- _o__mbstok_l
- _o_strtok
- _o_wcstok
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
- api-ms-win-crt-private-l1-1-0.dll
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- _mbstok
- strtok
- _tcstok
- wcstok
helpviewer_keywords:
- mbstok_l function
- strings [C++], searching
- tcstok function
- _tcstok function
- _strtok_l function
- strtok function
- mbstok function
- wcstok_l function
- _mbstok function
- tcstok_l function
- tokens, finding in strings
- _mbstok_l function
- wcstok function
- _wcstok_l function
- _tcstok_l function
- strtok_l function
ms.assetid: 904cb734-f0d7-4d77-ba81-4791ddf461ae
ms.openlocfilehash: 8172a049c95f2ef7b436c23b94099c61cde96cde
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97288685"
---
# <a name="strtok-_strtok_l-wcstok-_wcstok_l-_mbstok-_mbstok_l"></a>strtok, _strtok_l, wcstok, _wcstok_l, _mbstok, _mbstok_l

Trova il token successivo in una stringa, usando le impostazioni locali correnti o le impostazioni locali specificate passate. Sono disponibili versioni più sicure di queste funzioni; vedere [strtok_s, _strtok_s_l, wcstok_s, _wcstok_s_l, _mbstok_s, _mbstok_s_l](strtok-s-strtok-s-l-wcstok-s-wcstok-s-l-mbstok-s-mbstok-s-l.md).

> [!IMPORTANT]
> non è possibile usare **_mbstok** e **_mbstok_l** nelle applicazioni eseguite nel Windows Runtime. Per altre informazioni, vedere [Funzioni CRT non supportate nelle app della piattaforma UWP (Universal Windows Platform)](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).

## <a name="syntax"></a>Sintassi

```C
char *strtok(
   char *strToken,
   const char *strDelimit
);
char *strtok_l(
   char *strToken,
   const char *strDelimit,
   _locale_t locale
);
wchar_t *wcstok(
   wchar_t *strToken,
   const wchar_t *strDelimit
);
wchar_t *wcstok(
   wchar_t *strToken,
   const wchar_t *strDelimit,
   wchar_t **context
);
wchar_t *wcstok_l(
   wchar_t *strToken,
   const wchar_t *strDelimit,
   _locale_t locale
);
unsigned char *_mbstok(
   unsigned char *strToken,
   const unsigned char *strDelimit
);
unsigned char *_mbstok_l(
   unsigned char *strToken,
   const unsigned char *strDelimit,
   _locale_t locale
);
```

### <a name="parameters"></a>Parametri

*strToken*<br/>
Stringa contenente il token o i token.

*strDelimit*<br/>
Set di caratteri di delimitazione.

*locale*<br/>
Impostazioni locali da usare.

*context*<br/>
Punta alla memoria usata per archiviare lo stato interno del parser, in modo che il parser possa continuare dal punto in cui è stato interrotto la volta successiva che si chiama **wcstok**.

## <a name="return-value"></a>Valore restituito

Restituisce un puntatore al token successivo trovato in *strToken*. Quando non vengono trovati altri token, le funzioni restituiscono **null** . Ogni chiamata modifica *strToken* sostituendo un carattere null per il primo delimitatore che si verifica dopo il token restituito.

## <a name="remarks"></a>Commenti

La funzione **strtok** trova il token successivo in *strToken*. Il set di caratteri in *strDelimit* specifica i possibili delimitatori del token da trovare in *strToken* nella chiamata corrente. **wcstok** e **_mbstok** sono versioni a caratteri wide e a caratteri multibyte di **strtok**. Gli argomenti e il valore restituito di **wcstok** sono stringhe a caratteri wide. i **_mbstok** sono stringhe di caratteri multibyte. A parte ciò, queste tre funzioni si comportano in modo identico.

La versione a due argomenti di **wcstok** non è standard. Se è necessario usare questa versione, è necessario definire `_CRT_NON_CONFORMING_WCSTOK` prima di `#include <wchar.h>` (o `#include <string.h>` ).

> [!IMPORTANT]
> Queste funzioni possono incorrere in una minaccia potenziale dovuta a un problema di sovraccarico del buffer. I problemi di sovraccarico del buffer sono usati spesso come metodo di attacco di sistema e provocano un'elevazione dei privilegi non autorizzata. Per altre informazioni, vedere [Evitare sovraccarichi del buffer](/windows/win32/SecBP/avoiding-buffer-overruns).

Alla prima chiamata a **strtok**, la funzione ignora i delimitatori iniziali e restituisce un puntatore al primo token in *strToken*, terminando il token con un carattere null. Più token possono essere suddivisi dal resto di *strToken* da una serie di chiamate a **strtok**. Ogni chiamata a **strtok** modifica *strToken* inserendo un carattere null dopo il **token** restituito dalla chiamata. Per leggere il token successivo da *strToken*, chiamare **strtok** con un valore **null** per l'argomento *strToken* . L'argomento *StrToken* **null** fa in modo che **strtok** cerchi il token successivo nel *strToken* modificato. L'argomento *strDelimit* può assumere qualsiasi valore da una chiamata al successivo, in modo che il set di delimitatori possa variare.

Il valore di output è influenzato dall'impostazione dell'impostazione di categoria **LC_CTYPE** delle impostazioni locali. Per altre informazioni, vedere [setlocale](setlocale-wsetlocale.md).

Le versioni di queste funzioni senza il suffisso **_L** usano le impostazioni locali correnti per questo comportamento dipendente dalle impostazioni locali. Le versioni con il suffisso **_L** sono identiche, ad eccezione del fatto che usano il parametro delle impostazioni locali passato. Per altre informazioni, vedere [Locale](../../c-runtime-library/locale.md).

> [!NOTE]
> Ogni funzione usa una variabile statica thread-local per la suddivisione della stringa in token. Più thread possono quindi chiamare contemporaneamente queste funzioni senza effetti indesiderati. Tuttavia, all'interno di un singolo thread, è molto probabile che l'esecuzione interleaved di chiamate a una di queste funzioni causi il danneggiamento dei dati e risultati non accurati. Quando si analizzano stringhe diverse, completare l'analisi di una stringa prima di iniziare ad analizzare la successiva. Tenere anche conto del potenziale pericolo quando si chiama una di queste funzioni da un ciclo in cui viene chiamata un'altra funzione. Se l'altra funzione usa una di queste funzioni, ne risulterà una sequenza interleaved di chiamate con conseguente danneggiamento dei dati.

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa situazione, vedere [stato globale in CRT](../global-state.md).

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|------------------------------------|--------------------|-----------------------|
|**_tcstok**|**strtok**|**_mbstok**|**wcstok**|
|**_tcstok**|**_strtok_l**|**_mbstok_l**|**_wcstok_l**|

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**strtok**|\<string.h>|
|**wcstok**|\<string.h> o \<wchar.h>|
|**_wcstok_l**|<tchar.h>|
|**_mbstok**, **_mbstok_l**|\<mbstring.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

```C
// crt_strtok.c
// compile with: /W3
// In this program, a loop uses strtok
// to print all the tokens (separated by commas
// or blanks) in the string named "string".
//
#include <string.h>
#include <stdio.h>

char string[] = "A string\tof ,,tokens\nand some  more tokens";
char seps[]   = " ,\t\n";
char *token;

int main( void )
{
   printf( "Tokens:\n" );

   // Establish string and get the first token:
   token = strtok( string, seps ); // C4996
   // Note: strtok is deprecated; consider using strtok_s instead
   while( token != NULL )
   {
      // While there are tokens in "string"
      printf( " %s\n", token );

      // Get next token:
      token = strtok( NULL, seps ); // C4996
   }
}
```

```Output
Tokens:
A
string
of
tokens
and
some
more
tokens
```

## <a name="see-also"></a>Vedere anche

[Manipolazione di stringhe](../../c-runtime-library/string-manipulation-crt.md)<br/>
[Impostazioni locali](../../c-runtime-library/locale.md)<br/>
[Interpretazione delle sequenze di Multibyte-Character](../../c-runtime-library/interpretation-of-multibyte-character-sequences.md)<br/>
[strcspn, wcscspn, _mbscspn, _mbscspn_l](strcspn-wcscspn-mbscspn-mbscspn-l.md)<br/>
[strspn, wcsspn, _mbsspn, _mbsspn_l](strspn-wcsspn-mbsspn-mbsspn-l.md)<br/>
