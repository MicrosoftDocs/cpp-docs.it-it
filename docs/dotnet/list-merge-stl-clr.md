---
title: "list::merge (STL/CLR) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "cliext::list::merge"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "merge (membro) [STL/CLR]"
ms.assetid: f8e93cd3-bd08-4086-859b-08a2899cc9a6
caps.latest.revision: 17
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 15
---
# list::merge (STL/CLR)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Unisce due sequenze controllate ordinate.  
  
## Sintassi  
  
```  
void merge(list<Value>% right);  
template<typename Pred2>  
    void merge(list<Value>% right, Pred2 pred);  
```  
  
#### Parametri  
 pred  
 Operatore di confronto per le coppie di elementi.  
  
 right  
 Contenitore da unire all'interno.  
  
## Note  
 La prima funzione membro rimuove tutti gli elementi dalla sequenza controllata da `right` e li inserisce nella sequenza selezionata.  Entrambe le sequenze in precedenza devono essere ordinate in base a `operator<` \-\- gli elementi non devono diminuire il valore man mano che si procede con qualsiasi sequenza.  La sequenza risultante viene ordinata da `operator<`.  Utilizzare questa funzione membro per unire due sequenze tale sezione in una sequenza che anche valorizzazioni.  
  
 La seconda funzione membro si comporta come il primo, con la differenza che le sequenze vengono ordinate in base a `pred` \-\- `pred``(X, Y)` deve essere false per qualsiasi elemento `X` che segue l'elemento `Y` sequenza.  È possibile utilizzarlo per unire due sequenze ordinate in base a una funzione predicativa o delegare specificata.  
  
 Entrambe le funzioni esegue un'unione stabile \-\- nessuna coppia di elementi in nessuna delle sequenze controllate originali viene annullata controllata sequenza risultante.  Inoltre, se una coppia di elementi `X` e `Y` sequenza selezionata risultante sarà ordine equivalente \-\- `!(X < Y) && !(X < Y)` \-\- un elemento dalla sequenza originale viene controllata prima di un elemento dalla sequenza controllata da `right`.  
  
## Esempio  
  
```  
// cliext_list_merge.cpp   
// compile with: /clr   
#include <cliext/list>   
  
typedef cliext::list<wchar_t> Mylist;   
int main()   
    {   
    cliext::list<wchar_t> c1;   
    c1.push_back(L'a');   
    c1.push_back(L'c');   
    c1.push_back(L'e');   
  
// display initial contents " a c e"   
    for each (wchar_t elem in c1)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
    cliext::list<wchar_t> c2;   
    c2.push_back(L'b');   
    c2.push_back(L'd');   
    c2.push_back(L'f');   
  
// display initial contents " b d f"   
    for each (wchar_t elem in c2)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// merge and display   
    cliext::list<wchar_t> c3(c1);   
    c3.merge(c2);   
    for each (wchar_t elem in c3)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
    System::Console::WriteLine("c2.size() = {0}", c2.size());   
  
// sort descending, merge descending, and redisplay   
    c1.sort(cliext::greater<wchar_t>());   
    for each (wchar_t elem in c1)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
    c3.sort(cliext::greater<wchar_t>());   
    for each (wchar_t elem in c3)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
    c3.merge(c1, cliext::greater<wchar_t>());   
    for each (wchar_t elem in c3)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
    System::Console::WriteLine("c1.size() = {0}", c1.size());   
    return (0);   
    }  
  
```  
  
  **c e**  
 **b d f**  
 **a b c d e f**  
**c2.size\(\) \= 0**  
 **la community europea a**  
 **d F\-E b e c**  
 **e F\-E d c c una a b**  
**c1.size\(\) \= 0**   
## Requisiti  
 **Intestazione:**\<cliext\/list\>  
  
 **Spazio dei nomi:** cliext  
  
## Vedere anche  
 [list](../dotnet/list-stl-clr.md)   
 [list::sort](../dotnet/list-sort-stl-clr.md)   
 [list::splice](../dotnet/list-splice-stl-clr.md)