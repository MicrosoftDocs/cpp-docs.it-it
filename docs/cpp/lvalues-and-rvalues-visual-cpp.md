---
description: 'Altre informazioni su: lvalue e rvalues (C++)'
title: 'Categorie di valori: lvalue e rvalues (C++)'
ms.date: 05/07/2019
helpviewer_keywords:
- R-values [C++]
- L-values [C++]
ms.assetid: a8843344-cccc-40be-b701-b71f7b5cdcaf
ms.openlocfilehash: b92ddc3aad62f1eaf7af6a6bc113c1a0fdd70769
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97299241"
---
# <a name="lvalues-and-rvalues-c"></a>Elementi Lvalue e Rvalue (C++)

Ogni espressione C++ dispone di un tipo e appartiene a una *categoria di valori*. Le categorie di valori rappresentano la base per le regole che i compilatori devono seguire durante la creazione, la copia e lo trasferimento di oggetti temporanei durante la valutazione dell'espressione.

Lo standard C++ 17 definisce le categorie di valori di espressione nel modo seguente:

- Un *glvalue* è un'espressione la cui valutazione determina l'identità di un oggetto, di un campo di bit o di una funzione.
- Un *prvalue* è un'espressione la cui valutazione Inizializza un oggetto o un campo di bit oppure calcola il valore dell'operando di un operatore, come specificato dal contesto in cui viene visualizzato.
- Un *xValue* è un glvalue che denota un oggetto o un campo di bit le cui risorse possono essere riutilizzate, in genere perché si trova in prossimità della fine del ciclo di vita. Esempio: alcuni tipi di espressioni che coinvolgono i riferimenti rvalue (8.3.2) producono XValues, ad esempio una chiamata a una funzione il cui tipo restituito è un riferimento rvalue o un cast a un tipo di riferimento rvalue.
- Un *lvalue* è un glvalue che non è un XValue.
- *Rvalue* è un prvalue o un XValue.

Il diagramma seguente illustra le relazioni tra le categorie:

![Categorie di valori dell'espressione C++](media/value_categories.png "Categorie di valori dell'espressione C++")

Un lvalue ha un indirizzo a cui il programma può accedere. Esempi di espressioni lvalue includono i nomi delle variabili, incluse le **`const`** variabili, gli elementi di matrice, le chiamate di funzione che restituiscono un riferimento lvalue, i campi di bit, le unioni e i membri della classe.

Un'espressione prvalue non dispone di un indirizzo accessibile dal programma. Esempi di espressioni prvalue includono valori letterali, chiamate di funzione che restituiscono un tipo non di riferimento e oggetti temporanei creati durante l'espressione valutazione ma accessibili solo dal compilatore.

Un'espressione xValue dispone di un indirizzo che non è più accessibile al programma ma che può essere utilizzato per inizializzare un riferimento rvalue, che fornisce l'accesso all'espressione. Gli esempi includono le chiamate di funzione che restituiscono un riferimento rvalue e l'indice di matrice, il membro e il puntatore a espressioni membro in cui la matrice o l'oggetto è un riferimento rvalue.

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

I termini *lvalue* e *rvalue* vengono spesso utilizzati quando si fa riferimento a riferimenti a oggetti. Per ulteriori informazioni sui riferimenti, vedere [lvalue Reference Dichiarator: &](../cpp/lvalue-reference-declarator-amp.md) e [rvalue reference dichiarator:  &&](../cpp/rvalue-reference-declarator-amp-amp.md).

## <a name="see-also"></a>Vedi anche

[Concetti di base](../cpp/basic-concepts-cpp.md)<br/>
[Dichiaratore di riferimento lvalue: &](../cpp/lvalue-reference-declarator-amp.md)<br/>
[Dichiaratore di riferimento rvalue: &&](../cpp/rvalue-reference-declarator-amp-amp.md)
