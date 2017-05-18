---
title: _status87, _statusfp, _statusfp2 | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
apiname:
- _statusfp2
- _statusfp
- _status87
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
- api-ms-win-crt-runtime-l1-1-0.dll
apitype: DLLExport
f1_keywords:
- _statusfp2
- _statusfp
- statusfp2
- _status87
- status87
- statusfp
dev_langs:
- C++
helpviewer_keywords:
- floating-point functions, getting status word
- floating-point numbers, status word
- status87 function
- status word, getting floating point
- statusfp function
- _statusfp function
- _statusfp2 function
- statusfp2 function
- _status87 function
- floating-point functions
- status word
ms.assetid: 7ef963fa-b1fb-429d-94d6-fbf282ab7432
caps.latest.revision: 20
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.ht:
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- ru-ru
- zh-cn
- zh-tw
translation.priority.mt:
- cs-cz
- pl-pl
- pt-br
- tr-tr
ms.translationtype: Machine Translation
ms.sourcegitcommit: e257f037a05c45f5b98e64ea55bd125af443b0be
ms.openlocfilehash: 69a19aaa457ffc52c431a9ca1c3597a475a10994
ms.contentlocale: it-it
ms.lasthandoff: 03/29/2017

---
# <a name="status87-statusfp-statusfp2"></a>_status87, _statusfp, _statusfp2
Ottiene la parola di stato nelle operazioni a virgola mobile.  
  
## <a name="syntax"></a>Sintassi  
  
```  
unsigned int _status87( void );  
unsigned int _statusfp( void );  
void _statusfp2(unsigned int *px86, unsigned int *pSSE2)  
```  
  
#### <a name="parameters"></a>Parametri  
 `px86`  
 Questo indirizzo viene compilato con la parola di stato per l'unità di calcolo in virgola mobile x87.  
  
 `pSSE2`  
 Questo indirizzo viene compilato con la parola di stato per l'unità di calcolo in virgola mobile SSE2.  
  
## <a name="return-value"></a>Valore restituito  
 Per `_status87` e `_statusfp`, i bit nel valore restituito indicano lo stato dell'operazione a virgola mobile. Per una definizione completa dei bit restituiti da `_statusfp`, vedere il file di inclusione FLOAT.H. Molte funzioni della libreria matematica modificano la parola di stato nelle operazioni a virgola mobile, con risultati imprevisti. Le funzionalità di ottimizzazione possono riordinare, combinare ed eliminare operazioni a virgola mobile per le chiamate a `_status87`, `_statusfp` e funzioni correlate. Usare l'opzione del compilatore [/Od (Disabilita (Debug))](../../build/reference/od-disable-debug.md) o la direttiva pragma [fenv_access](../../preprocessor/fenv-access.md) per impedire alle ottimizzazioni di riordinare le operazioni a virgola mobile. I valori restituiti da `_clearfp` e `_statusfp` e anche i parametri restituiti da `_statusfp2` sono più affidabili se vengono eseguite meno operazioni a virgola mobile tra gli stati noti della parola di stato nelle operazioni a virgola mobile.  
  
## <a name="remarks"></a>Note  
 La funzione `_statusfp` ottiene la parola di stato nelle operazioni a virgola mobile. La parola di stato è una combinazione dello stato del processore a virgola mobile e di altre condizioni rilevate dal gestore delle eccezioni a virgola mobile, come ad esempio l'overflow e underflow di stack a virgola mobile. Le eccezioni non mascherate vengono controllate prima della restituzione del contenuto della parola di stato. Questo significa che il chiamante è informato delle eccezioni in sospeso. Nelle piattaforme x86 `_statusfp` restituisce una combinazione dello stato a virgola mobile x87 e SSE2. Nelle piattaforme x64 lo stato restituito si basa sullo stato MXCSR di SSE. Nelle piattaforme ARM `_statusfp` restituisce lo stato dal registro FPSCR.  
  
 `_statusfp` è una versione indipendente dalla piattaforma e portabile di `_status87`. È identica a `_status87` su piattaforme Intel (x86) e viene supportata anche dalle piattaforme x64 e ARM. Per assicurarsi che il codice a virgola mobile sia portabile su tutte le architetture, usare `_statusfp`. Se si fa riferimento solo a piattaforme x86, è possibile usare `_status87` o `_statusfp`.  
  
 È consigliabile usare `_statusfp2` per chip (ad esempio Pentium IV) che hanno un processore a virgola mobile sia x87 che SSE2. Per `_statusfp2`, gli indirizzi vengono compilati usando la parola di stato nelle operazioni a virgola mobile sia per il processore a virgola mobile x87 che SSE2. Per un chip che supporta i processori a virgola mobile x87 e SSE2, EM_AMBIGUOUS viene impostato su 1 se su usa la funzione `_statusfp` o `_controlfp` e l'azione è ambigua perché potrebbe fare riferimento alla parola di stato x87 o SSE2. La funzione `_statusfp2` è supportata solo nelle piattaforme x86.  
  
 Queste funzioni non sono utili per [/clr (compilazione Common Language Runtime)](../../build/reference/clr-common-language-runtime-compilation.md) Poiché common language runtime (CLR) supporta solo la precisione a virgola mobile predefinita.  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|`_status87`, `_statusfp`, `_statusfp2`|\<float.h>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## <a name="example"></a>Esempio  
  
```  
// crt_statusfp.c  
// Build by using: cl /W4 /Ox /nologo crt_statusfp.c  
// This program creates various floating-point errors and  
// then uses _statusfp to display messages that indicate these problems.  
  
#include <stdio.h>  
#include <float.h>  
#pragma fenv_access(on)  
  
double test( void )  
{  
   double a = 1e-40;  
   float b;  
   double c;  
  
   printf("Status = 0x%.8x - clear\n", _statusfp());  
  
   // Assignment into b is inexact & underflows:   
   b = (float)(a + 1e-40);  
   printf("Status = 0x%.8x - inexact, underflow\n", _statusfp());  
  
   // c is denormal:   
   c = b / 2.0;   
   printf("Status = 0x%.8x - inexact, underflow, denormal\n",   
            _statusfp());  
  
   // Clear floating point status:   
   _clearfp();  
   return c;  
}  
  
int main(void)  
{  
   return (int)test();  
}  
```  
  
```Output  
Status = 0x00000000 - clear  
Status = 0x00000003 - inexact, underflow  
Status = 0x00080003 - inexact, underflow, denormal  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Supporto delle funzioni a virgola mobile](../../c-runtime-library/floating-point-support.md)   
 [_clear87, _clearfp](../../c-runtime-library/reference/clear87-clearfp.md)   
 [_control87, _controlfp, \__control87_2](../../c-runtime-library/reference/control87-controlfp-control87-2.md)
