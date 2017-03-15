---
title: "Avviso del compilatore (livello 4) C4702 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C4702"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4702"
ms.assetid: d8198c1e-8762-42a6-9e6b-cb568b7a1686
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 9
---
# Avviso del compilatore (livello 4) C4702
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

codice non eseguibile  
  
 Questo avviso è il risultato delle operazioni di conformità effettuate per Visual Studio .NET 2003: codice non eseguibile.  Quando il compilatore \(back end\) rileva codice non eseguibile, genera l'avviso C4702 di livello 4.  
  
 Affinché il codice sia valido in entrambe le versioni Visual Studio .NET 2003 e Visual Studio .NET di Visual C\+\+, rimuovere il codice non eseguibile o assicurarsi che tutto il codice sorgente sia eseguibile tramite un flusso di esecuzione.  
  
## Esempio  
 Nell'esempio seguente viene generato l'errore C4702:  
  
```  
// C4702.cpp  
// compile with: /W4  
#include <stdio.h>  
  
int main() {  
   return 1;  
   printf_s("I won't print.\n");   // C4702 unreachable  
}  
```  
  
## Esempio  
 Quando si esegue la compilazione con **\/GX**, **\/EHc**, **\/EHsc** o **\/EHac** e si utilizzano le funzioni C esterne, è possibile che il codice diventi non eseguibile, dal momento che si suppone che le funzioni C esterne non generino eccezioni. Il blocco catch, pertanto, non è eseguibile.  Se si ritiene che l'avviso non sia valido perché una funzione è in grado di generare un'eccezione, eseguire la compilazione con **\/EHa** o **\/EHs**, a seconda dell'eccezione generata.  
  
 Per ulteriori informazioni, vedere [\/EH \(Modello di gestione delle eccezioni\)](../../build/reference/eh-exception-handling-model.md).  
  
 Nell'esempio seguente viene generato l'errore C4702:  
  
```  
// C4702b.cpp  
// compile with: /W4 /EHsc  
#include <iostream>  
  
using namespace std;  
extern "C" __declspec(dllexport) void Function2(){}  
  
int main() {  
   try {  
      Function2();  
   }  
   catch (...) {  
      cout << "Exp: Function2!" << endl;   // C4702  
   }  
}  
```