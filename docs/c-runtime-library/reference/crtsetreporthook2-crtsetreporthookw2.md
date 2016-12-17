---
title: "_CrtSetReportHook2, _CrtSetReportHookW2 | Microsoft Docs"
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
  - "_CrtSetReportHook2"
  - "_CrtSetReportHookW2"
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
  - "CrtSetReportHookW2"
  - "CrtSetReportHook2"
  - "_CrtSetReportHookW2"
  - "_CrtSetReportHook2"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "CrtSetReportHook2 (funzione)"
  - "_CrtSetReportHook2 (funzione)"
  - "_CrtSetReportHookW2 (funzione)"
  - "CrtSetReportHookW2 (funzione)"
ms.assetid: 12e5f68d-c8a7-4b1a-9a75-72ba4a8592d0
caps.latest.revision: 14
caps.handback.revision: 14
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _CrtSetReportHook2, _CrtSetReportHookW2
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Installa o disinstalla una funzione di segnalazione definita dal client agganciandola al processo di creazione di report di debug della fase di runtime del linguaggio C \(solo versione di debug\).  
  
## Sintassi  
  
```  
  
      int _CrtSetReportHook2(  
   int mode,  
   _CRT_REPORT_HOOK pfnNewHook  
);  
int _CrtSetReportHookW2(  
   int mode,  
   _CRT_REPORT_HOOKW pfnNewHook  
);  
```  
  
#### Parametri  
 `mode`  
 Azione da eseguire: `_CRT_RPTHOOK_INSTALL` o `_CRT_RPTHOOK_REMOVE`.  
  
 `pfnNewHook`  
 Vedere la funzione hook per installare o rimuovere la versione di caratteri narrow della funzione.  
  
 `pfnNewHook`  
 Vedere la funzione hook per installare o rimuovere la versione di caratteri estesi della funzione.  
  
## Valore restituito  
 \-1 se un errore è stato rilevato, con impostato `EINVAL` o `ENOMEM`; in caso contrario restituisce il conteggio dei riferimenti `pfnNewHook` dopo la chiamata.  
  
## Note  
 `_CrtSetReportHook2` e `_CrtSetReportHookW2` consentono di associare o sganciare una funzione, mentre [\_CrtSetReportHook](../../c-runtime-library/reference/crtsetreporthook.md) consente di associare solo una funzione.  
  
 `_CrtSetReportHook2` o `_CrtSetReportHookW2` deve essere utilizzato al posto di `_CrtSetReportHook` quando la chiamata di funzione hook viene eseguita in una DLL e quando in più DLL possono essere caricati e impostate le relative funzioni hook.  In una situazione, le DLL possono essere scaricate in un ordine diverso e la funzione hook può essere lasciata a puntare a una DLL scaricata.  L'output di debug arresta in modo anomalo il processo se le funzioni hook vengono soltanto aggiunte con `_CrtSetReportHook`.  
  
 Tutte le funzioni hook aggiunte con `_CrtSetReportHook` vengono chiamate se non sono presenti funzioni hook aggiunte con `_CrtSetReportHook2` o `_CrtSetReportHookW2` o se tutte le funzioni hook aggiunte con `_CrtSetReportHook2` e `_CrtSetReportHookW2` restituiscono `FALSE`.  
  
 La versione a caratteri estesi di questa funzione è disponibile.  Le funzioni hook di report accettano una stringa il cui tipo \(larghezza o caratteri narrow\) deve corrispondere alla versione di questa funzione utilizzata.  Utilizzare il seguente prototipo di funzione per l'hook del rapporto utilizzato con la versione a caratteri estesi di questa funzione:  
  
```  
int YourReportHook( int reportType, wchar_t *message, int *returnValue );  
```  
  
 Utilizzare il seguente prototipo per hook del rapporto con caratteri narrow:  
  
```  
int YourReportHook( int reportType, char *message, int *returnValue );  
```  
  
 Queste funzioni convalidano i parametri.  Se `mode` o `pfnNewNook` non sono validi, queste funzioni invocano il gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md).  Se l'esecuzione può continuare, queste funzioni impostano `errno` a `EINVAL` e restituiscono \-1.  
  
> [!NOTE]
>  Se l'applicazione viene compilata con `/clr` e la funzione di segnalazione viene chiamata dopo che l'applicazione ha terminato l'esecuzione del main, CLR genererà un'eccezione se la funzione di segnalazione richiama una qualsiasi funzione CRT.  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|Intestazione facoltativa|  
|-------------|-------------------------------|------------------------------|  
|`_CrtSetReportHook2`|\<crtdbg.h\>|\<errno.h\>|  
|`_CrtSetReportHookW2`|\<crtdbg.h\>|\<errno.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## Librerie  
 Solo versioni di debug di [Librerie di runtime C](../../c-runtime-library/crt-library-features.md).  
  
## Esempio  
  
```  
// crt_setreporthook2.c  
#include <windows.h>  
#include <stdio.h>  
#include <crtdbg.h>  
#include <assert.h>  
  
int __cdecl TestHook1(int nReportType, char* szMsg, int* pnRet)  
{  
   int nRet = FALSE;  
  
   printf("CRT report hook 1.\n");  
   printf("CRT report type is \"");  
   switch (nReportType)  
   {  
      case _CRT_ASSERT:  
      {  
         printf("_CRT_ASSERT");  
         // nRet = TRUE;   // Always stop for this type of report  
         break;  
      }  
  
      case _CRT_WARN:  
      {  
         printf("_CRT_WARN");  
         break;  
      }  
  
      case _CRT_ERROR:  
      {  
         printf("_CRT_ERROR");  
         break;  
      }  
  
      default:  
      {  
         printf("???Unknown???");  
         break;  
      }  
   }  
  
   printf("\".\nCRT report message is:\n\t");  
   printf(szMsg);  
  
   if   (pnRet)  
      *pnRet = 0;  
  
   return   nRet;  
}  
  
int __cdecl   TestHook2(int nReportType, char* szMsg, int* pnRet)  
{  
   int   nRet = FALSE;  
  
   printf("CRT report hook 2.\n");  
   printf("CRT report type is \"");  
   switch   (nReportType)  
   {  
      case _CRT_WARN:  
      {  
         printf("_CRT_WARN");  
         break;  
      }  
  
      case _CRT_ERROR:  
      {  
         printf("_CRT_ERROR");  
         break;  
      }  
  
      case _CRT_ASSERT:  
      {  
         printf("_CRT_ASSERT");  
         nRet = TRUE;   // Always stop for this type of report  
         break;  
      }  
  
      default:  
      {  
         printf("???Unknown???");  
         break;  
      }  
   }  
  
   printf("\".\nCRT report message is: \t");  
   printf(szMsg);  
  
   if   (pnRet)  
      *pnRet = 0;  
   // printf("CRT report code is %d.\n", *pnRet);  
   return   nRet;  
}  
  
int   main(int argc, char* argv[])  
{  
   int   nRet = 0;  
  
   nRet = _CrtSetReportHook2(_CRT_RPTHOOK_INSTALL, TestHook1);  
   printf("_CrtSetReportHook2(_CRT_RPTHOOK_INSTALL, TestHook1)"  
          " returned %d\n", nRet);  
   nRet = _CrtSetReportHook2(_CRT_RPTHOOK_INSTALL, TestHook2);  
   printf("_CrtSetReportHook2(_CRT_RPTHOOK_INSTALL, TestHook2)"  
          " returned %d\n", nRet);  
   nRet = _CrtSetReportHook2(_CRT_RPTHOOK_INSTALL, TestHook2);  
   printf("_CrtSetReportHook2(_CRT_RPTHOOK_INSTALL, TestHook2)"  
          " returned %d\n", nRet);  
   nRet = _CrtSetReportHook2(_CRT_RPTHOOK_REMOVE, TestHook1);  
   printf("_CrtSetReportHook2(_CRT_RPTHOOK_REMOVE, TestHook1)"  
          " returned %d\n", nRet);  
   nRet = _CrtSetReportHook2(_CRT_RPTHOOK_INSTALL, TestHook1);  
   printf("_CrtSetReportHook2(_CRT_RPTHOOK_INSTALL, TestHook1)"  
          " returned %d\n", nRet);  
  
   _ASSERT(0);  
  
   nRet = _CrtSetReportHook2(_CRT_RPTHOOK_REMOVE, TestHook2);  
   printf("_CrtSetReportHook2(_CRT_RPTHOOK_REMOVE, TestHook2)"  
          " returned %d\n", nRet);  
   nRet = _CrtSetReportHook2(_CRT_RPTHOOK_REMOVE, TestHook2);  
   printf("_CrtSetReportHook2(_CRT_RPTHOOK_REMOVE, TestHook2)"  
          " returned %d\n", nRet);  
   nRet = _CrtSetReportHook2(_CRT_RPTHOOK_REMOVE, TestHook2);  
   printf("_CrtSetReportHook2(_CRT_RPTHOOK_REMOVE, TestHook2)"  
          " returned %d\n", nRet);  
   nRet = _CrtSetReportHook2(_CRT_RPTHOOK_REMOVE, TestHook1);  
   printf("_CrtSetReportHook2(_CRT_RPTHOOK_REMOVE, TestHook1)"  
          " returned %d\n", nRet);  
  
   return   nRet;  
}  
```  
  
## Output  
  
```  
_CrtSetReportHook2(_CRT_RPTHOOK_INSTALL, TestHook1) returned 0  
_CrtSetReportHook2(_CRT_RPTHOOK_INSTALL, TestHook2) returned 0  
_CrtSetReportHook2(_CRT_RPTHOOK_INSTALL, TestHook2) returned 0  
_CrtSetReportHook2(_CRT_RPTHOOK_REMOVE, TestHook1) returned 0  
_CrtSetReportHook2(_CRT_RPTHOOK_INSTALL, TestHook1) returned 0  
_CrtSetReportHook2(_CRT_RPTHOOK_REMOVE, TestHook2) returned 0  
_CrtSetReportHook2(_CRT_RPTHOOK_REMOVE, TestHook2) returned 0  
_CrtSetReportHook2(_CRT_RPTHOOK_REMOVE, TestHook2) returned 0  
_CrtSetReportHook2(_CRT_RPTHOOK_REMOVE, TestHook1) returned 0  
```  
  
## Vedere anche  
 [Routine di debug](../../c-runtime-library/debug-routines.md)