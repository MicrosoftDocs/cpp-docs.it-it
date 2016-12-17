---
title: "_kbhit | Microsoft Docs"
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
  - "_kbhit"
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
  - "api-ms-win-crt-stdio-l1-1-0.dll"
apitype: "DLLExport"
f1_keywords: 
  - "_kbhit"
  - "kbhit"
  - "conio/_kbhit"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_kbhit (funzione)"
  - "console"
  - "console, controllo"
  - "kbhit (funzione)"
  - "input da tastiera"
  - "tastiere, controllo input"
  - "tastiere, input da tastiera"
  - "input utente, controllo della tastiera"
ms.assetid: e82a1cc9-bbec-4150-b678-a7e433220fe4
caps.latest.revision: 14
caps.handback.revision: 14
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _kbhit
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Controlla la console per l'input da tastiera.  
  
> [!IMPORTANT]
>  Questa API non può essere utilizzata nelle applicazioni che vengono eseguite in Windows Runtime.  Per ulteriori informazioni, vedere [Funzioni CRT non supportate con \/ZW](http://msdn.microsoft.com/library/windows/apps/jj606124.aspx).  
  
## Sintassi  
  
```  
  
int _kbhit( void );  
```  
  
## Valore restituito  
 `_kbhit` restituisce un valore diverso da zero se un tasto viene premuto.  In caso contrario restituirà 0.  
  
## Note  
 La funzione `_kbhit` controlla la console per una sequenza di tasti recente.  Se la funzione restituisce un valore diverso da zero, una sequenza di tasti è in attesa nel buffer.  Il programma può quindi chiamare `_getch` o `_getche` per ottenere la sequenza di tasti.  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`_kbhit`|\<conio.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## Librerie  
 Tutte le versioni delle [Librerie di runtime C](../../c-runtime-library/crt-library-features.md).  
  
## Esempio  
  
```  
// crt_kbhit.c  
// compile with: /c  
/* This program loops until the user  
 * presses a key. If _kbhit returns nonzero, a  
 * keystroke is waiting in the buffer. The program  
 * can call _getch or _getche to get the keystroke.  
 */  
  
#include <conio.h>  
#include <stdio.h>  
  
int main( void )  
{  
   /* Display message until key is pressed. */  
   while( !_kbhit() )  
      _cputs( "Hit me!! " );  
  
   /* Use _getch to throw key away. */  
   printf( "\nKey struck was '%c'\n", _getch() );  
}  
```  
  
## Esempio di output  
  
```  
Hit me!! Hit me!! Hit me!! Hit me!! Hit me!! Hit me!! Hit me!!  
Key struck was 'q'   
```  
  
## Vedere anche  
 [I\/O console e porta](../../c-runtime-library/console-and-port-i-o.md)