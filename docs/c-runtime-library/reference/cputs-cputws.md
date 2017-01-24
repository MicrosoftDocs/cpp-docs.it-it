---
title: "_cputs, _cputws | Microsoft Docs"
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
  - "_cputws"
  - "_cputs"
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
  - "api-ms-win-crt-conio-l1-1-0.dll"
apitype: "DLLExport"
f1_keywords: 
  - "cputws"
  - "_cputs"
  - "_cputws"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_cputs (funzione)"
  - "_cputws (funzione)"
  - "console, invio di stringhe"
  - "cputs (funzione)"
  - "cputws (funzione)"
  - "inserimento di stringhe nella console"
  - "stringhe [C++], scrittura"
ms.assetid: ec418484-0f8d-43ec-8d8b-198a556c659e
caps.latest.revision: 16
caps.handback.revision: 16
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _cputs, _cputws
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Inserisce una stringa nella console.  
  
> [!IMPORTANT]
>  Questa API non può essere usata nelle applicazioni eseguite in [!INCLUDE[wrt](../../atl/reference/includes/wrt_md.md)].  Per altre informazioni, vedere l'argomento relativo alle [funzioni CRT non supportate con \/ZW](http://msdn.microsoft.com/library/windows/apps/jj606124.aspx).  
  
## Sintassi  
  
```  
  
        int _cputs(   
const char *str   
);  
int _cputws(  
const wchar_t *str   
);  
```  
  
#### Parametri  
 `str`  
 Stringa di output.  
  
## Valore restituito  
 Se l'esito è positivo, `_cputs` restituisce 0.  In caso contrario, restituisce un valore diverso da zero.  
  
## Note  
 La funzione `_cputs` scrive la stringa con terminazione Null a cui punta `str` direttamente alla console.  Una combinazione di ritorno a capo e avanzamento riga \(CR\-LF\) non verrà aggiunto automaticamente alla stringa.  
  
 Questa funzione convalida il relativo parametro.  Se `str` è **NULL**, viene richiamato il gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md).  Se l'esecuzione può continuare, `errno` viene impostato su `EINVAL` e viene restituito \-1.  
  
### Mapping di routine di testo generico  
  
|Routine Tchar.h|\_UNICODE e \_MBCS non definiti|\_MBCS definito|\_UNICODE definito|  
|---------------------|-------------------------------------|---------------------|------------------------|  
|**\_cputts**|`_cputs`|`_cputs`|`_cputws`|  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|Intestazione facoltativa|  
|-------------|-------------------------------|------------------------------|  
|`_cputs`|\<conio.h\>|\<errno.h\>|  
|`_cputws`|\<conio.h\>|\<errno.h\>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## Raccolte  
 Tutte le versioni delle [librerie di runtime C](../../c-runtime-library/crt-library-features.md).  
  
## Esempio  
  
```  
// crt_cputs.c  
// compile with: /c  
// This program first displays a string to the console.  
  
#include <conio.h>  
#include <errno.h>  
  
void print_to_console(char* buffer)  
{  
   int retval;  
   retval = _cputs( buffer );  
   if (retval)  
   {  
       if (errno == EINVAL)  
       {  
         _cputs( "Invalid buffer in print_to_console.\r\n");  
       }  
       else  
         _cputs( "Unexpected error in print_to_console.\r\n");  
   }  
}  
  
void wprint_to_console(wchar_t* wbuffer)  
{  
   int retval;  
   retval = _cputws( wbuffer );  
   if (retval)  
   {  
       if (errno == EINVAL)  
       {  
         _cputws( L"Invalid buffer in wprint_to_console.\r\n");  
       }  
       else  
         _cputws( L"Unexpected error in wprint_to_console.\r\n");  
   }  
}  
  
int main()  
{  
  
   // String to print at console.   
   // Notice the \r (return) character.   
   char* buffer = "Hello world (courtesy of _cputs)!\r\n";  
   wchar_t *wbuffer = L"Hello world (courtesy of _cputws)!\r\n";  
   print_to_console(buffer);  
   wprint_to_console( wbuffer );  
}  
```  
  
## Output  
  
```  
Hello world (courtesy of _cputs)!  
Hello world (courtesy of _cputws)!  
```  
  
## Vedere anche  
 [I\/O console e porta](../../c-runtime-library/console-and-port-i-o.md)   
 [\_putch, \_putwch](../../c-runtime-library/reference/putch-putwch.md)