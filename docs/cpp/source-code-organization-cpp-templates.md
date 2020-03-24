---
title: Organizzazione del codice sorgente (modelli di C++)
ms.date: 04/22/2019
ms.assetid: 50569c5d-0219-4966-9bcf-a8689074ad1d
ms.openlocfilehash: 76898d04e5f9f0576898eb40945b7718c650d71a
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80178730"
---
# <a name="source-code-organization-c-templates"></a>Organizzazione del codice sorgente (modelli di C++)

Quando si definisce un modello di classe, è necessario organizzare il codice sorgente in modo che le definizioni dei membri siano visibili per il compilatore all'occorrenza.   È possibile scegliere di usare il *modello di inclusione* o il modello basato sulla *creazione esplicita di istanze*. Nel modello di inclusione le definizioni dei membri vengono incluse in tutti i file che usano un modello. Questo approccio è più semplice e offre la massima flessibilità per la scelta dei tipi concreti utilizzabili con il modello. Lo svantaggio è un possibile aumento dei tempi di compilazione. L'impatto può essere significativo se un progetto e/o i file inclusi stessi sono di grandi dimensioni. Con l'approccio di creazione esplicita di istanze, il modello stesso crea un'istanza delle classi o dei membri di classe concreti per tipi specifici.  Questo approccio può accelerare i tempi di compilazione, ma limita l'utilizzo solo alle classi abilitate anticipatamente dall'implementatore del modello. In generale, è consigliabile usare il modello di inclusione a meno che i tempi di compilazione non diventino un problema.

## <a name="background"></a>Background

I modelli non sono come le classi normali, nel senso che il compilatore non genera codice oggetto per un modello o i relativi membri. Non esiste alcun elemento da generare fino a quando non viene creata un'istanza del modello con tipi concreti. Quando il compilatore rileva un'istanza del modello, ad esempio `MyClass<int> mc;`, e non esiste ancora alcuna classe con tale firma, genera una nuova classe. Tenta anche di generare codice per le eventuali funzioni membro usate. Se tali definizioni sono in un file non incluso direttamente o indirettamente nel file con estensione cpp in corso di compilazione, non sono visibili per il compilatore.  Dal punto di vista del compilatore, non è necessariamente un errore perché le funzioni potrebbero essere definite in un'altra unità di conversione, e in tal caso il linker le troverà.  Se il linker non trova tale codice, genera un errore di **riferimento esterno non risolto**.

## <a name="the-inclusion-model"></a>Modello di inclusione

Il modo più semplice e più comune per rendere visibili le definizioni in un'unità di conversione, consiste nell'inserire le definizioni nel file di intestazione stesso.  Qualsiasi file con estensione cpp che usa il modello deve semplicemente usare #include per includere l'intestazione. Questo è l'approccio usato nella libreria standard.

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

Con questo approccio, il compilatore ha accesso alla definizione del modello completa e può creare istanze dei modelli su richiesta per qualsiasi tipo. È facile e relativamente semplice da gestire. Tuttavia, il modello di inclusione ha un costo in termini di tempi di compilazione.   Questo costo può essere significativo nei programmi di grandi dimensioni, soprattutto se l'intestazione del modello stessa include altre intestazioni. Ogni file CPP che include l'intestazione otterrà la propria copia dei modelli di funzione e di tutte le definizioni. Il linker sarà in genere in grado di gestire le cose in modo da non finire con più definizioni per una funzione, ma occorre tempo per eseguire questa operazione. Nei programmi di dimensioni ridotte questo tempo aggiuntivo per la compilazione probabilmente non è significativo.

## <a name="the-explicit-instantiation-model"></a>Modello di creazione esplicita di istanze

Se il modello di inclusione non è praticabile per il progetto e si conosce il set di tipi che verrà usato per creare un'istanza di un modello, è possibile separare il codice del modello in un file con estensione h e in uno con estensione cpp e creare in modo esplicito l'istanza dei modelli nel file con estensione cpp. In questo modo verrà generato codice oggetto visibile per il compilatore quando rileva creazioni di istanze dell'utente.

Per creare un'istanza esplicita si usa la parola chiave template seguita dalla firma dell'entità di cui si vuole creare un'istanza. Può trattarsi di un tipo o un membro. Se si crea un'istanza di un tipo in modo esplicito, verrà creata un'istanza per tutti i membri.

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

Nell'esempio precedente, le creazioni di istanze esplicite sono nella parte inferiore del file con estensione cpp. È possibile usare `MyArray` solo per i tipi **double** o `String`.

> [!NOTE]
> In C++11 la parola chiave **export** è stata deprecata nel contesto delle definizioni di modello. L'impatto a livello pratico è minimo perché tale parola chiave non è mai stata supportata dalla maggior parte dei compilatori.
