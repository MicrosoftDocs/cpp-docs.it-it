---
title: setlocale, _wsetlocale | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: ''
ms.topic: reference
apiname:
- _wsetlocale
- setlocale
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
- api-ms-win-crt-locale-l1-1-0.dll
apitype: DLLExport
f1_keywords:
- _wsetlocale
- _tsetlocale
- setlocale
dev_langs:
- C++
helpviewer_keywords:
- wsetlocale function
- setlocale function
- tsetlocale function
- locales, defining
- _tsetlocale function
- defining locales
- _wsetlocale function
ms.assetid: 3ffb684e-5990-4202-9553-b5339af9520d
caps.latest.revision: 31
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: e2c14f9422879ad4896bf51d03d5e27b6e91ea54
ms.sourcegitcommit: ef859ddf5afea903711e36bfd89a72389a12a8d6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/20/2018
---
# <a name="setlocale-wsetlocale"></a>setlocale, _wsetlocale

Imposta o recupera le impostazioni locali in fase di esecuzione.

## <a name="syntax"></a>Sintassi

```C
char *setlocale(
   int category,
   const char *locale
);
wchar_t *_wsetlocale(
   int category,
   const wchar_t *locale
);
```

### <a name="parameters"></a>Parametri

*category*<br/>
Categoria influenzata dalle impostazioni locali.

*locale*<br/>
Identificatore delle impostazioni locali.

## <a name="return-value"></a>Valore restituito

Se un valore valido *delle impostazioni locali* e *categoria* sono specificati e restituisce un puntatore alla stringa associata all'oggetto specificato *delle impostazioni locali* e *categoria*. Se il *delle impostazioni locali* oppure *categoria* non è valido, restituisce un puntatore null e le impostazioni locali correnti del programma non vengono modificate.

Ad esempio, la chiamata

```C
setlocale( LC_ALL, "en-US" );
```

imposta tutte le categorie, restituendo solo la stringa

```Output
en-US
```

È possibile copiare la stringa restituita da **setlocale** per ripristinare la parte delle informazioni sulle impostazioni locali del programma. Globale o thread archiviazione locale viene usata per la stringa restituita da **setlocale**. Le chiamate successive a **setlocale** sovrascrivere la stringa, che consente di invalidare i puntatori di stringa restituiti dalle chiamate precedenti.

## <a name="remarks"></a>Note

Usare la **setlocale** funzione per impostare, modificare o eseguire una query alcune o tutte le informazioni delle impostazioni locali di programma corrente specificate dal *delle impostazioni locali* e *categoria*. *impostazioni locali* fa riferimento alla località (paese/area geografica e lingua) per il quale è possibile personalizzare alcuni aspetti del programma. Alcune categorie dipendenti dalle impostazioni locali includono la formattazione delle date e il formato di visualizzazione dei valori monetari. Se si imposta *delle impostazioni locali* per la stringa predefinita per una lingua che include più forme supportate nel computer in uso, è consigliabile controllare il **setlocale** un valore restituito per vedere quale lingua è attiva. Ad esempio, se si imposta *delle impostazioni locali* su "cinese" il valore restituito potrebbe essere "cinese semplificato" o "cinese tradizionale".

**wsetlocale** è una versione a caratteri "wide" **setlocale**; il *impostazioni locali* argomento e il valore restituito di **wsetlocale** sono stringhe a caratteri "wide". **wsetlocale** e **setlocale** si comportano in modo identico in caso contrario.

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|------------------------------------|--------------------|-----------------------|
|**tsetlocale**|**setlocale**|**setlocale**|**_wsetlocale**|

Il *categoria* argomento specifica le parti di informazioni sulle impostazioni locali del programma interessate. Le macro utilizzate per *categoria* e le parti del programma interessate sono le seguenti:

|*categoria* flag|Applicazione|
|-|-|
**LC_ALL**|Tutte le categorie, come indicato di seguito.
**LC_COLLATE**|Il **strcoll**, **stricoll**, **wcscoll**, **wcsicoll**, **strxfrm**, **_ strncoll**, **strnicoll**, **wcsncoll**, **wcsnicoll**, e **wcsxfrm** funzioni.
**LC_CTYPE**|Le funzioni di gestione dei caratteri (tranne **isdigit**, **isxdigit**, **mbstowcs**, e **mbtowc**, che non sono interessate).
**LC_MONETARY**|Le informazioni di formattazione monetaria restituite dal **localeconv** (funzione).
**LC_NUMERIC**|Carattere per la routine di output formattate del separatore decimale (ad esempio **printf**), per le routine di conversione dei dati e per le informazioni di formattazione non monetarie restituite da **localeconv**. Oltre a carattere del separatore decimale **LC_NUMERIC** separatore imposta le migliaia e il raggruppamento di controllare la stringa restituita da [localeconv](localeconv.md).
**LC_TIME**|Il **strftime** e **wcsftime** funzioni.

Questa funzione convalida il parametro di categoria. Se il parametro di categoria non è uno dei valori forniti nella tabella precedente, viene richiamato il gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, la funzione imposta **errno** alla **EINVAL** e restituisce **NULL**.

Il *delle impostazioni locali* argomento è un puntatore a una stringa che specifica le impostazioni locali. Per informazioni relative al formato del *delle impostazioni locali* argomento, vedere [nomi delle impostazioni locali, lingue e stringhe di paese/area geografica](../../c-runtime-library/locale-names-languages-and-country-region-strings.md). Se *locale* punta a una stringa vuota, le impostazioni locali corrispondono all'ambiente nativo definito in fase di implementazione. Il valore **C** specifica l'ambiente ANSI minimo per la conversione C. Il **C** delle impostazioni locali si presuppongono che tutti i **char** tipi di dati sono di 1 byte e che il valore è sempre minore di 256.

All'avvio del programma, viene eseguito l'equivalente dell'istruzione seguente:

`setlocale( LC_ALL, "C" );`

Il *delle impostazioni locali* argomento può richiedere un nome delle impostazioni locali, una stringa di lingua, una stringa di lingua e codice di paese/area geografica, una tabella codici, o una stringa di lingua, codice di paese/area geografica e tabella codici. Il set dei nomi delle impostazioni locali disponibili, le lingue, i codici paese e le tabelle codici include tutti quelli supportati dalle API NLS di Windows, ad eccezione delle tabelle codici che richiedono più di due byte per carattere, ad esempio UTF-7 e UTF-8. Se si fornisce un valore di tabella codici di UTF-8 o UTF-7 **setlocale** , verrà restituito NULL. Il set di nomi delle impostazioni locali supportate da **setlocale** descritte in [nomi delle impostazioni locali, lingue e stringhe di paese/area geografica](../../c-runtime-library/locale-names-languages-and-country-region-strings.md). Il set di stringhe lingua e paese/area geografica supportati da **setlocale** sono racchiusi [stringhe relative a lingue](../../c-runtime-library/language-strings.md) e [stringhe paese/area geografica](../../c-runtime-library/country-region-strings.md). Ai fini delle prestazioni e delle manutenibilità delle stringhe delle impostazioni locali, è consigliabile incorporare il nome delle impostazioni locali nel codice o serializzarlo nell'archiviazione. È più probabile che in seguito a un aggiornamento del sistema operativo venga modificato il formato del nome della lingua e del paese e non le stringhe del nome delle impostazioni locali.

Un puntatore null passato come il *delle impostazioni locali* argomento indica **setlocale** di eseguire query anziché impostare l'ambiente internazionale. Se il *delle impostazioni locali* argomento è un puntatore null, non vengono modificate le impostazioni del programma corrente delle impostazioni locali. Al contrario, **setlocale** restituisce un puntatore alla stringa di cui è associata il *categoria* delle impostazioni locali correnti del thread. Se il *categoria* argomento **LC_ALL**, la funzione restituisce una stringa che indica l'impostazione corrente di tutte le categorie, separate da punti e virgola. Ad esempio, la sequenza di chiamate

```C
// Set all categories and return "en-US"
setlocale(LC_ALL, "en-US");
// Set only the LC_MONETARY category and return "fr-FR"
setlocale(LC_MONETARY, "fr-FR");
printf("%s\n", setlocale(LC_ALL, NULL));
```

restituisce

```Output
LC_COLLATE=en-US;LC_CTYPE=en-US;LC_MONETARY=fr-FR;LC_NUMERIC=en-US;LC_TIME=en-US
```

ovvero la stringa di cui è associata il **LC_ALL** categoria.

Negli esempi seguenti riguardano la **LC_ALL** categoria. Le stringhe "OCP" e "ACP" possono essere utilizzate al posto di un numero di tabella codici per specificare l'utilizzo della tabella codici OEM predefinita dell'utente e della tabella codici ANSI predefinita dell'utente.

- `setlocale( LC_ALL, "" );`

   Imposta le impostazioni locali sui valori predefiniti, ovvero la tabella codici ANSI predefinita dell'utente ottenuta dal sistema operativo.

- `setlocale( LC_ALL, ".OCP" );`

   Imposta in modo esplicito le impostazioni locali sulla tabella codici OEM corrente ottenuta dal sistema operativo.

- `setlocale( LC_ALL, ".ACP" );`

   Imposta le impostazioni locali sulla tabella codici ANSI ottenuta dal sistema operativo.

- `setlocale( LC_ALL, "<localename>" );`

   Imposta le impostazioni locali sul nome delle impostazioni locali indicate da *\<localename>*.

- `setlocale( LC_ALL, "<language>_<country>" );`

   Imposta le impostazioni locali sulla lingua e il paese/area geografica indicati da *\<language>* e *\<country>*, insieme alla tabella codici predefinita ottenuta dal sistema operativo host.

- `setlocale( LC_ALL, "<language>_<country>.<code_page>" );`

   Imposta le impostazioni locali per la lingua, paese/area geografica e tabella codici indicata dal  *\<lingua >*,  *\<paese >*, e  *\<code_page >* stringhe. È possibile utilizzare varie combinazioni di lingua, paese e tabella codici. Questa chiamata imposta ad esempio le impostazioni locali sulla lingua francese del Canada con la tabella codici 1252:

   `setlocale( LC_ALL, "French_Canada.1252" );`

   Questa chiamata imposta le impostazioni locali sulla lingua francese del Canada con la tabella codici ANSI predefinita:

   `setlocale( LC_ALL, "French_Canada.ACP" );`

   Questa chiamata imposta le impostazioni locali sulla lingua francese del Canada con la tabella codici OEM predefinita:

   `setlocale( LC_ALL, "French_Canada.OCP" );`

- `setlocale( LC_ALL, "<language>" );`

   Imposta le impostazioni locali sulla lingua indicata da *\<language>* e usa il paese/area geografica predefinito per la lingua specificata e la tabella codici ANSI predefinita dell'utente per tale paese/area geografica, secondo quanto ottenuto dal sistema operativo host. Ad esempio, nell'esempio le chiamate a **setlocale** sono funzionalmente equivalenti:

   `setlocale( LC_ALL, "en-US" );`

   `setlocale( LC_ALL, "English" );`

   `setlocale( LC_ALL, "English_United States.1252" );`

   Ai fini delle prestazioni e della manutenibilità, è consigliabile utilizzare la prima forma.

- `setlocale( LC_ALL, ".<code_page>" );`

   Imposta la tabella codici sul valore indicato da *<code_page>*, con il paese/area geografica e la lingua predefiniti (come definito dal sistema operativo host) per la tabella codici specificata.

La categoria deve essere **LC_ALL** oppure **LC_CTYPE** per rendere effettiva una modifica della tabella codici. Ad esempio, se il valore predefinito paese/area geografica e la lingua del sistema operativo host sono "United States" e "English", i seguenti due chiamate a **setlocale** sono funzionalmente equivalenti:

`setlocale( LC_ALL, ".1252" );`

`setlocale( LC_ALL, "English_United States.1252");`

Per altre informazioni, vedere la direttiva pragma [setlocale](../../preprocessor/setlocale.md) in [Riferimenti al preprocessore C/C++](../../preprocessor/c-cpp-preprocessor-reference.md).

La funzione [configthreadlocale](configthreadlocale.md) consente di controllare se **setlocale** influisce sulle impostazioni locali di tutti i thread in un programma o solo le impostazioni locali del thread chiamante.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**setlocale**|\<locale.h>|
|**_wsetlocale**|\<locale.h> o \<wchar.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

```C
// crt_setlocale.c
//
// This program demonstrates the use of setlocale when
// using two independent threads.
//

#include <locale.h>
#include <process.h>
#include <windows.h>
#include <stdio.h>
#include <time.h>

#define BUFF_SIZE 100

// Retrieve the date in the current
// locale's format.
int get_date(unsigned char* str)
{
    __time64_t ltime;
    struct tm  thetime;

    // Retrieve the current time
    _time64(&ltime);
    _gmtime64_s(&thetime, &ltime);

    // Format the current time structure into a string
    // "%#x" is the long date representation in the
    // current locale
    if (!strftime((char *)str, BUFF_SIZE, "%#x",
                  (const struct tm *)&thetime))
    {
        printf("strftime failed!\n");
        return -1;
    }
    return 0;
}

// This thread sets its locale to the argument
// and prints the date.
uintptr_t __stdcall SecondThreadFunc( void* pArguments )
{
    unsigned char str[BUFF_SIZE];
    char * locale = (char *)pArguments;

    // Set the thread locale
    printf("The thread locale is now set to %s.\n",
           setlocale(LC_ALL, locale));

    // Retrieve the date string from the helper function
    if (get_date(str) == 0)
    {
        printf("The date in %s locale is: '%s'\n", locale, str);
    }

    _endthreadex( 0 );
    return 0;
}

// The main thread sets the locale to English
// and then spawns a second thread (above) and prints the date.
int main()
{
    HANDLE          hThread;
    unsigned        threadID;
    unsigned char   str[BUFF_SIZE];

    // Configure per-thread locale to cause all subsequently created
    // threads to have their own locale.
    _configthreadlocale(_ENABLE_PER_THREAD_LOCALE);

    // Set the locale of the main thread to US English.
    printf("The thread locale is now set to %s.\n",
           setlocale(LC_ALL, "en-US"));

    // Create the second thread with a German locale.
    // Our thread function takes an argument of the locale to use.
    hThread = (HANDLE)_beginthreadex( NULL, 0, &SecondThreadFunc,
                                      "de-DE", 0, &threadID );

    if (get_date(str) == 0)
    {
        // Retrieve the date string from the helper function
        printf("The date in en-US locale is: '%s'\n\n", str);
    }

    // Wait for the created thread to finish.
    WaitForSingleObject( hThread, INFINITE );

    // Destroy the thread object.
    CloseHandle( hThread );
}
```

```Output
The thread locale is now set to en-US.
The time in en-US locale is: 'Wednesday, May 12, 2004'

The thread locale is now set to de-DE.
The time in de-DE locale is: 'Mittwoch, 12. Mai 2004'
```

## <a name="see-also"></a>Vedere anche

[Nomi delle impostazioni locali, lingue e stringhe di paese/area geografica](../../c-runtime-library/locale-names-languages-and-country-region-strings.md)<br/>
[_configthreadlocale](configthreadlocale.md)<br/>
[_create_locale, _wcreate_locale](create-locale-wcreate-locale.md)<br/>
[Impostazioni locali](../../c-runtime-library/locale.md)<br/>
[localeconv](localeconv.md)<br/>
[_mbclen, mblen, _mblen_l](mbclen-mblen-mblen-l.md)<br/>
[strlen, wcslen, _mbslen, _mbslen_l, _mbstrlen, _mbstrlen_l](strlen-wcslen-mbslen-mbslen-l-mbstrlen-mbstrlen-l.md)<br/>
[mbstowcs, _mbstowcs_l](mbstowcs-mbstowcs-l.md)<br/>
[mbtowc, _mbtowc_l](mbtowc-mbtowc-l.md)<br/>
[_setmbcp](setmbcp.md)<br/>
[Funzioni strcoll](../../c-runtime-library/strcoll-functions.md)<br/>
[strftime, wcsftime, _strftime_l, _wcsftime_l](strftime-wcsftime-strftime-l-wcsftime-l.md)<br/>
[strxfrm, wcsxfrm, _strxfrm_l, _wcsxfrm_l](strxfrm-wcsxfrm-strxfrm-l-wcsxfrm-l.md)<br/>
[wcstombs, _wcstombs_l](wcstombs-wcstombs-l.md)<br/>
[wctomb, _wctomb_l](wctomb-wctomb-l.md)<br/>
