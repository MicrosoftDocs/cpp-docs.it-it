---
title: "vector::at (STL/CLR) | Microsoft Docs"
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
  - "cliext::vector::at"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "at (membro) [STL/CLR]"
ms.assetid: 9af9f829-48b8-4906-ba4a-b43454acb2c7
caps.latest.revision: 18
caps.handback.revision: 16
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# vector::at (STL/CLR)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Accede a un elemento in una posizione specificata.  
  
## Sintassi  
  
```  
reference at(size_type pos);  
```  
  
#### Parametri  
 posizione  
 Posizione dell'elemento a cui accedere.  
  
## Note  
 La funzione membro restituisce un riferimento all'elemento della sequenza selezionata nella posizione `pos`.  Utilizzarla per leggere o scrivere un elemento di cui il percorso noto.  
  
## Esempio  
  
```  
// cliext_vector_at.cpp   
// compile with: /clr   
#include <cliext/vector>   
  
int main()   
    {   
    cliext::vector<wchar_t> c1;   
    c1.push_back(L'a');   
    c1.push_back(L'b');   
    c1.push_back(L'c');   
  
// display contents " a b c" using at   
    for (int i = 0; i < c1.size(); ++i)   
        System::Console::Write(" {0}", c1.at(i));   
    System::Console::WriteLine();   
  
// change an entry and redisplay   
    c1.at(1) = L'x';   
    for (int i = 0; i < c1.size(); ++i)   
        System::Console::Write(" {0}", c1[i]);   
    System::Console::WriteLine();   
    return (0);   
    }  
  
```  
  
  **a b c**  
 **una x c**   
## Requisiti  
 **Intestazione:**\<cliext\/vector\>  
  
 **Spazio dei nomi:** cliext  
  
## Vedere anche  
 [vettore](../dotnet/vector-stl-clr.md)   
 [vector::operator](../dotnet/vector-operator-stl-clr.md)