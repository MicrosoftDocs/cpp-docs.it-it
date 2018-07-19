---
title: Cenni preliminari sulla conversione di File | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 0dd4643c21ebb8626252230b90880af9f9499c0d
ms.sourcegitcommit: 1fd1eb11f65f2999dfd93a2d924390ed0a0901ed
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/10/2018
ms.locfileid: "37943198"
---
# <a name="overview-of-file-translation"></a>Cenni preliminari sulla conversione di file
I programmi C++, come i programmi C, sono composti da uno o più file. Ognuno di questi file viene convertito nel seguente ordine concettuale (l'ordine effettivo segue la regola "as if" (come se): ossia la conversione deve essere eseguita come se fossero stati completati questi passaggi):  
  
1. Suddivisione in token lessicale. Il mapping dei caratteri, l'elaborazione dei trigrammi, lo splicing delle righe e la suddivisione in token vengono eseguiti in questa fase della conversione.  
  
2. Pre-elaborazione Questa fase della conversione vengono nei file di origine ausiliari fa `#include` direttive, gestisce "Creazione di stringhe" e "charizing" direttive ed esegue l'espansione di macro e Incolla per token (vedere [direttive per il preprocessore](../preprocessor/preprocessor-directives.md) nel *riferimenti al preprocessore* per altre informazioni). Il risultato della fase di pre-elaborazione è una sequenza di token che, insieme, definiscono un'"unità di conversione."  
  
     Le direttive del preprocessore iniziano sempre con il simbolo di numero (**#**) carattere (vale a dire il primo carattere diverso dallo spazio sulla riga deve essere un simbolo di cancelletto). In una determinata riga può essere visualizzata una sola direttiva per il preprocessore. Ad esempio:  
  
    ```cpp 
    #include <iostream>  // Include text of iostream in   
                         //  translation unit.  
    #define NDEBUG       // Define NDEBUG (NDEBUG contains empty   
                         //  text string).  
    ```  
  
3. Generazione di codice. In questa fase della conversione vengono utilizzati i token generati nella fase di pre-elaborazione per generare il codice dell'oggetto.  
  
     Durante questa fase, viene eseguito il controllo sintattico e semantico del codice sorgente.  
  
 Visualizzare [Phases of Translation](../preprocessor/phases-of-translation.md) nel *riferimenti al preprocessore* per altre informazioni.  
  
 Il preprocessore C++ è un superset rigido del preprocessore ANSI C, ma in alcuni casi il preprocessore C++ è diverso. Nell'elenco seguente sono riportate alcune differenze tra i preprocessori ANSI C e i preprocessori C++:  
  
- I commenti a riga singola sono supportati. Visualizzare [commenti](../cpp/comments-cpp.md) per altre informazioni.  
  
- Una macro predefinita `__cplusplus`, viene definito solo per C++. Visualizzare [Predefined Macros](../preprocessor/predefined-macros.md) nel *riferimenti al preprocessore* per altre informazioni.  
  
- Il preprocessore C non riconosce gli operatori C++: **.\*** , **-> \***, e `::`. Visualizzare [gli operatori](../cpp/cpp-built-in-operators-precedence-and-associativity.md) e [espressioni](../cpp/expressions-cpp.md), per altre informazioni sugli operatori.  
  
## <a name="see-also"></a>Vedere anche  
 [Convenzioni lessicali](../cpp/lexical-conventions.md)