---
title: "operator&gt;= (map) (STL/CLR) | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "cliext::map::operator>="
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "operator>= (membro) [STL/CLR]"
ms.assetid: 9f39fbd2-ead6-4451-ad4e-b9cb077fb442
caps.latest.revision: 16
caps.handback.revision: 14
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# operator&gt;= (map) (STL/CLR)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Elenco maggiore o uguale confronto.  
  
## Sintassi  
  
```  
template<typename Key,  
    typename Mapped>  
    bool operator>=(map<Key, Mapped>% left,  
        map<Key, Mapped>% right);  
```  
  
#### Parametri  
 left  
 Contenitore sinistro da confrontare.  
  
 right  
 Contenitore appropriato da confrontare.  
  
## Note  
 La funzione di operatore restituisce `!(``left` `<` `right``)`.  Utilizzarla per verificare se `left` non è stato ordinato prima di `right` quando le due mappe vengono elemento confrontata dall'elemento.  
  
## Esempio  
  
```  
// cliext_map_operator_ge.cpp   
// compile with: /clr   
#include <cliext/map>   
  
typedef cliext::map<wchar_t, int> Mymap;   
int main()   
    {   
    Mymap c1;   
    c1.insert(Mymap::make_value(L'a', 1));   
    c1.insert(Mymap::make_value(L'b', 2));   
    c1.insert(Mymap::make_value(L'c', 3));   
  
// display contents " [a 1] [b 2] [c 3]"   
    for each (Mymap::value_type elem in c1)   
        System::Console::Write(" [{0} {1}]", elem->first, elem->second);   
    System::Console::WriteLine();   
  
// assign to a new container   
    Mymap c2;   
    c2.insert(Mymap::make_value(L'a', 1));   
    c2.insert(Mymap::make_value(L'b', 2));   
    c2.insert(Mymap::make_value(L'd', 4));   
  
// display contents " [a 1] [b 2] [d 4]"   
    for each (Mymap::value_type elem in c2)   
        System::Console::Write(" [{0} {1}]", elem->first, elem->second);   
    System::Console::WriteLine();   
  
    System::Console::WriteLine("[a b c] >= [a b c] is {0}",   
        c1 >= c1);   
    System::Console::WriteLine("[a b c] >= [a b d] is {0}",   
        c1 >= c2);   
    return (0);   
    }  
  
```  
  
  **un \[1\] \[b \[2\]c 3\]**  
 **un \[1\] \[b \[2\]d 4\]**  
**\[a b c\] \>\= \[a b c\] è true**  
**\[a b c\] \>\= \[a b d\] è false**   
## Requisiti  
 **Intestazione:**\<cliext\/map\>  
  
 **Spazio dei nomi:** cliext  
  
## Vedere anche  
 [map](../dotnet/map-stl-clr.md)   
 [operator\=\= \(map\)](../dotnet/operator-equality-map-stl-clr.md)   
 [operator\!\= \(map\)](../dotnet/operator-inequality-map-stl-clr.md)   
 [operator\< \(map\)](../dotnet/operator-less-than-map-stl-clr.md)   
 [operator\> \(map\)](../dotnet/operator-greater-than-map-stl-clr.md)   
 [operator\<\= \(map\)](../dotnet/operator-less-or-equal-map-stl-clr.md)