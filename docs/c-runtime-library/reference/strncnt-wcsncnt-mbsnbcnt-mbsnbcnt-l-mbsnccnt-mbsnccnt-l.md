---
title: "_strncnt, _wcsncnt, _mbsnbcnt, _mbsnbcnt_l, _mbsnccnt, _mbsnccnt_l | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_mbsnbcnt_l"
  - "_mbsnccnt"
  - "_wcsncnt"
  - "_strncnt"
  - "_mbsnccnt_l"
  - "_mbsnbcnt"
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
  - "api-ms-win-crt-multibyte-l1-1-0.dll"
apitype: "DLLExport"
f1_keywords: 
  - "_mbsnbcnt"
  - "wcsncnt"
  - "_tcsnbcnt"
  - "_mbsnccnt"
  - "_ftcsnbcnt"
  - "mbsnbcnt"
  - "strncnt"
  - "mbsnbcnt_l"
  - "mbsnccnt_l"
  - "mbsnccnt"
  - "_strncnt"
  - "_wcsncnt"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_mbsnbcnt (funzione)"
  - "_mbsnbcnt_l (funzione)"
  - "_mbsnccnt (funzione)"
  - "_mbsnccnt_l (funzione)"
  - "_strncnt (funzione)"
  - "_tcsnbcnt (funzione)"
  - "_wcsncnt (funzione)"
  - "mbsnbcnt (funzione)"
  - "mbsnbcnt_l (funzione)"
  - "mbsnccnt (funzione)"
  - "mbsnccnt_l (funzione)"
  - "strncnt (funzione)"
  - "tcsnbcnt (funzione)"
  - "wcsncnt (funzione)"
ms.assetid: 2a022e9e-a307-4acb-a66b-e56e5357f848
caps.latest.revision: 22
caps.handback.revision: 22
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _strncnt, _wcsncnt, _mbsnbcnt, _mbsnbcnt_l, _mbsnccnt, _mbsnccnt_l
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Restituisce il numero di caratteri o di byte in un conteggio specificato.  
  
> [!IMPORTANT]
>  `_mbsnbcnt`, `_mbsnbcnt_l`, `_mbsnccnt`, e `_mbsnccnt_l` non possono essere usati in applicazioni eseguite in Windows Runtime.  Per ulteriori informazioni, vedere [Funzioni CRT non supportate con \/ZW](http://msdn.microsoft.com/library/windows/apps/jj606124.aspx).  
  
## Sintassi  
  
```  
size_t _strncnt(  
   const char *str,  
   size_t count  
);  
size_t _wcsncnt(  
   const wchar_t *str,  
   size_t count  
);  
size_t _mbsnbcnt(  
   const unsigned char *str,  
   size_t count   
);  
size_t _mbsnbcnt_l(  
   const unsigned char *str,  
   size_t count,  
   _locale_t locale  
);  
size_t _mbsnccnt(  
   const unsigned char *str,  
   size_t count  
);  
size_t _mbsnccnt_l(  
   const unsigned char *str,  
   size_t count,  
   _locale_t locale  
);  
  
```  
  
#### Parametri  
 `str`  
 Stringa da esaminare.  
  
 `count`  
 Numero di caratteri o byte da esaminare in `str`.  
  
 `locale`  
 Impostazioni locali da utilizzare.  
  
## Valore restituito  
 `_mbsnbcnt` e `_mbsnbcnt_l` restituiscono il numero di byte trovato nel primo `count` di caratteri multibyte di `str`.  `_mbsnccnt` e `_mbsnccnt_l` restituiscono il numero di caratteri trovati nel primo `count` di byte di `str`.  Se un carattere null viene visualizzato prima che la revisione di `str` sia stata completata, restituiscono il numero di byte o caratteri trovati prima del carattere null.  Se `str` è minore di `count` caratteri o byte, restituiscono il numero di caratteri o byte nella stringa.  Se `count` è minore di zero, restituiscono 0.  Nelle versioni precedenti, queste funzioni avevano un valore di ritorno di tipo `int` anziché `size_t`.  
  
 `_strncnt` restituisce il numero di caratteri nei primi `count` byte della stringa a un byte `str`.  `_wcsncnt` restituisce il numero di caratteri nei primi `count` caratteri wide della stringa con caratteri estesi `str`.  
  
## Note  
 `_mbsnbcnt` e `_mbsnbcnt_l` contano il numero di byte trovato nel primo `count` di caratteri multibyte di `str`.  `_mbsnbcnt` e `_mbsnbcnt_l` sostituiscono `mtob` e devono essere utilizzati al posto di `mtob`.  
  
 `_mbsnccnt` e `_mbsnccnt_l` contano il numero di caratteri trovati nel primo `count` di byte di `str`.  Se `_mbsnccnt` e `_mbsnccnt_l` incontrano un valore NULL nel secondo byte di un carattere a doppio byte, il primo byte viene considerato come NULL e non è incluso nel conteggio di valore restituito.  `_mbsnccnt` e `_mbsnccnt_l` sostituiscono `btom` e devono essere utilizzati al posto di `btom`.  
  
 Se `str` è un puntatore null o `count` è 0, queste funzioni invocano il gestore di parametri non validi come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md), `errno` è impostato su `EINVAL` e la funzione restituisce 0.  
  
 Il valore di output è interessato dall'impostazione dell'impostazione di categoria `LC_CTYPE` delle impostazioni locali; vedere [setlocale](../../c-runtime-library/reference/setlocale-wsetlocale.md) per ulteriori informazioni.  Le versioni di queste funzioni senza il suffisso `_l` utilizzano le impostazioni locali correnti per il comportamento dipendente dalle impostazioni locali; le versioni con il suffisso `_l` sono identiche, ad eccezione del fatto che utilizzano il parametro delle impostazioni locali che viene passato.  Per ulteriori informazioni, vedere [Impostazioni locali](../../c-runtime-library/locale.md).  
  
### Mapping di routine su testo generico  
  
|Routine|\_UNICODE e \_MBCS non definiti|\_MBCS definito|\_UNICODE definito|  
|-------------|-------------------------------------|---------------------|------------------------|  
|`_tcsnbcnt`|`_strncnt`|`_mbsnbcnt`|`_wcsncnt`|  
|`_tcsnccnt`|`_strncnt`|`_mbsnbcnt`|`n/a`|  
|`_wcsncnt`|`n/a`|`n/a`|`_mbsnbcnt`|  
|`_wcsncnt`|`n/a`|`n/a`|`_mbsnccnt`|  
|`n/a`|`n/a`|`_mbsnbcnt_l`|`_mbsnccnt_l`|  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`_mbsnbcnt`|\<mbstring.h\>|  
|`_mbsnbcnt_l`|\<mbstring.h\>|  
|`_mbsnccnt`|\<mbstring.h\>|  
|`_mbsnccnt_l`|\<mbstring.h\>|  
|`_strncnt`|\<tchar.h\>|  
|`_wcsncnt`|\<tchar.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## Esempio  
  
```  
// crt_mbsnbcnt.c  
  
#include  <mbstring.h>  
#include  <stdio.h>  
  
int main( void )  
{  
   unsigned char str[] = "This is a multibyte-character string.";  
   unsigned int char_count, byte_count;  
   char_count = _mbsnccnt( str, 10 );  
   byte_count = _mbsnbcnt( str, 10 );  
   if ( byte_count - char_count )  
      printf( "The first 10 characters contain %d multibyte characters\n", char_count );  
   else  
      printf( "The first 10 characters are single-byte.\n");  
}  
```  
  
## Output  
  
```  
The first 10 characters are single-byte.  
```  
  
## Equivalente .NET Framework  
 Non applicabile. Per chiamare la funzione standard C, utilizzare `PInvoke`. Per ulteriori informazioni, vedere [Esempi di Invocazione della Piattaforma](../Topic/Platform%20Invoke%20Examples.md).  
  
## Vedere anche  
 [Modifica di stringhe](../../c-runtime-library/string-manipulation-crt.md)   
 [Impostazioni locali](../../c-runtime-library/locale.md)   
 [Interpretazione di sequenze di caratteri multibyte](../../c-runtime-library/interpretation-of-multibyte-character-sequences.md)   
 [\_mbsnbcat, \_mbsnbcat\_l](../../c-runtime-library/reference/mbsnbcat-mbsnbcat-l.md)