---
title: "sscanf_s, _sscanf_s_l, swscanf_s, _swscanf_s_l | Microsoft Docs"
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
  - "_sscanf_s_l"
  - "sscanf_s"
  - "_swscanf_s_l"
  - "swscanf_s"
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
  - "_stscanf_s"
  - "sscanf_s"
  - "swscanf_s"
  - "_swscanf_s_l"
  - "_stscanf_s_l"
  - "_sscanf_s_l"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_sscanf_s_l (funzione)"
  - "_stscanf_s (funzione)"
  - "_stscanf_s_l (funzione)"
  - "_swscanf_s_l (funzione)"
  - "lettura di dati, stringhe"
  - "sscanf_s (funzione)"
  - "sscanf_s_l (funzione)"
  - "stringhe [C++], lettura"
  - "stringhe [C++], lettura di dati"
  - "stscanf_s (funzione)"
  - "stscanf_s_l (funzione)"
  - "swscanf_s (funzione)"
  - "swscanf_s_l (funzione)"
ms.assetid: 956e65c8-00a5-43e8-a2f2-0f547ac9e56c
caps.latest.revision: 30
caps.handback.revision: 30
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# sscanf_s, _sscanf_s_l, swscanf_s, _swscanf_s_l
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Legge i dati da una stringa formattati. Queste versioni di [sscanf, \_sscanf\_l, swscanf, \_swscanf\_l](../../c-runtime-library/reference/sscanf-sscanf-l-swscanf-swscanf-l.md) con miglioramenti della sicurezza, come descritto in [Funzionalità di sicurezza in CRT](../../c-runtime-library/security-features-in-the-crt.md).  
  
## Sintassi  
  
```  
int sscanf_s(  
   const char *buffer,  
   const char *format [,  
   argument ] ...  
);  
int _sscanf_s_l(  
   const char *buffer,  
   const char *format,  
   locale_t locale [,  
   argument ] ...  
);  
int swscanf_s(  
   const wchar_t *buffer,  
   const wchar_t *format [,  
   argument ] ...  
);  
int _swscanf_s_l(  
   const wchar_t *buffer,  
   const wchar_t *format,  
   locale_t locale [,  
   argument ] ...  
);  
```  
  
#### Parametri  
 `buffer`  
 Dati archiviati  
  
 `format`  
 Stringa di controllo del formato. Per altre informazioni, vedere [Campi per la specifica di formato: funzioni scanf e wscanf](../../c-runtime-library/format-specification-fields-scanf-and-wscanf-functions.md).  
  
 `argument`  
 Argomenti facoltativi  
  
 `locale`  
 Impostazioni locali da utilizzare  
  
## Valore restituito  
 Ognuna di queste funzioni restituisce il numero di campi che vengono convertiti ed assegnati; correttamente il valore restituito non include i campi che sono stati letti ma non assegnati. Un valore restituito pari a 0 indica che nessun campo è stato assegnato. Il valore restituito è `EOF` per un errore o se viene raggiunta la fine della stringa prima della conversione prima.  
  
 Se `buffer` o `format` è un `NULL` puntatore, il gestore di parametro non valido viene richiamato, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, queste funzioni restituiscono \-1 e impostano `errno` su `EINVAL`  
  
 Per informazioni su questi e altri codici di errore, vedere [errno, \_doserrno, \_sys\_errlist, and \_sys\_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).  
  
## Note  
 Il `sscanf_s` funzione legge i dati da `buffer` nella posizione che viene fornita da ciascun `argument`. Gli argomenti dopo la stringa di formato specificano i puntatori alle variabili che hanno un tipo che corrisponde a un identificatore di tipo in `format`. A differenza della versione meno sicura `sscanf`, un parametro di dimensione del buffer è obbligatorio quando si utilizzano i caratteri di campo di tipo `c`, `C`, `s`, `S`, o di stringa di set di controllo sono racchiusi tra parentesi `[]`. Le dimensioni del buffer in caratteri devono essere specificate come un parametro aggiuntivo immediatamente dopo ogni parametro di buffer che lo richiede. Ad esempio, se si legge in una stringa, la dimensione del buffer per tale stringa viene passata nel modo seguente:  
  
 `wchar_t ws[10];`  
  
 `swscanf_s(in_str, L"%9s", ws, (unsigned)_countof(ws)); // buffer size is 10, width specification is 9`  
  
 La dimensione del buffer include il carattere di terminazione null. Un campo di specifica della larghezza può essere utilizzato per assicurarsi che il token che viene letto possa essere inserito nel buffer. Se non viene utilizzato alcun campo di specifica di larghezza e il token letto è troppo grande per entrare nel buffer, non vengono scritti dati nel buffer.  
  
 Nel caso dei caratteri, un singolo carattere può essere letto come segue:  
  
 `wchar_t wc;`  
  
 `swscanf_s(in_str, L"%c", &wc, 1);`  
  
 In questo esempio legge un singolo carattere dalla stringa di input e quindi lo archivia in un buffer di caratteri wide. Durante la lettura di più caratteri per stringhe con terminazione non null, vengono utilizzati interi senza segno come specificare la larghezza e la dimensione del buffer.  
  
 `char c[4];`  
  
 `sscanf_s(input, "%4c", &c, (unsigned)_countof(c)); // not null terminated`  
  
 Per altre informazioni, vedere [scanf\_s, \_scanf\_s\_l, wscanf\_s, \_wscanf\_s\_l](../../c-runtime-library/reference/scanf-s-scanf-s-l-wscanf-s-wscanf-s-l.md) e [Caratteri di campo di tipo per scanf](../../c-runtime-library/scanf-type-field-characters.md).  
  
> [!NOTE]
>  Il parametro di dimensione è di tipo `unsigned` non `size_t`. Durante la compilazione per destinazioni a 64 bit, utilizzare un cast statico per convertire `_countof` o `sizeof` risultati per le dimensioni corrette.  
  
 Il `format` controlli argomento l'interpretazione dell'input campi e ha lo stesso modulo e funziona come il `format` argomento per il `scanf_s` \(funzione\). Se la copia avviene tra stringhe che si sovrappongono, il comportamento non è definito.  
  
 `swscanf_s` è una versione a caratteri wide di `sscanf_s;` argomenti `swscanf_s` sono stringhe a caratteri wide.`sscanf_s` non gestisce i caratteri multibyte in caratteri esadecimali.`swscanf_s` non gestisce esadecimale a larghezza intera Unicode o caratteri "area di compatibilità". In caso contrario, `swscanf_s` e `sscanf_s` si comportano in modo identico.  
  
 Le versioni di queste funzioni con il suffisso `_l` sono identiche, ad eccezione del fatto che utilizzano il parametro delle impostazioni locali passato al posto delle impostazioni locali del thread corrente.  
  
### Mapping di routine di testo generico  
  
|Routine TCHAR.H|\_UNICODE e \_MBCS non definiti|\_MBCS definito|\_UNICODE definito|  
|---------------------|-------------------------------------|---------------------|------------------------|  
|`_stscanf_s`|`sscanf_s`|`sscanf_s`|`swscanf_s`|  
|`_stscanf_s_l`|`_sscanf_s_l`|`_sscanf_s_l`|`_swscanf_s_l`|  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`sscanf_s`, `_sscanf_s_l`|\<stdio.h\>|  
|`swscanf_s`, `_swscanf_s_l`|\<stdio.h\> o \<wchar.h\>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## Esempio  
  
```  
// crt_sscanf_s.c  
// This program uses sscanf_s to read data items  
// from a string named tokenstring, then displays them.  
  
#include <stdio.h>  
#include <stdlib.h>  
  
int main( void )  
{  
   char  tokenstring[] = "15 12 14...";  
   char  s[81];  
   char  c;  
   int   i;  
   float fp;  
  
   // Input various data from tokenstring:  
   // max 80 character string plus NULL terminator  
   sscanf_s( tokenstring, "%s", s, (unsigned)_countof(s) );  
   sscanf_s( tokenstring, "%c", &c, (unsigned)sizeof(char) );  
   sscanf_s( tokenstring, "%d", &i );  
   sscanf_s( tokenstring, "%f", &fp );  
  
   // Output the data read  
   printf_s( "String    = %s\n", s );  
   printf_s( "Character = %c\n", c );  
   printf_s( "Integer:  = %d\n", i );  
   printf_s( "Real:     = %f\n", fp );  
}  
```  
  
```Output  
Stringa = 15 caratteri = 1 Integer: = 15 reali: = 15.000000  
```  
  
## Equivalente .NET Framework  
 Vedere `Parse` metodi, ad esempio [System::Double::Parse](https://msdn.microsoft.com/en-us/library/system.double.parse.aspx).  
  
## Vedere anche  
 [I\/O di flusso](../../c-runtime-library/stream-i-o.md)   
 [fscanf, \_fscanf\_l, fwscanf, \_fwscanf\_l](../../c-runtime-library/reference/fscanf-fscanf-l-fwscanf-fwscanf-l.md)   
 [scanf, \_scanf\_l, wscanf, \_wscanf\_l](../../c-runtime-library/reference/scanf-scanf-l-wscanf-wscanf-l.md)   
 [sprintf, \_sprintf\_l, swprintf, \_swprintf\_l, \_\_swprintf\_l](../../c-runtime-library/reference/sprintf-sprintf-l-swprintf-swprintf-l-swprintf-l.md)   
 [snprintf, \_snprintf, \_snprintf\_l, \_snwprintf, \_snwprintf\_l](../../c-runtime-library/reference/snprintf-snprintf-snprintf-l-snwprintf-snwprintf-l.md)