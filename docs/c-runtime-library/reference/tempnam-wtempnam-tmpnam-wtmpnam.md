---
title: "_tempnam, _wtempnam, tmpnam, _wtmpnam | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_wtempnam"
  - "_wtmpnam"
  - "tmpnam"
  - "_tempnam"
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
  - "wtempnam"
  - "_wtmpnam"
  - "wtmpnam"
  - "tmpnam"
  - "_wtempnam"
  - "_tempnam"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_tempnam (funzione)"
  - "_ttmpnam (funzione)"
  - "_wtempnam (funzione)"
  - "_wtmpnam (funzione)"
  - "nomi file [C++], creazione temporanea"
  - "nomi file [C++], temporanei"
  - "tempnam (funzione)"
  - "file temporanei, creazione"
  - "tmpnam (funzione)"
  - "ttmpnam (funzione)"
  - "wtempnam (funzione)"
  - "wtmpnam (funzione)"
ms.assetid: 3ce75f0f-5e30-42a6-9791-8d7cbfe70fca
caps.latest.revision: 20
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 20
---
# _tempnam, _wtempnam, tmpnam, _wtmpnam
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Genera nomi utilizzabili per creare i file temporanei.  Sono disponibili versioni più sicure di alcune di queste funzioni; vedere [tmpnam\_s, \_wtmpnam\_s](../../c-runtime-library/reference/tmpnam-s-wtmpnam-s.md).  
  
## Sintassi  
  
```  
char *_tempnam(  
   const char *dir,  
   const char *prefix   
);  
wchar_t *_wtempnam(  
   const wchar_t *dir,  
   const wchar_t *prefix   
);  
char *tmpnam(  
   char *str   
);  
wchar_t *_wtmpnam(  
   wchar_t *str   
);  
```  
  
#### Parametri  
 `prefix`  
 La stringa che verrà preposta ai nomi restituiti da `_tempnam`.  
  
 `dir`  
 Il percorso utilizzato nel nome file se non viene trovata alcuna variabile di ambiente TMP o, se TMP non è una directory valida.  
  
 `str`  
 Puntatore che utilizzerà il nome generato e sarà identico al nome restituito dalla funzione.  Si tratta di un modo pratico per salvare il nome generato.  
  
## Valore restituito  
 Ognuna di queste funzioni restituisce un puntatore al nome generato o a `NULL` se avviene un errore.  L'errore può verificarsi se si tentano più `TMP_MAX` \(vedere STDIO.H\) chiamate con `tmpnam` o se si utilizza `_tempnam`ed esiste un nome di directory non valido specificato nella variabile di ambiente TMP e nel parametro `dir`.  
  
> [!NOTE]
>  I puntatori restituiti da `tmpnam` e da `_wtmpnam` puntano ai buffer statici interni.  [free](../../c-runtime-library/reference/free.md) non deve essere chiamato per deallocare i puntatori.  `free` deve essere chiamato per i puntatori allocati da `_tempnam` e da `_wtempnam`.  
  
## Note  
 Ognuna di queste funzioni restituisce il nome di un file che correntemente non esiste.  `tmpnam` restituisce un nome univoco nella cartella di lavoro corrente e `_tempnam` consente di generare un nome univoco in una directory diversa da quella corrente.  È importante notare che quando un file è preceduto da una barra rovesciata e non sono presenti informazioni sul percorso, come \\fname21, significa che il nome è valido per la cartella di lavoro corrente.  
  
 Per `tmpnam`, è possibile archiviare questo nome file generato in `str`.  Se `str` è `NULL`, allora `tmpnam` lascia il risultato in un buffer statico interno.  Pertanto tutte le chiamate successive eliminano questo valore.  Il nome generato da `tmpnam` è costituito da un nome di file generato da un programma e, dopo la prima chiamata a `tmpnam`, da un'estensione di file composta da numeri sequenziali in base 32 \(.1\-.vvu, quando `TMP_MAX` in STDIO.H è 32.767\).  
  
 `_tempnam` genererà un nome file univoco per una directory scelta in base alle seguenti regole:  
  
-   Se la variabile di ambiente TMP è definita e impostata su un nome di directory valido, i nomi file univoci verranno generati per la directory specificata da TMP.  
  
-   Se la variabile di ambiente TMP non è definita o se viene impostata al nome di una directory che non esiste, `_tempnam` utilizzerà il parametro `dir` come percorso per cui verranno generati i nomi univoci.  
  
-   Se la variabile di ambiente TMP non è definita o se viene impostata al nome di una directory che non esiste, e se `dir` è `NULL` o impostato al nome di una directory che non esiste, `_tempnam` utilizzerà la cartella di lavoro corrente per generare nomi univoci.  Attualmente, se sia TMP che il `dir` specificano nomi di directory che non esistono, la chiamata di funzione di `_tempnam` avrà esito negativo.  
  
 Il nome restituito da `_tempnam` sarà una concatenazione tra `prefix` e un numero sequenziale, che verranno combinati per creare un nome file univoco per la directory specificata.  `_tempnam` genera nomi file che non hanno estensione.  `_tempnam` utilizza [malloc](../../c-runtime-library/reference/malloc.md) per allocare spazio per nome del file; il programma è responsabile di liberare tale spazio quando non è più necessario.  
  
 `_tempnam` e `tmpnam` gestiscono automaticamente gli argomenti di stringa con caratteri multibyte in modo appropriato, riconoscendo le sequenze di caratteri multibyte in base alla tabella codici OEM ottenuta dal sistema operativo.  `_wtempnam` è una versione a caratteri estesi di `_tempnam`; gli argomenti e i valori restituiti di `_wtempnam` sono stringhe con caratteri estesi.  `_wtempnam` e `_tempnam` si comportano in modo identico in caso contrario, ma `_wtempnam` non gestisce le stringhe di caratteri multibyte.  `_wtmpnam` è una versione a caratteri estesi di `tmpnam`; gli argomenti e i valori restituiti di `_wtmpnam` sono stringhe con caratteri estesi.  `_wtmpnam` e `tmpnam` si comportano in modo identico in caso contrario, ma `_wtmpnam` non gestisce le stringhe di caratteri multibyte.  
  
 Se `_DEBUG` e `_CRTDBG_MAP_ALLOC` sono definiti, `_tempnam` e `_wtempnam` vengono sostituiti da chiamate a [\_tempnam\_dbg e \_wtempnam\_dbg](../../c-runtime-library/reference/tempnam-dbg-wtempnam-dbg.md).  
  
### Mapping di routine di testo generico  
  
|Routine TCHAR.H|\_UNICODE & \_MBCS non definiti|\_MBCS definito|\_UNICODE definito|  
|---------------------|-------------------------------------|---------------------|------------------------|  
|`_ttmpnam`|`tmpnam`|`tmpnam`|`_wtmpnam`|  
|`_ttempnam`|`_tempnam`|`_tempnam`|`_wtempnam`|  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`_tempnam`|\<stdio.h\>|  
|`_wtempnam`, `_wtmpnam`|\<stdio.h\> o \<wchar.h\>|  
|`tmpnam`|\<stdio.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'Introduzione.  
  
## Esempio  
  
```  
// crt_tempnam.c  
// compile with: /W3  
// This program uses tmpnam to create a unique filename in the  
// current working directory, then uses _tempnam to create   
// a unique filename with a prefix of stq.   
  
#include <stdio.h>  
#include <stdlib.h>  
  
int main( void )  
{     
   char* name1 = NULL;  
   char* name2 = NULL;  
  
   // Create a temporary filename for the current working directory:   
   if( ( name1 = tmpnam( NULL ) ) != NULL ) // C4996  
   // Note: tmpnam is deprecated; consider using tmpnam_s instead  
      printf( "%s is safe to use as a temporary file.\n", name1 );  
   else  
      printf( "Cannot create a unique filename\n" );  
  
   // Create a temporary filename in temporary directory with the  
   // prefix "stq". The actual destination directory may vary  
   // depending on the state of the TMP environment variable and  
   // the global variable P_tmpdir.     
  
   if( ( name2 = _tempnam( "c:\\tmp", "stq" ) ) != NULL )  
      printf( "%s is safe to use as a temporary file.\n", name2 );   
   else  
      printf( "Cannot create a unique filename\n" );  
  
   // When name2 is no longer needed :     
   if(name2)  
     free(name2);  
  
}  
```  
  
  **\\ s1gk. può essere utilizzato come file temporaneo in modo sicuro.**  
**C:\\DOCUME~1\\user\\LOCALS~1\\Temp\\2\\stq2 può essere utilizzato come file temporaneo in modo sicuro.**   
## Equivalente .NET Framework  
 Non applicabile. Per chiamare la funzione standard C, utilizzare `PInvoke`. Per ulteriori informazioni, vedere [Esempi di Invocazione della Piattaforma](../Topic/Platform%20Invoke%20Examples.md).  
  
## Vedere anche  
 [I\/O di flusso](../../c-runtime-library/stream-i-o.md)   
 [\_getmbcp](../../c-runtime-library/reference/getmbcp.md)   
 [malloc](../../c-runtime-library/reference/malloc.md)   
 [\_setmbcp](../../c-runtime-library/reference/setmbcp.md)   
 [tmpfile](../../c-runtime-library/reference/tmpfile.md)   
 [tmpfile\_s](../../c-runtime-library/reference/tmpfile-s.md)