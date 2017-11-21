---
title: Errore del compilatore C2797 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C2797
dev_langs: C++
helpviewer_keywords: C2797
ms.assetid: 9fb26d35-eb5c-46fc-9ff5-756fba5bdaff
caps.latest.revision: "5"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: 09c5a26a1a7bb594419d2db211f86074d01da84e
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="compiler-error-c2797"></a>Errore del compilatore C2797
(Obsoleto) Inizializzazione elenco all'interno di elenco di inizializzatori di membro o l'inizializzatore di membro dati non statici non implementato.  
  
 Questo avviso è obsoleto in Visual Studio 2015. In Visual Studio 2013 e versioni precedenti, il compilatore Visual C++ non implementa l'inizializzazione elenco all'interno di un elenco di inizializzatori di membro o un inizializzatore di membro dati non statici. Prima di Visual Studio 2013 Update 3, questo veniva convertito automaticamente in una chiamata di funzione, il che potrebbe condurre a una generazione di codice errata. Visual Studio 2013 Update 3 segnala questo come errore.  
  
 Questo esempio genera C2797:  
  
```  
#include <vector>  
struct S {  
    S() : v1{1} {} // C2797, VS2013 RTM incorrectly calls 'vector(size_type)'  
  
    std::vector<int> v1;  
    std::vector<int> v2{1, 2}; // C2797, VS2013 RTM incorrectly calls 'vector(size_type, const int &)'  
};  
  
```  
  
 Questo esempio genera anch'esso C2797:  
  
```  
struct S1 {  
    int i;  
};  
  
struct S2 {  
    S2() : s1{0} {} // C2797, VS2013 RTM interprets as S2() : s1(0) {} causing C2664  
    S1 s1;  
    S1 s2{0}; // C2797, VS2013 RTM interprets as S1 s2 = S1(0); causing C2664  
};  
  
```  
  
 Per risolvere questo problema, è possibile usare la costruzione esplicita degli elenchi interni. Ad esempio:  
  
```  
#include <vector>  
typedef std::vector<int> Vector;  
struct S {  
    S() : v1(Vector{1}) {}  
  
    Vector v1;  
    Vector v2 = Vector{1, 2};  
};  
  
```  
  
 Se non è necessaria l'inizializzazione dell'elenco:  
  
```  
struct S {  
    S() : s1("") {}  
  
    std::string s1;  
    std::string s2 = std::string("");  
};  
  
```  
  
 Il compilatore in Visual Studio 2013 effettua questa operazione implicitamente in versioni precedenti a di Visual Studio 2013 Update 3.