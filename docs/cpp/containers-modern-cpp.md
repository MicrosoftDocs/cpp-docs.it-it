---
title: Contenitori (C++ moderno) | Documenti Microsoft
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
ms.openlocfilehash: 49a77234b679fd61d801bb78d751891467d6b4e0
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="containers-modern-c"></a>Contenitori (C++ moderno)

Per impostazione predefinita, utilizzare [vettore](../standard-library/vector-class.md) come il contenitore sequenza preferito in C++. Ciò equivale a `List<T>` in linguaggi .NET.

```cpp
vector<string> apples;
apples.push_back("Granny Smith");
```

Utilizzare [mappa](../standard-library/map-class.md) (non `unordered_map`) come contenitore associativo predefinito. Utilizzare [impostare](../standard-library/set-class.md), [multimap](../standard-library/multimap-class.md), e [multiset](../standard-library/multiset-class.md) degenerato & più casi.

```cpp
map<string, string> apple_color;
// ...
apple_color["Granny Smith"] = "Green";
```

Quando è necessario ottimizzare le prestazioni, utilizzare:

- Il [matrice](../standard-library/array-class-stl.md) del tipo durante l'incorporamento è importante, ad esempio, un membro di classe.

- Contenitori associativi non ordinati, ad esempio [unordered_map](../standard-library/unordered-map-class.md). Questi hanno elemento inferiore overhead e ricerca a tempo costante, ma può essere difficile da usare in modo corretto ed efficiente.

- Ordinati **vettore**. Per altre informazioni, vedere [Algoritmi](../cpp/algorithms-modern-cpp.md).

Non utilizzare matrici di tipo C. Per le API precedenti che necessitano accesso diretto ai dati, utilizzare i metodi della funzione di accesso, ad esempio `f(vec.data(), vec.size());` invece.

Per ulteriori informazioni sui contenitori, vedere [contenitori della libreria Standard C++](../standard-library/stl-containers.md).

## <a name="see-also"></a>Vedere anche

[Bentornati a C++](../cpp/welcome-back-to-cpp-modern-cpp.md)  
[Riferimenti al linguaggio C++](../cpp/cpp-language-reference.md)  
[Libreria standard C++](../standard-library/cpp-standard-library-reference.md)  
