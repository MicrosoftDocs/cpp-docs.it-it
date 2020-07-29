---
title: ':::no-loc(setlocale):::, :::no-loc(_wsetlocale):::'
description: 'Descrive le funzioni della libreria Microsoft C Runtime (CRT) :::no-loc(setlocale)::: e :::no-loc(_wsetlocale)::: .'
ms.date: 4/2/2020
api_name:
- ':::no-loc(_wsetlocale):::'
- ':::no-loc(setlocale):::'
- '_o_:::no-loc(_wsetlocale):::'
- '_o_:::no-loc(setlocale):::'
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
- api-ms-win-crt-locale-l1-1-0.dll
- api-ms-win-crt-private-l1-1-0.dll
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- ':::no-loc(_wsetlocale):::'
- '_t:::no-loc(setlocale):::'
- ':::no-loc(setlocale):::'
helpviewer_keywords:
- 'w:::no-loc(setlocale)::: function'
- ':::no-loc(setlocale)::: function'
- 't:::no-loc(setlocale)::: function'
- locales, defining
- '_t:::no-loc(setlocale)::: function'
- defining locales
- ':::no-loc(_wsetlocale)::: function'
ms.assetid: 3ffb684e-5990-4202-9553-b5339af9520d
no-loc:
- ':::no-loc(setlocale):::'
- ':::no-loc(_wsetlocale):::'
ms.openlocfilehash: 05e4e96297e2237ed6768e05ff4cacfd63744e1a
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87226138"
---
# <a name="no-locsetlocale-no-loc_wsetlocale"></a>:::no-loc(setlocale):::, :::no-loc(_wsetlocale):::

Imposta o recupera le impostazioni locali in fase di esecuzione.

## <a name="syntax"></a>Sintassi

```C
char *:::no-loc(setlocale):::(
   int category,
   const char *locale
);
wchar_t *:::no-loc(_wsetlocale):::(
   int category,
   const wchar_t *locale
);
```

### <a name="parameters"></a>Parametri

*Categoria*\
Categoria influenzata dalle impostazioni locali.

*locale*\
Identificatore delle impostazioni locali.

## <a name="return-value"></a>Valore restituito

Se vengono specificate le *impostazioni locali* e la *categoria* valide, restituisce un puntatore alla stringa associata alle *impostazioni locali* e alla *categoria*specificate. Se le impostazioni *locali* o la *categoria* non sono valide, restituisce un puntatore null e le impostazioni locali correnti del programma non vengono modificate.

Ad esempio, la chiamata

```C
:::no-loc(setlocale):::( LC_ALL, "en-US" );
```

imposta tutte le categorie, restituendo solo la stringa

```Output
en-US
```

È possibile copiare la stringa restituita da **:::no-loc(setlocale):::** per ripristinare la parte delle informazioni sulle impostazioni locali del programma. L'archiviazione globale o thread-local viene utilizzata per la stringa restituita da **:::no-loc(setlocale):::** . Le chiamate successive a **:::no-loc(setlocale):::** sovrascrivono la stringa, che invalida i puntatori di stringa restituiti dalle chiamate precedenti.

## <a name="remarks"></a>Osservazioni

Utilizzare la **:::no-loc(setlocale):::** funzione per impostare, modificare o eseguire una query su alcune o tutte le informazioni sulle impostazioni locali del programma corrente specificate in base alle *impostazioni locali* e alla *categoria*. le *impostazioni locali* si riferiscono alla località (paese/area geografica e lingua) per cui è possibile personalizzare alcuni aspetti del programma. Alcune categorie dipendenti dalle impostazioni locali includono la formattazione delle date e il formato di visualizzazione dei valori monetari. Se si impostano le *impostazioni locali* sulla stringa predefinita per una lingua con più forme supportate nel computer, è necessario controllare il **:::no-loc(setlocale):::** valore restituito per vedere quale lingua è attiva. Se ad esempio si impostano le *impostazioni locali* su "cinese", il valore restituito potrebbe essere "cinese semplificato" o "cinese tradizionale".

**:::no-loc(_wsetlocale):::** è una versione a caratteri wide di **:::no-loc(setlocale):::** . l'argomento delle *impostazioni locali* e il valore restituito di **:::no-loc(_wsetlocale):::** sono stringhe a caratteri wide. **:::no-loc(_wsetlocale):::** e si **:::no-loc(setlocale):::** comportano in modo identico.

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa situazione, vedere [stato globale in CRT](../global-state.md).

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|------------------------------------|--------------------|-----------------------|
|**_t:::no-loc(setlocale):::**|**:::no-loc(setlocale):::**|**:::no-loc(setlocale):::**|**:::no-loc(_wsetlocale):::**|

L'argomento *Category* specifica le parti delle informazioni sulle impostazioni locali di un programma interessate. Le macro usate per la *categoria* e le parti del programma che influiscono sono le seguenti:

|flag *categoria*|Impatto|
|-|-|
| **LC_ALL** | Tutte le categorie, come indicato di seguito. |
| **LC_COLLATE** | Funzioni **strcoll**, **_stricoll**, **wcscoll**, **_wcsicoll**, **strxfrm**, **_strncoll**, **_strnicoll**, **_wcsncoll**, **_wcsnicoll**e **wcsxfrm** . |
| **LC_CTYPE** | Funzioni di gestione dei caratteri **, ad eccezione di** **isxdigit**, **mbstowcs**e **mbtowc**, che non sono interessate. |
| **LC_MONETARY** | Informazioni sulla formattazione monetaria restituite dalla funzione **localeconv** . |
| **LC_NUMERIC** | Carattere del separatore decimale per le routine di output formattate, ad esempio **printf**, per le routine di conversione dei dati e per le informazioni di formattazione non monetarie restituite da **localeconv**. Oltre al carattere del separatore decimale, **LC_NUMERIC** imposta il separatore delle migliaia e la stringa di controllo del raggruppamento restituiti da [localeconv](localeconv.md). |
| **LC_TIME** | Funzioni **strftime** e **wcsftime** . |

Questa funzione convalida il parametro di categoria. Se il parametro category non è uno dei valori indicati nella tabella precedente, viene richiamato il gestore di parametri non validi, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, la funzione imposta **errno** su **EINVAL** e restituisce **null**.

L'argomento delle *impostazioni locali* è un puntatore a una stringa che specifica le impostazioni locali. Per informazioni sul formato dell'argomento delle *impostazioni locali* , vedere [nomi delle impostazioni locali, lingue e stringhe di paese/area geografica](../../c-runtime-library/locale-names-languages-and-country-region-strings.md). Se *locale* punta a una stringa vuota, le impostazioni locali corrispondono all'ambiente nativo definito in fase di implementazione. Il valore **c** specifica l'ambiente di conformità ANSI minimo per la conversione c. Nelle impostazioni locali **C** si presuppone che tutti i **`char`** tipi di dati siano di 1 byte e che il relativo valore sia sempre inferiore a 256.

All'avvio del programma, viene eseguito l'equivalente dell'istruzione seguente:

`:::no-loc(setlocale):::( LC_ALL, "C" );`

L'argomento delle *impostazioni locali* può assumere un nome delle impostazioni locali, una stringa di lingua, una stringa di lingua e un codice paese/area geografica, una tabella codici o una stringa di lingua, un codice paese e una tabella codici. Il set di nomi delle impostazioni locali disponibili, le lingue, i codici paese e le tabelle codici include tutti quelli supportati da Windows NLS API. Il set di nomi delle impostazioni locali supportato da **:::no-loc(setlocale):::** è descritto in [nomi delle impostazioni locali, lingue e stringhe di paese/area geografica](../../c-runtime-library/locale-names-languages-and-country-region-strings.md). Il set di stringhe lingua e paese/area geografica supportate da **:::no-loc(setlocale):::** sono elencate in [stringhe di lingua](../../c-runtime-library/language-strings.md) e [stringhe di paese/area geografica](../../c-runtime-library/country-region-strings.md). Ai fini delle prestazioni e delle manutenibilità delle stringhe delle impostazioni locali, è consigliabile incorporare il nome delle impostazioni locali nel codice o serializzarlo nell'archiviazione. È più probabile che in seguito a un aggiornamento del sistema operativo venga modificato il formato del nome della lingua e del paese e non le stringhe del nome delle impostazioni locali.

Un puntatore NULL passato come argomento delle *impostazioni locali* indica **:::no-loc(setlocale):::** a di eseguire query anziché impostare l'ambiente internazionale. Se l'argomento delle *impostazioni locali* è un puntatore null, le impostazioni locali correnti del programma non vengono modificate. Restituisce invece **:::no-loc(setlocale):::** un puntatore alla stringa associata alla *categoria* delle impostazioni locali correnti del thread. Se l'argomento *Category* è **LC_ALL**, la funzione restituisce una stringa che indica l'impostazione corrente di ogni categoria, separate da punti e virgola. Ad esempio, la sequenza di chiamate

```C
// Set all categories and return "en-US"
:::no-loc(setlocale):::(LC_ALL, "en-US");
// Set only the LC_MONETARY category and return "fr-FR"
:::no-loc(setlocale):::(LC_MONETARY, "fr-FR");
printf("%s\n", :::no-loc(setlocale):::(LC_ALL, NULL));
```

Restituisce

```Output
LC_COLLATE=en-US;LC_CTYPE=en-US;LC_MONETARY=fr-FR;LC_NUMERIC=en-US;LC_TIME=en-US
```

che è la stringa associata alla categoria **LC_ALL** .

Gli esempi seguenti riguardano la categoria **LC_ALL** . Una delle stringhe ". OCP "e". ACP "può essere utilizzato al posto di un numero di tabella codici per specificare l'utilizzo della tabella codici OEM predefinita dell'utente e della tabella codici ANSI predefinita dell'utente per il nome delle impostazioni locali, rispettivamente.

- `:::no-loc(setlocale):::( LC_ALL, "" );`

   Imposta le impostazioni locali sui valori predefiniti, ovvero la tabella codici ANSI predefinita dell'utente ottenuta dal sistema operativo. Il nome delle impostazioni locali è impostato sul valore restituito da [GetUserDefaultLocaleName](/windows/win32/api/winnls/nf-winnls-getuserdefaultlocalename). La tabella codici è impostata sul valore restituito da [GetACP](/windows/win32/api/winnls/nf-winnls-getacp).

- `:::no-loc(setlocale):::( LC_ALL, ".OCP" );`

   Imposta le impostazioni locali sulla tabella codici OEM corrente ottenuta dal sistema operativo. Il nome delle impostazioni locali è impostato sul valore restituito da [GetUserDefaultLocaleName](/windows/win32/api/winnls/nf-winnls-getuserdefaultlocalename). La tabella codici è impostata sul valore [LOCALE_IDEFAULTCODEPAGE](/windows/win32/intl/locale-idefault-constants) per il nome delle impostazioni locali predefinito dell'utente [GetLocaleInfoEx](/windows/win32/api/winnls/nf-winnls-getlocaleinfoex).

- `:::no-loc(setlocale):::( LC_ALL, ".ACP" );`

   Imposta le impostazioni locali sulla tabella codici ANSI ottenuta dal sistema operativo. Il nome delle impostazioni locali è impostato sul valore restituito da [GetUserDefaultLocaleName](/windows/win32/api/winnls/nf-winnls-getuserdefaultlocalename). La tabella codici è impostata sul valore [LOCALE_IDEFAULTANSICODEPAGE](/windows/win32/intl/locale-idefault-constants) per il nome delle impostazioni locali predefinito dell'utente [GetLocaleInfoEx](/windows/win32/api/winnls/nf-winnls-getlocaleinfoex).

- `:::no-loc(setlocale):::( LC_ALL, "<localename>" );`

   Imposta le impostazioni locali sul nome delle impostazioni locali indicato da *\<localename>* . La tabella codici è impostata sul valore [LOCALE_IDEFAULTANSICODEPAGE](/windows/win32/intl/locale-idefault-constants) per il nome delle impostazioni locali specificato da [GetLocaleInfoEx](/windows/win32/api/winnls/nf-winnls-getlocaleinfoex).

- `:::no-loc(setlocale):::( LC_ALL, "<language>_<country>" );`

   Imposta le impostazioni locali sulla lingua e il paese/area geografica indicati da *\<language>* e *\<country>* , insieme alla tabella codici predefinita ottenuta dal sistema operativo host. La tabella codici è impostata sul valore [LOCALE_IDEFAULTANSICODEPAGE](/windows/win32/intl/locale-idefault-constants) per il nome delle impostazioni locali specificato da [GetLocaleInfoEx](/windows/win32/api/winnls/nf-winnls-getlocaleinfoex).

- `:::no-loc(setlocale):::( LC_ALL, "<language>_<country>.<code_page>" );`

   Imposta le impostazioni locali sulla lingua, il paese/area geografica e la tabella codici indicati *\<language>* dalle *\<country>* stringhe, e *\<code_page>* . È possibile utilizzare varie combinazioni di lingua, paese e tabella codici. Questa chiamata imposta ad esempio le impostazioni locali sulla lingua francese del Canada con la tabella codici 1252:

   `:::no-loc(setlocale):::( LC_ALL, "French_Canada.1252" );`

   Questa chiamata imposta le impostazioni locali sulla lingua francese del Canada con la tabella codici ANSI predefinita:

   `:::no-loc(setlocale):::( LC_ALL, "French_Canada.ACP" );`

   Questa chiamata imposta le impostazioni locali sulla lingua francese del Canada con la tabella codici OEM predefinita:

   `:::no-loc(setlocale):::( LC_ALL, "French_Canada.OCP" );`

- `:::no-loc(setlocale):::( LC_ALL, "<language>" );`

   Imposta le impostazioni locali sulla lingua indicata da *\<language>* e usa il paese/area geografica predefinito per la lingua specificata e la tabella codici ANSI predefinita dell'utente per tale paese/area geografica, come ottenuto dal sistema operativo host. Ad esempio, le chiamate a seguenti **:::no-loc(setlocale):::** sono equivalenti dal punto di vista funzionale:

   `:::no-loc(setlocale):::( LC_ALL, "en-US" );`

   `:::no-loc(setlocale):::( LC_ALL, "English" );`

   `:::no-loc(setlocale):::( LC_ALL, "English_United States.1252" );`

   Ai fini delle prestazioni e della manutenibilità, è consigliabile utilizzare la prima forma.

- `:::no-loc(setlocale):::( LC_ALL, ".<code_page>" );`

   Imposta la tabella codici sul valore indicato da *<code_page>*, con il paese/area geografica e la lingua predefiniti (come definito dal sistema operativo host) per la tabella codici specificata.

La categoria deve essere **LC_ALL** o **LC_CTYPE** per applicare una modifica della tabella codici. Se, ad esempio, il paese e la lingua predefiniti del sistema operativo host sono "Stati Uniti" e "English", le due chiamate seguenti a **:::no-loc(setlocale):::** sono equivalenti dal punto di vista funzionale:

`:::no-loc(setlocale):::( LC_ALL, ".1252" );`

`:::no-loc(setlocale):::( LC_ALL, "English_United States.1252");`

Per ulteriori informazioni, vedere la [:::no-loc(setlocale):::](../../preprocessor/:::no-loc(setlocale):::.md) direttiva pragma nella Guida di [riferimento al preprocessore C/C++](../../preprocessor/c-cpp-preprocessor-reference.md).

La funzione [_configthreadlocale](configthreadlocale.md) viene utilizzata per controllare se **:::no-loc(setlocale):::** influisca sulle impostazioni locali di tutti i thread di un programma o solo sulle impostazioni locali del thread chiamante.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**:::no-loc(setlocale):::**|\<locale.h>|
|**:::no-loc(_wsetlocale):::**|\<locale.h> o \<wchar.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

```C
// crt_:::no-loc(setlocale):::.c
//
// This program demonstrates the use of :::no-loc(setlocale)::: when
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
           :::no-loc(setlocale):::(LC_ALL, locale));

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

    // Enable per-thread locale causes all subsequent locale
    // setting changes in this thread to only affect this thread.
    _configthreadlocale(_ENABLE_PER_THREAD_LOCALE);

    // Set the locale of the main thread to US English.
    printf("The thread locale is now set to %s.\n",
           :::no-loc(setlocale):::(LC_ALL, "en-US"));

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

[Nomi delle impostazioni locali, lingue e stringhe di paese/area geografica](../../c-runtime-library/locale-names-languages-and-country-region-strings.md)\
[_configthreadlocale](configthreadlocale.md)\
[_create_locale, _wcreate_locale](create-locale-wcreate-locale.md)\
[Locale](../../c-runtime-library/locale.md)\
[localeconv](localeconv.md)\
[_mbclen, mblen, _mblen_l](mbclen-mblen-mblen-l.md)\
[strlen, wcslen, _mbslen, _mbslen_l, _mbstrlen, _mbstrlen_l](strlen-wcslen-mbslen-mbslen-l-mbstrlen-mbstrlen-l.md)\
[mbstowcs, _mbstowcs_l](mbstowcs-mbstowcs-l.md)\
[mbtowc, _mbtowc_l](mbtowc-mbtowc-l.md)\
[_setmbcp](setmbcp.md)\
[Funzioni strcoll](../../c-runtime-library/strcoll-functions.md)\
[strftime, wcsftime, _strftime_l, _wcsftime_l](strftime-wcsftime-strftime-l-wcsftime-l.md)\
[strxfrm, wcsxfrm, _strxfrm_l, _wcsxfrm_l](strxfrm-wcsxfrm-strxfrm-l-wcsxfrm-l.md)\
[wcstombs, _wcstombs_l](wcstombs-wcstombs-l.md)\
[wctomb, _wctomb_l](wctomb-wctomb-l.md)
