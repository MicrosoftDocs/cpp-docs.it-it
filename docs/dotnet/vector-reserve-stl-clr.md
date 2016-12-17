---
title: "vector::reserve (STL/CLR) | Microsoft Docs"
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
  - "cliext::vector::reserve"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "reserve (membro) [STL/CLR]"
ms.assetid: d1d5ede9-9628-4b55-95ec-f087a57205f2
caps.latest.revision: 16
caps.handback.revision: 14
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# vector::reserve (STL/CLR)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Fornisce una capacità minima di crescita del contenitore.  
  
## Sintassi  
  
```  
void reserve(size_type count);  
```  
  
#### Parametri  
 Conteggio  
 Nuova dimensione minima del contenitore.  
  
## Note  
 La funzione membro garantisce che `capacity()` d'ora in poi restituisca almeno `count`.  Utilizzarla per assicurarsi che il contenitore non è necessario ridistribuire lo spazio per la sequenza selezionata finché non è diventato dimensioni specificate.  
  
## Esempio  
  
```  
// cliext_vector_reserve.cpp   
// compile with: /clr   
#include <cliext/vector>   
  
int main()   
    {   
    cliext::vector<wchar_t> c1;   
    c1.push_back(L'a');   
    c1.push_back(L'b');   
    c1.push_back(L'c');   
  
// display initial contents " a b c"   
    for (int i = 0; i < c1.size(); ++i)   
        System::Console::Write(" {0}", c1.at(i));   
    System::Console::WriteLine();   
  
// increase capacity   
    cliext::vector<wchar_t>::size_type cap = c1.capacity();   
    System::Console::WriteLine("capacity() = {0}, ok = {1}",   
        cap, c1.size() <= cap);   
    c1.reserve(cap + 5);   
    System::Console::WriteLine("capacity() = {0}, ok = {1}",   
        c1.capacity(), cap + 5 <= c1.capacity());   
    return (0);   
    }  
  
```  
  
  **a b c**  
**capacity\(\) \= 4, OK \= True**  
**capacity\(\) \= 9, OK \= True**   
## Descrizione  
 Si noti che le capacità effettiva possono differire dai valori riportati di seguito, a condizione che la relazione nell'esempio di `ok` true.  
  
## Requisiti  
 **Intestazione:**\<cliext\/vector\>  
  
 **Spazio dei nomi:** cliext  
  
## Vedere anche  
 [vettore](../dotnet/vector-stl-clr.md)   
 [vector::capacity](../dotnet/vector-capacity-stl-clr.md)   
 [vector::resize](../dotnet/vector-resize-stl-clr.md)