---
title: _getche_nolock, _getwche_nolock | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
apiname:
- _getche_nolock
- _getwche_nolock
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
- _getche_nolock
- _gettche_nolock
- _getwche_nolock
- getche_nolock
- getwche_nolock
- gettche_nolock
dev_langs:
- C++
helpviewer_keywords:
- characters, getting from console
- _gettche_nolock function
- getwche_nolock function
- _getche_nolock function
- getche_nolock function
- console, reading from
- _getwche_nolock function
- gettche_nolock function
ms.assetid: 9e853ad4-4d8a-4442-9ae5-da4b434f0b8c
caps.latest.revision: 18
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
ms.openlocfilehash: 71fd00e8a887335f288a3d8a44fb136d88bfe30d
ms.lasthandoff: 02/24/2017

---
# <a name="getchenolock-getwchenolock"></a>_getche_nolock, _getwche_nolock
Ottiene un carattere dalla console e lo visualizza (echo) senza bloccare il thread.  
  
> [!IMPORTANT]
>  Non è possibile usare questa API nelle applicazioni eseguite in Windows Runtime. Per altre informazioni, vedere l'articolo relativo alle [funzioni CRT non supportate con /ZW](http://msdn.microsoft.com/library/windows/apps/jj606124.aspx).  
  
## <a name="syntax"></a>Sintassi  
  
```  
int _getche_nolock( void );  
wint_t _getwche_nolock( void );  
```  
  
## <a name="return-value"></a>Valore restituito  
 Restituisce il carattere letto. Non vi è restituzione di errori.  
  
## <a name="remarks"></a>Note  
 `_getche_nolock` e `_getwche_nolock` sono identiche a `_getche` e a `_getwche`, ad eccezione del fatto che non sono protette da interferenze da parte di altri thread. Potrebbero essere più veloci perché non comportano un sovraccarico che blocca altri thread. Utilizzare queste funzioni solo in contesti thread-safe come applicazioni a thread singolo o dove l'ambito chiamante già gestisce l'isolamento del thread.  
  
### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico  
  
|Routine Tchar.h|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|  
|---------------------|--------------------------------------|--------------------|-----------------------|  
|`_gettche_nolock`|`_getche_nolock`|`_getch_nolock`|`_getwche_nolock`|  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|`_getche_nolock`|\<conio.h>|  
|`_getwche_nolock`|\<conio.h> o \<wchar.h>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## <a name="example"></a>Esempio  
  
```  
// crt_getche_nolock.c  
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
      ch = _getche_nolock();  
      ch = toupper( ch );  
   } while( ch != 'Y' );  
  
   _putch_nolock( ch );  
   _putch_nolock( '\r' );    // Carriage return  
   _putch_nolock( '\n' );    // Line feed   
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
