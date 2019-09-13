---
title: Contenitori (C++ moderno)
ms.date: 01/18/2018
ms.topic: conceptual
ms.openlocfilehash: 37b540132fc9ddc03d5eaafd33c545b5db5e7935
ms.sourcegitcommit: effb516760c0f956c6308eeded48851accc96b92
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/12/2019
ms.locfileid: "70926251"
---
# <a name="containers-modern-c"></a>Contenitori (C++ moderno)

Per impostazione predefinita, usare [vector](../standard-library/vector-class.md) come contenitore sequenziale preferito C++in. Equivale a `List<T>` nei linguaggi .NET.

```cpp
vector<string> apples;
apples.push_back("Granny Smith");
```

Usare [Map](../standard-library/map-class.md) (Not `unordered_map`) come contenitore associativo predefinito. Utilizzare [set](../standard-library/set-class.md), [multimap](../standard-library/multimap-class.md)e [multiset](../standard-library/multiset-class.md) per degenerate & più case.

```cpp
map<string, string> apple_color;
// ...
apple_color["Granny Smith"] = "Green";
```

Quando è necessaria l'ottimizzazione delle prestazioni, è consigliabile usare:

- Il tipo di [matrice](../standard-library/array-class-stl.md) quando l'incorporamento è importante, ad esempio, come membro della classe.

- Contenitori associativi non ordinati, ad esempio [unordered_map](../standard-library/unordered-map-class.md). Si tratta di un overhead minore per ogni elemento e di una ricerca a tempo costante, ma possono essere più difficili da usare in modo corretto ed efficiente.

- Ordinato `vector`. Per altre informazioni, vedere [Algoritmi](../cpp/algorithms-modern-cpp.md).

Non usare matrici di tipo C. Per le API precedenti che richiedono l'accesso diretto ai dati, usare i metodi della `f(vec.data(), vec.size());` funzione di accesso, ad esempio.

Per ulteriori informazioni sui contenitori, vedere [ C++ contenitori di libreria standard](../standard-library/stl-containers.md).

## <a name="see-also"></a>Vedere anche

[C++ (C++ moderno)](../cpp/welcome-back-to-cpp-modern-cpp.md)<br/>
[Riferimenti al linguaggio C++](../cpp/cpp-language-reference.md)<br/>
[Libreria standard C++](../standard-library/cpp-standard-library-reference.md)
