---
title: "vfscanf, vfwscanf | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "vfwscanf"
  - "vfscanf"
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
  - "vfwscanf"
  - "_vftscanf"
  - "vfscanf"
dev_langs: 
  - "C++"
ms.assetid: c06450ef-03f1-4d24-a8ac-d2dd98847918
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 6
---
# vfscanf, vfwscanf
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Legge i dati formattati da un flusso.  Sono disponibili versioni più sicure di queste funzioni; vedere [vfscanf\_s, vfwscanf\_s](../../c-runtime-library/reference/vfscanf-s-vfwscanf-s.md).  
  
## Sintassi  
  
```  
int vfscanf(   
   FILE *stream,  
   const char *format,  
   va_list argptr   
);  
int vfwscanf(   
   FILE *stream,  
   const wchar_t *format,  
   va_list argptr   
);  
```  
  
#### Parametri  
 `stream`  
 Puntatore alla struttura `FILE`.  
  
 `format`  
 Stringa di controllo del formato.  
  
 `arglist`  
 Elenco di argomenti variabili.  
  
## Valore restituito  
 Ognuna di queste funzioni restituisce il numero di campi che vengono convertiti correttamente e assegnati; il valore restituito non include i campi che vengono letti ma non assegnati.  Un valore restituito pari a 0 indica che nessun campo è stato assegnato.  Se si verifica un errore, o se la fine del flusso di file viene raggiunta prima della prima conversione, il valore restituito è `EOF` per `vfscanf` e `vfwscanf`.  
  
 Queste funzioni convalidano i parametri.  Se `stream` o `format` è un puntatore null, viene richiamato il gestore di parametro non valido, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md).  Se l'esecuzione può continuare, queste funzioni restituiscono `EOF` e impostano `errno` su `EINVAL`.  
  
## Note  
 La funzione `vfscanf` legge i dati dalla posizione corrente di `stream` in posizioni fornite dall'elenco di argomenti `arglist`.  Ogni argomento dell'elenco deve essere un puntatore a una variabile di un tipo che corrisponde a un identificatore del tipo in `format`.  Tramite il parametro `format` viene controllata l'interpretazione dei campi di input e i relativi modulo e funzione sono uguali a quelli dell'argomento `format` per `scanf`; per una descrizione del parametro `format`, vedere [scanf](../../c-runtime-library/reference/scanf-scanf-l-wscanf-wscanf-l.md).  
  
 `vfwscanf` è una versione a caratteri estesi di `vfscanf`; l'argomento formato su `vfwscanf` è una stringa di caratteri estesi.  Queste funzioni si comportano in modo identico se il flusso viene aperto in modalità ANSI.  `vfscanf` non supporta l'input da un flusso di UNICODE.  
  
### Mapping di routine su testo generico  
  
|Routine TCHAR.H|\_UNICODE e \_MBCS non definiti|\_MBCS definito|\_UNICODE definito|  
|---------------------|-------------------------------------|---------------------|------------------------|  
|`_vftscanf`|`vfscanf`|`vfscanf`|`vfwscanf`|  
  
 Per ulteriori informazioni, vedere [Campi per la specifica di formato: funzioni scanf e wscanf](../../c-runtime-library/format-specification-fields-scanf-and-wscanf-functions.md).  
  
## Requisiti  
  
|Funzione|Intestazione obbligatoria|  
|--------------|-------------------------------|  
|`vfscanf`|\<stdio.h\>|  
|`vfwscanf`|\<stdio.h\> o \<wchar.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## Esempio  
  
```  
// crt_vfscanf.c  
// compile with: /W3  
// This program writes formatted  
// data to a file. It then uses vfscanf to  
// read the various data back from the file.  
  
#include <stdio.h>  
#include <stdarg.h>  
  
FILE *stream;  
  
int call_vfscanf(FILE * istream, char * format, ...)  
{  
    int result;  
    va_list arglist;  
    va_start(arglist, format);  
    result = vfscanf(istream, format, arglist);  
    va_end(arglist);  
    return result;  
}  
  
int main(void)  
{  
    long l;  
    float fp;  
    char s[81];  
    char c;  
  
    if (fopen_s(&stream, "vfscanf.out", "w+") != 0)  
    {  
        printf("The file vfscanf.out was not opened\n");  
    }  
    else  
    {  
        fprintf(stream, "%s %ld %f%c", "a-string",  
            65000, 3.14159, 'x');  
        // Security caution!  
        // Beware loading data from a file without confirming its size,  
        // as it may lead to a buffer overrun situation.  
  
        // Set pointer to beginning of file:  
        fseek(stream, 0L, SEEK_SET);  
  
        // Read data back from file:  
        call_vfscanf(stream, "%s %ld %f%c", s, &l, &fp, &c);  
  
        // Output data read:   
        printf("%s\n", s);  
        printf("%ld\n", l);  
        printf("%f\n", fp);  
        printf("%c\n", c);  
  
        fclose(stream);  
    }  
}  
  
```  
  
  **a\-string**  
**65000**  
**3.141590**  
**x**   
## Equivalente .NET Framework  
 [System::IO::StreamReader::ReadLine](https://msdn.microsoft.com/en-us/library/system.io.streamreader.readline.aspx). Vedere anche i metodi `Parse`, come [System::Double::Parse](https://msdn.microsoft.com/en-us/library/system.double.parse.aspx).  
  
## Vedere anche  
 [I\/O di flusso](../../c-runtime-library/stream-i-o.md)   
 [\_cscanf, \_cscanf\_l, \_cwscanf, \_cwscanf\_l](../../c-runtime-library/reference/cscanf-cscanf-l-cwscanf-cwscanf-l.md)   
 [fprintf, \_fprintf\_l, fwprintf, \_fwprintf\_l](../../c-runtime-library/reference/fprintf-fprintf-l-fwprintf-fwprintf-l.md)   
 [scanf, \_scanf\_l, wscanf, \_wscanf\_l](../../c-runtime-library/reference/scanf-scanf-l-wscanf-wscanf-l.md)   
 [sscanf, \_sscanf\_l, swscanf, \_swscanf\_l](../../c-runtime-library/reference/sscanf-sscanf-l-swscanf-swscanf-l.md)   
 [fscanf\_s, \_fscanf\_s\_l, fwscanf\_s, \_fwscanf\_s\_l](../../c-runtime-library/reference/fscanf-s-fscanf-s-l-fwscanf-s-fwscanf-s-l.md)   
 [vfscanf\_s, vfwscanf\_s](../../c-runtime-library/reference/vfscanf-s-vfwscanf-s.md)