---
title: 'Categorie di valore: Elementi Lvalue e Rvalue (C++)'
ms.date: 05/07/2019
helpviewer_keywords:
- R-values [C++]
- L-values [C++]
ms.assetid: a8843344-cccc-40be-b701-b71f7b5cdcaf
ms.openlocfilehash: 4e3cfa87a8f1ae9b17f7c08afd8faeabea7102b3
ms.sourcegitcommit: da32511dd5baebe27451c0458a95f345144bd439
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2019
ms.locfileid: "65222015"
---
# <a name="lvalues-and-rvalues-c"></a>Elementi Lvalue e Rvalue (C++)

Ogni espressione C++ dispone di un tipo e appartiene a un *categoria valore*. Le categorie di valore sono la base per le regole che i compilatori devono seguire durante la creazione, copia e spostamento di oggetti temporanei durante la valutazione dell'espressione.

C++17 standard definisce le categorie di espressione valore come indicato di seguito:

- Oggetto *glvalue* è un'espressione la cui valutazione determina l'identità di un oggetto, un campo di bit o una funzione.
- Oggetto *prvalue* è un'espressione la cui valutazione Inizializza un oggetto o un campo di bit oppure calcola il valore dell'operando di un operatore, come specificato dal contesto in cui compare.
- Un' *xvalue* è un glvalue che denota un oggetto o un campo di bit possono essere riutilizzate con risorse (in genere perché si trova verso la fine della relativa durata). Esempio: Alcuni tipi di espressioni che includono i riferimenti rvalue (8.3.2) producono xvalues, ad esempio una chiamata a una funzione il cui tipo restituito è un riferimento rvalue o un cast a un tipo di riferimento rvalue.
- Un' *lvalue* è un glvalue che non è un xvalue.
- Un' *rvalue* è un prvalue o un xvalue.

Il diagramma seguente illustra le relazioni tra le categorie:

![Categorie di valore di espressioni C++](media/value_categories.png "categorie valore espressioni C++")

Un lvalue ha un indirizzo che il programma può accedere. Esempi di lvalue espressioni includono i nomi delle variabili, tra cui **const** variabili, elementi di matrice, chiamate che restituiscono un riferimento lvalue, i campi di bit, unioni e i membri della classe di funzione.

Un'espressione prvalue non ha un indirizzo che sia accessibile dal programma. Esempi di espressioni prvalue includono valori letterali, chiamate di funzioni che restituiscono un tipo non di riferimento e gli oggetti temporanei creati durante la valutazione di espressioni ma accessibile solo dal compilatore.

Un'espressione xvalue ha un indirizzo che non saranno più accessibili dal programma, ma può essere utilizzato per inizializzare un riferimento rvalue, che fornisce l'accesso all'espressione. Gli esempi includono chiamate di funzioni che restituiscono un riferimento rvalue e il pedice di matrice, membri e il puntatore alle espressioni di membro in cui la matrice o l'oggetto è un riferimento rvalue.

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

    // Correct usage: the conditional operator returns an lvalue.
    ((i < 3) ? i : j) = 7;
    
    // Incorrect usage: the constant ci is a non-modifiable lvalue (C3892).
    const int ci = 7;
    ci = 9; // C3892
}
```

> [!NOTE]
> Gli esempi contenuti in questo argomento illustrano utilizzi corretti e non corretti riferiti ai casi in cui gli operatori non sono sottoposti a overload. Eseguendo l'overload degli operatori, è possibile rendere un'espressione come `j * 4` un lvalue.

I termini *lvalue* e *rvalue* vengono spesso usate quando si fa riferimento a riferimenti a oggetti. Per altre informazioni sui riferimenti, vedere [dichiaratore di riferimento Lvalue: &](../cpp/lvalue-reference-declarator-amp.md) e [dichiaratore di riferimento Rvalue: & &](../cpp/rvalue-reference-declarator-amp-amp.md).

## <a name="see-also"></a>Vedere anche

[Concetti di base](../cpp/basic-concepts-cpp.md)<br/>
[Dichiaratore di riferimento lvalue: &](../cpp/lvalue-reference-declarator-amp.md)<br/>
[Dichiaratore di riferimento rvalue: &&](../cpp/rvalue-reference-declarator-amp-amp.md)
