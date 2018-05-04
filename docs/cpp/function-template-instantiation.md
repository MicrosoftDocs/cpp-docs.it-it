---
title: Istanza del modello di funzione | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
dev_langs:
- C++
helpviewer_keywords:
- templates, instantiation
- function templates, instantiation
- instantiation, function templates
ms.assetid: f22a07c7-3ad1-465a-84f5-8737e274bd47
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 6374dcd9dad263afd0961be91971d3283ba863ab
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
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
