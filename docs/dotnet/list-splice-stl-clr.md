---
title: "list::splice (STL/CLR) | Microsoft Docs"
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
  - "cliext::list::splice"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "splice (membro) [STL/CLR]"
ms.assetid: ebc424b9-8341-4a88-b101-86d56324f5ac
caps.latest.revision: 17
caps.handback.revision: 15
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# list::splice (STL/CLR)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Collegamenti di Restitch tra i nodi.  
  
## Sintassi  
  
```  
void splice(iterator where, list<Value>% right);  
void splice(iterator where, list<Value>% right,  
    iterator first);  
void splice(iterator where, list<Value>% right,  
    iterator first, iterator last);  
```  
  
#### Parametri  
 innanzitutto  
 Avvio dell'intervallo da impiombare.  
  
 last  
 Fine di intervallo da impiombare.  
  
 right  
 Contenitore da impiombare da.  
  
 where  
 Dove nel contenitore impiombare prima.  
  
## Note  
 La prima funzione membro incollare la sequenza controllata da `right` prima dell'elemento nella sequenza indicata controllata da `where`.  Elimina inoltre tutti gli elementi da `right`. \(`%``right` non deve essere uguale `this`\). Utilizzarla per impiombare qualsiasi un elenco a un altro.  
  
 La seconda funzione membro rimuove l'elemento puntato da `first` sequenza controllata da `right` e lo inserisce prima dell'elemento nella sequenza indicata controllata da `where`. Se `where` `==` `first` `||` `where` `== ++``first`, nessuna modifica avviene.\) È possibile utilizzarlo per impiombare un singolo elemento di un elenco in un altro.  
  
 La terza funzione membro inserisce il sottosistema definito da `[``first``,` `last``)` dalla sequenza controllata da `right` prima dell'elemento nella sequenza indicata controllata da `where`.  Rimuove anche il sottosistema dalla sequenza originale controllata da `right`. Se `right` `==` `this`, l'intervallo `[``first``,` `last``)` non deve includere l'elemento puntato da `where`\). È possibile utilizzarlo per impiombare una sottosequenza di zero o più elementi da un elenco a un altro.  
  
## Esempio  
  
```  
// cliext_list_splice.cpp   
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
  
// splice to a new list   
    cliext::list<wchar_t> c2;   
    c2.splice(c2.begin(), c1);   
    System::Console::WriteLine("c1.size() = {0}", c1.size());   
    for each (wchar_t elem in c2)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// return one element   
    c1.splice(c1.end(), c2, c2.begin());   
    for each (wchar_t elem in c1)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
    for each (wchar_t elem in c2)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// return remaining elements   
    c1.splice(c1.begin(), c2, c2.begin(), c2.end());   
    for each (wchar_t elem in c1)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
    System::Console::WriteLine("c2.size() = {0}", c2.size());   
    return (0);   
    }  
  
```  
  
  **a b c**  
**c1.size\(\) \= 0**  
 **a b c**  
 **a**  
 **b c**  
 **b e c**  
**c2.size\(\) \= 0**   
## Requisiti  
 **Intestazione:**\<cliext\/list\>  
  
 **Spazio dei nomi:** cliext  
  
## Vedere anche  
 [list](../dotnet/list-stl-clr.md)   
 [list::assign](../dotnet/list-assign-stl-clr.md)   
 [list::insert](../dotnet/list-insert-stl-clr.md)   
 [list::merge](../dotnet/list-merge-stl-clr.md)