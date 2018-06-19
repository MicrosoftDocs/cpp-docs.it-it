---
title: C4868 di avviso del compilatore | Documenti Microsoft
ms.date: 10/26/2017
ms.topic: error-reference
f1_keywords:
- C4868
ms.assetid: fc6aa7e5-34dd-4ec2-88bd-16e430361dc7
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 922a1a8434da8449758b9d55ebe89ace2f262cd5
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33275242"
---
# <a name="compiler-warning-level-4-c4868"></a>Compilatore (livello 4) Avviso C4868

> '_file_(*riga numero*)' compilatore non può imporre l'ordine di valutazione da sinistra a destra nell'elenco di inizializzatori tra parentesi graffe

Gli elementi di un elenco di inizializzatori tra parentesi graffe devono essere valutate in ordine da sinistra a destra. Esistono due casi in cui il compilatore non è in grado di garantire questo ordine: il primo è quando alcuni elementi sono gli oggetti passati per valore. il secondo è durante la compilazione con `/clr` e alcuni elementi sono campi di oggetti o sono gli elementi della matrice. Quando il compilatore non garantisce la valutazione da sinistra a destra viene genera avviso C4868.

Questo avviso può essere generato come risultato delle operazioni di conformità del compilatore eseguite per Visual C++ 2015 Update 2. Il codice compilato prima di Visual C++ 2015 Update 2 è ora possibile generare C4868.

Per impostazione predefinita, questo avviso non è attivo. Utilizzare `/Wall` per attivare l'avviso.

Per risolvere il problema, considerare innanzitutto se è necessaria, ad esempio quando la valutazione degli elementi può produrre effetti collaterali dipendente dall'ordinamento valutazione da sinistra a destra degli elementi dell'elenco di inizializzatori. In molti casi, l'ordine in cui vengono valutati gli elementi non ha un effetto osservabile.

Se l'ordine di valutazione deve essere scritto da sinistra a destra, considerare se è possibile passare gli elementi `const` alternativa, fare riferimento. Una modifica ad esempio si elimina l'avviso nell'esempio di codice seguente.

## <a name="example"></a>Esempio

In questo esempio genera l'errore C4868 e Mostra un modo per risolvere il problema:

```cpp
// C4868.cpp
// compile with: /c /Wall
#include <cstdio>

class HasCopyConstructor
{
public:
    int x;

    HasCopyConstructor(int x): x(x) {}

    HasCopyConstructor(const HasCopyConstructor& h): x(h.x)
    {
        printf("Constructing %d\n", h.x);
    }
};

class TripWarning4868
{
public:
    // note that taking "HasCopyConstructor" parameters by-value will trigger copy-construction.
    TripWarning4868(HasCopyConstructor a, HasCopyConstructor b) {}

    // This variation will not trigger the warning:
    // TripWarning4868(const HasCopyConstructor& a, const HasCopyConstructor& b) {}
};

int main()
{
    HasCopyConstructor a{1};
    HasCopyConstructor b{2};

    // the warning will indicate the below line, the usage of the braced initializer list.
    TripWarning4868 warningOnThisLine{a, b};
};
```