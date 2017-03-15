---
title: "Scrittura di un filtro eccezioni | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "gestione eccezioni, filtri"
ms.assetid: 47fc832b-a707-4422-b60a-aaefe14189e5
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 9
---
# Scrittura di un filtro eccezioni
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

È possibile gestire un'eccezione passando al livello del gestore eccezioni o continuando l'esecuzione.  Invece di utilizzare il codice del gestore eccezioni per gestire e passare l'eccezione, è possibile utilizzare *filter* per risolvere il problema, quindi restituendo –1, ripristinare il flusso normale senza cancellare lo stack.  
  
> [!NOTE]
>  Non è possibile continuare l'esecuzione di alcune eccezioni.  Se *filter* restituisce –1 per tale eccezione, il sistema genera una nuova eccezione.  Quando si chiama [RaiseException](http://msdn.microsoft.com/library/windows/desktop/ms680552), viene scelto se l'eccezione continuerà.  
  
 Ad esempio, il codice seguente utilizza una chiamata di funzione nell'espressione *filter* : questa funzione gestisce il problema e quindi restituisce –1 per ripristinare il normale flusso di controllo:  
  
```  
// exceptions_Writing_an_Exception_Filter.cpp  
#include <windows.h>  
int main() {  
   int Eval_Exception( int );  
  
   __try {}  
  
   __except ( Eval_Exception( GetExceptionCode( ))) {  
      ;  
   }  
  
}  
void ResetVars( int ) {}  
int Eval_Exception ( int n_except ) {  
   if ( n_except != STATUS_INTEGER_OVERFLOW &&   
      n_except != STATUS_FLOAT_OVERFLOW )   // Pass on most exceptions  
   return EXCEPTION_CONTINUE_SEARCH;  
  
   // Execute some code to clean up problem  
   ResetVars( 0 );   // initializes data to 0  
   return EXCEPTION_CONTINUE_EXECUTION;  
}  
```  
  
 È consigliabile utilizzare una chiamata di funzione nell'espressione *filtro* quando *filter* deve eseguire operazioni complesse.  La valutazione dell'espressione comporta l'esecuzione della funzione, in questo caso, `Eval_Exception`.  
  
 Si noti l'utilizzo di [GetExceptionCode](http://msdn.microsoft.com/library/windows/desktop/ms679356) per determinare l'eccezione.  È necessario chiamare questa funzione all'interno del filtro stesso.  `Eval_Exception` non può chiamare **GetExceptionCode**, ma il codice dell'eccezione deve essere passato.  
  
 Questo gestore passa il controllo a un altro gestore a meno che l'eccezione non sia un Integer o un overflow a virgola mobile.  In tal caso, il gestore chiama una funzione \(`ResetVars` è solo un esempio, non una funzione API\) per reimpostare alcune variabili globali.  *Statement\-block\-2* che in questo esempio è vuoto, non può mai essere eseguito perché `Eval_Exception` non restituisce mai EXCEPTION\_EXECUTE\_HANDLER \(1\).  
  
 L'utilizzo di una chiamata di funzione è una tecnica generale efficace per gestire le espressioni di filtro complesse.  Altre due funzionalità del linguaggio C utili sono:  
  
-   Operatore condizionale  
  
-   Operatore virgola  
  
 L'operatore condizionale è spesso utile poiché può essere utilizzato per verificare un codice restituito specifico e quindi per restituire uno di due valori diversi.  Ad esempio, il filtro nel codice seguente riconosce l'eccezione solo se l'eccezione è `STATUS_INTEGER_OVERFLOW`:  
  
```  
__except( GetExceptionCode() == STATUS_INTEGER_OVERFLOW ? 1 : 0 ) {  
```  
  
 Lo scopo dell'operatore condizionale in questo caso è principalmente di fornire chiarezza, poiché il codice seguente produce gli stessi risultati:  
  
```  
__except( GetExceptionCode() == STATUS_INTEGER_OVERFLOW ) {  
```  
  
 L'operatore condizionale è più utile nelle situazioni in cui si desidera che il filtro restituisca –1, EXCEPTION\_CONTINUE\_EXECUTION.  
  
 L'operatore virgola consente di eseguire operazioni multiple e indipendenti in un'unica espressione.  L'effetto è simile a quello dell'esecuzione di più istruzioni e quindi della restituzione del valore dell'ultima espressione.  Ad esempio, il codice seguente archivia il codice dell'eccezione in una variabile e quindi verifica l'evento:  
  
```  
__except( nCode = GetExceptionCode(), nCode == STATUS_INTEGER_OVERFLOW )  
```  
  
## Vedere anche  
 [Scrittura di un gestore di eccezioni](../cpp/writing-an-exception-handler.md)   
 [Gestione strutturata delle eccezioni](../cpp/structured-exception-handling-c-cpp.md)