---
title: "Macro _ASSERT, _ASSERTE, _ASSERT_EXPR | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
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
  - "_ASSERTE"
  - "ASSERTE"
  - "_ASSERT"
  - "_ASSERT_EXPR"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "debug [CRT], uso delle macro"
  - "_ASSERTE (macro)"
  - "macro, debug con"
  - "macro per il report di debug"
  - "_ASSERT (macro)"
  - "Macro _ASSERT_EXPR"
ms.assetid: e98fd2a6-7f5e-4aa8-8fe8-e93490deba36
caps.latest.revision: 27
caps.handback.revision: 27
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Macro _ASSERT, _ASSERTE, _ASSERT_EXPR
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Valutare un'espressione e generare un report di debug quando il risultato è `False` \(solo versione di debug\).  
  
## Sintassi  
  
```  
_ASSERT_EXPR(  
   booleanExpression,  
   message  
);  
_ASSERT(   
   booleanExpression   
);  
_ASSERTE(   
   booleanExpression   
);  
  
```  
  
#### Parametri  
 `booleanExpression`  
 Espressione scalare \(incluse le espressioni puntatore\) che restituisce un valore diverso da zero \(true\) oppure 0 \(false\).  
  
 `message`  
 Stringa di caratteri wide come parte del report.  
  
## Note  
 Le macro `_ASSERT_EXPR`, `_ASSERT` e `_ASSERTE` forniscono a un'applicazione un semplice sistema per controllare i presupposti durante il processo di debug. Sono molto flessibili perché non devono essere racchiuse in istruzioni `#ifdef` per evitare che vengano chiamate in una build finale di un'applicazione. Questa flessibilità viene raggiunta usando la macro [\_DEBUG](../../c-runtime-library/debug.md).`_ASSERT_EXPR`, `_ASSERT` e `_ASSERTE` sono disponibili solo quando `_DEBUG` è definito in fase di compilazione. Quando `_DEBUG` non viene definito, le chiamate a queste macro vengono rimosse durante la pre\-elaborazione.  
  
 `_ASSERT_EXPR`, `_ASSERT` e `_ASSERTE` valutano il relativo argomento `booleanExpression` e quando il risultato è `false` \(0\), stampano un messaggio di diagnostica e chiamano [\_CrtDbgReportW](../../c-runtime-library/reference/crtdbgreport-crtdbgreportw.md) per generare un report di debug. La macro `_ASSERT` stampa un semplice messaggio di diagnostica, `_ASSERTE` include una rappresentazione di stringa dell'espressione non riuscita nel messaggio e `_ASSERT_EXPR` include la stringa `message` nel messaggio di diagnostica. Queste macro non eseguono alcuna operazione quando `booleanExpression` restituisce un risultato diverso da zero.  
  
 `_ASSERT_EXPR`, `_ASSERT` e `_ASSERTE` invocano `_CrtDbgReportW`, che fa sì che tutto l'output sia in caratteri wide.`_ASSERTE` stampa correttamente i caratteri Unicode in `booleanExpression` e `_ASSERT_EXPR` stampa i caratteri Unicode in `message`.  
  
 Dal momento che la macro `_ASSERTE` specifica l'espressione non riuscita e `_ASSERT_EXPR` consente di specificare un messaggio nel report generato, le macro consentono agli utenti di identificare il problema senza fare riferimento al codice sorgente dell'applicazione. Tuttavia, uno svantaggio è che ogni `message` stampato da `_ASSERT_EXPR` e tutte le espressioni valutate da `_ASSERTE` vengono inclusi nel file di output \(versione di debug\) dell'applicazione come una costante di stringa. Di conseguenza, se viene effettuato un numero elevato di chiamate a `_ASSERT_EXPR` o a `_ASSERTE`, queste espressioni possono aumentare notevolmente le dimensioni del file di output.  
  
 Se non diversamente specificato con le funzioni [\_CrtSetReportMode](../../c-runtime-library/reference/crtsetreportmode.md) e [\_CrtsetReportFile](../../c-runtime-library/reference/crtsetreportfile.md), i messaggi vengono visualizzati in una finestra di dialogo popup equivalente all'impostazione:  
  
```c  
_CrtSetReportMode(CRT_ASSERT, _CRTDBG_MODE_WNDW);  
```  
  
 `_CrtDbgReportW` genera il report di debug e ne determina la destinazione o destinazioni, in base alla modalità Report o le modalità e il file definito per il tipo di rapporto `_CRT_ASSERT`. Per impostazione predefinita, le asserzioni non riuscite e gli errori di asserzione vengono indirizzati a una finestra di messaggio di debug. Le funzioni [\_CrtSetReportFile](../../c-runtime-library/reference/crtsetreportmode.md) e [\_CrtSetReportMode](../../c-runtime-library/reference/crtsetreportfile.md) vengono usate per definire le destinazioni per ogni tipo di report.  
  
 Quando la destinazione è una finestra di messaggio di debug e l'utente sceglie il pulsante **Riprova**, `_CrtDbgReportW` restituisce 1, inducendo le macro `_ASSERT_EXPR`, `_ASSERT` e `_ASSERTE` ad avviare il debugger fornito il cui debug just\-in\-time \(JIT\) è abilitato.  
  
 Per altre informazioni sul processo di creazione di rapporti, vedere la funzione [\_CrtDbgReport, \_CrtDbgReportW](../../c-runtime-library/reference/crtdbgreport-crtdbgreportw.md). Per altre informazioni sulla risoluzione delle asserzioni non riuscite e sull'uso di queste macro come meccanismo di gestione degli errori di debug, vedere l'argomento relativo all'[uso delle macro per la verifica e la creazione di report](../Topic/Macros%20for%20Reporting.md).  
  
 Oltre alle macro `_ASSERT`, è possibile usare la macro [assert](../../c-runtime-library/reference/assert-macro-assert-wassert.md) per verificare la logica di programma. Questa macro è disponibile nelle versioni di debug e rilascio delle librerie. Anche le macro di debug [\_RPT, \_RPTF](../../c-runtime-library/reference/rpt-rptf-rptw-rptfw-macros.md) sono disponibili per generare un report di debug, ma non restituiscono un'espressione. Le macro `_RPT` generano un report semplice. Le macro `_RPTF` includono il file di origine e il numero di riga in cui è stata chiamata la macro di report nel report generato. Sono disponibili anche le versioni a caratteri wide di queste macro \(`_RPTWn`, `_RPTFWn`\). Le versioni a caratteri wide sono identiche alle versioni a caratteri narrow ad eccezione del fatto che le stringhe a caratteri wide vengono usate per tutti i parametri di stringa e l'output.  
  
 Nonostante `_ASSERT_EXPR`, `_ASSERT` e `_ASSERTE` siano macro disponibili includendo \<crtdbg.h\>, l'applicazione deve collegarsi a una versione di debug della libreria di runtime C quando si definisce `_DEBUG`, perché queste macro chiamano altre funzioni di runtime.  
  
## Requisiti  
  
|Macro|Intestazione obbligatoria|  
|-----------|-------------------------------|  
|`_ASSERT_EXPR`, `_ASSERT`, `_ASSERTE`|\<crtdbg.h\>|  
  
## Esempio  
 In questo programma, vengono effettuate chiamate alle macro `_ASSERT` e `_ASSERTE` per testare la condizione `string1 == string2`. Se la condizione non riesce, queste macro stampano un messaggio di diagnostica. In questo programma viene anche usato il gruppo di macro `_RPTn` e `_RPTFn` in alternativa alla funzione `printf`.  
  
```  
// crt_ASSERT_macro.c  
// compile with: /D_DEBUG /MTd /Od /Zi /link /verbose:lib /debug  
//  
// This program uses the _ASSERT and _ASSERTE debugging macros.  
//  
  
#include <stdio.h>  
#include <string.h>  
#include <malloc.h>  
#include <crtdbg.h>  
  
int main()  
{  
   char *p1, *p2;  
  
   // The Reporting Mode and File must be specified  
   // before generating a debug report via an assert  
   // or report macro.  
   // This program sends all report types to STDOUT.  
   _CrtSetReportMode(_CRT_WARN, _CRTDBG_MODE_FILE);  
   _CrtSetReportFile(_CRT_WARN, _CRTDBG_FILE_STDOUT);  
   _CrtSetReportMode(_CRT_ERROR, _CRTDBG_MODE_FILE);  
   _CrtSetReportFile(_CRT_ERROR, _CRTDBG_FILE_STDOUT);  
   _CrtSetReportMode(_CRT_ASSERT, _CRTDBG_MODE_FILE);  
   _CrtSetReportFile(_CRT_ASSERT, _CRTDBG_FILE_STDOUT);  
  
   // Allocate and assign the pointer variables.  
   p1 = (char *)malloc(10);  
   strcpy_s(p1, 10, "I am p1");  
   p2 = (char *)malloc(10);  
   strcpy_s(p2, 10, "I am p2");  
  
   // Use the report macros as a debugging  
   // warning mechanism, similar to printf.  
   // Use the assert macros to check if the   
   // p1 and p2 variables are equivalent.  
   // If the expression fails, _ASSERTE will  
   // include a string representation of the  
   // failed expression in the report.  
   // _ASSERT does not include the  
   // expression in the generated report.  
   _RPT0(_CRT_WARN,  
       "Use the assert macros to evaluate the expression p1 == p2.\n");  
   _RPTF2(_CRT_WARN, "\n Will _ASSERT find '%s' == '%s' ?\n", p1, p2);  
   _ASSERT(p1 == p2);  
  
   _RPTF2(_CRT_WARN, "\n\n Will _ASSERTE find '%s' == '%s' ?\n",  
          p1, p2);  
   _ASSERTE(p1 == p2);  
  
   _RPT2(_CRT_ERROR, "'%s' != '%s'\n", p1, p2);  
  
   free(p2);  
   free(p1);  
  
   return 0;  
}  
```  
  
```Output  
Usare le macro assert per restituire l'espressione p1 == p2. crt_ASSERT_macro.c(54) : Will _ASSERT find 'I am p1' == 'I am p2' ? crt_ASSERT_macro.c(55): asserzione non riuscita. crt_ASSERT_macro.c(58): ASSERTE troverà 'Sono p1' = = 'am p2'? crt_ASSERT_macro.c(59) : Assertion failed: p1 == p2 'I am p1' != 'I am p2'  
```  
  
## Equivalente .NET Framework  
 [System::Diagnostics::Debug::Assert](https://msdn.microsoft.com/en-us/library/system.diagnostics.debug.assert.aspx)  
  
## Vedere anche  
 [Routine di debug](../../c-runtime-library/debug-routines.md)   
 [Macro assert, \_assert, \_wassert](../../c-runtime-library/reference/assert-macro-assert-wassert.md)   
 [\_RPT, \_RPTF, \_RPTW, \_RPTFW Macros](../../c-runtime-library/reference/rpt-rptf-rptw-rptfw-macros.md)