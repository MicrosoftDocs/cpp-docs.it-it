---
title: "_getch, _getwch | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_getch"
  - "_getwch"
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
  - "getwch"
  - "_getch"
  - "_getwch"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_getch (funzione)"
  - "_getwch (funzione)"
  - "caratteri, recupero dalla console"
  - "console, lettura"
  - "getch (funzione)"
  - "getwch (funzione)"
ms.assetid: cc116be7-cff2-4274-970f-5e7b18ccc05c
caps.latest.revision: 26
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 26
---
# _getch, _getwch
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Ottiene un carattere dalla console senza echo.  
  
> [!IMPORTANT]
>  Questa API non può essere utilizzata nelle applicazioni che vengono eseguite in Windows Runtime.  Per ulteriori informazioni, vedere [Funzioni CRT non supportate con \/ZW](http://msdn.microsoft.com/library/windows/apps/jj606124.aspx).  
  
## Sintassi  
  
```  
int _getch( void );  
wint_t _getwch( void );  
```  
  
## Valore restituito  
 Restituisce il carattere letto.  Nessun ritorno di errore.  
  
## Note  
 Le funzioni `_getch` e`_getwch` leggono un singolo carattere dalla console senza visualizzare il carattere.  Nessuna di queste funzioni può essere utilizzata per leggere CTRL\+C.  Durante la lettura di un tasto funzione o un tasto di direzione, ogni funzione deve essere chiamata due volte; la prima chiamata restituisce 0 o 0xE0 e la seconda ritorna il codice chiave corrente.  
  
 Queste funzioni bloccano il thread chiamante e sono pertanto thread\-safe.  Per le versioni non\-locking, vedere [\_getch\_nolock, \_getwch\_nolock](../../c-runtime-library/reference/getch-nolock-getwch-nolock.md).  
  
### Mapping di routine su testo generico  
  
|Routine Tchar.h|\_UNICODE e \_MBCS non definiti|\_MBCS definito|\_UNICODE definito|  
|---------------------|-------------------------------------|---------------------|------------------------|  
|`_gettch`|`_getch`|`_getch`|`_getwch`|  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`_getch`|\<conio.h\>|  
|`_getwch`|\<conio.h\> o \<wchar.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## Esempio  
  
```  
// crt_getch.c  
// compile with: /c  
// This program reads characters from  
// the keyboard until it receives a 'Y' or 'y'.  
  
#include <conio.h>  
#include <ctype.h>  
  
int main( void )  
{  
   int ch;  
  
   _cputs( "Type 'Y' when finished typing keys: " );  
   do  
   {  
      ch = _getch();  
      ch = toupper( ch );  
   } while( ch != 'Y' );  
  
   _putch( ch );  
   _putch( '\r' );    // Carriage return  
   _putch( '\n' );    // Line feed    
}  
```  
  
  **`abcdey`Type 'Y' when finished typing keys: Y**   
## Equivalente in NET Framework  
 Non applicabile.  Per chiamare la funzione standard C, utilizzare `PInvoke`.  Per ulteriori informazioni, vedere [Esempi di Invocazione della Piattaforma](../Topic/Platform%20Invoke%20Examples.md).  
  
## Vedere anche  
 [I\/O console e porta](../../c-runtime-library/console-and-port-i-o.md)   
 [\_getche, \_getwche](../../c-runtime-library/reference/getche-getwche.md)   
 [\_cgets, \_cgetws](../../c-runtime-library/cgets-cgetws.md)   
 [getc, getwc](../../c-runtime-library/reference/getc-getwc.md)   
 [\_ungetch, \_ungetwch, \_ungetch\_nolock, \_ungetwch\_nolock](../../c-runtime-library/reference/ungetch-ungetwch-ungetch-nolock-ungetwch-nolock.md)