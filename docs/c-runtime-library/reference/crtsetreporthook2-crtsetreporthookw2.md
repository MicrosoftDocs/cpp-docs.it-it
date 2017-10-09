---
title: _CrtSetReportHook2, _CrtSetReportHookW2 | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
apiname:
- _CrtSetReportHook2
- _CrtSetReportHookW2
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
- CrtSetReportHookW2
- CrtSetReportHook2
- _CrtSetReportHookW2
- _CrtSetReportHook2
dev_langs:
- C++
helpviewer_keywords:
- CrtSetReportHook2 function
- _CrtSetReportHook2 function
- _CrtSetReportHookW2 function
- CrtSetReportHookW2 function
ms.assetid: 12e5f68d-c8a7-4b1a-9a75-72ba4a8592d0
caps.latest.revision: 14
author: corob-msft
ms.author: corob
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 35b46e23aeb5f4dbfd2a0dd44b906389dd5bfc88
ms.openlocfilehash: 4f449a335eebc54fbfaf18ab94c853bb93a87cea
ms.contentlocale: it-it
ms.lasthandoff: 10/09/2017

---
# <a name="crtsetreporthook2-crtsetreporthookw2"></a>_CrtSetReportHook2, _CrtSetReportHookW2
Installa o disinstalla la funzione per la creazione di report definita dal client per eseguire l'hook nel processo di creazione di report sul debug del runtime di C (solo versione di debug).  
  
## <a name="syntax"></a>Sintassi  
  
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
  
#### <a name="parameters"></a>Parametri  
 `mode`  
 Azione da eseguire: `_CRT_RPTHOOK_INSTALL` o `_CRT_RPTHOOK_REMOVE`.  
  
 `pfnNewHook`  
 Hook di report per installare o rimuovere la versione a caratteri narrow di questa funzione.  
  
 `pfnNewHook`  
 Hook di report per installare o rimuovere la versione a caratteri wide di questa funzione.  
  
## <a name="return-value"></a>Valore restituito  
 -1 se si è verificato un errore, con l'impostazione di `EINVAL` o `ENOMEM`; in caso contrario restituisce il conteggio dei riferimenti di `pfnNewHook` dopo la chiamata.  
  
## <a name="remarks"></a>Note  
 `_CrtSetReportHook2` e `_CrtSetReportHookW2` consentono di eseguire o annullare l'esecuzione dell'hook di una funzione, mentre [_CrtSetReportHook](../../c-runtime-library/reference/crtsetreporthook.md) consente solo di eseguire l'hook di una funzione.  
  
 `_CrtSetReportHook2` o `_CrtSetReportHookW2` deve essere usata al posto di `_CrtSetReportHook` quando la chiamata all'hook viene fatta in una DLL e quando più DLL vengono caricate e impostano le loro funzioni di hook. In questo caso, le DLL possono essere scaricate in un ordine diverso rispetto all'ordine di caricamento e la funzione di hook può sempre puntare a una DLL scaricata. Ogni output di debug arresta il processo se le funzioni di hook sono state aggiunte con `_CrtSetReportHook`.  
  
 Ogni funzione di hook aggiunta con `_CrtSetReportHook` viene chiamata se non ci sono funzioni di hook aggiunte con `_CrtSetReportHook2` o `_CrtSetReportHookW2` oppure se tutte le funzioni di hook aggiunte con `_CrtSetReportHook2` e `_CrtSetReportHookW2` restituiscono `FALSE`.  
  
 La versione a caratteri wide di questa funzione è disponibile. Le funzioni di hook per i report accettano una stringa il cui tipo (caratteri wide o narrow) deve corrispondere alla versione di questa funzione usata. Usare il prototipo seguente di funzione di hook per i report usati con la versione a caratteri wide di questa funzione:  
  
```  
int YourReportHook( int reportType, wchar_t *message, int *returnValue );  
```  
  
 Usare il prototipo seguente per gli hook di report a caratteri narrow:  
  
```  
int YourReportHook( int reportType, char *message, int *returnValue );  
```  
  
 Queste funzioni convalidano i relativi parametri. Se `mode` o `pfnNewNook` non è valido, queste funzioni richiamano il gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, queste funzioni impostano `errno` su `EINVAL` e restituiscono -1.  
  
> [!NOTE]
>  Se l'applicazione viene compilata con `/clr` e la funzione per la creazione di report viene chiamata dopo che l'applicazione è uscita, CLR genererà un'eccezione se la funzione per la creazione di report chiama le funzioni CRT.  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|Intestazione facoltativa|  
|-------------|---------------------|---------------------|  
|`_CrtSetReportHook2`|\<crtdbg.h>|\<errno.h>|  
|`_CrtSetReportHookW2`|\<crtdbg.h>|\<errno.h>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## <a name="libraries"></a>Librerie  
 Solo le versioni di debug delle [librerie di runtime di C](../../c-runtime-library/crt-library-features.md).  
  
## <a name="example"></a>Esempio  
  
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
  
## <a name="output"></a>Output  
  
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
  
## <a name="see-also"></a>Vedere anche  
 [Routine di debug](../../c-runtime-library/debug-routines.md)
