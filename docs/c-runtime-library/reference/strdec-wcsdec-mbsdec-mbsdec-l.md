---
title: "_strdec, _wcsdec, _mbsdec, _mbsdec_l | Microsoft Docs"
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
  - "_wcsdec"
  - "_strdec"
  - "_mbsdec"
  - "_mbsdec_l"
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
  - "_strdec"
  - "mbsdec_l"
  - "strdec"
  - "_mbsdec"
  - "_mbsdec_l"
  - "mbsdec"
  - "wcsdec"
  - "_wcsdec"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_mbsdec (funzione)"
  - "_mbsdec_l (funzione)"
  - "_strdec (funzione)"
  - "_tcsdec (funzione)"
  - "_wcsdec (funzione)"
  - "mbsdec (funzione)"
  - "mbsdec_l (funzione)"
  - "strdec (funzione)"
  - "tcsdec (funzione)"
  - "wcsdec (funzione)"
ms.assetid: ae37c223-800f-48a9-ae8e-38c8d20af2dd
caps.latest.revision: 24
caps.handback.revision: 24
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _strdec, _wcsdec, _mbsdec, _mbsdec_l
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Sposta il puntatore della stringa indietro di un carattere.  
  
> [!IMPORTANT]
>  `mbsdec` e `mbsdec_l` non possono essere utilizzate nelle applicazioni eseguite in [!INCLUDE[wrt](../../atl/reference/includes/wrt_md.md)].  Per ulteriori informazioni, vedere [Funzioni CRT non supportate con \/ZW](http://msdn.microsoft.com/library/windows/apps/jj606124.aspx).  
  
## Sintassi  
  
```  
unsigned char *_strdec(  
   const unsigned char *start,  
   const unsigned char *current   
);  
unsigned wchar_t *_wcsdec(  
   const unsigned wchar_t *start,  
   const unsigned wchar_t *current   
);  
unsigned char *_mbsdec(  
   const unsigned char *start,  
   const unsigned char *current   
);  
unsigned char *_mbsdec_l(  
   const unsigned char *start,  
   const unsigned char *current,  
   _locale_t locale  
);  
```  
  
#### Parametri  
 `start`  
 Puntatore a qualsiasi carattere \(o per `_mbsdec` e \_`mbsdec_l`, il primo byte di un carattere multibyte\) nella stringa di origine; `start` deve precedere `current` nella stringa di origine.  
  
 `current`  
 Puntatore a qualsiasi carattere \(o per `_mbsdec` e \_`mbsdec_l`, il primo byte di un carattere multibyte\) nella stringa di origine; `current` deve seguire `start` nella stringa di origine.  
  
 `locale`  
 Impostazioni locali da utilizzare.  
  
## Valore restituito  
 `_mbsdec`, \_`mbsdec_l`, `_strdec` e `_wcsdec` restituiscono un puntatore al carattere che precede immediatamente `current`; `_mbsdec` restituisce `NULL` se il valore `start` è maggiore o uguale a quello `current`.  `_tcsdec` mappa una di queste funzioni e il valore restituito dipende dal mapping.  
  
## Note  
 Le funzioni `_mbsdec_l` e `_mbsdec` restituiscono un puntatore al primo byte di caratteri multibyte che precede immediatamente `current` nella stringa contenente `start`.  
  
 Il valore di output è interessato dall'impostazione dell'impostazione di categoria `LC_CTYPE` delle impostazioni locali; consultare [setlocale, \_wsetlocale](../../c-runtime-library/reference/setlocale-wsetlocale.md).  `_mbsdec` riconosce le sequenze di caratteri multibyte a seconda delle impostazioni locali che sono attualmente utilizzate, mentre `_mbsdec_l` è identico con la differenza che utilizza il parametro passato.  Per ulteriori informazioni, vedere [Impostazioni locali](../../c-runtime-library/locale.md).  
  
 Se `start` o `current` è `NULL`, viene richiamato il gestore di parametro non valido, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md).  Se l'esecuzione può continuare, questa funzione restituisce `EINVAL` e imposta `errno` su `EINVAL`.  
  
> [!IMPORTANT]
>  Queste funzioni potrebbero essere vulnerabili a rischi di sovraccarico del buffer.  I sovraccarichi del buffer possono essere utilizzati per gli attacchi di sistema perché possono causare un'elevazione dei privilegi non autorizzata.  Per ulteriori informazioni, vedere [Evitare sovraccarichi del buffer](http://msdn.microsoft.com/library/windows/desktop/ms717795).  
  
### Mapping di routine su testo generico  
  
|Routine Tchar.h|\_UNICODE e \_MBCS non definiti|\_MBCS definito|\_UNICODE definito|  
|---------------------|-------------------------------------|---------------------|------------------------|  
|`_tcsdec`|`_strdec`|`_mbsdec`|`_wcsdec`|  
  
 `_strdec` e `_wcsdec` sono versioni a caratteri di tipo "wide" e a caratteri a singolo byte di `_mbsdec` e `_mbsdec_l`.  `_strdec` e `_wcsdec` vengono forniti solo per il mapping e in caso contrario non devono essere utilizzati.  
  
 Per ulteriori informazioni, vedere [Utilizzo di mapping testo generico](../../c-runtime-library/using-generic-text-mappings.md) e [Mapping testo generico](../../c-runtime-library/generic-text-mappings.md).  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|Intestazione facoltativa|  
|-------------|-------------------------------|------------------------------|  
|`_mbsdec`|\<mbstring.h\>|\<mbctype.h\>|  
|`_mbsdec_l`|\<mbstring.h\>|\<mbctype.h\>|  
|`_strdec`|\<tchar.h\>||  
|`_wcsdec`|\<tchar.h\>||  
  
 Per ulteriori informazioni di compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## Esempio  
 Nell'esempio riportato di seguito viene illustrato un utilizzo di `_tcsdec`.  
  
```  
#include <iostream>  
#include <tchar.h>  
using namespace std;  
  
int main()  
{  
   const TCHAR *str = _T("12345");  
   cout << "str: " << str << endl;  
  
   const TCHAR *str2;  
   str2 = str + 2;  
   cout << "str2: " << str2 << endl;  
  
   TCHAR *answer;  
   answer = _tcsdec( str, str2 );  
   cout << "answer: " << answer << endl;  
  
   return (0);   
}  
  
```  
  
 Nell'esempio riportato di seguito viene illustrato un utilizzo di `_mbsdec`.  
  
```  
#include <iostream>  
#include <mbstring.h>  
using namespace std;  
  
int main()   
{   
   char *str = "12345";  
   cout << "str: " << str << endl;  
  
   char *str2;  
   str2 = str + 2;   
   cout << "str2: " << str2 << endl;  
  
   unsigned char *answer;  
   answer = _mbsdec( reinterpret_cast<unsigned char *>( str ), reinterpret_cast<unsigned char *>( str2 ));  
  
   cout << "answer: " << answer << endl;  
  
   return (0);   
}  
  
```  
  
## Equivalente .NET Framework  
 Non applicabile. Per chiamare la funzione standard C, utilizzare `PInvoke`. Per ulteriori informazioni, vedere [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).  
  
## Vedere anche  
 [Modifica di stringhe](../../c-runtime-library/string-manipulation-crt.md)   
 [\_strinc, \_wcsinc, \_mbsinc, \_mbsinc\_l](../../c-runtime-library/reference/strinc-wcsinc-mbsinc-mbsinc-l.md)   
 [\_strnextc, \_wcsnextc, \_mbsnextc, \_mbsnextc\_l](../../c-runtime-library/reference/strnextc-wcsnextc-mbsnextc-mbsnextc-l.md)   
 [\_strninc, \_wcsninc, \_mbsninc, \_mbsninc\_l](../../c-runtime-library/reference/strninc-wcsninc-mbsninc-mbsninc-l.md)