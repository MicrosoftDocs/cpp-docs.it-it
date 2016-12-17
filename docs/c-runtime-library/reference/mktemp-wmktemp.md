---
title: "_mktemp, _wmktemp | Microsoft Docs"
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
  - "_wmktemp"
  - "_mktemp"
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
  - "api-ms-win-crt-stdio-l1-1-0.dll"
apitype: "DLLExport"
f1_keywords: 
  - "_tmktemp"
  - "wmktemp"
  - "tmktemp"
  - "_wmktemp"
  - "_mktemp"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_mktemp (funzione)"
  - "_tmktemp (funzione)"
  - "_wmktemp (funzione)"
  - "file [C++], temporanei"
  - "mktemp (funzione)"
  - "file temporanei [C++]"
  - "tmktemp (funzione)"
  - "wmktemp (funzione)"
ms.assetid: 055eb539-a8c2-4a7d-be54-f5b6d1eb5c85
caps.latest.revision: 25
caps.handback.revision: 23
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _mktemp, _wmktemp
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Restituisce un nome file univoco.  Sono disponibili versioni più sicure di queste funzioni. Vedere [\_mktemp\_s, \_wmktemp\_s](../../c-runtime-library/reference/mktemp-s-wmktemp-s.md).  
  
## Sintassi  
  
```  
char *_mktemp(  
   char *template   
);  
wchar_t *_wmktemp(  
   wchar_t *template   
);  
template <size_t size>  
char *_mktemp(  
   char (&template)[size]  
); // C++ only  
template <size_t size>  
wchar_t *_wmktemp(  
   wchar_t (&template)[size]  
); // C++ only  
```  
  
#### Parametri  
 `template`  
 Criterio per il nome file.  
  
## Valore restituito  
 Ognuna di queste funzioni restituisce un puntatore al modello modificato.  La funzione restituisce `NULL` se `template` è corretto e o non più nome univoco può essere creato dal modello specificato.  
  
## Note  
 La funzione `_mktemp` crea un nome file univoco modificando l'argomento `template`.  `_mktemp` gestisce automaticamente gli argomenti della stringa con caratteri multibyte in base alle proprie esigenze, riconoscere le sequenze di caratteri multibyte in base alla tabella codici multibyte attualmente in uso dal sistema in fase di esecuzione.  `_wmktemp` è una versione a caratteri estesi di `_mktemp`; gli argomenti e i valori restituiti di `_wmktemp` sono stringhe con caratteri estesi.  `_wmktemp` e `_mktemp` si comportano in modo identico in caso contrario, ma `_wmktemp` non gestisce le stringhe di caratteri multibyte.  
  
### Mapping di routine di testo generico  
  
|Routine Tchar.h|\_UNICODE e \_MBCS non definiti|\_MBCS definito|\_UNICODE definito|  
|---------------------|-------------------------------------|---------------------|------------------------|  
|`_tmktemp`|`_mktemp`|`_mktemp`|`_wmktemp`|  
  
 L'argomento `template` presenta il formato `base`, dove `base` è la parte del nuovo nome file specificati e ogni X è un segnaposto per un carattere fornito da `_mktemp`.  Ogni carattere segnaposto in `template` deve essere una maiuscola. X.  `_mktemp` mantiene `base` e sostituisce la prima X di trascinamento con un carattere alfabetico.  `_mktemp` sostituisce le seguenti x finali con un valore pari a cinque cifre; questo valore è un numero univoco che identifica il processo chiamante, o programmi multithread, il thread chiamante.  
  
 Ogni corrispondenza chiamata a `_mktemp` modifica `template`.  In ogni chiamata successiva dallo stesso processo o thread con lo stesso argomento `template`, controlli `_mktemp` per i nomi di file nomi di corrispondenza restituiti da `_mktemp` in chiamate precedenti.  Se tale file non esiste per un nome specificato, restituisce `_mktemp` di da parte.  Se i file disponibili per tutti i nomi in precedenza restituiti, `_mktemp` crea un nuovo nome sostituendo il carattere alfabetico che utilizza il nome in precedenza restituito con la lettera minuscola successivo disponibile, in ordine, "da" e "z".  Ad esempio, se `base` se:  
  
```  
fn  
```  
  
 e il valore di cinque cifre specificato da `_mktemp` è 12345, il nome restituito è:  
  
```  
fna12345  
```  
  
 Se questo nome viene utilizzato per creare il file FNA12345 tale file esiste ancora, il nome successivo restituito di una chiamata dallo stesso processo o thread con lo stesso `base` per `template` è:  
  
```  
fnb12345  
```  
  
 Se FNA12345 non esiste, il successivo nome restituito è di nuovo:  
  
```  
fna12345  
```  
  
 `_mktemp` possibile creare un massimo di 26 nomi file univoci per qualsiasi combinazione specifica di valori del modello e di base.  Pertanto, FNZ12345 è l'ultimo nome file univoco `_mktemp` può creare per i valori `template` e `base` utilizzati in questo esempio.  
  
 In caso di errore, `errno` è impostato su.  Se `template` ha un formato non valido \(ad esempio, un massimo di 6 x\), `errno` è impostato su `EINVAL`.  Se `_mktemp` non è possibile creare un nome univoco in quanto tutti e 26 i nomi file possibili sono già presenti, `_mktemp` imposta il modello a una stringa vuota e restituisce `EEXIST`.  
  
 In C\+\+, queste funzioni presentano overload dei modelli che richiamano le relative controparti sicure e più recenti.  Per ulteriori informazioni, vedere [Overload di modelli sicuri](../../c-runtime-library/secure-template-overloads.md).  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`_mktemp`|\<io.h\>|  
|`_wmktemp`|\<io.h\> o \<wchar.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## Esempio  
  
```  
// crt_mktemp.c  
// compile with: /W3  
/* The program uses _mktemp to create  
 * unique filenames. It opens each filename  
 * to ensure that the next name is unique.  
 */  
  
#include <io.h>  
#include <string.h>  
#include <stdio.h>  
#include <errno.h>  
  
char *template = "fnXXXXXX";  
char *result;  
char names[27][9];  
  
int main( void )  
{  
   int i;  
   FILE *fp;  
  
   for( i = 0; i < 27; i++ )  
   {  
      strcpy_s( names[i], sizeof( names[i] ), template );  
      /* Attempt to find a unique filename: */  
      result = _mktemp( names[i] );  // C4996  
      // Note: _mktemp is deprecated; consider using _mktemp_s instead  
      if( result == NULL )  
      {  
         printf( "Problem creating the template\n" );  
         if (errno == EINVAL)  
         {  
             printf( "Bad parameter\n");  
         }  
         else if (errno == EEXIST)  
         {  
             printf( "Out of unique filenames\n");   
         }  
      }  
      else  
      {  
         fopen_s( &fp, result, "w" );  
         if( fp != NULL )  
            printf( "Unique filename is %s\n", result );  
         else  
            printf( "Cannot open %s\n", result );  
         fclose( fp );  
      }  
   }  
}  
```  
  
  **Il nome del file univoco è fna03912**  
**Il nome del file univoco è fnb03912**  
**Il nome del file univoco è fnc03912**  
**Il nome del file univoco è fnd03912**  
**Il nome del file univoco è fne03912**  
**Il nome del file univoco è fnf03912**  
**Il nome del file univoco è fng03912**  
**Il nome del file univoco è fnh03912**  
**Il nome del file univoco è fni03912**  
**Il nome del file univoco è fnj03912**  
**Il nome del file univoco è fnk03912**  
**Il nome del file univoco è fnl03912**  
**Il nome del file univoco è fnm03912**  
**Il nome del file univoco è fnn03912**  
**Il nome del file univoco è fno03912**  
**Il nome del file univoco è fnp03912**  
**Il nome del file univoco è fnq03912**  
**Il nome del file univoco è fnr03912**  
**Il nome del file univoco è fns03912**  
**Il nome del file univoco è fnt03912**  
**Il nome del file univoco è fnu03912**  
**Il nome del file univoco è fnv03912**  
**Il nome del file univoco è fnw03912**  
**Il nome del file univoco è fnx03912**  
**Il nome del file univoco è fny03912**  
**Il nome del file univoco è fnz03912**  
**Problema nella creazione del modello.**  
**Più nomi di file unici.**   
## Equivalente .NET Framework  
 Non applicabile. Per chiamare la funzione standard C, utilizzare `PInvoke`. Per ulteriori informazioni, vedere [Esempi di Invocazione della Piattaforma](../Topic/Platform%20Invoke%20Examples.md).  
  
## Vedere anche  
 [Gestione di file](../../c-runtime-library/file-handling.md)   
 [fopen, \_wfopen](../../c-runtime-library/reference/fopen-wfopen.md)   
 [\_getmbcp](../../c-runtime-library/reference/getmbcp.md)   
 [\_getpid](../../c-runtime-library/reference/getpid.md)   
 [\_open, \_wopen](../../c-runtime-library/reference/open-wopen.md)   
 [\_setmbcp](../../c-runtime-library/reference/setmbcp.md)   
 [\_tempnam, \_wtempnam, tmpnam, \_wtmpnam](../../c-runtime-library/reference/tempnam-wtempnam-tmpnam-wtmpnam.md)   
 [tmpfile](../../c-runtime-library/reference/tmpfile.md)