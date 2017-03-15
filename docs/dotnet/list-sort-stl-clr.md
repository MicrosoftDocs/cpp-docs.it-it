---
title: "list::sort (STL/CLR) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "cliext::list::sort"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "sort (membro) [STL/CLR]"
ms.assetid: f811d5f4-a19e-4194-8765-1e68097c52f0
caps.latest.revision: 15
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 13
---
# list::sort (STL/CLR)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Ordina la sequenza controllata.  
  
## Sintassi  
  
```  
void sort();  
template<typename Pred2>  
    void sort(Pred2 pred);  
```  
  
#### Parametri  
 pred  
 Operatore di confronto per le coppie di elementi.  
  
## Note  
 La prima funzione membro ridisporre gli elementi nella sequenza selezionata in modo che siano ordinati da `operator<` \-\- gli elementi non diminuiscono nel valore man mano che si procede con la sequenza.  Utilizzare questa funzione membro per ordinare la sequenza in ordine crescente.  
  
 La seconda funzione membro si comporta come il primo, con la differenza che la sequenza verrà ordinata da `pred` \-\- `pred``(X, Y)` è false per qualsiasi elemento `X` che segue l'elemento `Y` sequenza risultante.  Viene utilizzato per ordinare la sequenza in un ordine specificato da una funzione predicativa o da un delegato.  
  
 Entrambe le funzioni esegue un ordinamento stabile \-\- nessuna coppia di elementi della sequenza originale viene controllata invertita controllata sequenza risultante.  
  
## Esempio  
  
```  
// cliext_list_sort.cpp   
// compile with: /clr   
#include <cliext/list>   
  
int main()   
    {   
    cliext::list<wchar_t> c1;   
    c1.push_back(L'a');   
    c1.push_back(L'b');   
    c1.push_back(L'c');   
  
// display initial contents " a b c"   
    for each (wchar_t elem in c1)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// sort descending and redisplay   
    c1.sort(cliext::greater<wchar_t>());   
    for each (wchar_t elem in c1)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// sort ascending and redisplay   
    c1.sort();   
    for each (wchar_t elem in c1)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
    return (0);   
    }  
  
```  
  
  **a b c**  
 **c a b**  
 **a b c**   
## Requisiti  
 **Intestazione:**\<cliext\/list\>  
  
 **Spazio dei nomi:** cliext  
  
## Vedere anche  
 [list](../dotnet/list-stl-clr.md)   
 [list::merge](../dotnet/list-merge-stl-clr.md)   
 [list::reverse](../dotnet/list-reverse-stl-clr.md)   
 [list::splice](../dotnet/list-splice-stl-clr.md)   
 [list::unique](../dotnet/list-unique-stl-clr.md)