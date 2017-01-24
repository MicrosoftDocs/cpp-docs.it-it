---
title: "gets_s, _getws_s | Microsoft Docs"
ms.custom: ""
ms.date: "12/16/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_getws_s"
  - "gets_s"
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
  - "_getws_s"
  - "gets_s"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_getws_s (funzione)"
  - "sovraccarichi del buffer"
  - "buffer, evitare i sovraccarichi"
  - "buffer, sovraccarichi del buffer"
  - "gets_s (funzione)"
  - "getws_s (funzione)"
  - "linee, recupero"
  - "input standard, lettura"
  - "flussi, recupero di linee"
ms.assetid: 5880c36f-122c-4061-a1a5-aeeced6fe58c
caps.latest.revision: 29
caps.handback.revision: 27
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# gets_s, _getws_s
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Ottenere una linea dallo stream `stdin`.  Queste versioni di [gets, \_getws](../../c-runtime-library/gets-getws.md) contengono miglioramenti sulla sicurezza, come descritto in [Funzionalità di sicurezza in CRT](../../c-runtime-library/security-features-in-the-crt.md).  
  
## Sintassi  
  
```  
char *gets_s(   
   char *buffer,  
   size_t sizeInCharacters  
);  
wchar_t *_getws_s(   
   wchar_t *buffer,  
   size_t sizeInCharacters  
);  
template <size_t size>  
char *gets_s(   
   char (&buffer)[size]  
); // C++ only  
template <size_t size>  
wchar_t *_getws_s(   
   wchar_t (&buffer)[size]  
); // C++ only  
```  
  
#### Parametri  
 \[out\] `buffer`  
 Percorso di archiviazione per la stringa di input.  
  
 \[in\] `sizeInCharacters`  
 Dimensione del buffer.  
  
## Valore restituito  
 Se ha esito positivo restituisce `buffer`.  Un puntatore a `NULL` indica un errore o una condizione di fine file.  Utilizzare [ferror](../../c-runtime-library/reference/ferror.md) o [feof](../../c-runtime-library/reference/feof.md) per determinare quale si è verificato.  
  
## Note  
 La funzione `gets_s` legge una riga dal flusso di input predefinito `stdin` e lo memorizzata in `buffer`.  La riga è costituita da tutti i caratteri fino al primo carattere di nuova riga \('\\n'\) incluso.  `gets_s` quindi sostituisce il carattere di nuova riga con un carattere null \('\\0'\) prima di restituirla.  Al contrario, la funzione `fgets_s` mantiene il carattere di nuova riga.  
  
 Se il primo carattere letto è il carattere di fine file, un carattere null viene archiviato nella parte superiore `buffer` e viene restituito `NULL`.  
  
 `_getws` è una versione a caratteri di tipo "wide" di `gets_s`; il relativo argomento e valore restituito sono stringhe di caratteri di tipo "wide".  
  
 Se `buffer` è `NULL` o `sizeInCharacters` è minore o uguale a zero oppure se il buffer è troppo piccolo per contenere la linea e il carattere di terminazione null, queste funzioni richiamano un gestore del parametro non valido, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md).  Se l'esecuzione può continuare, queste funzioni restituiscono `NULL` e impostano errno a `ERANGE`.  
  
 In C\+\+, l'utilizzo di queste funzioni è semplificato dagli overload dei modelli; gli overload possono dedurre la lunghezza del buffer automaticamente \(che elimina la necessità di specificare un argomento di dimensione\) e possono sostituire automaticamente le funzioni precedenti, quelle non sicure alle più recenti e le controparti sicure.  Per ulteriori informazioni, vedere [Overload di modelli sicuri](../../c-runtime-library/secure-template-overloads.md).  
  
### Mapping di routine su testo generico  
  
|Routine TCHAR.H|\_UNICODE & \_MBCS non definiti|\_MBCS definito|\_UNICODE definito|  
|---------------------|-------------------------------------|---------------------|------------------------|  
|`_getts`|`gets_s`|`gets_s`|`_getws`|  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`gets_s`|\<stdio.h\>|  
|`_getws`|\<stdio.h\> o \<wchar.h\>|  
  
 La console non è supportata nelle applicazioni [!INCLUDE[win8_appname_long](../../build/includes/win8_appname_long_md.md)].  Gli handle del flusso standard associati alla console,`stdin`, `stdout` e `stderr`, devono essere reindirizzati prima di poter utilizzare le funzioni di runtime del linguaggio C nelle applicazioni [!INCLUDE[win8_appname_long](../../build/includes/win8_appname_long_md.md)].  Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## Esempio  
  
```  
// crt_gets_s.c  
// This program retrieves a string from the stdin and   
// prints the same string to the console.  
  
#include <stdio.h>  
  
int main( void )  
{  
   char line[21]; // room for 20 chars + '\0'  
   gets_s( line, 20 );  
   printf( "The line entered was: %s\n", line );  
}  
```  
  
  **`Salve!`la riga immessa è: Salve\!**   
## Equivalente .NET Framework  
 [System::Console::Read](https://msdn.microsoft.com/en-us/library/system.console.read.aspx)  
  
## Vedere anche  
 [I\/O di flusso](../../c-runtime-library/stream-i-o.md)   
 [gets, \_getws](../../c-runtime-library/gets-getws.md)   
 [fgets, fgetws](../../c-runtime-library/reference/fgets-fgetws.md)   
 [fputs, fputws](../../c-runtime-library/reference/fputs-fputws.md)   
 [puts, \_putws](../../c-runtime-library/reference/puts-putws.md)