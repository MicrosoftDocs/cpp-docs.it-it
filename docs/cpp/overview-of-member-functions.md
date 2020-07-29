---
title: Cenni preliminari di funzioni membro
ms.date: 11/04/2016
helpviewer_keywords:
- this pointer, and nonstatic member functions
- nonstatic member functions [C++]
- inline functions [C++], treating member functions as
- member functions [C++], definition in class declaration
ms.assetid: 9f77a438-500e-40bb-a6c6-544678f3f4c8
ms.openlocfilehash: 81fc3ae7a732171c6bddff9f584976dd747372b4
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87233665"
---
# <a name="overview-of-member-functions"></a>Cenni preliminari di funzioni membro

Le funzioni membro possono essere o statiche o non statiche. Il comportamento delle funzioni membro statiche differisce da altre funzioni membro perché le funzioni membro statiche non hanno un argomento implicito **`this`** . Le funzioni membro non statiche hanno un **`this`** puntatore. Le funzioni membro, che siano statiche o non statiche, possono essere definite o all'interno o all'esterno della dichiarazione di classe.

Se una funzione membro viene definita all'interno della dichiarazione di classe, la stessa viene considerata come funzione inline e non è necessario qualificare il nome di funzione con il relativo nome di classe. Sebbene le funzioni definite all'interno delle dichiarazioni di classe siano già gestite come funzioni inline, è possibile usare la **`inline`** parola chiave per documentare il codice.

Di seguito, un esempio di dichiarazione di funzione all'interno di una dichiarazione di classe:

```cpp
// overview_of_member_functions1.cpp
class Account
{
public:
    // Declare the member function Deposit within the declaration
    //  of class Account.
    double Deposit( double HowMuch )
    {
        balance += HowMuch;
        return balance;
    }
private:
    double balance;
};

int main()
{
}
```

Se la definizione di una funzione membro è esterna alla dichiarazione di classe, viene considerata come funzione inline solo se viene dichiarata in modo esplicito come **`inline`** . Inoltre, il nome della funzione nella definizione deve essere qualificato con il relativo nome di classe utilizzando l'operatore di risoluzione dell'ambito (`::`).

L'esempio seguente è identico alla precedente dichiarazione di classe `Account`, con la differenza che la funzione `Deposit` è definita all'esterno della dichiarazione di classe:

```cpp
// overview_of_member_functions2.cpp
class Account
{
public:
    // Declare the member function Deposit but do not define it.
    double Deposit( double HowMuch );
private:
    double balance;
};

inline double Account::Deposit( double HowMuch )
{
    balance += HowMuch;
    return balance;
}

int main()
{
}
```

> [!NOTE]
> Sebbene le funzioni membro possano essere definite sia all'interno di una dichiarazione di classe che separatamente, nessuna funzione membro può essere aggiunta a una classe, una volta che la classe è stata definita.

Le classi che contengono funzioni membro possono avere diverse dichiarazioni, ma le singole funzioni membro devono avere una sola definizione all'interno di un programma. Le definizioni multiple generano un messaggio di errore in fase di collegamento. Se una classe contiene definizioni di funzioni inline, le definizioni di funzioni devono essere identiche, al fine di rispettare la regola della "definizione unica".
