---
title: "_getch_nolock, _getwch_nolock | Microsoft Docs"
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
  - "_getwch_nolock"
  - "_getch_nolock"
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
  - "_getch_nolock"
  - "getwch_nolock"
  - "getch_nolock"
  - "_getwch_nolock"
  - "_gettch_nolock"
  - "gettch_nolock"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_getch_nolock (funzione)"
  - "_gettch_nolock (funzione)"
  - "_getwch_nolock (funzione)"
  - "caratteri, recupero dalla console"
  - "console, lettura"
  - "getch_nolock (funzione)"
  - "gettch_nolock (funzione)"
  - "getwch_nolock (funzione)"
ms.assetid: 9d248546-26ca-482c-b0c6-55812a987e83
caps.latest.revision: 18
caps.handback.revision: 16
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _getch_nolock, _getwch_nolock
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Ottiene un carattere dalla console senza echo e senza bloccare la thread.  
  
> [!IMPORTANT]
>  Questa API non può essere utilizzata nelle applicazioni che vengono eseguite in Windows Runtime.  Per ulteriori informazioni, vedere [Funzioni CRT non supportate con \/ZW](http://msdn.microsoft.com/library/windows/apps/jj606124.aspx).  
  
## Sintassi  
  
```  
int _getch_nolock( void );  
wint_t _getwch_nolock( void );  
```  
  
## Valore restituito  
 Restituisce il carattere letto.  Nessun ritorno di errore.  
  
## Note  
 `_getch_nolock` e `_getwch_nolock` sono identiche a `_getch` edi`_getchw` ad eccezione del fatto che non proteggono dalle interferenze da parte di altre thread.  Potrebbero essere più veloci perché non comportano un sovraccarico che blocca altri thread.  Utilizzare queste funzioni solo in contesti thread\-safe come applicazioni a thread singolo o dove l'ambito chiamante già gestisce l'isolamento del thread.  
  
### Mapping di routine su testo generico  
  
|Routine Tchar.h|\_UNICODE e \_MBCS non definiti|\_MBCS definito|\_UNICODE definito|  
|---------------------|-------------------------------------|---------------------|------------------------|  
|`_gettch_nolock`|`_getch_nolock`|`_getch_nolock`|`_getwch_nolock`|  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`_getch_nolock`|\<conio.h\>|  
|`_getwch_nolock`|\<conio.h\> o \<wchar.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## Esempio  
  
```  
// crt_getch_nolock.c  
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
      ch = _getch_nolock();  
      ch = toupper( ch );  
   } while( ch != 'Y' );  
  
   _putch_nolock( ch );  
   _putch_nolock( '\r' );    // Carriage return  
   _putch_nolock( '\n' );    // Line feed  
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