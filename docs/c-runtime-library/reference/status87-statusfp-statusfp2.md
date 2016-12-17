---
title: "_status87, _statusfp, _statusfp2 | Microsoft Docs"
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
  - "_statusfp2"
  - "_statusfp"
  - "_status87"
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
  - "api-ms-win-crt-runtime-l1-1-0.dll"
apitype: "DLLExport"
f1_keywords: 
  - "_statusfp2"
  - "_statusfp"
  - "statusfp2"
  - "_status87"
  - "status87"
  - "statusfp"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "funzioni a virgola mobile, recupero della parola di stato"
  - "numeri a virgola mobile, parola di stato"
  - "status87 (funzione)"
  - "parola di stato, recupero della virgola mobile"
  - "statusfp (funzione)"
  - "_statusfp (funzione)"
  - "_statusfp2 (funzione)"
  - "statusfp2 (funzione)"
  - "_status87 (funzione)"
  - "funzioni a virgola mobile"
  - "parola di stato"
ms.assetid: 7ef963fa-b1fb-429d-94d6-fbf282ab7432
caps.latest.revision: 20
caps.handback.revision: 18
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _status87, _statusfp, _statusfp2
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Ottiene la parola di stato a virgola mobile.  
  
## Sintassi  
  
```  
unsigned int _status87( void );  
unsigned int _statusfp( void );  
void _statusfp2(unsigned int *px86, unsigned int *pSSE2)  
```  
  
#### Parametri  
 `px86`  
 Questo indirizzo viene riempito con parola di stato dell'unità in virgola mobile x87.  
  
 `pSSE2`  
 Questo indirizzo viene riempito con parola di stato dell'unità in virgola mobile SSE2.  
  
## Valore restituito  
 Per `_status87` e `_statusfp`, i bit nel valore restituito indica lo stato della virgola mobile.  Vedere il file di inclusione FLOAT.H per una definizione dei bit restituiti da `_statusfp`.  Molte funzioni matematiche della libreria modificano la parola di stato a virgola mobile, con risultati imprevisti.  L'ottimizzazione può riordinare, combinare e rimuovere operazioni a virgola mobile attorno alle chiamate a `_status87`, `_statusfp` e funzioni correlate.  Utilizzare l'opzione del compilatore [\/Od \(Disabilita \(Debug\)\)](../../build/reference/od-disable-debug.md) o la direttiva pragma [fenv\_access](../../preprocessor/fenv-access.md) per impedire che le ottimizzazioni riordinano operazioni a virgola mobile.  I valori restituiti da `_clearfp` e `_statusfp`nonché i parametri restituiti da `_statusfp2`, sono più efficaci se meno operazioni a virgola mobile vengono eseguite tra gli stati noti della parola di stato a virgola mobile.  
  
## Note  
 La funzione `_statusfp` ottiene la parola di stato a virgola mobile.  La parola di stato è una combinazione dello stato del processore a virgola mobile e di altre condizioni rilevate dal gestore di eccezioni a virgola mobile, ad esempio un overflow dello stack a virgola mobile e l'underflow.  Le eccezioni smascherate vengono archiviate prima che il contenuto della parola di stato venga restituito.  Ciò significa che il chiamante è consapevole delle eccezioni in corso.  Su piattaforme x86, `_statusfp` restituisce una combinazione degli stati della virgola mobile x87 e SSE2.  Su piattaforme x64, lo stato restituito è basato sullo stato del MXCSR di SSE.  Su piattaforme ARM, `_statusfp` restituisce lo stato dal registro FPSCR.  
  
 `_statusfp` è una versione indipendente dalla piattaforma e portabile di `_status87`.  È identica a `_status87` su piattaforme Intel \(x86\) e viene supportata dalle piattaforme x64 e ARM.  Per assicurarsi che il codice a virgola mobile sia portabile a tutte le architetture, utilizzare `_statusfp`.  Se si intende utilizzare solo le piattaforme x86, è possibile utilizzare `_status87` o `_statusfp`.  
  
 Si consiglia `_statusfp2` per i chip \(come il processore Pentium IV\) che dispongono sia di un x87 che di un processore a virgola mobile SSE2.  Per `_statusfp2`, gli indirizzi sono riempiti con la parola di stato a virgola mobile per entrambi i processori a virgola mobile x87 o SSE2.  Per un chip che supporta i processori a virgola mobile x87 e SSE2, EM\_AMBIGUOUS è impostato su 1 se `_statusfp` o si utilizza `_controlfp` e l'azione è ambigua poiché potrebbe fare riferimento alla parola di stato a virgola mobile x87 o SSE2.  La funzione `_statusfp2` è supportata solo nelle piattaforme x86.  
  
 Queste funzioni non sono utili per la compilazione [\/clr \(Compilazione Common Language Runtime\)](../../build/reference/clr-common-language-runtime-compilation.md) o `/clr:pure` perché Common Language Runtime \(CLR\) supporta solo la precisione dei valori a virgola mobile predefinita.  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`_status87`, `_statusfp`, `_statusfp2`|\<float.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## Esempio  
  
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
  
  **Stato \= 0x00000000 \- chiaro**  
**Stato \= 0x00000003 \- sbagliato, underflow**  
**Stato \= 0x00080003 \- sbagliato, underflow, denormal**   
## Equivalente .NET Framework  
 Non applicabile. Per chiamare la funzione standard C, utilizzare `PInvoke`. Per ulteriori informazioni, vedere [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).  
  
## Vedere anche  
 [Supporto a virgola mobile](../../c-runtime-library/floating-point-support.md)   
 [\_clear87, \_clearfp](../../c-runtime-library/reference/clear87-clearfp.md)   
 [\_control87, \_controlfp, \_\_control87\_2](../../c-runtime-library/reference/control87-controlfp-control87-2.md)