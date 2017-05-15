---
title: setlocale, _wsetlocale | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
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
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
ms.translationtype: Machine Translation
ms.sourcegitcommit: e257f037a05c45f5b98e64ea55bd125af443b0be
ms.openlocfilehash: 5a83ef5640a72dcd2ff8f7f35c587789dff35d61
ms.contentlocale: it-it
ms.lasthandoff: 03/29/2017

---
# <a name="setlocale-wsetlocale"></a>setlocale, _wsetlocale
Imposta o recupera le impostazioni locali in fase di esecuzione.  
  
## <a name="syntax"></a>Sintassi  
  
```  
char *setlocale(  
   int category,  
   const char *locale   
);  
wchar_t *_wsetlocale(  
   int category,  
   const wchar_t *locale   
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `category`  
 Categoria influenzata dalle impostazioni locali.  
  
 `locale`  
 Identificatore delle impostazioni locali.  
  
## <a name="return-value"></a>Valore restituito  
 Se vengono specificati `locale` e `category` validi, restituisce un puntatore alla stringa associata a `locale` e `category` specificati. Se `locale` o `category` non è valido, restituisce un puntatore Null e le impostazioni locali correnti del programma non vengono modificate.  
  
 Ad esempio, la chiamata  
  
 `setlocale( LC_ALL, "en-US" );`  
  
 imposta tutte le categorie, restituendo solo la stringa  
  
 `en-US`  
  
 È possibile copiare la stringa restituita da `setlocale` per ripristinare la parte delle impostazioni locali del programma. Per la stringa restituita da `setlocale` viene utilizzata l'archiviazione globale o locale dei thread. Le chiamate successive a `setlocale` sovrascrivono la stringa, operazione che rende non più validi i puntatori di stringa restituiti dalle chiamate precedenti.  
  
## <a name="remarks"></a>Note  
 Utilizzare la funzione `setlocale` per impostare, modificare o eseguire query su alcune o tutte le informazioni sulle impostazioni locali del programma corrente specificate da `locale` e `category`. `locale` fa riferimento alla località (paese e lingua) per cui è possibile personalizzare alcuni aspetti del programma. Alcune categorie dipendenti dalle impostazioni locali includono la formattazione delle date e il formato di visualizzazione dei valori monetari. Se si imposta `locale` sulla stringa predefinita per una lingua con più forme supportate nel computer, controllare il valore restituito di `setlocale` per sapere quale lingua è attiva. Se ad esempio si imposta `locale` su "cinese", il valore restituito potrebbe essere "cinese semplificato" o "cinese tradizionale".  
  
 `_wsetlocale` è una versione a caratteri wide di `setlocale`. L'argomento `locale` e il valore restituito da `_wsetlocale` è dato da stringhe a caratteri wide. In caso contrario, `_wsetlocale` e `setlocale` si comportano in modo identico.  
  
### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico  
  
|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|  
|---------------------|------------------------------------|--------------------|-----------------------|  
|`_tsetlocale`|`setlocale`|`setlocale`|`_wsetlocale`|  
  
 L'argomento `category` specifica le parti interessate delle informazioni sulle impostazioni locali di un programma. Le macro utilizzate per `category` e le parti del programma interessate sono le seguenti:  
  
 `LC_ALL`  
 Tutte le categorie nell'elenco seguente.  
  
 `LC_COLLATE`  
 Le funzioni `strcoll`, `_stricoll`, `wcscoll`, `_wcsicoll`, `strxfrm`, `_strncoll`, `_strnicoll`, `_wcsncoll`, `_wcsnicoll` e `wcsxfrm`.  
  
 `LC_CTYPE`  
 Le funzioni di gestione dei caratteri, ad eccezione di `isdigit`, `isxdigit`, `mbstowcs` e `mbtowc` che non sono interessate.  
  
 `LC_MONETARY`  
 Informazioni di formattazione monetaria restituite dalla funzione `localeconv`.  
  
 `LC_NUMERIC`  
 Carattere del separatore decimale per le routine di output formattate, ad esempio `printf`, per le routine di conversione dei dati e per le informazioni di formattazione non monetarie restituite da `localeconv`. Oltre al carattere del separatore decimale, `LC_NUMERIC` imposta anche il separatore delle migliaia e la stringa di controllo del raggruppamento restituiti da [localeconv](../../c-runtime-library/reference/localeconv.md).  
  
 `LC_TIME`  
 Funzioni `strftime` e `wcsftime`.  
  
 Questa funzione convalida il parametro di categoria. Se il parametro di categoria non è uno dei valori forniti nella tabella precedente, viene richiamato il gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, la funzione imposta `errno` su `EINVAL` e restituisce `NULL`.  
  
 L'argomento `locale` è un puntatore a una stringa che specifica le impostazioni locali. Per informazioni sul formato dell'argomento `locale`, vedere [Nomi delle impostazioni locali, lingue e stringhe relative a paesi](../../c-runtime-library/locale-names-languages-and-country-region-strings.md). Se `locale` punta a una stringa vuota, le impostazioni locali corrispondono all'ambiente nativo definito in fase di implementazione. Un valore di `C` specifica l'ambiente conforme ad ANSI per la conversione C. Le impostazioni locali di `C` presuppongono che tutti i tipi di dati `char` siano di 1 byte e che il relativo valore sia sempre minore di 256.  
  
 All'avvio del programma, viene eseguito l'equivalente dell'istruzione seguente:  
  
 `setlocale( LC_ALL, "C" );`  
  
 L'argomento `locale` può accettare un nome delle impostazioni locali, una stringa di lingua, una stringa di lingua e un codice paese, una tabella codici o una stringa di lingua, un codice paese e una tabella codici. Il set dei nomi delle impostazioni locali disponibili, le lingue, i codici paese e le tabelle codici include tutti quelli supportati dalle API NLS di Windows, ad eccezione delle tabelle codici che richiedono più di due byte per carattere, ad esempio UTF-7 e UTF-8. Se si fornisce un valore di tabella codici di UTF-7 o UTF-8, `setlocale` avrà esito negativo e verrà restituito NULL. Il set dei nomi delle impostazioni locali supportate da `setlocale` è descritto in [Nomi delle impostazioni locali, lingue e stringhe relative a paesi](../../c-runtime-library/locale-names-languages-and-country-region-strings.md). Il set delle stringhe per lingua e paese supportato da `setlocale` è elencato in [Stringhe relative a lingue](../../c-runtime-library/language-strings.md) e [Stringhe relative a paesi](../../c-runtime-library/country-region-strings.md). Ai fini delle prestazioni e delle manutenibilità delle stringhe delle impostazioni locali, è consigliabile incorporare il nome delle impostazioni locali nel codice o serializzarlo nell'archiviazione. È più probabile che in seguito a un aggiornamento del sistema operativo venga modificato il formato del nome della lingua e del paese e non le stringhe del nome delle impostazioni locali.  
  
 Un puntatore Null passato come argomento `locale` indica a `setlocale` di eseguire query anziché impostare l'ambiente internazionale. Se l'argomento `locale` è un puntatore Null, le impostazioni locali correnti del programma non vengono modificate. Al contrario, `setlocale` restituisce un puntatore alla stringa associata alla `category` delle impostazioni locali correnti del thread. Se l'argomento `category` è `LC_ALL`, la funzione restituisce una stringa che indica l'impostazione corrente di tutte le categorie, separate da punti e virgola. Ad esempio, la sequenza di chiamate  
  
 `// Set all categories and return "en-US"`  
  
 `setlocale(LC_ALL, "en-US");`  
  
 `// Set only the LC_MONETARY category and return "fr-FR"`  
  
 `setlocale(LC_MONETARY, "fr-FR");`  
  
 `printf("%s\n", setlocale(LC_ALL, NULL));`  
  
 restituisce  
  
 `LC_COLLATE=en-US;LC_CTYPE=en-US;LC_MONETARY=fr-FR;LC_NUMERIC=en-US;LC_TIME=en-US`  
  
 che è la stringa associata alla categoria `LC_ALL`.  
  
 Gli esempi seguenti riguardano la categoria `LC_ALL`. Le stringhe "OCP" e "ACP" possono essere utilizzate al posto di un numero di tabella codici per specificare l'utilizzo della tabella codici OEM predefinita dell'utente e della tabella codici ANSI predefinita dell'utente.  
  
 `setlocale( LC_ALL, "" );`  
 Imposta le impostazioni locali sui valori predefiniti, ovvero la tabella codici ANSI predefinita dell'utente ottenuta dal sistema operativo.  
  
 `setlocale( LC_ALL, ".OCP" );`  
 Imposta in modo esplicito le impostazioni locali sulla tabella codici OEM corrente ottenuta dal sistema operativo.  
  
 `setlocale( LC_ALL, ".ACP" );`  
 Imposta le impostazioni locali sulla tabella codici ANSI ottenuta dal sistema operativo.  
  
 `setlocale( LC_ALL, "<localename>" );`  
 Imposta le impostazioni locali sul nome delle impostazioni locali indicate da *\<localename>*.  
  
 `setlocale( LC_ALL, "<language>_<country>" );`  
 Imposta le impostazioni locali sulla lingua e il paese/area geografica indicati da *\<language>* e *\<country>*, insieme alla tabella codici predefinita ottenuta dal sistema operativo host.  
  
 `setlocale( LC_ALL, "<language>_<country>.<code_page>" );`  
 Imposta le impostazioni locali sulla lingua, il paese/area geografica e la tabella codici specificati dalle stringhe *\<language>*, *\<country>* e *<code_page>*. È possibile utilizzare varie combinazioni di lingua, paese e tabella codici. Questa chiamata imposta ad esempio le impostazioni locali sulla lingua francese del Canada con la tabella codici 1252:  
  
 `setlocale( LC_ALL, "French_Canada.1252" );`  
  
 Questa chiamata imposta le impostazioni locali sulla lingua francese del Canada con la tabella codici ANSI predefinita:  
  
 `setlocale( LC_ALL, "French_Canada.ACP" );`  
  
 Questa chiamata imposta le impostazioni locali sulla lingua francese del Canada con la tabella codici OEM predefinita:  
  
 `setlocale( LC_ALL, "French_Canada.OCP" );`  
  
 `setlocale( LC_ALL, "<language>" );`  
 Imposta le impostazioni locali sulla lingua indicata da *\<language>* e usa il paese/area geografica predefinito per la lingua specificata e la tabella codici ANSI predefinita dell'utente per tale paese/area geografica, secondo quanto ottenuto dal sistema operativo host. Ad esempio, le chiamate a `setlocale` seguenti sono equivalenti a livello funzionale:  
  
 `setlocale( LC_ALL, "en-US" );`  
  
 `setlocale( LC_ALL, "English" );`  
  
 `setlocale( LC_ALL, "English_United States.1252" );`  
  
 Ai fini delle prestazioni e della manutenibilità, è consigliabile utilizzare la prima forma.  
  
 `setlocale( LC_ALL, ".<code_page>" );`  
 Imposta la tabella codici sul valore indicato da *<code_page>*, con il paese/area geografica e la lingua predefiniti (come definito dal sistema operativo host) per la tabella codici specificata.  
  
 La categoria deve essere `LC_ALL` o `LC_CTYPE` per rendere effettiva una modifica della tabella codici. Ad esempio, se il paese e la lingua predefiniti del sistema operativo host sono "United States" e "English", le due chiamate a `setlocale` seguenti sono equivalenti a livello funzionale:  
  
 `setlocale( LC_ALL, ".1252" );`  
  
 `setlocale( LC_ALL, "English_United States.1252");`  
  
 Per altre informazioni, vedere la direttiva pragma [setlocale](../../preprocessor/setlocale.md) in [Riferimenti al preprocessore C/C++](../../preprocessor/c-cpp-preprocessor-reference.md).  
  
 La funzione [_configthreadlocale](../../c-runtime-library/reference/configthreadlocale.md) consente di controllare se `setlocale` influisce sulle impostazioni locali di tutti i thread di un programma o solo sulle impostazioni locali del thread chiamante.  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|`setlocale`|\<locale.h>|  
|`_wsetlocale`|\<locale.h> o \<wchar.h>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
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
 [Nomi delle impostazioni locali, lingue e stringhe relative a paesi](../../c-runtime-library/locale-names-languages-and-country-region-strings.md)   
 [_configthreadlocale](../../c-runtime-library/reference/configthreadlocale.md)   
 [_create_locale, _wcreate_locale](../../c-runtime-library/reference/create-locale-wcreate-locale.md)   
 [Impostazioni locali](../../c-runtime-library/locale.md)   
 [localeconv](../../c-runtime-library/reference/localeconv.md)   
 [_mbclen, mblen, _mblen_l](../../c-runtime-library/reference/mbclen-mblen-mblen-l.md)   
 [strlen, wcslen, _mbslen, _mbslen_l, _mbstrlen, _mbstrlen_l](../../c-runtime-library/reference/strlen-wcslen-mbslen-mbslen-l-mbstrlen-mbstrlen-l.md)   
 [mbstowcs, _mbstowcs_l](../../c-runtime-library/reference/mbstowcs-mbstowcs-l.md)   
 [mbtowc, _mbtowc_l](../../c-runtime-library/reference/mbtowc-mbtowc-l.md)   
 [_setmbcp](../../c-runtime-library/reference/setmbcp.md)   
 [Funzioni strcoll](../../c-runtime-library/strcoll-functions.md)   
 [strftime, wcsftime, _strftime_l, _wcsftime_l](../../c-runtime-library/reference/strftime-wcsftime-strftime-l-wcsftime-l.md)   
 [strxfrm, wcsxfrm, _strxfrm_l, _wcsxfrm_l](../../c-runtime-library/reference/strxfrm-wcsxfrm-strxfrm-l-wcsxfrm-l.md)   
 [wcstombs, _wcstombs_l](../../c-runtime-library/reference/wcstombs-wcstombs-l.md)   
 [wctomb, _wctomb_l](../../c-runtime-library/reference/wctomb-wctomb-l.md)
