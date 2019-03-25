---
title: strtok, _strtok_l, wcstok, _wcstok_l, _mbstok, _mbstok_l
ms.date: 11/04/2016
apiname:
- _mbstok_l
- _mbstok
- wcstok
- _mbstok
- strtok
- _wcstok_l
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
apitype: DLLExport
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
ms.openlocfilehash: bb791c7049379f62b99804fa8f1cf3a57fe0b749
ms.sourcegitcommit: 0064d37467f958dd6a5111f20d7660eaccd53ee9
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/25/2019
ms.locfileid: "58416962"
---
# <a name="strtok-strtokl-wcstok-wcstokl-mbstok-mbstokl"></a>strtok, _strtok_l, wcstok, _wcstok_l, _mbstok, _mbstok_l

Trova il token successivo in una stringa, usando le impostazioni locali correnti o le impostazioni locali specificate passate. Sono disponibili versioni più sicure di queste funzioni; vedere [strtok_s, _strtok_s_l, wcstok_s, _wcstok_s_l, _mbstok_s, _mbstok_s_l](strtok-s-strtok-s-l-wcstok-s-wcstok-s-l-mbstok-s-mbstok-s-l.md).

> [!IMPORTANT]
> **mbstok** e **mbstok_l** non può essere utilizzato nelle applicazioni eseguite nel Runtime di Windows. Per altre informazioni, vedere [Funzioni CRT non supportate nelle app della piattaforma UWP (Universal Windows Platform)](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).

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
wchar_t *wcstok_l(
   wchar_t *strToken,
   const wchar_t *strDelimit,
   _locale_t locale
);
unsigned char *_mbstok(
   unsigned char*strToken,
   const unsigned char *strDelimit
);
unsigned char *_mbstok_l(
   unsigned char*strToken,
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

## <a name="return-value"></a>Valore restituito

Restituisce un puntatore al successivo token trovato *strToken*. Restituiscono **NULL** quando non vengono trovati più alcun token. Ogni chiamata Modifica *strToken* sostituendo un carattere null per il primo delimitatore che si verifica dopo che il token restituito.

## <a name="remarks"></a>Note

Il **strtok** funzione trova il token successivo nella *strToken*. Il set di caratteri in *strDelimit* specifica i possibili delimitatori del token da trovare nel *strToken* per la chiamata corrente. **wcstok** e **mbstok** sono versioni a caratteri wide e caratteri multibyte di **strtok**. Gli argomenti e il valore restituito di **wcstok** sono caratteri wide, mentre quelli di stringhe **mbstok** sono stringhe a caratteri multibyte. A parte ciò, queste tre funzioni si comportano in modo identico.

> [!IMPORTANT]
> Queste funzioni possono incorrere in una minaccia potenziale dovuta a un problema di sovraccarico del buffer. I problemi di sovraccarico del buffer sono usati spesso come metodo di attacco di sistema e provocano un'elevazione dei privilegi non autorizzata. Per altre informazioni, vedere [Evitare sovraccarichi del buffer](/windows/desktop/SecBP/avoiding-buffer-overruns).

La prima chiamata a **strtok**, la funzione ignora i delimitatori iniziali e restituisce un puntatore al primo token nel *strToken*, il token con un carattere null di terminazione. Ulteriori token può essere interrotta dal resto di *strToken* da una serie di chiamate a **strtok**. Ogni chiamata a **strtok** modificato *strToken* inserendo un carattere null dopo la **token** restituito dalla chiamata. Il token successivo da leggere *strToken*, chiamare **strtok** con un **NULL** value per il *strToken* argomento. Il **NULL** *strToken* argomento cause **strtok** per cercare il token successivo nella versione modificata *strToken*. Il *strDelimit* argomento può accettare qualsiasi valore da una chiamata a quella successiva in modo che il set di delimitatori può variare.

La configurazione dell'impostazione della categoria **LC_CTYPE** delle impostazioni locali influisce sul valore di output. Per altre informazioni, vedere [setlocale](setlocale-wsetlocale.md). Le versioni di queste funzioni senza il suffisso **_l** usano le impostazioni locali correnti per questo comportamento dipendente dalle impostazioni locali. Le versioni con il suffisso **_l** sono identiche, ma usano il parametro passato alle impostazioni locali. Per altre informazioni, vedere [Locale](../../c-runtime-library/locale.md).

> [!NOTE]
> Ogni funzione usa una variabile statica thread-local per la suddivisione della stringa in token. Più thread possono quindi chiamare contemporaneamente queste funzioni senza effetti indesiderati. Tuttavia, all'interno di un singolo thread, è molto probabile che l'esecuzione interleaved di chiamate a una di queste funzioni causi il danneggiamento dei dati e risultati non accurati. Quando si analizzano stringhe diverse, completare l'analisi di una stringa prima di iniziare ad analizzare la successiva. Tenere anche conto del potenziale pericolo quando si chiama una di queste funzioni da un ciclo in cui viene chiamata un'altra funzione. Se l'altra funzione usa una di queste funzioni, ne risulterà una sequenza interleaved di chiamate con conseguente danneggiamento dei dati.

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

[Modifica di stringhe](../../c-runtime-library/string-manipulation-crt.md)<br/>
[Impostazioni locali](../../c-runtime-library/locale.md)<br/>
[Interpretazione di sequenze di caratteri multibyte](../../c-runtime-library/interpretation-of-multibyte-character-sequences.md)<br/>
[strcspn, wcscspn, _mbscspn, _mbscspn_l](strcspn-wcscspn-mbscspn-mbscspn-l.md)<br/>
[strspn, wcsspn, _mbsspn, _mbsspn_l](strspn-wcsspn-mbsspn-mbsspn-l.md)<br/>
