---
title: "_cprintf_s, _cprintf_s_l, _cwprintf_s, _cwprintf_s_l | Microsoft Docs"
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
  - "_cwprintf_s_l"
  - "_cprintf_s_l"
  - "_cprintf_s"
  - "_cwprintf_s"
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
  - "_cwprintf_s_l"
  - "_cprintf_s"
  - "cwprintf_s"
  - "_cprintf_s_l"
  - "cwprintf_s_l"
  - "cprintf_s_l"
  - "_tcprintf_s"
  - "cprintf_s"
  - "_cwprintf_s"
  - "tcprintf_s"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_cprintf_s (funzione)"
  - "_cprintf_s_l (funzione)"
  - "_cwprintf_s (funzione)"
  - "_cwprintf_s_l (funzione)"
  - "_tcprintf_s (funzione)"
  - "_tcprintf_s_l (funzione)"
  - "cprintf_s (funzione)"
  - "cprintf_s_l (funzione)"
  - "cwprintf_s (funzione)"
  - "cwprintf_s_l (funzione)"
  - "tcprintf_s (funzione)"
  - "tcprintf_s_l (funzione)"
ms.assetid: c28504fe-0d20-4f06-8f97-ee33225922ad
caps.latest.revision: 26
caps.handback.revision: 26
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _cprintf_s, _cprintf_s_l, _cwprintf_s, _cwprintf_s_l
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Formatta e stampa nella console.  Queste versioni di [\_cprintf, \_cprintf\_l, \_cwprintf, \_cwprintf\_l](../../c-runtime-library/reference/cprintf-cprintf-l-cwprintf-cwprintf-l.md) contengono i miglioramenti della sicurezza come descritto in [Funzionalità di sicurezza in CRT](../../c-runtime-library/security-features-in-the-crt.md).  
  
> [!IMPORTANT]
>  Questa API non può essere utilizzata nelle applicazioni che vengono eseguite in Windows Runtime.  Per ulteriori informazioni, vedere [Funzioni CRT non supportate con \/ZW](http://msdn.microsoft.com/library/windows/apps/jj606124.aspx).  
  
## Sintassi  
  
```  
int _cprintf_s(   
   const char * format [,   
   argument] ...   
);  
int _cprintf_s_l(   
   const char * format,  
   locale_t locale [,   
   argument] ...   
);  
int _cwprintf_s(  
   const wchar * format [,   
   argument] ...  
);  
int _cwprintf_s_l(  
   const wchar * format,  
   locale_t locale [,   
   argument] ...  
);  
```  
  
#### Parametri  
 `format`  
 Stringa di controllo del formato.  
  
 `argument`  
 Parametri facoltativi.  
  
 `locale`  
 Impostazioni locali da utilizzare.  
  
## Valore restituito  
 Il numero di caratteri da stampare.  
  
## Note  
 Queste funzioni formattano e stampano una serie di caratteri e valori direttamente sulla console, utilizzando la funzione `_putch` \(`_putwch` per `_cwprintf_s`\) per i caratteri di output.  Ogni funzione `argument` \(se presente\) viene convertita e restituita in base al formato specificato in `format`.  Il formato con lo stesso form e funzione del parametro `format` per la funzione [printf\_s](../../c-runtime-library/format-specification-syntax-printf-and-wprintf-functions.md).  A differenza `fprintf_s`, `printf_s` e delle funzioni `sprintf_s`, né `_cprintf_s` e né `_cwprintf_s` convertono nell'output combinazioni di caratteri di avanzamento in caratteri di ritorno a capo \(CR\-LE\).  
  
 Una differenza importante è che `_cwprintf_s` visualizza i caratteri Unicode quando si utilizza Windows NT.  A differenza di `_cprintf_s`, `_cwprintf_s` utilizza le impostazioni locali correnti della console  
  
 Le versioni di queste funzioni con il suffisso `_l` sono identiche ad eccezione che utilizzano il parametro delle impostazioni locali passato in ingresso invece di utilizzare le impostazioni locali correnti.  
  
> [!IMPORTANT]
>  Assicurarsi che `format` non sia una stringa definita dall'utente.  
  
 Come per le versioni non sicure \(vedere, [\_cprintf, \_cprintf\_l, \_cwprintf, \_cwprintf\_l](../../c-runtime-library/reference/cprintf-cprintf-l-cwprintf-cwprintf-l.md)\), queste funzioni convalidano i relativi parametri e richiamano il gestore di parametro non valido, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md), se `format` è un puntatore a null.  Queste funzioni differiscono dalle versioni non sicure nel fatto che la stringa stessa viene convalidata.  Se dovessero esserci specificatoti sconosciuti o male formattati, queste funzioni richiamano il gestore di parametro non valido.  In tutti i casi, se l'esecuzione può continuare, la funzione restituisce \-1 e imposta `errno` a `EINVAL`.  
  
### Mapping di routine su testo generico  
  
|Routine Tchar.h|\_UNICODE e \_MBCS non definiti|\_MBCS definito|\_UNICODE definito|  
|---------------------|-------------------------------------|---------------------|------------------------|  
|`_tcprintf_s`|`_cprintf_s`|`_cprintf_s`|`_cwprintf_s`|  
|`_tcprintf_s_l`|`_cprintf_s_l`|`_cprintf_s_l`|`_cwprintf_s_l`|  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`_cprintf_s`,`_cprintf_s_l`|\<conio.h\>|  
|`_cwprintf_s`, `_cwprintf_s_l`|\<conio.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## Librerie  
 Tutte le versioni delle [Librerie di runtime C](../../c-runtime-library/crt-library-features.md).  
  
## Esempio  
  
```  
// crt_cprintf_s.c  
// compile with: /c  
// This program displays some variables to the console.  
  
#include <conio.h>  
  
int main( void )  
{  
   int      i = -16, h = 29;  
   unsigned u = 62511;  
   char     c = 'A';  
   char     s[] = "Test";  
  
   /* Note that console output does not translate \n as  
    * standard output does. Use \r\n instead.  
    */  
   _cprintf_s( "%d  %.4x  %u  %c %s\r\n", i, h, u, c, s );  
}  
```  
  
## Output  
  
```  
-16  001d  62511  A Test  
```  
  
## Vedere anche  
 [I\/O console e porta](../../c-runtime-library/console-and-port-i-o.md)   
 [\_cscanf, \_cscanf\_l, \_cwscanf, \_cwscanf\_l](../../c-runtime-library/reference/cscanf-cscanf-l-cwscanf-cwscanf-l.md)   
 [fprintf\_s, \_fprintf\_s\_l, fwprintf\_s, \_fwprintf\_s\_l](../../c-runtime-library/reference/fprintf-s-fprintf-s-l-fwprintf-s-fwprintf-s-l.md)   
 [printf\_s, \_printf\_s\_l, wprintf\_s, \_wprintf\_s\_l](../../c-runtime-library/reference/printf-s-printf-s-l-wprintf-s-wprintf-s-l.md)   
 [sprintf\_s, \_sprintf\_s\_l, swprintf\_s, \_swprintf\_s\_l](../../c-runtime-library/reference/sprintf-s-sprintf-s-l-swprintf-s-swprintf-s-l.md)   
 [vfprintf\_s, \_vfprintf\_s\_l, vfwprintf\_s, \_vfwprintf\_s\_l](../../c-runtime-library/reference/vfprintf-s-vfprintf-s-l-vfwprintf-s-vfwprintf-s-l.md)   
 [Sintassi per la specifica del formato: funzioni printf wprintf](../../c-runtime-library/format-specification-syntax-printf-and-wprintf-functions.md)