---
title: "plus (STL/CLR) | Microsoft Docs"
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
  - "cliext::plus"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "plus (funzione) [STL/CLR]"
ms.assetid: 7ec8228a-72c7-4e47-9e63-23525d4a5416
caps.latest.revision: 16
caps.handback.revision: 14
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# plus (STL/CLR)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La classe modello descrive un functor che, una volta chiamato, restituisce il primo argomento più il secondo.  La si specifica un oggetto funzione in termini del relativo tipo di argomento.  
  
## Sintassi  
  
```  
template<typename Arg>  
    ref class plus  
    { // wrap operator()  
public:  
    typedef Arg first_argument_type;  
    typedef Arg second_argument_type;  
    typedef Arg result_type;  
    typedef Microsoft::VisualC::StlClr::BinaryDelegate<  
        first_argument_type, second_argument_type, result_type>  
        delegate_type;  
  
    plus();  
    plus(plus<Arg>% right);  
  
    result_type operator()(first_argument_type left,  
        second_argument_type right);  
    operator delegate_type^();  
    };  
```  
  
#### Parametri  
 Argomento  
 Il tipo degli argomenti e il valore restituito.  
  
## Funzioni del membro  
  
|Definizione del tipo|Descrizione|  
|--------------------------|-----------------|  
|delegate\_type|Il tipo di delegato generico.|  
|first\_argument\_type|Il tipo del primo argomento di functor.|  
|result\_type|Il tipo di risultato di functor.|  
|second\_argument\_type|Il tipo di argomento di functor secondo.|  
  
|Membro|Descrizione|  
|------------|-----------------|  
|plus|Costruisce il functor.|  
  
|Operatore|Descrizione|  
|---------------|-----------------|  
|operator\(\)|Calcola la funzione desiderata.|  
|delegate\_type^ dell'operatore|Esegue il cast di functor a un delegato.|  
  
## Note  
 La classe modello descrive un functor a due argomenti.  Definisce l'operatore `operator()` membro in modo che, quando l'oggetto viene chiamato come funzione, restituisce il primo argomento più il secondo.  
  
 È anche possibile passare l'oggetto poiché un argomento di funzione il cui tipo è `delegate_type^` e verrà convertito in modo appropriato.  
  
## Esempio  
  
```  
// cliext_plus.cpp   
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
    c2.push_back(2);   
    c2.push_back(1);   
    Myvector c3(2, 0);   
  
// display initial contents " 4 3" and " 2 1"   
    for each (int elem in c1)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
    for each (int elem in c2)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// transform and display   
    cliext::transform(c1.begin(), c1.begin() + 2,   
        c2.begin(), c3.begin(), cliext::plus<int>());   
    for each (int elem in c3)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
    return (0);   
    }  
  
```  
  
  **4 3**  
 **2 1**  
 **6 4**   
## Requisiti  
 **Intestazione:**\<cliext\/functional\>  
  
 **Spazio dei nomi:** cliext  
  
## Vedere anche  
 [minus](../dotnet/minus-stl-clr.md)