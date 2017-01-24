---
title: "binary_negate (STL/CLR) | Microsoft Docs"
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
  - "cliext::binary_negate"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "binary_negate (funzione) [STL/CLR]"
ms.assetid: 0c3b47eb-0f37-4cb2-b879-4c9f0e57d275
caps.latest.revision: 16
caps.handback.revision: 14
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# binary_negate (STL/CLR)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La classe modello descrive un functor che, una volta chiamato, restituisce il NOT logico del relativo functor archiviato a due argomenti.  Si usa per specificare un oggetto funzione in termini del relativo functor archiviato.  
  
## Sintassi  
  
```  
template<typename Fun>  
    ref class binary_negate  
    { // wrap operator()  
public:  
    typedef Fun stored_function_type;  
    typedef typename Fun::first_argument_type first_argument_type;  
    typedef typename Fun::second_argument_type second_argument_type;  
    typedef bool result_type;  
    typedef Microsoft::VisualC::StlClr::BinaryDelegate<  
        first_argument_type, second_argument_type, result_type>  
        delegate_type;  
  
    explicit binary_negate(Fun% functor);  
    binary_negate(binary_negate<Arg>% right);  
  
    result_type operator()(first_argument_type left,  
        second_argument_type right);  
    operator delegate_type^();  
    };  
```  
  
#### Parametri  
 Fun  
 Tipo del functor archiviato.  
  
## Funzioni del membro  
  
|Definizione del tipo|Descrizione|  
|--------------------------|-----------------|  
|delegate\_type|Tipo del delegato generico.|  
|first\_argument\_type|Tipo del primo argomento functor.|  
|result\_type|Tipo del risultato del functor.|  
|second\_argument\_type|Tipo del secondo argomento functor.|  
|stored\_function\_type|Tipo del functor.|  
  
|Membro|Descrizione|  
|------------|-----------------|  
|binary\_negate|Costruisce il functor.|  
  
|Operatore|Descrizione|  
|---------------|-----------------|  
|operator\(\)|Calcola la funzione desiderata.|  
|operatore delegate\_type^\(\)|Esegue il cast del functor ad un delegato.|  
  
## Note  
 La classe modello descrive un functor a due argomenti che memorizza un altro functor a due argomenti.  Definisce l'operatore membro `operator()` così, quando l'oggetto viene chiamato come funzione, restituisce il NOT logico del functor archiviato chiamato con i due argomenti.  
  
 È anche possibile passare l'oggetto come un argomento di funzione il cui tipo è `delegate_type^` ed esso verrà convertito nel modo appropriato.  
  
## Esempio  
  
```  
// cliext_binary_negate.cpp   
// compile with: /clr   
#include <cliext/algorithm>   
#include <cliext/functional>   
#include <cliext/vector>   
  
typedef cliext::vector<int> Myvector;   
int main()   
    {   
    Myvector c1;   
    c1.push_back(4);   
    c1.push_back(3);   
    Myvector c2;   
    c2.push_back(4);   
    c2.push_back(4);   
    Myvector c3(2, 0);   
  
// display initial contents " 4 3" and " 4 4"   
    for each (int elem in c1)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
    for each (int elem in c2)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// transform and display   
    cliext::less<int> less_op;   
  
    cliext::transform(c1.begin(), c1.begin() + 2,   
        c2.begin(), c3.begin(),   
        cliext::binary_negate<cliext::less<int> >(less_op));   
    for each (int elem in c3)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// transform and display with function   
    cliext::transform(c1.begin(), c1.begin() + 2,   
        c2.begin(), c3.begin(), cliext::not2(less_op));   
    for each (int elem in c3)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
    return (0);   
    }  
  
```  
  
  **4 3**  
 **4 4**  
 **1 0**  
 **1 0**   
## Requisiti  
 **Intestazione:** \<cliext\/functional\>  
  
 **Spazio dei nomi:** cliext  
  
## Vedere anche  
 [not2](../dotnet/not2-stl-clr.md)