---
title: "vsscanf, vswscanf | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "vsscanf"
  - "vswscanf"
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
  - "_vstscanf"
  - "vsscanf"
  - "vswscanf"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "vsscanf (funzione)"
  - "vswscanf (funzione)"
ms.assetid: e96180f2-df46-423d-b4eb-0a49ab819bde
caps.latest.revision: 9
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# vsscanf, vswscanf
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Legge i dati formattati da una stringa.  Sono disponibili versioni più sicure di queste funzioni; vedere [vsscanf\_s, vswscanf\_s](../../c-runtime-library/reference/vsscanf-s-vswscanf-s.md).  
  
## Sintassi  
  
```  
int vsscanf(  
   const char *buffer,  
   const char *format,  
   va_list arglist  
);  
int vswscanf(  
   const wchar_t *buffer,  
   const wchar_t *format,  
   va_list arglist  
);  
```  
  
#### Parametri  
 `buffer`  
 Dati archiviati  
  
 `format`  
 Stringa di controllo del formato.  Per ulteriori informazioni, vedere [Campi per la specifica di formato: funzioni scanf e wscanf](../../c-runtime-library/format-specification-fields-scanf-and-wscanf-functions.md).  
  
 `arglist`  
 Elenco di argomenti variabili.  
  
## Valore restituito  
 Ognuna di queste funzioni restituisce il numero di campi che vengono convertiti correttamente e assegnati; il valore restituito non include i campi che sono stati letti ma non assegnati.  Un valore restituito pari a 0 indica che nessun campo è stato assegnato.  Il valore restituito è `EOF` per un errore, o se la fine della stringa viene raggiunta prima della prima conversione.  
  
 Se `buffer` o `format` è un `NULL` puntatore null, viene richiamato il gestore di parametro non valido, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md).  Se l'esecuzione può continuare, la funzione restituisce \-1 e imposta `errno` su `EINVAL`.  
  
 Per informazioni su questi e altri codici di errore, vedere [errno, \_doserrno, \_sys\_errlist, and \_sys\_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).  
  
## Note  
 La funzione `vsscanf` legge i dati da `buffer` nell posizioni fornite da ogni argomento nell'elenco di argomenti `arglist`.  Ogni argomento dell'elenco deve essere un puntatore a una variabile con un tipo che corrisponde a un identificatore del tipo in `format`.  L'argomento `format` controlla l'interpretazione dei campi di input e ha gli stessi form e funzione dell'argomento `format` per la funzione `scanf`.  Se la copia avviene tra stringhe che si sovrappongono, il comportamento non è definito.  
  
> [!IMPORTANT]
>  Quando si utilizza `vsscanf` per leggere una stringa, specificare sempre una larghezza per il formato `%s`, ad esempio `"%32s"` anziché `"%s"`\); in caso contrario, l'input in un formato inappropriato può comportare un sovraccarico del buffer.  
  
 `vswscanf` è una versione a caratteri estesi di `vsscanf`; gli argomenti per `vswscanf` sono stringhe a caratteri estesi.  `vsscanf` non gestisce caratteri esadecimali multibyte.  `vswscanf` non gestisce i caratteri esadecimali o dell'"area di compatibilità" a larghezza intera Unicode.  Altrimenti `vswscanf` e `vsscanf` si comportano in modo identico.  
  
### Mapping di routine su testo generico  
  
|Routine TCHAR.H|\_UNICODE e \_MBCS non definiti|\_MBCS definito|\_UNICODE definito|  
|---------------------|-------------------------------------|---------------------|------------------------|  
|`_vstscanf`|`vsscanf`|`vsscanf`|`vswscanf`|  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`vsscanf`|\<stdio.h\>|  
|`vswscanf`|\<stdio.h\> o \<wchar.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## Esempio  
  
```  
// crt_vsscanf.c  
// compile with: /W3  
// This program uses vsscanf to read data items  
// from a string named tokenstring, then displays them.  
  
#include <stdio.h>  
#include <stdarg.h>  
  
int call_vsscanf(char *tokenstring, char *format, ...)  
{  
    int result;  
    va_list arglist;  
    va_start(arglist, format);  
    result = vsscanf(tokenstring, format, arglist);  
    va_end(arglist);  
    return result;  
}  
  
int main( void )  
{  
    char  tokenstring[] = "15 12 14...";  
    char  s[81];  
    char  c;  
    int   i;  
    float fp;  
  
    // Input various data from tokenstring:  
    // max 80 character string:  
    call_vsscanf(tokenstring, "%80s", s);  
    call_vsscanf(tokenstring, "%c", &c);  
    call_vsscanf(tokenstring, "%d", &i);  
    call_vsscanf(tokenstring, "%f", &fp);  
  
    // Output the data read  
    printf("String    = %s\n", s);  
    printf("Character = %c\n", c);  
    printf("Integer:  = %d\n", i);  
    printf("Real:     = %f\n", fp);  
}  
```  
  
  **Stringa    \= 15**  
**Carattere \= 1**  
**Integer:  \= 15**  
**Real:     \= 15.000000**   
## Equivalente .NET Framework  
 Vedere i metodi `Parse`, come [System::Double::Parse](https://msdn.microsoft.com/en-us/library/system.double.parse.aspx).  
  
## Vedere anche  
 [I\/O di flusso](../../c-runtime-library/stream-i-o.md)   
 [scanf, \_scanf\_l, wscanf, \_wscanf\_l](../../c-runtime-library/reference/scanf-scanf-l-wscanf-wscanf-l.md)   
 [sscanf, \_sscanf\_l, swscanf, \_swscanf\_l](../../c-runtime-library/reference/sscanf-sscanf-l-swscanf-swscanf-l.md)   
 [sprintf, \_sprintf\_l, swprintf, \_swprintf\_l, \_\_swprintf\_l](../../c-runtime-library/reference/sprintf-sprintf-l-swprintf-swprintf-l-swprintf-l.md)   
 [vsscanf\_s, vswscanf\_s](../../c-runtime-library/reference/vsscanf-s-vswscanf-s.md)