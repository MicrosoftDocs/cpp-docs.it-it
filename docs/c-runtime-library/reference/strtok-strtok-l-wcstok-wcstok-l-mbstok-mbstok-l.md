---
title: "strtok, _strtok_l, wcstok, _wcstok_l, _mbstok, _mbstok_l | Microsoft Docs"
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
  - "_mbstok_l"
  - "_mbstok"
  - "wcstok"
  - "_mbstok"
  - "strtok"
  - "_wcstok_l"
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
  - "_mbstok"
  - "strtok"
  - "_tcstok"
  - "wcstok"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_mbstok (funzione)"
  - "_mbstok_l (funzione)"
  - "_strtok_l (funzione)"
  - "_tcstok (funzione)"
  - "_tcstok_l (funzione)"
  - "_wcstok_l (funzione)"
  - "mbstok (funzione)"
  - "mbstok_l (funzione)"
  - "stringhe [C++], ricerca"
  - "strtok (funzione)"
  - "strtok_l (funzione)"
  - "tcstok (funzione)"
  - "tcstok_l (funzione)"
  - "token, ricerca in stringhe"
  - "wcstok (funzione)"
  - "wcstok_l (funzione)"
ms.assetid: 904cb734-f0d7-4d77-ba81-4791ddf461ae
caps.latest.revision: 34
caps.handback.revision: 32
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# strtok, _strtok_l, wcstok, _wcstok_l, _mbstok, _mbstok_l
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Cerca il token seguente in una stringa, utilizzando l'impostazione locale corrente o un'impostazione locale specifica che gli è stata passata.  Sono disponibili versioni più sicure di queste funzioni; vedere [strtok\_s, \_strtok\_s\_l, wcstok\_s, \_wcstok\_s\_l, \_mbstok\_s, \_mbstok\_s\_l](../../c-runtime-library/reference/strtok-s-strtok-s-l-wcstok-s-wcstok-s-l-mbstok-s-mbstok-s-l.md).  
  
> [!IMPORTANT]
>  `_mbstok` e `_mbstok_l` non possono essere utilizzate nelle applicazioni che vengono eseguite in Windows Runtime.  Per ulteriori informazioni, vedere [Funzioni CRT non supportate con \/ZW](http://msdn.microsoft.com/library/windows/apps/jj606124.aspx).  
  
## Sintassi  
  
```  
char *strtok(  
   char *strToken,  
   const char *strDelimit   
);  
wchar_t *wcstok(  
   wchar_t *strToken,  
   const wchar_t *strDelimit   
);  
unsigned char *_mbstok(  
   unsigned char*strToken,  
   const unsigned char *strDelimit   
);  
unsigned char *_mbstok(  
   unsigned char*strToken,  
   const unsigned char *strDelimit,  
   _locale_t locale  
);  
```  
  
#### Parametri  
 `strToken`  
 Stringa contenente token o più token.  
  
 `strDelimit`  
 Set di caratteri delimitatori.  
  
 `locale`  
 Impostazioni locali da utilizzare.  
  
## Valore restituito  
 Restituisce un puntatore al token seguente disponibile in `strToken`.  Restituisce `NULL` quando non vengono trovati ulteriori token.  Ogni chiamata modifica `strToken` sostituendo un carattere `NULL` per il primo delimitatore che si verifica dopo aver restituito il token.  
  
## Note  
 La funzione `strtok` trova il token seguente in `strToken`.  Il set di caratteri in `strDelimit` specifica i delimitatori possibili del token che si trovano in `strToken` sulla chiamata corrente.  `wcstok` e `_mbstok` sono versioni a caratteri di tipo "wide" e di caratteri multibyte di `strtok`.  Gli argomenti e il valore restituito di `wcstok` sono stringhe di caratteri di tipo "wide", quelli di `_mbstok` sono stringhe di caratteri multibyte.  Altrimenti queste tre funzioni si comportano in modo identico.  
  
> [!IMPORTANT]
>  Queste funzioni comportano un rischio potenziale causato da un problema di sovraccarico del buffer.  Problemi di sovraccarico del buffer sono un metodo frequente di attacco al sistema, con conseguente elevazione dei privilegi non autorizzata.  Per ulteriori informazioni, vedere [Evitare sovraccarichi del buffer](http://msdn.microsoft.com/library/windows/desktop/ms717795).  
  
 La prima chiamata alla funzione `strtok`, ignora i delimitatori iniziali e restituisce un puntatore al primo token in `strToken`, terminando il token con un carattere null.  Più token possono essere suddivisi al di fuori della rimanenza di `strToken` da una serie di chiamate a `strtok`.  Ogni chiamata a `strtok`modifica `strToken` inserendo un carattere null dopo il `token` restituito dalla chiamata.  Per leggere il token successivo da `strToken`, chiamare `strtok` con un valore `NULL` per l'argomento `strToken`.  L'argomento `NULL` `strToken` fa in modo che `strtok` cerchi il token successivo nel `strToken` modificato.  L'argomento `strDelimit` può assumere qualsiasi valore da una chiamata all'altra, così che il set dei delimitatori possa cambiare.  
  
 Il valore di output è interessato dall'impostazione dell'impostazione di categoria `LC_CTYPE` delle impostazioni locali; vedere [setlocale](../../c-runtime-library/reference/setlocale-wsetlocale.md) per ulteriori informazioni.  Le versioni di queste funzioni senza il suffisso `_l` utilizzano le impostazioni locali correnti per il comportamento dipendente dalle impostazioni locali; le versioni con il suffisso `_l` sono identiche, ad eccezione del fatto che utilizzano il parametro delle impostazioni locali che viene passato.  Per ulteriori informazioni, vedere [Impostazioni locali](../../c-runtime-library/locale.md).  
  
> [!NOTE]
>  Ogni funzione utilizza una variabile statica di thread locale per analizzare la stringa in token.  Pertanto, più thread possono chiamare simultaneamente queste funzioni senza avere effetti indesiderati.  Tuttavia, in un unica thread, interfogliare chiamate ad una di queste funzioni produce con molta probabilità un danneggiamento dei dati e risultati imprecisi.  Durante l'analisi di stringhe diverse, completare l'analisi di una stringa prima di iniziare ad analizzare la seguente.  Inoltre, si consideri il potenziale pericolo nell'effettuare una chiama di queste funzioni all'interno di un ciclo dove vengono chiamate altre funzioni.  Se la funzione viene completata con una di queste funzioni, una sequenza interfogliata di chiamate comporterà il danneggiamento dei dati.  
  
### Mapping di routine su testo generico  
  
|Routine TCHAR.H|\_UNICODE & \_MBCS non definiti|\_MBCS definito|\_UNICODE definito|  
|---------------------|-------------------------------------|---------------------|------------------------|  
|`_tcstok`|`strtok`|`_mbstok`|`wcstok`|  
|`_tcstok`|`_strtok_l`|`_mbstok_l`|`_wcstok_l`|  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`strtok`|\<string.h\>|  
|`wcstok`|\<string.h\> o \<wchar.h\>|  
|`_mbstok`, `_mbstok_l`|\<mbstring.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## Esempio  
  
```  
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
  
  **Token:**  
 **A**  
 **string**  
 **of**  
 **token**  
 **e**  
 **some**  
 **more**  
 **token**   
## Equivalente .NET Framework  
 Non applicabile. Per chiamare la funzione standard C, utilizzare `PInvoke`. Per ulteriori informazioni, vedere [Esempi di Invocazione della Piattaforma](../Topic/Platform%20Invoke%20Examples.md).  
  
## Vedere anche  
 [Modifica di stringhe](../../c-runtime-library/string-manipulation-crt.md)   
 [Impostazioni locali](../../c-runtime-library/locale.md)   
 [Interpretazione di sequenze di caratteri multibyte](../../c-runtime-library/interpretation-of-multibyte-character-sequences.md)   
 [strcspn, wcscspn, \_mbscspn, \_mbscspn\_l](../../c-runtime-library/reference/strcspn-wcscspn-mbscspn-mbscspn-l.md)   
 [strspn, wcsspn, \_mbsspn, \_mbsspn\_l](../../c-runtime-library/reference/strspn-wcsspn-mbsspn-mbsspn-l.md)