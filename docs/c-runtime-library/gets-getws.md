---
title: "gets, _getws | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_getws"
  - "gets"
apilocation: 
  - "msvcr80.dll"
  - "msvcr90.dll"
  - "msvcr120.dll"
  - "msvcr110.dll"
  - "msvcr110_clr0400.dll"
  - "msvcrt.dll"
  - "msvcr100.dll"
apitype: "DLLExport"
f1_keywords: 
  - "_getts"
  - "gets"
  - "_getws"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_getts (funzione)"
  - "_getws (funzione)"
  - "gets (funzione)"
  - "getts (funzione)"
  - "getws (funzione)"
  - "linee, recupero"
  - "input standard, lettura"
  - "flussi, recupero di linee"
ms.assetid: 1ec2dd4b-f801-48ea-97c2-892590f16024
caps.latest.revision: 32
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 32
---
# gets, _getws
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Ottiene una riga dal flusso `stdin`. Sono disponibili versioni più sicure di queste funzioni. Vedere [gets\_s, \_getws\_s](../c-runtime-library/reference/gets-s-getws-s.md).  
  
> [!IMPORTANT]
>  Queste funzioni sono obsolete. A partire da Visual Studio 2015 non sono disponibili in CRT. Le versioni sicure di queste funzioni, gets\_s e \_getws\_s, sono ancora disponibili. Per informazioni su queste funzioni alternative, vedere [gets\_s, \_getws\_s](../c-runtime-library/reference/gets-s-getws-s.md).  
  
> [!IMPORTANT]
>  Non è possibile usare questa API nelle applicazioni eseguite in Windows Runtime. Per altre informazioni, vedere l'articolo relativo alle [funzioni CRT non supportate con \/ZW](http://msdn.microsoft.com/library/windows/apps/jj606124.aspx).  
  
## Sintassi  
  
```  
char *gets(   
   char *buffer   
);  
wchar_t *_getws(   
   wchar_t *buffer   
);  
template <size_t size>  
char *gets(   
   char (&buffer)[size]  
); // C++ only  
template <size_t size>  
wchar_t *_getws(   
   wchar_t (&buffer)[size]  
); // C++ only  
```  
  
#### Parametri  
 `buffer`  
 Percorso di archiviazione per la stringa di input.  
  
## Valore restituito  
 Restituisce il relativo argomento se l'operazione ha esito positivo. Un puntatore `NULL` indica una condizione di errore o di fine file. Usare [ferror](../c-runtime-library/reference/ferror.md) o [feof](../c-runtime-library/reference/feof.md) per determinare quella che si è verificata. Se `buffer` è `NULL`, queste funzioni richiamano un gestore di parametri non valido, come descritto in [Convalida dei parametri](../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, queste funzioni restituiscono `NULL` e impostano errno su `EINVAL`.  
  
## Note  
 La funzione `gets` legge una riga dal flusso di input standard `stdin` e la archivia in `buffer`. La riga è costituita da tutti i caratteri, incluso il primo carattere di nuova riga \('\\n'\).`gets` sostituisce quindi il carattere di nuova riga con un carattere Null \('\\0'\) prima di restituire la riga. Al contrario, la funzione `fgets` mantiene il carattere di nuova riga.`_getws` è una versione a caratteri wide di `gets` il cui argomento e il cui valore restituito sono stringhe a caratteri wide.  
  
> [!IMPORTANT]
>  Dal momento che non esiste alcun modo per limitare il numero di caratteri letti tramite operazioni get, input non attendibile può causare facilmente sovraccarichi del buffer. In alternativa, usare `fgets`.  
  
 In C\+\+ queste funzioni presentano overload di modello che richiamano le relative controparti più recenti e sicure. Per altre informazioni, vedere [Overload di modelli sicuri](../c-runtime-library/secure-template-overloads.md).  
  
### Mapping di routine di testo generico  
  
|Routine TCHAR.H|\_UNICODE e \_MBCS non definiti|\_MBCS definito|\_UNICODE definito|  
|---------------------|-------------------------------------|---------------------|------------------------|  
|`_getts`|`gets`|`gets`|`_getws`|  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`gets`|\<stdio.h\>|  
|`_getws`|\<stdio.h\> o \<wchar.h\>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../c-runtime-library/compatibility.md).  
  
## Esempio  
  
```  
// crt_gets.c // compile with: /WX /W3 #include <stdio.h> int main( void ) { char line[21]; // room for 20 chars + '\0' gets( line );  // C4996 // Danger: No way to limit input to 20 chars. // Consider using gets_s instead. printf( "The line entered was: %s\n", line ); }  
```  
  
 Notare che se l'input contiene più di 20 caratteri, si verificherà un sovraccarico del buffer di riga e quasi certamente il programma verrà arrestato in modo anomalo.  
  
```Output  
  
Hello there!La riga immessa è: Hello there!  
```  
  
## Equivalente .NET Framework  
 [System::Console::Read](https://msdn.microsoft.com/en-us/library/system.console.read.aspx)  
  
## Vedere anche  
 [I\/O di flusso](../c-runtime-library/stream-i-o.md)   
 [fgets, fgetws](../c-runtime-library/reference/fgets-fgetws.md)   
 [fputs, fputws](../c-runtime-library/reference/fputs-fputws.md)   
 [puts, \_putws](../c-runtime-library/reference/puts-putws.md)