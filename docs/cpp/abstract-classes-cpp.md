---
title: Astrazione di classi (C++) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
dev_langs:
- C++
helpviewer_keywords:
- classes [C++], abstract
- base classes [C++], abstract classes [C++]
- abstract classes [C++]
- derived classes [C++], abstract classes [C++]
ms.assetid: f0c5975b-39de-4d68-9640-6ce57f4632e6
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 73c1d560f0e2adfbecb72fe9df96d981d0bb93af
ms.sourcegitcommit: 3614b52b28c24f70d90b20d781d548ef74ef7082
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/11/2018
ms.locfileid: "38957948"
---
# <a name="abstract-classes-c"></a>Classi astratte (C ++)

Le classi astratte fungono da espressioni di concetti generali da cui è possibile derivare classi più specifiche. Non è possibile creare un oggetto di un tipo di classe astratta; tuttavia, è possibile usare i puntatori e i riferimenti ai tipi di classe astratta.

Una classe che contiene almeno una funzione virtuale pura è considerata una classe astratta. Le classi derivate dalla classe astratta devono implementare la funzione virtuale pura o sono anch'esse classi astratte.

Si consideri l'esempio illustrato in [funzioni virtuali](../cpp/virtual-functions.md). Lo scopo della classe `Account` è di fornire la funzionalità generale, ma gli oggetti di tipo `Account` sono troppo generici per essere utili. Pertanto, `Account` rappresenta una scelta valida per una classe astratta:

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

Un'altra restrizione è che se il costruttore per una classe astratta chiama direttamente o indirettamente una funzione virtuale pure, il risultato non è definito. Tuttavia, i costruttori e i distruttori per le classi astratte possono chiamare altre funzioni membro.

Le funzioni virtuali pure possono essere definite per le classi astratte, ma possono essere chiamate direttamente solo usando la sintassi:

*abstract-class-name*::*-nome della funzione*)

Questa operazione può essere utile quando si progettano le gerarchie di classe le cui classi base includono i distruttori virtuali pure, poiché i distruttori di classe base sono sempre chiamati nel processo di eliminazione definitiva di un oggetto. Si consideri l'esempio seguente:

```cpp
// Declare an abstract base class with a pure virtual destructor.
// deriv_RestrictionsonUsingAbstractClasses.cpp
class base {
public:
    base() {}
    virtual ~base()=0;
};

// Provide a definition for destructor.
base::~base() {}

class derived:public base {
public:
    derived() {}
    ~derived(){}
};

int main() {
    derived *pDerived = new derived;
    delete pDerived;
}
```

Quando l'oggetto a cui si fa riferimento `pDerived` viene eliminato, viene chiamato il distruttore della classe `derived` e quindi quello della classe `base`. L'implementazione vuota per la funzione virtuale pure assicura che esiste almeno un'implementazione per la funzione.

> [!NOTE]
> Nell'esempio precedente, la funzione virtuale pure `base::~base` viene chiamata in modo implicito da `derived::~derived`. È inoltre possibile chiamare le funzioni virtuali pure in modo esplicito usando un nome di funzione membro completo.

## <a name="see-also"></a>Vedere anche

- [Ereditarietà](../cpp/inheritance-cpp.md)
