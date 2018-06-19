---
title: 'Valore categorie: Elementi lvalue e rvalue (Visual C++) | Documenti Microsoft'
ms.custom: ''
ms.date: 04/06/2018
ms.technology:
- cpp-language
ms.topic: language-reference
dev_langs:
- C++
helpviewer_keywords:
- R-values [C++]
- L-values [C++]
ms.assetid: a8843344-cccc-40be-b701-b71f7b5cdcaf
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 3bbe048ee6667aaf71b2a3cf52e82993f90ab1c7
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32419141"
---
# <a name="lvalues-and-rvalues-visual-c"></a>Elementi lvalue e rvalue (Visual C++)

Ogni espressione C++ è un tipo e appartiene a un *categoria valore*. Le categorie di valore sono la base per le regole che i compilatori devono seguire durante la creazione, copia e spostamento di oggetti temporanei durante la valutazione dell'espressione.

 La standard C++ 17 definisce categorie di espressioni valore come indicato di seguito:

- Oggetto *glvalue* è un'espressione la cui valutazione determina l'identità di un oggetto, un campo di bit o una funzione.
- Oggetto *prvalue* è un'espressione che inizializza un oggetto o un campo di bit, la cui valutazione o calcola il valore dell'operando di un operatore, come specificato dal contesto in cui compare.
- Un *xvalue* è un glvalue che indica un oggetto o un campo di bit le cui risorse possono essere riutilizzate (in genere perché si trova vicino alla fine della durata). [Esempio: alcuni tipi di espressioni che includono i riferimenti rvalue (8.3.2) producono xvalues, ad esempio una chiamata a una funzione il cui tipo restituito è un riferimento rvalue o un cast a un tipo di riferimento rvalue. ]
- Un *lvalue* è un glvalue che non è un xvalue.
- Un *rvalue* è un prvalue o un xvalue.

Il diagramma seguente illustra le relazioni tra le categorie:

 ![Categorie di valore di espressioni C++](media/value_categories.png "categorie valore espressioni C++")

 Un lvalue ha un indirizzo che il programma può accedere. Esempi di espressioni lvalue includono i nomi delle variabili, tra cui `const` variabili, elementi di matrice, le chiamate che restituiscono un riferimento lvalue, i campi di bit, unioni e membri della classe di funzioni.

 Un'espressione prvalue non ha un indirizzo che sia accessibile dal programma. Esempi di espressioni prvalue includono valori letterali, chiamate di funzioni che restituiscono un tipo non di riferimento e gli oggetti temporanei creati durante la valutazione di espressioni ma accessibile solo dal compilatore.

 Un'espressione xvalue ha un indirizzo che non sia più accessibile dal programma, ma può essere utilizzato per inizializzare un riferimento rvalue, che fornisce l'accesso all'espressione. Esempi di chiamate di funzioni che restituiscono un riferimento rvalue e l'indice di matrice, membri e puntatore alle espressioni di membro in cui la matrice o l'oggetto è un riferimento rvalue.

## <a name="example"></a>Esempio

 Nell'esempio seguente vengono illustrati diversi utilizzi corretti e non corretti di lvalue e rvalue:

```cpp
// lvalues_and_rvalues2.cpp
int main()
{
 int i, j, *p;

 // Correct usage: the variable i is an lvalue and the literal 7 is a prvalue.
 i = 7;

 // Incorrect usage: The left operand must be an lvalue (C2106).`j * 4` is a prvalue.
 7 = i; // C2106
 j * 4 = 7; // C2106

 // Correct usage: the dereferenced pointer is an lvalue.
 *p = i;

 const int ci = 7;
 // Incorrect usage: the variable is a non-modifiable lvalue (C3892).
 ci = 9; // C3892

 // Correct usage: the conditional operator returns an lvalue.
 ((i < 3) ? i : j) = 7;
}
```

> [!NOTE]
> Gli esempi contenuti in questo argomento illustrano utilizzi corretti e non corretti riferiti ai casi in cui gli operatori non sono sottoposti a overload. Eseguendo l'overload degli operatori, è possibile rendere un'espressione come `j * 4` un lvalue.

Le condizioni di *lvalue* e *rvalue* vengono spesso usate quando si fa riferimento a riferimenti a oggetti. Per ulteriori informazioni sui riferimenti, vedere [dichiaratore di riferimento Lvalue: &](../cpp/lvalue-reference-declarator-amp.md) e [dichiaratore di riferimento Rvalue: & &](../cpp/rvalue-reference-declarator-amp-amp.md).

## <a name="see-also"></a>Vedere anche

 [Concetti di base](../cpp/basic-concepts-cpp.md) [dichiaratore di riferimento Lvalue: &](../cpp/lvalue-reference-declarator-amp.md) [dichiaratore di riferimento Rvalue: & &](../cpp/rvalue-reference-declarator-amp-amp.md)