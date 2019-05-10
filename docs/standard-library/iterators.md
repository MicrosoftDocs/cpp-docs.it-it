---
title: Iterators
ms.date: 11/04/2016
helpviewer_keywords:
- iterator conventions
- C++ Standard Library, iterator conventions
ms.assetid: 2f746be7-b37d-4bfc-bf05-be4336ca982f
ms.openlocfilehash: ae4193b8e6edf94ab0f8d839ac36fc1addfd8d04
ms.sourcegitcommit: da32511dd5baebe27451c0458a95f345144bd439
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2019
ms.locfileid: "65220326"
---
# <a name="iterators"></a>Iterators

Un iteratore è un oggetto in grado di eseguire l'iterazione sugli elementi di un contenitore della libreria standard C++ e fornire accesso ai singoli elementi. Tutti i contenitori della libreria standard C++ forniscono iteratori che consentono agli algoritmi di accedere ai relativi elementi in maniera standard, senza doversi preoccupare del tipo di contenitore in cui sono archiviati gli elementi.

È possibile utilizzare gli iteratori in modo esplicito usando come membro e funzioni globali `begin()` e `end()` e gli operatori come **++** e **--** per spostarsi in avanti o con le versioni precedenti. È anche possibile usare in modo implicito iteratori con un intervallo-ciclo for o (per alcuni tipi di iteratore) l'operatore di pedice  **\[]**.

Nella libreria standard C++ l'inizio di una sequenza o di un intervallo corrisponde al primo elemento. La fine di una sequenza o di un intervallo è sempre definita come un elemento dopo l'ultimo elemento. Le funzioni globali `begin` e `end` restituiscono iteratori a un contenitore specificato. Il ciclo iteratore esplicito standard su tutti gli elementi in un contenitore è simile al seguente:

```cpp
vector<int> vec{ 0,1,2,3,4 };
for (auto it = begin(vec); it != end(vec); it++)
{
    // Access element using dereference operator
    cout << *it << " ";
}
```

La stessa operazione può essere eseguita in modo più semplice con un ciclo range-for:

```cpp
for (auto num : vec)
{
    // no deference operator
    cout << num << " ";
}
```

Le categorie di iteratori disponibili sono cinque. Per la potenza, le categorie sono riepilogate in ordine crescente come:

- **Output**. Un' *iteratore di output* `X` può scorrere in avanti su una sequenza utilizzando la **++** operatore e può scrivere una sola volta, un elemento usando la __\*__ operatore.

- **Input**. Un' *iteratore di input* `X` può scorrere in avanti su una sequenza utilizzando il + + (operatore) e può leggere un elemento numero di volte qualsiasi utilizzando la **&ast;** operatore. È possibile confrontare gli iteratori di input usando la **++** e **! =** operatori. Dopo aver incrementato qualsiasi copia di un iteratore di input, non sarà possibile confrontare, dereferenziare o incrementare nessuna delle altre copie in modo sicuro.

- **In avanti**. Un *iteratore in avanti* `X` può scorrere in avanti su una sequenza utilizzando il + + operatore e può leggere qualsiasi elemento o scrivere elementi non const un numero qualsiasi di volte utilizzando la **&ast;** operatore. Membri degli elementi è possibile accedere usando il **->** confronto e operatore di inoltrare gli iteratori usando la **==** e **! =** operatori. È anche possibile eseguire più copie di un iteratore in avanti, ciascuna delle quali può essere dereferenziata e incrementata in modo indipendente. Iteratore in avanti che viene inizializzato senza riferimento ad alcun contenitore viene chiamato un *iteratore in avanti null*. Gli iteratori in avanti null risultano sempre uguali.

- **Bidirezionale**. Oggetto *iteratore bidirezionale* `X` può richiedere la posizione dell'iteratore in avanti. È possibile, tuttavia, decrementare anche un iteratore bidirezionale, come in `--X`, `X--`, o `(V = *X--)`. È possibile accedere ai membri degli elementi e confrontare gli iteratori bidirezionali nello stesso modo degli iteratori in avanti.

- **Accesso casuale**. Oggetto *iteratore ad accesso casuale* `X` può sostituire un iteratore bidirezionale. Con un iteratore ad accesso casuale è possibile usare l'operatore di pedice  **\[]** per accedere agli elementi. È possibile usare la **+**, **-**, **+=** e **-=** agli operatori di spostamento Avanti o indietro un numero specificato di elementi e per calcolare la distanza tra gli iteratori. È possibile confrontare gli iteratori bidirezionali usando **==**, **! =**, **\<**, **>**, **\< =**, e **>=**.

Tutti gli iteratori possono essere assegnati o copiati. Si presuppone che si tratti di oggetti semplici, spesso passati e restituiti per valore, non per riferimento. Si noti anche che nessuna delle operazioni descritte in precedenza può generare un'eccezione quando viene eseguita su un iteratore valido.

La gerarchia di categorie di iteratore può essere riepilogata mostrando tre sequenze. Per accedere a una sequenza in sola scrittura, è possibile usare:

> iteratore di output<br/>
> -> iteratore in avanti<br/>
> -> iteratore bidirezionale<br/>
> -> iteratore ad accesso casuale<br/>

La freccia destra significa "può essere sostituito da". Qualsiasi algoritmo che chiami un iteratore di output dovrebbe funzionare correttamente, ad esempio, con un iteratore in avanti, ma *non* viceversa.

Per eseguire l'accesso di sola lettura a una sequenza, è possibile usare:

> iteratore di input<br/>
> -> iteratore in avanti<br/>
> -> iteratore bidirezionale<br/>
> -> iteratore ad accesso casuale<br/>

In questo caso, un iteratore di input è il più debole di tutte le categorie.

Infine, per accedere a una sequenza in lettura/scrittura, è possibile usare:

> iteratore in avanti<br/>
> -> iteratore bidirezionale<br/>
> -> iteratore ad accesso casuale<br/>

Un puntatore a oggetto può sempre fungere da iteratore ad accesso casuale, quindi può essere usato come qualsiasi categoria di iteratore se supporta l'accesso corretto in lettura/scrittura alla sequenza che definisce.

Un iteratore `Iterator` diverso da un puntatore all'oggetto deve anche definire i tipi di membri necessari per la specializzazione `iterator_traits<Iterator>`. Si noti che questi requisiti possono essere soddisfatti derivando `Iterator` dalla classe di base pubblica [iterator](../standard-library/iterator-struct.md).

È importante comprendere le caratteristiche e le limitazioni di ogni categoria di iteratore per vedere come gli iteratori vengono usati dai contenitori e dagli algoritmi della libreria standard C++.

> [!NOTE]
> È possibile evitare l'utilizzo di iteratori in modo esplicito utilizzando cicli range-for. Per altre informazioni, vedere [basati su intervallo per l'istruzione](../cpp/range-based-for-statement-cpp.md).

Microsoft C++ offre ora controllati gli iteratori di debug per garantire che i limiti del contenitore non vengano sovrascritti. Per altre informazioni, vedere [Iteratori verificati](../standard-library/checked-iterators.md) e [Supporto degli iteratori di debug](../standard-library/debug-iterator-support.md).

## <a name="see-also"></a>Vedere anche

[Riferimento per la libreria standard C++](../standard-library/cpp-standard-library-reference.md)<br/>
[Thread Safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)<br/>
