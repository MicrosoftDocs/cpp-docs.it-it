---
title: Contenitori (C++ moderno) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-language
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
ms.assetid: 6e10b758-e928-4827-9c3f-86cafe54bf5b
caps.latest.revision: "10"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: ffad61c015c38d808b35ebffd98f74733d0997de
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
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
  
1.  Il [matrice](../standard-library/array-class-stl.md) del tipo durante l'incorporamento è importante, ad esempio, un membro di classe.  
  
2.  Contenitori associativi, ad esempio [unordered_map] non ordinati ((... /standard-Library/Unordered-Map-Class.MD). Questi hanno elemento inferiore overhead e ricerca a tempo costante, ma può essere difficile da usare in modo corretto ed efficiente.  
  
3.  Ordinati `vector`. Per altre informazioni, vedere [Algoritmi](../cpp/algorithms-modern-cpp.md).  
  
Non utilizzare matrici di tipo C. Per le API precedenti che necessitano accesso diretto ai dati, utilizzare i metodi della funzione di accesso, ad esempio `f(vec.data(), vec.size());` invece.  
  
Per ulteriori informazioni sui contenitori, vedere [contenitori della libreria Standard C++](../standard-library/stl-containers.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Bentornato a C++](../cpp/welcome-back-to-cpp-modern-cpp.md)   
 [Riferimenti al linguaggio C++](../cpp/cpp-language-reference.md)   
 [Libreria standard C++](../standard-library/cpp-standard-library-reference.md)
