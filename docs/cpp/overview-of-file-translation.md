---
title: Cenni preliminari sulla conversione di File | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-language
ms.tgt_pltfrm: ''
ms.topic: language-reference
dev_langs:
- C++
helpviewer_keywords:
- file translation [C++], about file translation
- translation [C++]
- translation phases
- files [C++], translation
- programs [C++], lexical conventions of
- preprocessing translation phase
ms.assetid: 5036c7b7-ccff-4e2c-b052-a9ea6c71af87
caps.latest.revision: 6
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: a088d2da30aa77f477f3f6e5064b6b98170e953b
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="overview-of-file-translation"></a>Cenni preliminari sulla conversione di file
I programmi C++, come i programmi C, sono composti da uno o più file. Ognuno di questi file viene convertito nel seguente ordine concettuale (l'ordine effettivo segue la regola "as if" (come se): ossia la conversione deve essere eseguita come se fossero stati completati questi passaggi):  
  
1.  Suddivisione in token lessicale. Il mapping dei caratteri, l'elaborazione dei trigrammi, lo splicing delle righe e la suddivisione in token vengono eseguiti in questa fase della conversione.  
  
2.  Pre-elaborazione Questa fase della conversione vengono nei file di origine ausiliari a cui fa riferimento `#include` direttive, gestisce "Creazione di stringhe" e "charizing" direttive ed esegue token Incolla e la macro espansa (vedere [direttive per il preprocessore](../preprocessor/preprocessor-directives.md) nel *riferimenti al preprocessore* per altre informazioni). Il risultato della fase di pre-elaborazione è una sequenza di token che, insieme, definiscono un'"unità di conversione."  
  
     Le direttive del preprocessore iniziano sempre con il segno di numero (**#**) carattere (ovvero, il primo carattere di carattere non spazio vuoto nella riga deve essere un simbolo di cancelletto). In una determinata riga può essere visualizzata una sola direttiva per il preprocessore. Ad esempio:  
  
    ```  
    #include <iostream>  // Include text of iostream in   
                         //  translation unit.  
    #define NDEBUG       // Define NDEBUG (NDEBUG contains empty   
                         //  text string).  
    ```  
  
3.  Generazione di codice. In questa fase della conversione vengono utilizzati i token generati nella fase di pre-elaborazione per generare il codice dell'oggetto.  
  
     Durante questa fase, viene eseguito il controllo sintattico e semantico del codice sorgente.  
  
 Vedere [fasi di conversione](../preprocessor/phases-of-translation.md) nel *riferimenti al preprocessore* per ulteriori informazioni.  
  
 Il preprocessore C++ è un superset rigido del preprocessore ANSI C, ma in alcuni casi il preprocessore C++ è diverso. Nell'elenco seguente sono riportate alcune differenze tra i preprocessori ANSI C e i preprocessori C++:  
  
-   I commenti a riga singola sono supportati. Vedere [commenti](../cpp/comments-cpp.md) per ulteriori informazioni.  
  
-   Una macro predefinita **cplusplus**, viene definito solo per C++. Vedere [macro predefinite](../preprocessor/predefined-macros.md) nel *riferimenti al preprocessore* per ulteriori informazioni.  
  
-   Il preprocessore C non riconosce gli operatori C++: **.\*** ,  **-> \*** , e `::`. Vedere [operatori](../cpp/cpp-built-in-operators-precedence-and-associativity.md) e [espressioni](../cpp/expressions-cpp.md), per ulteriori informazioni sugli operatori.  
  
## <a name="see-also"></a>Vedere anche  
 [Convenzioni lessicali](../cpp/lexical-conventions.md)