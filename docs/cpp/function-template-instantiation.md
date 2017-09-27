---
title: Istanza del modello di funzione | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-language
ms.tgt_pltfrm: 
ms.topic: language-reference
dev_langs:
- C++
helpviewer_keywords:
- templates, instantiation
- function templates, instantiation
- instantiation, function templates
ms.assetid: f22a07c7-3ad1-465a-84f5-8737e274bd47
caps.latest.revision: 8
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
ms.translationtype: HT
ms.sourcegitcommit: f460497071445cff87308fa9bf6e0d43c6f13a3e
ms.openlocfilehash: b7661e152484f9baab10207454538af8ca57f3b8
ms.contentlocale: it-it
ms.lasthandoff: 09/25/2017

---
# <a name="function-template-instantiation"></a>Creazione di istanze di modelli di funzione
Quando un modello di funzione viene chiamato per ogni tipo, il compilatore crea una creazione di istanze. Ogni creazione di istanze rappresenta una versione della funzione basata su modelli specializzata per il tipo. La creazione di istanze verrà chiamata ogni volta che la funzione viene utilizzata per il tipo. Se sono disponibili alcune creazioni di istanze identiche, anche in moduli diversi, solo una copia della creazione di istanze finirà nel file eseguibile.  
  
 La conversione degli argomenti della funzione è consentita nei modelli di funzione per qualsiasi coppia di parametro e argomento in cui il parametro non dipende da un argomento di modello.  
  
 È possibile creare istanze di modelli di funzione esplicitamente dichiarando il modello con un tipo specifico come argomento. Ad esempio, il codice seguente è consentito:  
  
```cpp
// function_template_instantiation.cpp  
template<class T> void f(T) { }  
  
// Instantiate f with the explicitly specified template.  
// argument 'int'  
//  
template void f<int> (int);  
  
// Instantiate f with the deduced template argument 'char'.  
template void f(char);  
int main()  
{  
}  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Modelli di funzioni](../cpp/function-templates.md)

