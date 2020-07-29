---
title: Array e WriteOnlyArray (C++/CX)
ms.date: 01/22/2017
ms.assetid: ef7cc5f9-cae6-4636-8220-f789e5b6aea4
ms.openlocfilehash: 1980fbcd1e2fa8cdaa48e00d2e7de9e45ac96a92
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87231026"
---
# <a name="array-and-writeonlyarray-ccx"></a>Array e WriteOnlyArray (C++/CX)

È possibile usare liberamente matrici di tipo C regolari o [`std::array`](../standard-library/array-class-stl.md) in un programma C++/CX (sebbene [`std::vector`](../standard-library/vector-class.md) sia spesso una scelta migliore), ma in qualsiasi API pubblicata nei metadati è necessario convertire un vettore o una matrice di tipo c in un [`Platform::Array`](../cppcx/platform-array-class.md) tipo o a [`Platform::WriteOnlyArray`](../cppcx/platform-writeonlyarray-class.md) seconda della modalità d'uso. Il [`Platform::Array`](../cppcx/platform-array-class.md) tipo non è né efficiente né potente [`std::vector`](../standard-library/vector-class.md) , quindi come guida generale è consigliabile evitarne l'utilizzo nel codice interno che esegue numerose operazioni sugli elementi della matrice.

I seguenti tipi di matrice possono essere passati attraverso l'ABI:

1. `const Platform::Array^`

1. `Platform::Array^*`

1. `Platform::WriteOnlyArray`

1. valore restituito di`Platform::Array^`

Questi tipi di matrici vengono usati per implementare i tre tipi di modelli di matrice definiti dal Windows Runtime.

Passarray
Utilizzato quando il chiamante passa una matrice a un metodo. Il tipo di parametro di input C++ è **`const`** [`Platform::Array`](../cppcx/platform-array-class.md) \<T> .

FillArray
Utilizzato quando il chiamante passa una matrice per il metodo da riempire. Il tipo di parametro di input C++ è [`Platform::WriteOnlyArray`](../cppcx/platform-writeonlyarray-class.md) \<T> .

ReceiveArray
Utilizzato quando il chiamante riceve una matrice che il metodo alloca. In C++/CX è possibile restituire la matrice nel valore restituito come Array^ oppure come parametro out come tipo Array^*.

## <a name="passarray-pattern"></a>Modello PassArray

Quando il codice client passa una matrice a un metodo C++ e il metodo non la modifica, il metodo accetta la matrice come `const Array^` . Al livello Windows Runtime dell'interfaccia ABI (Application Binary Interface), questo è noto come *Passarray*. Nell'esempio riportato di seguito viene illustrato come passare una matrice allocata in JavaScript a una funzione di C++ che la legge.

[!code-javascript[cx_arrays#101](../cppcx/codesnippet/JavaScript/array-and-writeonlyarray-c-_1.js)]

Nel frammento riportato di seguito viene mostrato il metodo C++.

[!code-cpp[cx_arrays#01](../cppcx/codesnippet/CPP/js-array/class1.cpp#01)]

## <a name="receivearray-pattern"></a>Modello ReceiveArray

Nel modello *ReceiveArray* , il codice client dichiara una matrice e la passa a un metodo che ne alloca la memoria e la Inizializza. Il tipo di parametro di input C++ è un puntatore a Hat: `Array<T>^*` . Nell'esempio riportato di seguito viene illustrato come dichiarare un oggetto matrice in JavaScript e passarlo a una funzione di C++ che alloca la memoria, inizializza gli elementi e lo restituisce al linguaggio JavaScript. JavaScript tratta la matrice allocata come un valore restituito, mentre la funzione di C++ la tratta come un parametro out.

[!code-javascript[cx_arrays#102](../cppcx/codesnippet/JavaScript/array-and-writeonlyarray-c-_3.js)]

Nel frammento riportato di seguito vengono illustrati due modi per implementare il metodo C++:

[!code-cpp[cx_arrays#02](../cppcx/codesnippet/CPP/js-array/class1.cpp#02)]

## <a name="fill-arrays"></a>Matrici di riempimento

Per allocare una matrice nel chiamante e inizializzarla o modificarla nel destinatario della chiamata, utilizza `WriteOnlyArray`. Nell'esempio riportato di seguito viene illustrato come implementare una funzione di C++ che utilizza l'oggetto `WriteOnlyArray` e lo chiama da JavaScript.

[!code-javascript[cx_arrays#103](../cppcx/codesnippet/JavaScript/array-and-writeonlyarray-c-_5.js)]

Nel frammento riportato di seguito viene mostrato come implementare il metodo C++:

[!code-cpp[cx_arrays#03](../cppcx/codesnippet/CPP/js-array/class1.cpp#03)]

## <a name="array-conversions"></a>Conversioni di matrice

Questo esempio illustra come usare un oggetto [`Platform::Array`](../cppcx/platform-array-class.md) per costruire altri tipi di raccolte:

[!code-cpp[cx_arrays#05](../cppcx/codesnippet/CPP/js-array/class1.cpp#05)]

Nell'esempio seguente viene illustrato come costruire un oggetto [`Platform::Array`](../cppcx/platform-array-class.md) da una matrice di tipo C e come restituirlo da un metodo pubblico.

[!code-cpp[cx_arrays#06](../cppcx/codesnippet/CPP/js-array/class1.cpp#06)]

## <a name="jagged-arrays"></a>Matrici di matrici

Il sistema di tipi di Windows Runtime non supporta il concetto di matrici di matrici, pertanto non puoi passare `IVector<Platform::Array<T>>` come valore restituito o parametro di metodo in un metodo pubblico. Per passare una matrice di matrici o una sequenza di sequenze attraverso l'interfaccia applicativa binaria (ABI), usa `IVector<IVector<T>^>`.

## <a name="use-arrayreference-to-avoid-copying-data"></a>Utilizza ArrayReference per evitare di copiare i dati

In alcuni scenari in cui i dati vengono passati attraverso l'interfaccia ABI in un [`Platform::Array`](../cppcx/platform-array-class.md) e in definitiva si vuole elaborare i dati in una matrice di tipo C per un livello di efficienza, è possibile usare [Platform:: ArrayReference](../cppcx/platform-arrayreference-class.md) per evitare l'operazione di copia aggiuntiva. Quando si passa un oggetto [`Platform::ArrayReference`](../cppcx/platform-arrayreference-class.md) come argomento a un parametro che accetta un oggetto `Platform::Array` , i `ArrayReference` dati vengono archiviati direttamente in una matrice di tipo C specificata. Tieni presente che `ArrayReference` non ha alcun blocco sui dati di origine. Pertanto, se tali dati vengono modificati o eliminati in un altro thread prima del completamento della chiamata, i risultati saranno non definiti.

Il frammento di codice seguente mostra come copiare i risultati di un' [`DataReader`](/uwp/api/windows.storage.streams.datareader) operazione in un `Platform::Array` (modello usuale) e come sostituire `ArrayReference` per copiare i dati direttamente in una matrice di tipo C:

[!code-cpp[cx_arrays#07](../cppcx/codesnippet/CPP/js-array/class1.h#07)]

## <a name="avoid-exposing-an-array-as-a-property"></a>Evitare di esporre una matrice come proprietà

In generale, evita di esporre un tipo `Platform::Array` come proprietà in una classe di riferimento poiché l'intera matrice viene restituita anche quando il codice client tenta semplicemente di accedere a un singolo elemento. Quando è necessario esporre un contenitore di sequenza come proprietà in una classe di riferimento pubblica, [`Windows::Foundation::IVector`](/uwp/api/windows.foundation.collections.ivector-1) rappresenta una scelta migliore. Nelle API private o interne (non pubblicate nei metadati), considerare l'uso di un contenitore C++ standard, ad esempio [`std::vector`](../standard-library/vector-class.md) .

## <a name="see-also"></a>Vedere anche

[Sistema di tipi](../cppcx/type-system-c-cx.md)<br/>
[Riferimenti per il linguaggio C++/CX](../cppcx/visual-c-language-reference-c-cx.md)<br/>
[Riferimenti agli spazi dei nomi](../cppcx/namespaces-reference-c-cx.md)
