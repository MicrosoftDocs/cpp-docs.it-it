---
title: "Macro (C/C++) | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "preprocessore"
  - "preprocessore, macro"
  - "Visual C++, macro del preprocessore"
ms.assetid: a7bfc5d4-2537-4fe0-bef0-70cec0b43388
caps.latest.revision: 8
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Macro (C/C++)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La pre\-elaborazione espande le macro in tutte le righe che non sono direttive per il preprocessore \(righe che non hanno **\#** come primo carattere diverso da uno spazio vuoto\) e nelle parti di alcune direttive che non vengono ignorate come parte di una compilazione condizionale. Le direttive di "compilazione condizionale" consentono di evitare la compilazione di porzioni del file di origine grazie alla possibilità di eseguire un test di un'espressione costante o di un identificatore, in modo da determinare quali blocchi di testo vengono passati al compilatore e quali blocchi di testo vengono rimossi dal file di origine durante la pre\-elaborazione.  
  
 La direttiva `#define` viene generalmente utilizzata per associare identificatori significativi a costanti, parole chiave e istruzioni o espressioni di uso comune.  Gli identificatori che rappresentano costanti sono talvolta denominati "costanti simboliche" o "costanti di manifesto". Gli identificatori che rappresentano istruzioni o espressioni sono denominati "macro". In questa documentazione relativa al preprocessore, viene utilizzato esclusivamente il termine "macro".  
  
 Quando il nome della macro viene riconosciuto nel testo di origine del programma o negli argomenti di alcuni altri comandi del preprocessore, viene considerato come una chiamata alla macro.  Il nome della macro viene sostituito con una copia del corpo della macro.  Se la macro accetta argomenti, gli argomenti effettivi che seguono il nome della macro vengono sostituiti dai parametri formali nel corpo della macro.  Il processo con il quale si sostituisce la chiamata di macro con la copia elaborata del corpo viene chiamato "espansione" di una chiamata di macro.  
  
 In pratica, esistono due tipi di macro. Le macro di tipo "oggetto" non accettano argomenti, mentre le macro di tipo "funzione" possono essere impostate per accettare argomenti, in modo che assomiglino e agiscano come delle chiamate di funzione.  Poiché le macro non generano vere chiamate di funzione, è talvolta possibile fare in modo che i programmi vengano eseguiti più velocemente sostituendo le chiamate di funzione con le macro. In C\+\+, le funzioni inline sono spesso un metodo consigliato. È necessario, però, definire ed utilizzare le macro con attenzione, affinché non creino problemi.  Per le definizioni di macro con argomenti, potrebbe essere necessario utilizzare le parentesi, in modo da mantenere la precedenza appropriata all'interno delle espressioni.  Le macro, inoltre, potrebbero non essere in grado di gestire correttamente le espressioni con effetti collaterali.  Per ulteriori informazioni, vedere l'esempio `getrandom` nella sezione [La direttiva \#define](../preprocessor/hash-define-directive-c-cpp.md).  
  
 Una volta definita una macro, se si desidera ridefinirla su un valore differente, è necessario rimuovere prima la definizione originale.  È, tuttavia, possibile ridefinire la macro con la stessa definizione.  Pertanto, è possibile che la stessa definizione compaia più volte in uno stesso programma.  
  
 La direttiva \#**undef** rimuove la definizione di una macro.  Dopo aver rimosso la definizione, è possibile ridefinire la macro su un valore diverso.  [La direttiva \#define Directive](../preprocessor/hash-define-directive-c-cpp.md) e [La direttiva \#undef](../preprocessor/hash-undef-directive-c-cpp.md) illustrano, rispettivamente, le direttive `#define` e `#undef`.  
  
 Per ulteriori informazioni, vedere,  
  
-   [Macro e C\+\+](../preprocessor/macros-and-cpp.md)  
  
-   [Macro variadic](../preprocessor/variadic-macros.md)  
  
-   [Macro predefinite](../preprocessor/predefined-macros.md)  
  
## Vedere anche  
 [Riferimenti al preprocessore C\/C\+\+](../preprocessor/c-cpp-preprocessor-reference.md)