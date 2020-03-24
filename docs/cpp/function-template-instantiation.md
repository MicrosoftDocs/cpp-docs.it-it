---
title: Creazione di istanze di modelli di funzione
ms.date: 11/04/2016
helpviewer_keywords:
- templates, instantiation
- function templates, instantiation
- instantiation, function templates
ms.assetid: f22a07c7-3ad1-465a-84f5-8737e274bd47
ms.openlocfilehash: 6917448af067542fffb13aa043720bf8a26f7ba3
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80179757"
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
