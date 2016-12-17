---
title: "strtok_s, _strtok_s_l, wcstok_s, _wcstok_s_l, _mbstok_s, _mbstok_s_l | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_wcstok_s_l"
  - "_mbstok_s_l"
  - "_mbstok_s"
  - "strtok_s"
  - "wcstok_s"
  - "_strtok_s_l"
apilocation: 
  - "msvcrt.dll"
  - "msvcr80.dll"
  - "msvcr90.dll"
  - "msvcr100.dll"
  - "msvcr100_clr0400.dll"
  - "msvcr110.dll"
  - "msvcr110_clr0400.dll"
  - "msvcr120.dll"
  - "msvcr120_clr0400.dll"
  - "ucrtbase.dll"
  - "api-ms-win-crt-multibyte-l1-1-0.dll"
  - "api-ms-win-crt-string-l1-1-0.dll"
apitype: "DLLExport"
f1_keywords: 
  - "_tcstok_s_l"
  - "_wcstok_s_l"
  - "_tcstok_s"
  - "_mbstok_s_l"
  - "strtok_s"
  - "wcstok_s"
  - "_mbstok_s"
  - "_strtok_s_l"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_mbstok_s (funzione)"
  - "_mbstok_s_l (funzione)"
  - "_strtok_s_l (funzione)"
  - "_tcstok_s (funzione)"
  - "_tcstok_s_l (funzione)"
  - "_wcstok_s_l (funzione)"
  - "mbstok_s (funzione)"
  - "mbstok_s_l (funzione)"
  - "stringhe [C++], ricerca"
  - "strtok_s (funzione)"
  - "strtok_s_l (funzione)"
  - "token, ricerca in stringhe"
  - "wcstok_s (funzione)"
  - "wcstok_s_l (funzione)"
ms.assetid: 7696c972-f83b-4617-8c82-95973e9fdb46
caps.latest.revision: 28
caps.handback.revision: 26
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# strtok_s, _strtok_s_l, wcstok_s, _wcstok_s_l, _mbstok_s, _mbstok_s_l
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Cerca il token seguente in una stringa, utilizzando l'impostazione locale corrente o un'impostazione locale passata.  Queste versioni di [strtok, \_strtok\_l, wcstok, \_wcstok\_l, \_mbstok, \_mbstok\_l](../../c-runtime-library/reference/strtok-strtok-l-wcstok-wcstok-l-mbstok-mbstok-l.md) contengono i miglioramenti della sicurezza come descritto in [Funzionalità di sicurezza in CRT](../../c-runtime-library/security-features-in-the-crt.md).  
  
> [!IMPORTANT]
>  `_mbstok_s` e `_mbstok_s_l` non possono essere utilizzate nelle applicazioni che vengono eseguite in Windows Runtime.  Per ulteriori informazioni, vedere [Funzioni CRT non supportate con \/ZW](http://msdn.microsoft.com/library/windows/apps/jj606124.aspx).  
  
## Sintassi  
  
```  
  
      char *strtok_s(  
char *strToken,  
const char *strDelimit,  
   char **context  
);  
char *_strtok_s_l(  
char *strToken,  
const char *strDelimit,  
   char **context,  
_locale_tlocale  
);  
wchar_t *wcstok_s(  
wchar_t *strToken,  
const wchar_t *strDelimit,   
   wchar_t**context  
);  
wchar_t *_wcstok_s_l(  
wchar_t *strToken,  
const wchar_t *strDelimit,   
   wchar_t**context,  
_locale_tlocale  
);  
unsigned char *_mbstok_s(  
unsigned char*strToken,  
const unsigned char *strDelimit,   
   char **context  
);  
unsigned char *_mbstok_s(  
unsigned char*strToken,  
const unsigned char *strDelimit,   
   char **context,  
_locale_tlocale  
);  
```  
  
#### Parametri  
 `strToken`  
 Stringa contenente token o più token.  
  
 `strDelimit`  
 Set di caratteri di delimitazione.  
  
 `context`  
 Utilizzato per archiviare informazioni sul percorso tra le chiamate a `strtok_s`  
  
 `locale`  
 Impostazioni locali da utilizzare.  
  
## Valore restituito  
 Restituisce un puntatore al token seguente disponibile in `strToken`.  Restituisce `NULL` quando non vengono trovati ulteriori token.  Ogni chiamata modifica `strToken` sostituendo un carattere `NULL` per il primo delimitatore che si verifica dopo aver restituito il token.  
  
### Condizioni di errore  
  
|`strToken`|`strDelimit`|`context`|Valore restituito|`errno`|  
|----------------|------------------|---------------|-----------------------|-------------|  
|`NULL`|any|puntatore a un puntatore null|`NULL`|`EINVAL`|  
|any|`NULL`|any|`NULL`|`EINVAL`|  
|any|any|`NULL`|`NULL`|`EINVAL`|  
  
 Se `strToken` è `NULL` ma il contesto è un puntatore a un puntatore valido di contesto, non esiste alcun errore.  
  
## Note  
 La funzione `strtok_s` trova il token seguente in `strToken`.  Il set di caratteri in `strDelimit` specifica i delimitatori possibili del token da cercare in `strToken` sulla chiamata corrente.  `wcstok_s` e `_mbstok_s`sono versioni a caratteri di tipo "wide" e di caratteri multibyte di `strtok_s`.  Gli argomenti e i valori restituiti di `wcstok_s` e `_wcstok_s_l` sono stringhe di caratteri di tipo "wide"; quelli di `_mbstok_s` e `_mbstok_s_l` sono stringhe di caratteri multibyte.  Altrimenti queste tre funzioni si comportano in modo identico.  
  
 Questa funzione convalida i parametri.  Se una condizione di errore si verifica, come nella tabella di condizioni di errore, il gestore dei parametri non validi viene richiamato, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md).  Se l'esecuzione può continuare, queste funzioni impostano `errno` a `EINVAL` e restituiscono `NULL`.  
  
### Mapping di routine su testo generico  
  
|Routine TCHAR.H|\_UNICODE & \_MBCS not defined|\_MBCS definito|\_UNICODE definito|  
|---------------------|------------------------------------|---------------------|------------------------|  
|`_tcstok_s`|`strtok_s`|`_mbstok_s`|`wcstok_s`|  
|`_tcstok_s_l`|`_strtok_s_l`|`_mbstok_s_l`|`_wcstok_s_l`|  
  
 La prima chiamata alla funzione `strtok_s` ignora i delimitatori iniziali e restituisce un puntatore al primo token in `strToken`, terminando il token con un carattere null.  Più token possono essere evadere da una rimanenza di `strToken` da una serie di chiamate a `strtok_s`.  Ogni chiamata a `strtok_s` modifica `strToken` inserendo un carattere null dopo il token restituito dalla chiamata.  Il puntatore `context` tiene traccia di quale stringa è stata letta e la posizione nella stringa dove il token che segue deve essere letto.  Per leggere il token seguito da `strToken`, chiamare `strtok_s` con un valore `NULL` per l'argomento `strToken` e passare lo stesso parametro `context`.  L'argomento `NULL` `strToken` fa in modo che `strtok_s` trovi il token seguente nel `strToken`modificato.  L'argomento `strDelimit` accetta qualsiasi valore da una chiamata al seguente per consentire al set di delimitatori di modificare.  
  
 Poiché il parametro `context` sostituisce i buffer statici utilizzati in `strtok` e `_strtok_l`, è possibile analizzare contemporaneamente due stringhe nello stesso thread.  
  
 Il valore di output è interessato dall'impostazione dell'impostazione di categoria `LC_CTYPE` delle impostazioni locali; vedere [setlocale](../../c-runtime-library/reference/setlocale-wsetlocale.md) per ulteriori informazioni.  Le versioni di queste funzioni senza il suffisso `_l` utilizzano le impostazioni locali correnti per il comportamento dipendente dalle impostazioni locali; le versioni con il suffisso `_l` sono identiche, ad eccezione del fatto che utilizzano il parametro delle impostazioni locali che viene passato.  Per ulteriori informazioni, vedere [Impostazioni locali](../../c-runtime-library/locale.md).  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`strtok_s`|\<string.h\>|  
|`_strtok_s_l`|\<string.h\>|  
|`wcstok_s,`<br /><br /> `_wcstok_s_l`|\<string.h\> o \<wchar.h\>|  
|`_mbstok_s,`<br /><br /> `_mbstok_s_l`|\<mbstring.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## Esempio  
  
```  
// crt_strtok_s.c  
// In this program, a loop uses strtok_s  
// to print all the tokens (separated by commas  
// or blanks) in two strings at the same time.  
//  
  
#include <string.h>  
#include <stdio.h>  
  
char string1[] =  
    "A string\tof ,,tokens\nand some  more tokens";  
char string2[] =  
    "Another string\n\tparsed at the same time.";  
char seps[]   = " ,\t\n";  
char *token1 = NULL;  
char *token2 = NULL;  
char *next_token1 = NULL;  
char *next_token2 = NULL;  
  
int main( void )  
{  
    printf( "Tokens:\n" );  
  
    // Establish string and get the first token:  
    token1 = strtok_s( string1, seps, &next_token1);  
    token2 = strtok_s ( string2, seps, &next_token2);  
  
    // While there are tokens in "string1" or "string2"  
    while ((token1 != NULL) || (token2 != NULL))  
    {  
        // Get next token:  
        if (token1 != NULL)  
        {  
            printf( " %s\n", token1 );  
            token1 = strtok_s( NULL, seps, &next_token1);  
        }  
        if (token2 != NULL)  
        {  
            printf("        %s\n", token2 );  
            token2 = strtok_s (NULL, seps, &next_token2);  
        }  
    }  
}  
```  
  
  **Token:**  
 **A**  
 **Un'altra attività .**  
 **string**  
 **string**  
 **of**  
 **parsed**  
 **tokens**  
 **at**  
 **e**  
 **the**  
 **some**  
 **same**  
 **more**  
 **al tempo.**  
 **tokens**   
## Equivalente .NET Framework  
 Non applicabile. Per chiamare la funzione standard C, utilizzare `PInvoke`. Per ulteriori informazioni, vedere [Esempi di Invocazione della Piattaforma](../Topic/Platform%20Invoke%20Examples.md).  
  
## Vedere anche  
 [Modifica di stringhe](../../c-runtime-library/string-manipulation-crt.md)   
 [Impostazioni locali](../../c-runtime-library/locale.md)   
 [Interpretazione di sequenze di caratteri multibyte](../../c-runtime-library/interpretation-of-multibyte-character-sequences.md)   
 [strcspn, wcscspn, \_mbscspn, \_mbscspn\_l](../../c-runtime-library/reference/strcspn-wcscspn-mbscspn-mbscspn-l.md)   
 [strspn, wcsspn, \_mbsspn, \_mbsspn\_l](../../c-runtime-library/reference/strspn-wcsspn-mbsspn-mbsspn-l.md)