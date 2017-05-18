---
title: vfscanf, vfwscanf | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
apiname:
- vfwscanf
- vfscanf
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
- vfwscanf
- _vftscanf
- vfscanf
dev_langs:
- C++
ms.assetid: c06450ef-03f1-4d24-a8ac-d2dd98847918
caps.latest.revision: 6
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
ms.translationtype: Machine Translation
ms.sourcegitcommit: e257f037a05c45f5b98e64ea55bd125af443b0be
ms.openlocfilehash: 43fa7fbd1251df25a7b6f87a3c009603febd2eed
ms.contentlocale: it-it
ms.lasthandoff: 03/29/2017

---
# <a name="vfscanf-vfwscanf"></a>vfscanf, vfwscanf
Legge i dati formattati da un flusso. Sono disponibili versioni più sicure di queste funzioni. Vedere [vfscanf_s, vfwscanf_s](../../c-runtime-library/reference/vfscanf-s-vfwscanf-s.md).  
  
## <a name="syntax"></a>Sintassi  
  
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
  
#### <a name="parameters"></a>Parametri  
 `stream`  
 Puntatore alla struttura `FILE` .  
  
 `format`  
 Stringa di controllo del formato.  
  
 `arglist`  
 Elenco di argomenti variabili.  
  
## <a name="return-value"></a>Valore restituito  
 Ognuna di queste funzioni restituisce il numero di campi che vengono convertiti e assegnati correttamente. Il valore restituito non include i campi letti ma non assegnati. Un valore restituito pari a 0 indica che nessun campo è stato assegnato. In caso di errore o se viene raggiunta la fine del flusso di file prima della prima conversione, il valore restituito è `EOF` per `vfscanf` e `vfwscanf`.  
  
 Queste funzioni convalidano i relativi parametri. Se `stream` o `format` è un puntatore Null, viene richiamato il gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, queste funzioni restituiscono `EOF` e impostano `errno` su `EINVAL`.  
  
## <a name="remarks"></a>Note  
 La funzione `vfscanf` legge i dati dalla posizione corrente di `stream` nelle posizioni specificate dall'elenco di argomenti `arglist`. Ogni argomento nell'elenco deve essere un puntatore a una variabile di un tipo corrispondente a un identificatore di tipo in `format`. `format` controlla l'interpretazione dei campi di input e ha lo stesso formato e la stessa funzione dell'argomento `format` per `scanf`. Vedere [scanf](../../c-runtime-library/reference/scanf-scanf-l-wscanf-wscanf-l.md) per una descrizione di `format`.  
  
 `vfwscanf` è una versione a caratteri wide di `vfscanf`. L'argomento del formato per `vfwscanf` è una stringa di caratteri wide. Queste funzioni si comportano in modo identico se il flusso viene aperto in modalità ANSI. `vfscanf` non supporta l'input da un flusso UNICODE.  
  
### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico  
  
|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|  
|---------------------|------------------------------------|--------------------|-----------------------|  
|`_vftscanf`|`vfscanf`|`vfscanf`|`vfwscanf`|  
  
 Per altre informazioni, vedere [Campi di specifica di formato: funzioni scanf e wscanf](../../c-runtime-library/format-specification-fields-scanf-and-wscanf-functions.md).  
  
## <a name="requirements"></a>Requisiti  
  
|Funzione|Intestazione obbligatoria|  
|--------------|---------------------|  
|`vfscanf`|\<stdio.h>|  
|`vfwscanf`|\<stdio.h> o \<wchar.h>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## <a name="example"></a>Esempio  
  
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
  
```Output  
a-string  
65000  
3.141590  
x  
```  
  
## <a name="see-also"></a>Vedere anche  
 [I/O di flusso](../../c-runtime-library/stream-i-o.md)   
 [_cscanf, _cscanf_l, _cwscanf, _cwscanf_l](../../c-runtime-library/reference/cscanf-cscanf-l-cwscanf-cwscanf-l.md)   
 [fprintf, _fprintf_l, fwprintf, _fwprintf_l](../../c-runtime-library/reference/fprintf-fprintf-l-fwprintf-fwprintf-l.md)   
 [scanf, _scanf_l, wscanf, _wscanf_l](../../c-runtime-library/reference/scanf-scanf-l-wscanf-wscanf-l.md)   
 [sscanf, _sscanf_l, swscanf, _swscanf_l](../../c-runtime-library/reference/sscanf-sscanf-l-swscanf-swscanf-l.md)   
 [fscanf_s, _fscanf_s_l, fwscanf_s, _fwscanf_s_l](../../c-runtime-library/reference/fscanf-s-fscanf-s-l-fwscanf-s-fwscanf-s-l.md)   
 [vfscanf_s, vfwscanf_s](../../c-runtime-library/reference/vfscanf-s-vfwscanf-s.md)
