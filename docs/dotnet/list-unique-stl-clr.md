---
title: "list::unique (STL/CLR) | Microsoft Docs"
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
  - "cliext::list::unique"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "unique (membro) [STL/CLR]"
ms.assetid: c3a29e4e-0ec1-4472-b050-7a9511037132
caps.latest.revision: 17
caps.handback.revision: 15
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# list::unique (STL/CLR)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Rimuove elementi adiacenti che superano un test specificato.  
  
## Sintassi  
  
```  
void unique();  
template<typename Pred2>  
    void unique(Pred2 pred);  
```  
  
#### Parametri  
 pred  
 Operatore di confronto per le coppie di elementi.  
  
## Note  
 La prima funzione membro eliminato dalla sequenza selezionata \(erases\) ogni elemento in cui si confronta uguale all'elemento precedente \-\- se l'elemento `X` precede l'elemento `Y` e `X == Y`, la funzione membro rimuove `Y`.  Utilizzarla per rimuovere tutte tranne una copia di ogni sottosequenza di elementi adiacenti che il confronto di uguale.  Si noti che se la sequenza selezionata è ordinata, ad esempio chiamando [list::sort](../dotnet/list-sort-stl-clr.md)`()`, la funzione membro lascia solo gli elementi con valori univoci. \(Il nome\).  
  
 La seconda funzione membro si comporta come il primo, ma eliminato ogni elemento `Y` che segue un elemento `X` per il quale `pred``(X, Y)`.  È possibile utilizzarlo per rimuovere tutte tranne una copia di ogni sottosequenza di elementi adiacenti che soddisfano una funzione predicativa o delegate specificato.  Si noti che se la sequenza selezionata è ordinata, ad esempio chiamando `sort(``pred``)`, la funzione membro lascia solo gli elementi che non dispongono di un ordine equivalente con altri elementi.  
  
## Esempio  
  
```  
// cliext_list_unique.cpp   
// compile with: /clr   
#include <cliext/list>   
  
int main()   
    {   
    cliext::list<wchar_t> c1;   
    c1.push_back(L'a');   
    c1.push_back(L'a');   
    c1.push_back(L'b');   
    c1.push_back(L'c');   
  
// display initial contents " a a b c"   
    for each (wchar_t elem in c1)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// display contents after unique   
    cliext::list<wchar_t> c2(c1);   
    c2.unique();   
    for each (wchar_t elem in c2)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// display contents after unique(not_equal_to)   
    c2 = c1;   
    c2.unique(cliext::not_equal_to<wchar_t>());   
    for each (wchar_t elem in c2)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
    return (0);   
    }  
  
```  
  
  **a b c**  
 **a b c**  
 **una a**   
## Requisiti  
 **Intestazione:**\<cliext\/list\>  
  
 **Spazio dei nomi:** cliext  
  
## Vedere anche  
 [list](../dotnet/list-stl-clr.md)   
 [list::remove](../dotnet/list-remove-stl-clr.md)   
 [list::remove\_if](../dotnet/list-remove-if-stl-clr.md)   
 [list::sort](../dotnet/list-sort-stl-clr.md)