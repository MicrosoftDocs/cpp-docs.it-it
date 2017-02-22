---
title: "Errore del compilatore C2797 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2797"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2797"
ms.assetid: 9fb26d35-eb5c-46fc-9ff5-756fba5bdaff
caps.latest.revision: 5
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 5
---
# Errore del compilatore C2797
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Inizializzazione elenco all'interno dell'elenco degli inizializzatori dei membri o di un inizializzatore di membro dati non statici non implementato.  
  
 Il compilatore C\+\+ in Visual Studio non implementa l'inizializzazione dell'elenco all'interno di un elenco di inizializzatori di membro o di un inizializzatore di membro dati non statici.  Prima di Visual Studio 2013 Update 3, questo veniva convertito automaticamente in una chiamata di funzione, il che potrebbe condurre a una generazione di codice errata.  Visual Studio 2013 Update 3 segnala questo come errore.  
  
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
  
 Per risolvere questo problema, è possibile usare la costruzione esplicita degli elenchi interni.  Ad esempio:  
  
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