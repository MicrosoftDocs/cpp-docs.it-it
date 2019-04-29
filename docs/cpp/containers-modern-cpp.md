---
title: Contenitori (C++ moderno)
ms.date: 1/18/2018
ms.topic: conceptual
ms.openlocfilehash: 2da57bfca8b04f50a223dddfb886835c69f746a4
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62392336"
---
# <a name="containers-modern-c"></a>Contenitori (C++ moderno)

Per impostazione predefinita, usare [vettore](../standard-library/vector-class.md) come contenitore sequenza preferito in C++. Ciò equivale a `List<T>` nei linguaggi .NET.

```cpp
vector<string> apples;
apples.push_back("Granny Smith");
```

Uso [mappa](../standard-library/map-class.md) (non `unordered_map`) come contenitore associativo predefinito. Uso [impostata](../standard-library/set-class.md), [multimap](../standard-library/multimap-class.md), e [multiset](../standard-library/multiset-class.md) degenerato & più casi.

```cpp
map<string, string> apple_color;
// ...
apple_color["Granny Smith"] = "Green";
```

Quando è necessario ottimizzare le prestazioni, è consigliabile usare:

- Il [matrice](../standard-library/array-class-stl.md) del tipo durante l'incorporamento è importante, ad esempio un membro di classe.

- Contenitori associativi non ordinati, ad esempio [unordered_map](../standard-library/unordered-map-class.md). Hanno un sovraccarico inferiore per ogni elemento e ricerca a tempo costante, ma può essere più difficile da usare in modo corretto ed efficiente.

- Ordinati `vector`. Per altre informazioni, vedere [Algoritmi](../cpp/algorithms-modern-cpp.md).

Non usare matrici di tipo C. Per le API precedenti che devono accedere ai dati direttamente, usare i metodi della funzione di accesso, ad esempio `f(vec.data(), vec.size());` invece.

Per altre informazioni sui contenitori, vedere [i contenitori della libreria Standard C++](../standard-library/stl-containers.md).

## <a name="see-also"></a>Vedere anche

[C++ (C++ moderno)](../cpp/welcome-back-to-cpp-modern-cpp.md)<br/>
[Riferimenti al linguaggio C++](../cpp/cpp-language-reference.md)<br/>
[Libreria standard C++](../standard-library/cpp-standard-library-reference.md)
