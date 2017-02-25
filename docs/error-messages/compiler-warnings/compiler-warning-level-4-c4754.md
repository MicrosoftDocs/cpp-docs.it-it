---
title: "Avviso del compilatore (livello 4) C4754 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C4754"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4754"
ms.assetid: e0e4606a-754a-4f42-a274-21a34978d21d
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 6
---
# Avviso del compilatore (livello 4) C4754
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Le regole di conversione per operazioni aritmetiche in un confronto indicano che un ramo non può essere eseguito.  
  
 Dal momento che il risultato del confronto è sempre lo stesso viene generato l'avviso C4754.  Questo indica che uno dei rami della condizione non viene mai eseguito, molto probabilmente perché l'espressione intera collegata non è corretta.  Tale errore del codice si verifica spesso nei controlli dell'overflow di interi nelle architetture a 64 bit.  
  
 Le regole di conversione degli interi sono complesse ed esistono molte insidie sottili.  Come alternativa per correggere ogni avviso C4754, è possibile aggiornare il codice in modo da utilizzare la [Libreria SafeInt](../../windows/safeint-library.md).  
  
## Esempio  
 Questo esempio genera C4754:  
  
```cpp  
// C4754a.cpp  
// Compile with: /W4 /c  
#include "errno.h"  
  
int sum_overflow(unsigned long a, unsigned long b)   
{  
   unsigned long long x = a + b; // C4754  
  
   if (x > 0xFFFFFFFF)   
   {  
      // never executes!  
      return EOVERFLOW;  
   }  
   return 0;  
}  
```  
  
 L'addizione `a + b` potrebbe provocare un overflow aritmetico prima che il risultato subisca l'upcast a un valore a 64 bit e venga assegnato ad una variabile a 64 bit `x`.  Ciò significa che il controllo su `x` è ridondante e non rileverà mai un overflow.  In questo caso, il compilatore genera questo avviso:  
  
  **Avviso C4754: Le regole di conversione per le operazioni aritmetiche nel confronto a C4754a.cpp \(7\) indicano che un ramo non può essere eseguito.  Eseguire il cast di '\(a \+ ...\)' a 'ULONG64' \(o un tipo simile di 8 byte\).**  Per eliminare l'avviso, è possibile modificare l'istruzione di assegnazione per eseguire il cast degli operandi a valori di 8 byte:  
  
```cpp  
// Casting one operand is sufficient to force all the operands in   
// the addition be upcast according to C/C++ conversion rules, but  
// casting both is clearer.  
unsigned long long x =   
   (unsigned long long)a + (unsigned long long)b;  
```  
  
## Esempio  
 L'esempio seguente generato anche l'errore C4754.  
  
```cpp  
// C4754b.cpp  
// Compile with: /W4 /c  
#include "errno.h"  
  
int wrap_overflow(unsigned long a)   
{  
   if (a + sizeof(unsigned long) < a) // C4754  
   {   
      // never executes!  
      return EOVERFLOW;  
   }  
   return 0;  
}  
```  
  
 L'operatore `sizeof()` restituisce `size_t`, la cui dimensione è dipendente dall'architettura in uso.  Il codice di esempio funziona nelle architetture a 32 bit in cui `size_t` è un tipo a 32 bit.  Tuttavia, nelle architetture a 64 bit, `size_t` è un tipo a 64 bit.  Le regole di conversione per gli interi indicano che `a` subisce l'upcast a un valore a 64 bit nell'espressione `a + b < a` come se fosse scritto `(size_t)a + (size_t)b < (size_t)a`.  Quando `a` e `b` sono interi a 32 bit, l'operazione di addizione a 64 bit non può mai generare overflow, e mai mantenere il vincolo.  Di conseguenza, il codice non rileva mai alcun overflow di interi nelle architetture a 64 bit.  Tale esempio fa sì che il compilatore generi questo avviso:  
  
  **Avviso C4754: Le regole di conversione per le operazioni aritmetiche nel confronto a C4754b.cpp \(7\) indicano che un ramo non può essere eseguito.  Eseguire il cast di '4' a 'ULONG' \(o un tipo simile di 4 byte\).**  Si noti che il messaggio di avviso elenca in modo esplicito il valore costante 4 anziché la stringa del sorgente originaria, dal momento che l'analisi dell'avviso rileva il codice che crea il problema, `sizeof(unsigned long)` è già stato convertito in costante.  Pertanto, è possibile avere la necessità di individuare quale espressione nel codice sorgente sia associata al valore costante nel messaggio di avviso.  I sorgenti di codice più comuni risolte in costanti nei messaggi di avviso C4754 sono espressioni come `sizeof(TYPE)` e `strlen(szConstantString)`.  
  
 In questo caso, la correzione del codice sarà simile alla seguente:  
  
```cpp  
// Casting the result of sizeof() to unsigned long ensures  
// that all the addition operands are 32-bit, so any overflow   
// is detected by the check.  
if (a + (unsigned long)sizeof(unsigned long) < a)  
  
```  
  
 **Nota** Il numero di riga indicato negli avvisi del compilatore è l'ultima riga di un'istruzione.  In un messaggio di avviso su un'istruzione condizionale complessa che è diffusa su più righe, la riga che presenta effettivamente l'errore di codice può essere diverse righe prima della riga segnalata.  Di seguito è riportato un esempio.  
  
```cpp  
unsigned long a;  
  
if (a + sizeof(unsigned long) < a || // incorrect check  
    condition1() ||   
    a == 0) {    // C4754 warning reported on this line  
         // never executes!  
         return INVALID_PARAMETER;  
}  
  
```