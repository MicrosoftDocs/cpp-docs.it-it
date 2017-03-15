---
title: "vector::capacity (STL/CLR) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "cliext::vector::capacity"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "capacity (membro) [STL/CLR]"
ms.assetid: f82d8da9-8b4d-4288-8d18-8e9ca5911d87
caps.latest.revision: 17
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 15
---
# vector::capacity (STL/CLR)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Restituisce la dimensione dello spazio di memorizzazione allocato per il contenitore.  
  
## Sintassi  
  
```  
size_type capacity();  
```  
  
## Note  
 La funzione membro restituisce un'archiviazione attualmente allocata per utilizzare la sequenza selezionata, un valore almeno avere le [vector::size](../dotnet/vector-size-stl-clr.md)`()`.  Utilizzarla per determinare quanto il contenitore può crearsi prima che questo ridistribuire lo spazio per la sequenza selezionata.  
  
## Esempio  
  
```  
// cliext_vector_capacity.cpp   
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
 [vector::reserve](../dotnet/vector-reserve-stl-clr.md)