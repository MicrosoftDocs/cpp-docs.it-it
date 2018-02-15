---
title: _getche, _getwche | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: reference
apiname:
- _getwche
- _getche
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
- getwche
- _getche
- _getwche
dev_langs:
- C++
helpviewer_keywords:
- characters, getting from console
- _getwche function
- getche function
- console, reading from
- getwche function
- _getche function
ms.assetid: eac978a8-c43a-4130-938f-54f12e2a0fda
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 050fa0024c827caf8a7f27b5462a341bea344bfb
ms.sourcegitcommit: 6002df0ac79bde5d5cab7bbeb9d8e0ef9920da4a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/14/2018
---
# <a name="getche-getwche"></a>_getche, _getwche
Ottiene un carattere dalla console e lo visualizza (echo).  
  
> [!IMPORTANT]
>  Non è possibile usare questa API nelle applicazioni eseguite in Windows Runtime. Per ulteriori informazioni, vedere [funzioni CRT non supportate nelle App Universal Windows Platform](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).  
  
## <a name="syntax"></a>Sintassi  
  
```  
int _getche( void );  
wint_t _getwche( void );  
```  
  
## <a name="return-value"></a>Valore restituito  
 Restituisce il carattere letto. Non vi è restituzione di errori.  
  
## <a name="remarks"></a>Note  
 Le funzioni `_getche` e `_getwche` leggono un singolo carattere dalla console e lo visualizzano nella console (echo). Nessuna di queste funzioni può essere usata per leggere CTRL+C. Durante la lettura di un tasto funzione o un tasto di direzione, ogni funzione deve essere chiamata due volte. La prima chiamata restituisce 0 o 0xE0 e la seconda chiamata restituisce il codice effettivo.  
  
 Queste funzioni bloccano il thread chiamante e pertanto sono thread-safe. Per le versioni che non bloccano il thread, vedere [_getche_nolock, _getwche_nolock](../../c-runtime-library/reference/getche-nolock-getwche-nolock.md).  
  
### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico  
  
|Routine Tchar.h|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|  
|---------------------|--------------------------------------|--------------------|-----------------------|  
|`_getche`|`_getche`|`_getch`|`_getwche`|  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|`_getche`|\<conio.h>|  
|`_getwche`|\<conio.h> o \<wchar.h>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## <a name="example"></a>Esempio  
  
```  
// crt_getche.c  
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
      ch = _getche();  
      ch = toupper( ch );  
   } while( ch != 'Y' );  
  
   _putch( ch );  
   _putch( '\r' );    // Carriage return  
   _putch( '\n' );    // Line feed       
}  
```  
  
```Input  
abcdefy
```
  
```Output  
Type 'Y' when finished typing keys: abcdefyY  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Console e porta I/O](../../c-runtime-library/console-and-port-i-o.md)   
 [_cgets, _cgetws](../../c-runtime-library/cgets-cgetws.md)   
 [getc, getwc](../../c-runtime-library/reference/getc-getwc.md)   
 [_ungetch, _ungetwch, _ungetch_nolock, _ungetwch_nolock](../../c-runtime-library/reference/ungetch-ungetwch-ungetch-nolock-ungetwch-nolock.md)