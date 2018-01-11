---
title: Convenzioni della libreria C++ | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- C++ Standard Library, conventions
- classes [C++]
- functions [C++], library naming conventions
- naming conventions [C++], C++ Standard Library
- conventions [C++], C++ Standard Library
- function names [C++]
- coding conventions, C++ Standard Library
- naming conventions [C++], C++ library
ms.assetid: bf41b79a-2d53-4f46-8d05-779358335146
caps.latest.revision: "9"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 0699e589340081d5dd13e8ab879094445005e327
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="c-library-conventions"></a>Convenzioni della libreria C++
La libreria C++ segue in gran parte le stesse convenzioni della libreria standard C, nonché alcune altre illustrate in questo articolo.  
  
 Un'implementazione ha una certa libertà di azione nella modalità di dichiarazione di tipi e funzioni nella libreria C++:  
  
-   I nomi delle funzioni nella libreria standard C potrebbero avere un collegamento esterno #"C++" o "C". Includere l'intestazione C standard appropriata anziché dichiarare un'entità di libreria inline.  
  
-   Il nome di una funzione membro in una classe di libreria potrebbe avere firme delle funzioni aggiuntive oltre a quelle elencate in questo documento. È possibile assicurarsi che una chiamata di funzione qui descritta si comporti come previsto, ma non si può considerare completamente affidabile l'indirizzo della funzione membro di libreria. Il tipo potrebbe infatti non essere quello previsto.  
  
-   Una classe della libreria può avere classi di base non documentate (non virtuali). Una classe documentata come derivata da un'altra classe può infatti essere derivata da quella classe tramite altre classi non documentate.  
  
-   Un tipo definito come un sinonimo per un determinato tipo di valore integer può essere uguale a uno dei diversi tipi di integer.  
  
-   Un tipo maschera di bit può essere implementato come un tipo integer o un'enumerazione. In entrambi i casi, è possibile eseguire operazioni bit per bit (ad esempio `AND` e `OR`) sui valori dello stesso tipo di maschera di bit. Gli elementi `A` e `B` di un tipo maschera di bit sono valori diversi da zero in modo che `A`  &  `B` sia zero.  
  
-   Una funzione di libreria priva di specifica di eccezione può generare un'eccezione arbitraria, a meno che la relativa definizione non limiti chiaramente tale possibilità.  
  
 Esistono d'alta parte alcune restrizioni:  
  
-   La libreria standard C non usa alcuna macro di mascheramento. Solo le specifiche firme di funzione sono riservate, non i nomi delle funzioni.  
  
-   Il nome di una funzione di libreria all'esterno di una classe non potrà avere firme di funzione aggiuntive non documentate. È possibile considerare affidabile il relativo indirizzo.  
  
-   Le classi di base e le funzioni membro designate come virtuali sono certamente virtuali, mentre quelle descritte come non virtuali sono certamente non virtuali.  
  
-   Questi due tipi definiti dalla libreria di C++ sono sempre diversi, a meno che questo documento non contenga esplicitamente indicazioni contrarie.  
  
-   Le funzioni offerte dalla libreria, incluse le versioni predefinite delle funzioni sostituibili, possono generare *al massimo* le eccezioni elencate in qualsiasi specifica di eccezione. Nessun distruttore specificato dalla libreria genera eccezioni. Le funzioni della libreria standard C possono propagare un'eccezione, come quando `qsort` chiama un confronto tra la funzione che genera un'eccezione, ma in caso contrario non generano eccezioni.  
  
## <a name="see-also"></a>Vedere anche  
 [Panoramica sulla libreria standard C++](../standard-library/cpp-standard-library-overview.md)   
 [Thread Safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)

