---
title: Organizzazione del codice sorgente (modelli di C++)
ms.date: 11/04/2016
ms.assetid: 50569c5d-0219-4966-9bcf-a8689074ad1d
ms.openlocfilehash: 94e386b6301519b98b101adfca699b7f3128e3c2
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62331001"
---
# <a name="source-code-organization-c-templates"></a>Organizzazione del codice sorgente (modelli di C++)

Quando si definisce un modello di classe, è necessario organizzare il codice sorgente in modo che le definizioni di membro sono visibili al compilatore quando servono.   È possibile scegliere di mediante il *modello di inclusione* o nella *creazione esplicita di istanza* modello. Nel modello di inclusione, si includono le definizioni dei membri in tutti i file che usa un modello. Questo approccio è più semplice e offre la massima flessibilità in termini di quali tipi concreti sono utilizzabile con il modello. Lo svantaggio è che è possibile aumentare i tempi di compilazione. L'impatto può essere significativo se un progetto e/o i file inclusi stessi sono di grandi dimensioni. Con l'approccio di creazione esplicita di istanza, il modello stesso, crea un'istanza concrete classi o membri di classe per tipi specifici.  Questo approccio può accelerare i tempi di compilazione, ma limita l'utilizzo solo alle classi che l'implementatore del modello ha abilitato anticipatamente. In generale, è consigliabile usare il modello di inclusione a meno che i tempi di compilazione diventano un problema.

## <a name="background"></a>Sfondo

Modelli non sono come le classi normali nel senso che il compilatore non genera codice oggetto per un modello o i relativi membri. Non sono necessarie per generare fino a quando il modello viene istanziato con tipi concreti. Quando il compilatore rileva un'istanza del modello, ad esempio `MyClass<int> mc;` e nessuna classe con tale firma non esiste ancora, crea una nuova classe. Tenta anche di generare codice per tutte le funzioni membro che vengono usati. Se tali definizioni sono in un file che non è #included, direttamente o indirettamente, nel file con estensione cpp che è in fase di compilazione, il compilatore non è possibile visualizzarli.  Dal punto di vista del compilatore, non è necessariamente un errore perché le funzioni possono essere definite in un'altra unità di conversione, nel quale caso il linker strumenti sarà disponibili.  Se il linker non rileva che il codice, genera un **esterno non risolto** errore.

## <a name="the-inclusion-model"></a>Il modello di inclusione

Il modo più semplice e più comune per rendere visibile in un'unità di conversione, definizioni di modello è di inserire le definizioni nel file di intestazione stessa.  Qualsiasi file con estensione cpp che usa il modello deve semplicemente #include l'intestazione. Questo è l'approccio usato nella libreria Standard.

```cpp
#ifndef MYARRAY
#define MYARRAY
#include <iostream>

template<typename T, size_t N>
class MyArray
{
    T arr[N];
public:
    // Full definitions:
    MyArray(){}
    void Print()
    {
        for (const auto v : arr)
        {
            std::cout << v << " , ";
        }
    }

    T& operator[](int i)
   {
       return arr[i];
   }
};
#endif
```

Con questo approccio, il compilatore ha accesso alla definizione del modello completo e può creare istanze modelli on demand per qualsiasi tipo. È facile e relativamente facile da gestire. Tuttavia, il modello di inclusione con un costo in termini di tempi di compilazione.   Questo costo può essere significativo nei programmi di grandi dimensioni, soprattutto se l'intestazione del modello stesso #includes altre intestazioni. Ogni estensione cpp file #includes l'intestazione otterrà la propria copia di tutte le definizioni e i modelli di funzione. Il linker sarà in genere in grado di sistemare le cose in modo che non finire con più definizioni per una funzione, ma occorre tempo per eseguire questa operazione. Programmi di dimensioni ridotte che i tempi di compilazione aggiuntivi probabilmente non sono significativo.

## <a name="the-explicit-instantiation-model"></a>Il modello di creazione esplicita di istanza

Il modello di inclusione non è valido per il progetto, se è certo il set di tipi che verrà usato per creare un'istanza di un modello, è possibile separare il codice del modello in un file con estensione cpp e h e nel file con estensione cpp creare in modo esplicito i modelli. Ciò causerà generazione del codice oggetto che il compilatore visualizzeranno quando viene rilevato le creazioni di istanze utente.

Crei una creazione esplicita di istanza mediante la parola chiave template seguita dalla firma dell'entità che si desidera creare un'istanza. Può trattarsi di un tipo o un membro. Se si crea un'istanza in modo esplicito un tipo, tutti i membri vengono create istanze.

```cpp
template MyArray<double, 5>;
```

```cpp
//MyArray.h
#ifndef MYARRAY
#define MYARRAY

template<typename T, size_t N>
class MyArray
{
    T arr[N];
public:
    MyArray();
    void Print();
    T& operator[](int i);
};
#endif

//MyArray.cpp
#include "stdafx.h"
#include <iostream>
#include "MyArray.h"

using namespace std;

template<typename T, size_t N>
MyArray<T,N>::MyArray(){}

template<typename T, size_t N>
void MyArray<T,N>::Print()
{
    for(const auto v : arr)
    {
        cout << v << "'";
    }
    cout << endl;
}

template MyArray<double, 5>;template MyArray<string, 5>;
```

Nell'esempio precedente, le creazioni di istanze esplicite sono nella parte inferiore del file con estensione cpp. Oggetto `MyArray` può essere utilizzato soltanto **doppie** o `String` tipi.

> [!NOTE]
> In c++11 il **esportare** parola chiave è stata deprecata nel contesto di definizioni di modello. In termini pratici questo ha un impatto minimo perché la maggior parte dei compilatori non supportavano mai.