---
title: Avviso del compilatore C4868
ms.date: 10/26/2017
f1_keywords:
- C4868
ms.assetid: fc6aa7e5-34dd-4ec2-88bd-16e430361dc7
ms.openlocfilehash: 72700091fcd22271e6913228a1206b3d5efcbdef
ms.sourcegitcommit: 7d64c5f226f925642a25e07498567df8bebb00d4
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2019
ms.locfileid: "65447174"
---
# <a name="compiler-warning-level-4-c4868"></a>Avviso (livello 4) del compilatore C4868

> «_file_(*line_number*)' compilatore non può imporre l'ordine di valutazione da sinistra a destra nell'elenco di inizializzatori tra parentesi graffe

Gli elementi di un elenco di inizializzatori tra parentesi graffe devono essere valutate in ordine da sinistra a destra. Esistono due casi in cui il compilatore è in grado di garantire questo ordine: il primo è quando alcuni elementi sono gli oggetti passati per valore. il secondo è durante la compilazione con `/clr` e alcuni degli elementi siano campi di oggetti o gli elementi della matrice. Quando il compilatore non garantisce la valutazione da sinistra a destra Genera avviso C4868.

Questo avviso può essere generato in seguito a operazioni di conformità del compilatore eseguite per Visual Studio 2015 Update 2. Codice compilato prima di Visual Studio 2015 Update 2 è ora possibile generare C4868.

Per impostazione predefinita, questo avviso non è attivo. Usare `/Wall` per attivare questo avviso.

Per risolvere questo problema, prima di tutto valutare se la valutazione da sinistra a destra degli elementi dell'elenco di inizializzatori è necessaria, ad esempio quando la valutazione degli elementi può produrre effetti collaterali dipendente dall'ordinamento. In molti casi, l'ordine in cui vengono valutati gli elementi non hanno alcun effetto osservabile.

Se l'ordine di valutazione deve essere da sinistra a destra, è consigliabile se è possibile passare gli elementi `const` fare invece riferimento. Una modifica simile al seguente elimina l'avviso nell'esempio di codice seguente.

## <a name="example"></a>Esempio

In questo esempio genera C4868 e Mostra un modo per risolvere il problema:

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