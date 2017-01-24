---
title: "_getdrives | Microsoft Docs"
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
  - "_getdrives"
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
  - "api-ms-win-crt-filesystem-l1-1-0.dll"
apitype: "DLLExport"
f1_keywords: 
  - "getdrives"
  - "_getdrives"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_getdrives (funzione)"
  - "unità disco"
  - "getdrives (funzione)"
ms.assetid: 869bb51f-4209-4328-846e-3aadebaceb9c
caps.latest.revision: 18
caps.handback.revision: 16
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _getdrives
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Restituisce una maschera di bit che rappresenta le unità disco attualmente disponibili.  
  
> [!IMPORTANT]
>  Questa API non può essere usata nelle applicazioni eseguite in [!INCLUDE[wrt](../../atl/reference/includes/wrt_md.md)].  Per altre informazioni, vedere l'argomento relativo alle [funzioni CRT non supportate con \/ZW](http://msdn.microsoft.com/library/windows/apps/jj606124.aspx).  
  
## Sintassi  
  
```  
unsigned long _getdrives( void );  
```  
  
## Valore restituito  
 Se la funzione viene completata con successo, il valore restituito è una maschera di bit che rappresenta le unità disco attualmente disponibili.  Il bit alla posizione 0 \(il bit meno significativo\) rappresenta l'unità A, alla posizione 1 l'unità B, alla posizione 2 l'unità C e così via.  Se la funzione ha esito negativo, il valore restituito è zero.  Per ottenere informazioni estese sull'errore, chiamare `GetLastError`.  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`_getdrives`|\<direct.h\>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## Esempio  
  
```  
// crt_getdrives.c  
// This program retrives and lists out  
// all the logical drives that are   
// currently mounted on the machine.  
  
#include <windows.h>  
#include <direct.h>  
#include <stdio.h>  
#include <tchar.h>  
  
TCHAR g_szDrvMsg[] = _T("A:\n");  
  
int main(int argc, char* argv[]) {  
   ULONG uDriveMask = _getdrives();  
  
   if (uDriveMask == 0)  
   {  
      printf( "_getdrives() failed with failure code: %d\n",  
              GetLastError());  
   }  
   else  
   {  
      printf("The following logical drives are being used:\n");  
  
      while (uDriveMask) {  
         if (uDriveMask & 1)  
            printf(g_szDrvMsg);  
  
         ++g_szDrvMsg[0];  
         uDriveMask >>= 1;  
      }  
   }  
}  
```  
  
  **Vengono usate le seguenti unità logiche:**  
**R:**  
**C:**  
**D:**  
**E:**   
## Equivalente in NET Framework  
 Non applicabile.  Per chiamare la funzione C standard, usare `PInvoke`.  Per altre informazioni, vedere [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).  
  
## Vedere anche  
 [Controllo Directory](../../c-runtime-library/directory-control.md)