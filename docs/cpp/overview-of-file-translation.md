---
title: "Cenni preliminari sulla conversione di file | Microsoft Docs"
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
  - "conversione di file [C++], informazioni su conversione di file"
  - "file [C++], conversione"
  - "pre-elaborazione fase di conversione"
  - "programmi [C++], convenzioni lessicali"
  - "conversione [C++]"
  - "fasi di conversione"
ms.assetid: 5036c7b7-ccff-4e2c-b052-a9ea6c71af87
caps.latest.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 6
---
# Cenni preliminari sulla conversione di file
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

I programmi C\+\+, come i programmi C, sono composti da uno o più file.  Ognuno di questi file viene convertito nel seguente ordine concettuale \(l'ordine effettivo segue la regola "as if" \(come se\): ossia la conversione deve essere eseguita come se fossero stati completati questi passaggi\):  
  
1.  Suddivisione in token lessicale.  Il mapping dei caratteri, l'elaborazione dei trigrammi, lo splicing delle righe e la suddivisione in token vengono eseguiti in questa fase della conversione.  
  
2.  Pre\-elaborazione  In questa fase della conversione vengono introdotti i file di origine ausiliari a cui fanno riferimento le direttive `#include`; vengono inoltre gestisce le direttive della "creazione di stringhe" e della "creazione di caratteri", il token viene incollato e la macro espansa \(per ulteriori informazioni, vedere [Direttive per il preprocessore](../preprocessor/preprocessor-directives.md) nel *Riferimento al preprocessore*\).  Il risultato della fase di pre\-elaborazione è una sequenza di token che, insieme, definiscono un'"unità di conversione."  
  
     Le direttive per il preprocessore iniziano sempre con il simbolo di cancelletto \(**\#**\) ovvero il primo carattere non spazio vuoto nella riga deve essere un simbolo di cancelletto\).  In una determinata riga può essere visualizzata una sola direttiva per il preprocessore.  Ad esempio:  
  
    ```  
    #include <iostream>  // Include text of iostream in   
                         //  translation unit.  
    #define NDEBUG       // Define NDEBUG (NDEBUG contains empty   
                         //  text string).  
    ```  
  
3.  Generazione di codice.  In questa fase della conversione vengono utilizzati i token generati nella fase di pre\-elaborazione per generare il codice dell'oggetto.  
  
     Durante questa fase, viene eseguito il controllo sintattico e semantico del codice sorgente.  
  
 Per ulteriori informazioni, vedere [Fasi di conversione](../preprocessor/phases-of-translation.md) nel *Riferimento al preprocessore*.  
  
 Il preprocessore C\+\+ è un superset rigido del preprocessore ANSI C, ma in alcuni casi il preprocessore C\+\+ è diverso.  Nell'elenco seguente sono riportate alcune differenze tra i preprocessori ANSI C e i preprocessori C\+\+:  
  
-   I commenti a riga singola sono supportati.  Per ulteriori informazioni, vedere [Commenti](../cpp/comments-cpp.md).  
  
-   Una macro predefinita **\_\_cplusplus**, viene definita solo per C\+\+.  Per ulteriori informazioni, vedere [Macro predefinite](../preprocessor/predefined-macros.md) nel *Riferimento al preprocessore*.  
  
-   Il preprocessore C non riconosce gli operatori C\+\+: **.\***, **–\>\*** e `::`.  Per ulteriori informazioni sugli operatori, vedere [Operatori](../cpp/cpp-built-in-operators-precedence-and-associativity.md) ed [Espressioni](../cpp/expressions-cpp.md).  
  
## Vedere anche  
 [Convenzioni lessicali](../cpp/lexical-conventions.md)