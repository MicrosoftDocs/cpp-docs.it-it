---
title: "__func__ | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "__func__"
  - "__func___cpp"
dev_langs: 
  - "C++"
ms.assetid: a5299b8d-f0ee-4af2-91dd-8fb165e68798
caps.latest.revision: 3
caps.handback.revision: 3
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# __func__
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**\(C\+\+11\)** L'identificatore predefinito \_\_func\_\_ viene definito in modo implicito come una stringa che contiene il nome non qualificato e non decorato della funzione contenitore.  \_\_func\_\_ è indicato nello standard C\+\+ e non è un'estensione Microsoft.  
  
## Sintassi  
  
```vb  
__func__  
```  
  
## Valore restituito  
 Restituisce una matrice char const con terminazione Null di caratteri che contiene il nome della funzione.  
  
## Esempio  
  
```  
  
#include <string>  
#include <iostream>  
  
namespace Test  
{  
    struct Foo  
    {  
        static void DoSomething(int i, std::string s)  
        {  
           std::cout << __func__ << std::endl; // Output: DoSomething  
        }  
    };  
}  
int main()  
{  
    Test::Foo::DoSomething(42, "Hello");  
  
    return 0;  
}  
  
```  
  
## Requisiti  
 C\+\+11