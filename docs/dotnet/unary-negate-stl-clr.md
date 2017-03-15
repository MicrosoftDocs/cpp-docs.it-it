---
title: "unary_negate (STL/CLR) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "cliext::unary_negate"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "unary_negate (funzione) [STL/CLR]"
ms.assetid: 83bbdd86-199c-4451-9f70-72f9ade2264a
caps.latest.revision: 17
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 15
---
# unary_negate (STL/CLR)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La classe modello descrive un functor che, una volta chiamato, restituisce il NOT logico del relativo functor archiviato di un solo argomento.  La si specifica un oggetto funzione in termini di relativo functor archiviato.  
  
## Sintassi  
  
```  
template<typename Fun>  
    ref class unary_negate  
    { // wrap operator()  
public:  
    typedef Fun stored_function_type;  
    typedef typename Fun::argument_type argument_type;  
    typedef bool result_type;  
    typedef Microsoft::VisualC::StlClr::UnaryDelegate<  
        argument_type, result_type>  
        delegate_type;  
  
    unary_negate(Fun% functor);  
    unary_negate(unary_negate<Fun>% right);  
  
    result_type operator()(argument_type left);  
    operator delegate_type^();  
    };  
```  
  
#### Parametri  
 Fun  
 Il tipo di functor archiviato.  
  
## Funzioni del membro  
  
|Definizione del tipo|Descrizione|  
|--------------------------|-----------------|  
|argument\_type|Il tipo di argomento di functor.|  
|delegate\_type|Il tipo di delegato generico.|  
|result\_type|Il tipo di risultato di functor.|  
  
|Membro|Descrizione|  
|------------|-----------------|  
|unary\_negate|Costruisce il functor.|  
  
|Operatore|Descrizione|  
|---------------|-----------------|  
|operator\(\)|Calcola la funzione desiderata.|  
|delegate\_type^|Esegue il cast di functor a un delegato.|  
  
## Note  
 La classe modello descrive un functor di un solo argomento che memorizza un altro functor di un solo argomento.  Definisce l'operatore `operator()` membro in modo che, quando l'oggetto viene chiamato come funzione, restituire il NOT logico di functor archiviato chiamato con l'argomento.  
  
 È anche possibile passare l'oggetto poiché un argomento di funzione il cui tipo è `delegate_type^` e verrà convertito in modo appropriato.  
  
## Esempio  
  
```  
// cliext_unary_negate.cpp   
// compile with: /clr   
#include <cliext/algorithm>   
#include <cliext/functional>   
#include <cliext/vector>   
  
typedef cliext::vector<int> Myvector;   
int main()   
    {   
    Myvector c1;   
    c1.push_back(4);   
    c1.push_back(0);   
    Myvector c3(2, 0);   
  
// display initial contents " 4 0"   
    for each (int elem in c1)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// transform and display   
    cliext::logical_not<int> not_op;   
  
    cliext::transform(c1.begin(), c1.begin() + 2, c3.begin(),   
        cliext::unary_negate<cliext::logical_not<int> >(not_op));   
    for each (int elem in c3)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// transform and display with function   
    cliext::transform(c1.begin(), c1.begin() + 2, c3.begin(),   
        cliext::not1(not_op));   
    for each (int elem in c3)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
    return (0);   
    }  
  
```  
  
  **4 0**  
 **1 0**  
 **1 0**   
## Requisiti  
 **Intestazione:**\<cliext\/functional\>  
  
 **Spazio dei nomi:** cliext  
  
## Vedere anche  
 [not1](../dotnet/not1-stl-clr.md)