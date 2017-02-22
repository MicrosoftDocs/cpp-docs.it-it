---
title: "_mktemp_s, _wmktemp_s | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_mktemp_s"
  - "_wmktemp_s"
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
apitype: "DLLExport"
f1_keywords: 
  - "wmktemp_s"
  - "mktemp_s"
  - "_mktemp_s"
  - "_wmktemp_s"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_mktemp_s (funzione)"
  - "_tmktemp_s (funzione)"
  - "_wmktemp_s (funzione)"
  - "file [C++], temporanei"
  - "mktemp_s (funzione)"
  - "file temporanei [C++]"
  - "tmktemp_s (funzione)"
  - "wmktemp_s (funzione)"
ms.assetid: 92a7e269-7f3d-4c71-bad6-14bc827a451d
caps.latest.revision: 23
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 23
---
# _mktemp_s, _wmktemp_s
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Restituisce un nome file univoco.  Queste sono versioni di [\_mktemp, \_wmktemp](../../c-runtime-library/reference/mktemp-wmktemp.md) con i miglioramenti della sicurezza come descritto in [Funzionalità di sicurezza in CRT](../../c-runtime-library/security-features-in-the-crt.md).  
  
## Sintassi  
  
```  
errno_t _mktemp_s(  
   char *template,  
   size_t sizeInChars  
);  
errno_t _wmktemp_s(  
   wchar_t *template,  
   size_t sizeInChars  
);  
template <size_t size>  
errno_t _mktemp_s(  
   char (&template)[size]  
); // C++ only  
template <size_t size>  
errno_t _wmktemp_s(  
   wchar_t (&template)[size]  
); // C++ only  
```  
  
#### Parametri  
 `template`  
 Criterio per il nome file.  
  
 `sizeInChars`  
 Dimensione del buffer di caratteri a byte singolo in `_mktemp_s`; caratteri wide in `_wmktemp_s`, incluso il carattere di terminazione null.  
  
## Valore restituito  
 Entrambe queste funzioni restituiscono zero in caso di esito positivo; un codice di errore in caso di fallimento.  
  
### Condizioni di errore  
  
|`template`|`sizeInChars`|**valore restituito**|**nuovo valore del modello**|  
|----------------|-------------------|---------------------------|----------------------------------|  
|`NULL`|any|`EINVAL`|`NULL`|  
|Formato non valido \(vedere la sezione `Remarks` per il formato corretto\)|any|`EINVAL`|stringa vuota|  
|any|\<\= numero di X|`EINVAL`|stringa vuota|  
  
 Se si verifica una qualsiasi delle condizioni di errore sopra riportate, viene invocato il gestore di parametro non valido, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md).  Se l'esecuzione può continuare, `errno` viene impostato a `EINVAL` e le funzioni restituiscono `EINVAL`.  
  
## Note  
 La funzione `_mktemp_s` crea un nome file univoco modificando l'argomento di `template`, in modo che dopo la chiamata, il puntatore `template` punti ad una stringa contenente il nuovo nome file.  `_mktemp_s` gestisce automaticamente gli argomenti della stringa con caratteri multibyte in base alle proprie esigenze, riconoscere le sequenze di caratteri multibyte in base alla tabella codici multibyte attualmente in uso dal sistema in fase di esecuzione.  `_wmktemp_s` è una versione a caratteri wide di `_mktemp_s`; l'argomento di `_wmktemp_s` è una stringa a caratteri wide.  `_wmktemp_s` e `_mktemp_s` si comportano in modo identico in caso contrario, ma `_wmktemp_s` non gestisce le stringhe di caratteri multibyte.  
  
### Mapping di routine di testo generico  
  
|Routine Tchar.h|\_UNICODE e \_MBCS non definiti|\_MBCS definito|\_UNICODE definito|  
|---------------------|-------------------------------------|---------------------|------------------------|  
|`_tmktemp_s`|`_mktemp_s`|`_mktemp_s`|`_wmktemp_s`|  
  
 L'argomento `template` presenta la forma `baseXXXXXX`, dove `base` è la parte del nuovo nome file specificata e ogni X è un segnaposto per un carattere fornito da `_mktemp_s`.  Ogni carattere segnaposto in `template` deve essere una maiuscola. X.  `_mktemp_s` mantiene `base` e sostituisce la prima X di trascinamento con un carattere alfabetico.  `_mktemp_s` sostituisce le seguenti x finali con un valore pari a cinque cifre; questo valore è un numero univoco che identifica il processo chiamante, o programmi multithread, il thread chiamante.  
  
 Ogni chiamata con esito positivo a `_mktemp_s` modifica `template`.  In ogni chiamata successiva dallo stesso processo o thread con lo stesso argomento `template`, controlli `_mktemp_s` per i nomi di file nomi di corrispondenza restituiti da `_mktemp_s` in chiamate precedenti.  Se tale file non esiste per un nome specificato, restituisce `_mktemp_s` di da parte.  Se i file disponibili per tutti i nomi in precedenza restituiti, `_mktemp_s` crea un nuovo nome sostituendo il carattere alfabetico che utilizza il nome in precedenza restituito con la lettera minuscola successivo disponibile, in ordine, "da" e "z".  Ad esempio, se `base` se:  
  
```  
fn  
```  
  
 e il valore di cinque cifre specificato da `_mktemp_s` è 12345, il nome restituito è:  
  
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
  
 `_mktemp_s` possibile creare un massimo di 26 nomi file univoci per qualsiasi combinazione specifica di valori del modello e di base.  Pertanto, FNZ12345 è l'ultimo nome file univoco `_mktemp_s` può creare per i valori `template` e `base` utilizzati in questo esempio.  
  
 In C\+\+ l'utilizzo di queste funzioni è semplificato dagli overload dei modelli. Gli overload possono dedurre la lunghezza del buffer automaticamente \(eliminando la necessità di specificare un argomento di dimensione\) e possono sostituire automaticamente le funzioni precedenti e non sicure con le controparti più recenti e sicure.  Per ulteriori informazioni, vedere [Overload di modelli sicuri](../../c-runtime-library/secure-template-overloads.md).  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`_mktemp_s`|\<io.h\>|  
|`_wmktemp_s`|\<io.h\> o \<wchar.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## Esempio  
  
```  
// crt_mktemp_s.cpp  
/* The program uses _mktemp to create  
 * five unique filenames. It opens each filename  
 * to ensure that the next name is unique.  
 */  
  
#include <io.h>  
#include <string.h>  
#include <stdio.h>  
  
char *fnTemplate = "fnXXXXXX";  
char names[5][9];  
  
int main()  
{  
   int i, err, sizeInChars;  
   FILE *fp;  
  
   for( i = 0; i < 5; i++ )  
   {  
      strcpy_s( names[i], sizeof(names[i]), fnTemplate );  
      /* Get the size of the string and add one for the null terminator.*/  
      sizeInChars = strnlen(names[i], 9) + 1;  
      /* Attempt to find a unique filename: */  
      err = _mktemp_s( names[i], sizeInChars );  
      if( err != 0 )  
         printf( "Problem creating the template" );  
      else  
      {  
         if( fopen_s( &fp, names[i], "w" ) == 0 )  
            printf( "Unique filename is %s\n", names[i] );  
         else  
            printf( "Cannot open %s\n", names[i] );  
         fclose( fp );  
      }  
   }  
  
   return 0;  
}  
```  
  
## Esempio di output  
  
```  
Unique filename is fna03188  
Unique filename is fnb03188  
Unique filename is fnc03188  
Unique filename is fnd03188  
Unique filename is fne03188  
```  
  
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
 [tmpfile\_s](../../c-runtime-library/reference/tmpfile-s.md)