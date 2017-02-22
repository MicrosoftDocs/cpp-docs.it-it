---
title: "tmpnam_s, _wtmpnam_s | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "tmpnam_s"
  - "_wtmpnam_s"
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
  - "tmpnam_s"
  - "_wtmpnam_s"
  - "L_tmpnam_s"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_wtmpnam_s (funzione)"
  - "nomi file [C++], creazione temporanea"
  - "nomi file [C++], temporanei"
  - "L_tmpnam_s (costante)"
  - "file temporanei, creazione"
  - "tmpnam_s (funzione)"
  - "wtmpnam_s (funzione)"
ms.assetid: e70d76dc-49f5-4aee-bfa2-f1baa2bcd29f
caps.latest.revision: 20
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 20
---
# tmpnam_s, _wtmpnam_s
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Genera nomi utilizzabili per creare i file temporanei.  Queste sono versioni di [tmpnam and \_wtmpnam](../../c-runtime-library/reference/tempnam-wtempnam-tmpnam-wtmpnam.md) con miglioramenti di sicurezza come descritto in [Funzionalità di sicurezza in CRT](../../c-runtime-library/security-features-in-the-crt.md).  
  
## Sintassi  
  
```  
errno_t tmpnam_s(  
   char * str,  
   size_t sizeInChars   
);  
errno_t _wtmpnam_s(  
   wchar_t *str,  
   size_t sizeInChars   
);  
template <size_t size>  
errno_t tmpnam_s(  
   char (&str)[size]  
); // C++ only  
template <size_t size>  
errno_t _wtmpnam_s(  
   wchar_t (&str)[size]  
); // C++ only  
```  
  
#### Parametri  
 \[out\] `str`  
 Puntatore che avrà il nome generato.  
  
 \[in\] `sizeInChars`  
 La dimensione del buffer in caratteri.  
  
## Valore restituito  
 Entrambe le funzioni restituiscono 0 in caso di esito positivo oppure un numero di errore in caso di errore.  
  
### Condizioni di errore  
  
|||||  
|-|-|-|-|  
|`str`|`sizeInChars`|**Valore restituito**|**Contenuto di**  `str`|  
|`NULL`|any|`EINVAL`|non modificato|  
|non `NULL` \(punta alla memoria valida\)|troppo corto|`ERANGE`|non modificato|  
  
 Se `str` è `NULL`, viene richiamato il gestore di parametro non valido, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md).  Se l'esecuzione può continuare, queste funzioni impostano `errno` a `EINVAL` e restituiscono `EINVAL`.  
  
## Note  
 Ognuna di queste funzioni restituisce il nome di un file che correntemente non esiste.  `tmpnam_s` restituisce un nome univoco nella cartella di lavoro corrente.  È importante notare che quando un file è preceduto da una barra rovesciata e non sono presenti informazioni sul percorso, come \\fname21, significa che il nome è valido per la cartella di lavoro corrente.  
  
 Per `tmpnam_s`, è possibile archiviare questo nome file generato in `str`.  La lunghezza massima di una stringa restituita da `tmpnam_s` è `L_tmpnam_s`, definito in STDIO.H.  Se `str` è `NULL`, allora `tmpnam_s` lascia il risultato in un buffer statico interno.  Pertanto tutte le chiamate successive eliminano questo valore.  Il nome generato da `tmpnam_s` consiste in un nome di file generato da un programma e, dopo la prima chiamata a `tmpnam_s`, un'estensione di file di numeri sequenziali in base 32 \(.1\-.1vvvvvu, quando `TMP_MAX_S` in STDIO.H è INT\_MAX\).  
  
 `tmpnam_s` è gestito automaticamente da argomenti di stringa con caratteri multibyte in modo appropriato, riconoscendo le sequenze di caratteri multibyte in base alla tabella codici OEM ottenuta dal sistema operativo.  `_wtmpnam_s` è una versione a caratteri estesi di `tmpnam_s`; gli argomenti e i valori restituiti di `_wtmpnam_s` sono stringhe con caratteri estesi.  `_wtmpnam_s` e `tmpnam_s` si comportano in modo identico in caso contrario, ma `_wtmpnam_s` non gestisce le stringhe di caratteri multibyte.  
  
 In C\+\+, l'utilizzo di queste funzioni viene semplificato da overload del modello; gli overload possono dedurre la lunghezza del buffer automaticamente, eliminando la necessità di specificare un argomento per la dimensione.  Per ulteriori informazioni, vedere [Overload di modelli sicuri](../../c-runtime-library/secure-template-overloads.md).  
  
### Mapping di routine di testo generico  
  
|Routine TCHAR.H|\_UNICODE & \_MBCS non definiti|\_MBCS definito|\_UNICODE definito|  
|---------------------|-------------------------------------|---------------------|------------------------|  
|`_ttmpnam_s`|`tmpnam_s`|`tmpnam_s`|`_wtmpnam_s`|  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`tmpnam_s`|\<stdio.h\>|  
|`_wtmpnam_s`|\<stdio.h\> o \<wchar.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'Introduzione.  
  
## Esempio  
  
```  
// crt_tmpnam_s.c  
// This program uses tmpnam_s to create a unique filename in the  
// current working directory.   
//  
  
#include <stdio.h>  
#include <stdlib.h>  
  
int main( void )  
{     
   char name1[L_tmpnam_s];  
   errno_t err;  
   int i;  
  
   for (i = 0; i < 15; i++)  
   {  
      err = tmpnam_s( name1, L_tmpnam_s );  
      if (err)  
      {  
         printf("Error occurred creating unique filename.\n");  
         exit(1);  
      }  
      else  
      {  
         printf( "%s is safe to use as a temporary file.\n", name1 );  
      }  
   }    
}  
```  
  
## Equivalente .NET Framework  
 Non applicabile. Per chiamare la funzione standard C, utilizzare `PInvoke`. Per ulteriori informazioni, vedere [Esempi di Invocazione della Piattaforma](../Topic/Platform%20Invoke%20Examples.md).  
  
## Vedere anche  
 [I\/O di flusso](../../c-runtime-library/stream-i-o.md)   
 [\_getmbcp](../../c-runtime-library/reference/getmbcp.md)   
 [malloc](../../c-runtime-library/reference/malloc.md)   
 [\_setmbcp](../../c-runtime-library/reference/setmbcp.md)   
 [tmpfile\_s](../../c-runtime-library/reference/tmpfile-s.md)