---
title: "vfscanf_s, vfwscanf_s | Microsoft Docs"
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
  - "vfscanf_s"
  - "vfwscanf_s"
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
  - "vfscanf_s"
  - "vfwscanf_s"
  - "_vftscanf_s"
dev_langs: 
  - "C++"
  - "C"
ms.assetid: 9b0133f0-9a18-4581-b24b-3b72683ad432
caps.latest.revision: 6
caps.handback.revision: 4
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# vfscanf_s, vfwscanf_s
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Legge i dati formattati da un flusso.  Queste versioni di vfscanf e vfwscanf contengono miglioramenti della sicurezza, come descritto in [Funzionalità di sicurezza in CRT](../../c-runtime-library/security-features-in-the-crt.md).  
  
## Sintassi  
  
```  
int vfscanf_s(   
   FILE *stream,  
   const char *format,  
   va_list arglist  
);  
int vfwscanf_s(   
   FILE *stream,  
   const wchar_t *format,  
   va_list arglist  
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
 Ognuna di queste funzioni restituisce il numero di campi che vengono convertiti correttamente e assegnati; il valore restituito non include i campi che sono stati letti ma non assegnati.  Un valore restituito pari a 0 indica che nessun campo è stato assegnato.  Se si verifica un errore, o se la fine del flusso di file viene raggiunta prima della prima conversione, il valore restituito è `EOF` per `vfscanf_s` e `vfwscanf_s`.  
  
 Queste funzioni convalidano i parametri.  Se `stream` è un puntatore file non valido o `format` è un puntatore null, queste funzioni richiamano il gestore di parametro non valido, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md).  Se l'esecuzione può continuare, queste funzioni restituiscono `EOF` e impostano `errno` su `EINVAL`.  
  
## Note  
 La funzione `vfscanf_s` legge i dati dalla posizione corrente di `stream` in posizioni fornite dall'elenco di argomenti `arglist` \(se presente\).  Ogni argomento dell'elenco deve essere un puntatore a una variabile di un tipo che corrisponde a un identificatore del tipo in `format`.  Tramite il parametro `format` viene controllata l'interpretazione dei campi di input e i relativi modulo e funzione sono uguali a quelli dell'argomento `format` per `scanf_s`; per una descrizione del parametro `format`, vedere [Campi per la specifica di formato: funzioni scanf e wscanf](../../c-runtime-library/format-specification-fields-scanf-and-wscanf-functions.md).  `vfwscanf_s` è una versione a caratteri estesi di `vfscanf_s`; l'argomento formato su `vfwscanf_s` è una stringa di caratteri estesi.  Queste funzioni si comportano in modo identico se il flusso viene aperto in modalità ANSI.  `vfscanf_s` attualmente non supporta l'input da un flusso di UNICODE.  
  
 La differenza principale tra più funzioni protette \(che abbiano il suffisso `_s`\) e le altre versioni è che le funzioni più protette richiedono la dimensione dei caratteri di ogni `c`, `C`, `s`, `S`e del campo di tipo `[` da essere passato come un argomento immediatamente dopo la variabile.  Per ulteriori informazioni, vedere [scanf\_s, \_scanf\_s\_l, wscanf\_s, \_wscanf\_s\_l](../../c-runtime-library/reference/scanf-s-scanf-s-l-wscanf-s-wscanf-s-l.md) e [Specifica della larghezza per scanf](../../c-runtime-library/scanf-width-specification.md).  
  
> [!NOTE]
>  Il parametro di dimensione è di tipo `unsigned`, non `size_t`.  
  
### Mapping di routine su testo generico  
  
|Routine TCHAR.H|\_UNICODE e \_MBCS non definiti|\_MBCS definito|\_UNICODE definito|  
|---------------------|-------------------------------------|---------------------|------------------------|  
|`_vftscanf_s`|`vfscanf_s`|`vfscanf_s`|`vfwscanf_s`|  
  
## Requisiti  
  
|Funzione|Intestazione obbligatoria|  
|--------------|-------------------------------|  
|`vfscanf_s`|\<stdio.h\>|  
|`vfwscanf_s`|\<stdio.h\> o \<wchar.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## Esempio  
  
```  
// crt_vfscanf_s.c  
// compile with: /W3  
// This program writes formatted  
// data to a file. It then uses vfscanf_s to  
// read the various data back from the file.  
  
#include <stdio.h>  
#include <stdarg.h>  
#include <stdlib.h>  
  
FILE *stream;  
  
int call_vfscanf_s(FILE * istream, char * format, ...)  
{  
    int result;  
    va_list arglist;  
    va_start(arglist, format);  
    result = vfscanf_s(istream, format, arglist);  
    va_end(arglist);  
    return result;  
}  
  
int main(void)  
{  
    long l;  
    float fp;  
    char s[81];  
    char c;  
  
    if (fopen_s(&stream, "vfscanf_s.out", "w+") != 0)  
    {  
        printf("The file vfscanf_s.out was not opened\n");  
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
        call_vfscanf_s(stream, "%s %ld %f%c", s, _countof(s), &l, &fp, &c, 1);  
  
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
 [\_cscanf\_s, \_cscanf\_s\_l, \_cwscanf\_s, \_cwscanf\_s\_l](../../c-runtime-library/reference/cscanf-s-cscanf-s-l-cwscanf-s-cwscanf-s-l.md)   
 [fprintf\_s, \_fprintf\_s\_l, fwprintf\_s, \_fwprintf\_s\_l](../../c-runtime-library/reference/fprintf-s-fprintf-s-l-fwprintf-s-fwprintf-s-l.md)   
 [scanf\_s, \_scanf\_s\_l, wscanf\_s, \_wscanf\_s\_l](../../c-runtime-library/reference/scanf-s-scanf-s-l-wscanf-s-wscanf-s-l.md)   
 [sscanf\_s, \_sscanf\_s\_l, swscanf\_s, \_swscanf\_s\_l](../../c-runtime-library/reference/sscanf-s-sscanf-s-l-swscanf-s-swscanf-s-l.md)   
 [fscanf, \_fscanf\_l, fwscanf, \_fwscanf\_l](../../c-runtime-library/reference/fscanf-fscanf-l-fwscanf-fwscanf-l.md)   
 [vfscanf, vfwscanf](../../c-runtime-library/reference/vfscanf-vfwscanf.md)