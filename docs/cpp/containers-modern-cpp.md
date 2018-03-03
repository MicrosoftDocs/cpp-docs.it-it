---
title: Contenitori (C++ moderno) | Documenti Microsoft
ms.custom: 
ms.date: 1/18/2018
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-language
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: d43570f644e9627de5a40fc5b824a17e4fd33ffc
ms.sourcegitcommit: 6f40bba1772a09ff0e3843d5f70b553e1a15ab50
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/22/2018
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
