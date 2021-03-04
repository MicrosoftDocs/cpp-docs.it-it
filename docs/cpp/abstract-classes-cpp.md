---
description: 'Altre informazioni su: classi astratte (C++)'
title: Classi astratte (C++)
ms.date: 02/18/2021
helpviewer_keywords:
- classes [C++], abstract
- base classes [C++], abstract classes [C++]
- abstract classes [C++]
- derived classes [C++], abstract classes [C++]
ms.openlocfilehash: 8a20e988cb0c0a134fd2ebb83382d81c838bcf23
ms.sourcegitcommit: 5efc34c2b98d4d0d3e41aec38b213f062c19d078
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2021
ms.locfileid: "101844494"
---
# <a name="abstract-classes-c"></a>Classi astratte (C++)

Le classi astratte fungono da espressioni di concetti generali da cui è possibile derivare classi più specifiche. Non è possibile creare un oggetto di un tipo di classe astratta. Tuttavia, è possibile usare i puntatori e i riferimenti ai tipi di classe astratta.

Si crea una classe astratta dichiarando almeno una funzione membro virtuale pura. Si tratta di una funzione virtuale dichiarata usando la sintassi dell'identificatore pure ( `= 0` ). Le classi derivate dalla classe astratta devono implementare la funzione virtuale pura o sono anch'esse classi astratte.

Si consideri l'esempio presentato in [funzioni virtuali](../cpp/virtual-functions.md). Lo scopo della classe `Account` è di fornire la funzionalità generale, ma gli oggetti di tipo `Account` sono troppo generici per essere utili. Questo significa che `Account` è un buon candidato per una classe astratta:

```cpp
// deriv_AbstractClasses.cpp
// compile with: /LD
class Account {
public:
   Account( double d );   // Constructor.
   virtual double GetBalance();   // Obtain balance.
   virtual void PrintBalance() = 0;   // Pure virtual function.
private:
    double _balance;
};
```

L'unica differenza tra questa dichiarazione e la precedente è che `PrintBalance` è dichiarato con l'identificatore pure (`= 0`).

## <a name="restrictions-on-abstract-classes"></a>Limitazioni alle classi astratte

Non è possibile usare le classi astratte per:

- Variabili o dati dei membri

- Tipi di argomento

- Tipi restituiti di funzione

- Tipi di conversioni esplicite

Se il costruttore di una classe astratta chiama una funzione virtuale pura, direttamente o indirettamente, il risultato è indefinito. Tuttavia, i costruttori e i distruttori per le classi astratte possono chiamare altre funzioni membro.

## <a name="defined-pure-virtual-functions"></a>Funzioni virtuali pure definite

È possibile *definire* funzioni virtuali pure nelle classi astratte oppure disporre di un'implementazione. È possibile chiamare queste funzioni solo usando la sintassi completa:

*abstract-class-name*::*function-name*()

Le funzioni virtuali pure definite sono utili quando si progettano gerarchie di classi le cui classi base includono distruttori virtuali puri. Questo perché i distruttori della classe base vengono sempre chiamati durante la distruzione degli oggetti. Si consideri l'esempio seguente:

```cpp
// deriv_RestrictionsOnUsingAbstractClasses.cpp
// Declare an abstract base class with a pure virtual destructor.
// It's the simplest possible abstract class.
class base
{
public:
    base() {}
    virtual ~base() = 0 {}; // pure virtual, and defined!
};

class derived : public base
{
public:
    derived() {}
    ~derived() {}
};

int main()
{
    derived aDerived; // destructor called when it goes out of scope
}
```

Nell'esempio viene illustrata la definizione di `~base()` inline, ma è anche possibile definirla all'esterno della classe usando `base::~base() {}` .

Quando l'oggetto `aDerived` esce dall'ambito, viene chiamato il distruttore della classe `derived` . Il compilatore genera il codice per chiamare in modo implicito il distruttore per la classe `base` dopo il `derived` distruttore. L'implementazione vuota per la funzione virtuale pura `~base` garantisce che esista almeno un'implementazione per la funzione. Senza di esso, il linker genera un errore di simbolo esterno non risolto per la chiamata implicita.

> [!NOTE]
> Nell'esempio precedente, la funzione virtuale pure `base::~base` viene chiamata in modo implicito da `derived::~derived`. È anche possibile chiamare le funzioni virtuali pure in modo esplicito usando un nome completo della funzione membro. Tali funzioni devono avere un'implementazione o la chiamata genera un errore in fase di collegamento.

## <a name="see-also"></a>Vedi anche

[Ereditarietà](../cpp/inheritance-cpp.md)
