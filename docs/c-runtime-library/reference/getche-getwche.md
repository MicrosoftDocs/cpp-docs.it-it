---
title: _getche, _getwche | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
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
caps.latest.revision: 23
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
translationtype: Machine Translation
ms.sourcegitcommit: a937c9d083a7e4331af63323a19fb207142604a0
ms.openlocfilehash: bfa28600c984bb491b99dfdfa87b3bfa38d5b4df
ms.lasthandoff: 02/24/2017

---
# <a name="getche-getwche"></a>_getche, _getwche
Ottiene un carattere dalla console e lo visualizza (echo).  
  
> [!IMPORTANT]
>  Non è possibile usare questa API nelle applicazioni eseguite in Windows Runtime. Per altre informazioni, vedere l'articolo relativo alle [funzioni CRT non supportate con /ZW](http://msdn.microsoft.com/library/windows/apps/jj606124.aspx).  
  
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
  
```Output  
  
abcdeyType 'Y' when finished typing keys: Y  
```  
  
## <a name="net-framework-equivalent"></a>Equivalente in NET Framework  
 Non applicabile. Per chiamare la funzione C standard, usare `PInvoke`. Per altre informazioni, vedere [Platform Invoke Examples](http://msdn.microsoft.com/Library/15926806-f0b7-487e-93a6-4e9367ec689f) (Esempi di platform invoke).  
  
## <a name="see-also"></a>Vedere anche  
 [I/O su console e porta](../../c-runtime-library/console-and-port-i-o.md)   
 [_cgets, _cgetws](../../c-runtime-library/cgets-cgetws.md)   
 [getc, getwc](../../c-runtime-library/reference/getc-getwc.md)   
 [_ungetch, _ungetwch, _ungetch_nolock, _ungetwch_nolock](../../c-runtime-library/reference/ungetch-ungetwch-ungetch-nolock-ungetwch-nolock.md)
