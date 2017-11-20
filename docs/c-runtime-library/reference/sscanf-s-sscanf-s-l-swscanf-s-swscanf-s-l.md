---
title: sscanf_s, _sscanf_s_l, swscanf_s, _swscanf_s_l | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
apiname:
- _sscanf_s_l
- sscanf_s
- _swscanf_s_l
- swscanf_s
apilocation:
- msvcrt.dll
- msvcr80.dll
- msvcr90.dll
- msvcr100.dll
- msvcr100_clr0400.dll
- msvcr110.dll
- msvcr110_clr0400.dll
- msvcr120.dll
- msvcr120_clr0400.dll
- ucrtbase.dll
apitype: DLLExport
f1_keywords:
- _stscanf_s
- sscanf_s
- swscanf_s
- _swscanf_s_l
- _stscanf_s_l
- _sscanf_s_l
dev_langs: C++
helpviewer_keywords:
- stscanf_s_l function
- stscanf_s function
- swscanf_s function
- swscanf_s_l function
- sscanf_s_l function
- _stscanf_s_l function
- strings [C++], reading data from
- sscanf_s function
- _swscanf_s_l function
- _stscanf_s function
- reading data, strings
- strings [C++], reading
- _sscanf_s_l function
ms.assetid: 956e65c8-00a5-43e8-a2f2-0f547ac9e56c
caps.latest.revision: "30"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: 71c8f24aee70b91c45448654a8499d0f49a4a085
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="sscanfs-sscanfsl-swscanfs-swscanfsl"></a>sscanf_s, _sscanf_s_l, swscanf_s, _swscanf_s_l
Legge i dati formattati da una stringa. Queste versioni di [sscanf, _sscanf_l, swscanf, _swscanf_l](../../c-runtime-library/reference/sscanf-sscanf-l-swscanf-swscanf-l.md) includono miglioramenti per la sicurezza, come descritto in [Funzionalità di sicurezza in CRT](../../c-runtime-library/security-features-in-the-crt.md).  
  
## <a name="syntax"></a>Sintassi  
  
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
  
#### <a name="parameters"></a>Parametri  
 `buffer`  
 Dati archiviati  
  
 `format`  
 Stringa di controllo del formato. Per altre informazioni, vedere [Campi di specifica di formato: funzioni scanf e wscanf](../../c-runtime-library/format-specification-fields-scanf-and-wscanf-functions.md).  
  
 `argument`  
 Argomenti facoltativi  
  
 `locale`  
 Impostazioni locali da usare  
  
## <a name="return-value"></a>Valore restituito  
 Ognuna di queste funzioni restituisce il numero di campi che vengono convertiti e assegnati correttamente. Il valore restituito non include i campi che sono stati letti ma non assegnati. Un valore restituito pari a 0 indica che nessun campo è stato assegnato. Il valore restituito è `EOF` in caso di errore o se viene raggiunta la fine della stringa prima della prima conversione.  
  
 Se `buffer` o `format` è un puntatore `NULL`, viene richiamato il gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, queste funzioni restituiscono -1 e impostano `errno` su `EINVAL`  
  
 Per informazioni su questi e altri codici di errore, vedere [errno, _doserrno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).  
  
## <a name="remarks"></a>Note  
 La funzione `sscanf_s` legge i dati da `buffer` nella posizione specificata da ogni `argument`. Gli argomenti dopo la stringa di formato specificano i puntatori alle variabili che hanno un tipo corrispondente all'identificatore di tipo in `format`. Diversamente dalla versione meno sicura `sscanf`, è necessario un parametro per le dimensioni del buffer quando si usano i caratteri di campo di tipo `c`, `C`, `s`, `S` o set di controllo stringa racchiusi tra `[]`. Le dimensioni del buffer in caratteri vengono passate come parametro aggiuntivo subito dopo ogni parametro del buffer che le richiede. Ad esempio, se si sta leggendo una stringa, le dimensioni del buffer per tale stringa vengono passate nel modo seguente:  
  
 `wchar_t ws[10];`  
  
 `swscanf_s(in_str, L"%9s", ws, (unsigned)_countof(ws)); // buffer size is 10, width specification is 9`  
  
 La dimensione del buffer include il carattere di terminazione null. Potrebbe essere usato un campo di specifica della larghezza per assicurarsi che il token letto possa essere inserito nel buffer. Se non viene utilizzato alcun campo di specifica di larghezza e il token letto è troppo grande per entrare nel buffer, non vengono scritti dati nel buffer.  
  
 Nel caso dei caratteri, un singolo carattere può essere letto come segue:  
  
 `wchar_t wc;`  
  
 `swscanf_s(in_str, L"%c", &wc, 1);`  
  
 Questo esempio legge un singolo carattere dalla stringa di input e quindi lo archivia in un buffer di caratteri wide. Quando si leggono più caratteri per stringhe con terminazione non Null, vengono usati interi senza segno per specificare la larghezza e le dimensioni del buffer.  
  
 `char c[4];`  
  
 `sscanf_s(input, "%4c", &c, (unsigned)_countof(c)); // not null terminated`  
  
 Per altre informazioni, vedere [scanf_s, _scanf_s_l, wscanf_s, _wscanf_s_l](../../c-runtime-library/reference/scanf-s-scanf-s-l-wscanf-s-wscanf-s-l.md) e [Caratteri di campo di tipo per scanf](../../c-runtime-library/scanf-type-field-characters.md).  
  
> [!NOTE]
>  Il parametro di dimensione è di tipo `unsigned` non `size_t`. Durante la compilazione per destinazioni a 64 bit, usare un cast statico per convertire i risultati di `_countof` o `sizeof` nelle dimensioni corrette.  
  
 L'argomento `format` controlla l'interpretazione dei campi di input e ha lo stesso formato e la stessa funzione dell'argomento `format` per la funzione `scanf_s`. Se la copia avviene tra stringhe che si sovrappongono, il comportamento non è definito.  
  
 `swscanf_s` è una versione a caratteri wide di `sscanf_s;`. Gli argomenti per `swscanf_s` sono stringhe di caratteri wide. `sscanf_s` non gestisce i caratteri esadecimali multibyte. `swscanf_s` non gestisce caratteri esadecimali a larghezza intera o caratteri nell'area di compatibilità Unicode. In caso contrario, `swscanf_s` e `sscanf_s` si comportano in modo identico.  
  
 Le versioni di queste funzioni con il suffisso `_l` sono identiche, ad eccezione del fatto che utilizzano il parametro delle impostazioni locali passato al posto delle impostazioni locali del thread corrente.  
  
### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico  
  
|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|  
|---------------------|------------------------------------|--------------------|-----------------------|  
|`_stscanf_s`|`sscanf_s`|`sscanf_s`|`swscanf_s`|  
|`_stscanf_s_l`|`_sscanf_s_l`|`_sscanf_s_l`|`_swscanf_s_l`|  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|`sscanf_s`, `_sscanf_s_l`|\<stdio.h>|  
|`swscanf_s`, `_swscanf_s_l`|\<stdio.h> o \<wchar.h>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## <a name="example"></a>Esempio  
  
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
String    = 15  
Character = 1  
Integer:  = 15  
Real:     = 15.000000  
```  
  
## <a name="see-also"></a>Vedere anche  
 [I/O di flusso](../../c-runtime-library/stream-i-o.md)   
 [fscanf, _fscanf_l, fwscanf, _fwscanf_l](../../c-runtime-library/reference/fscanf-fscanf-l-fwscanf-fwscanf-l.md)   
 [scanf, _scanf_l, wscanf, _wscanf_l](../../c-runtime-library/reference/scanf-scanf-l-wscanf-wscanf-l.md)   
 [sprintf, _sprintf_l, swprintf, _swprintf_l, \__swprintf_l](../../c-runtime-library/reference/sprintf-sprintf-l-swprintf-swprintf-l-swprintf-l.md)   
 [snprintf, _snprintf, _snprintf_l, _snwprintf, _snwprintf_l](../../c-runtime-library/reference/snprintf-snprintf-snprintf-l-snwprintf-snwprintf-l.md)