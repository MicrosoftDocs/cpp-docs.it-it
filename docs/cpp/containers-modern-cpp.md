---
title: Contenitori (Modern C++) | Microsoft Docs
ms.custom: ''
ms.date: 1/18/2018
ms.technology:
- cpp-language
ms.topic: conceptual
dev_langs:
- C++
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: d740bb36c1d574e474058c05d900d605c71e55f0
ms.sourcegitcommit: 2b9e8af9b7138f502ffcba64e2721f7ef52af23b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/01/2018
ms.locfileid: "39406334"
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
 [Bentornati a C++](../cpp/welcome-back-to-cpp-modern-cpp.md)  
 [Riferimenti al linguaggio C++](../cpp/cpp-language-reference.md)  
 [Libreria standard C++](../standard-library/cpp-standard-library-reference.md)  