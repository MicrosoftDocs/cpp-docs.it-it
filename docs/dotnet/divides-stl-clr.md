---
title: "divides (STL/CLR) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "cliext::divides"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "divides (funzione) [STL/CLR]"
ms.assetid: 4c36026a-02ba-475d-af68-854599647f4b
caps.latest.revision: 16
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 14
---
# divides (STL/CLR)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La classe modello descrive un functor che, una volta chiamato, restituisce il primo argomento diviso per il secondo.  La si specifica un oggetto funzione in termini del relativo tipo di argomento.  
  
## Sintassi  
  
```  
template<typename Arg>  
    ref class divides  
    { // wrap operator()  
public:  
    typedef Arg first_argument_type;  
    typedef Arg second_argument_type;  
    typedef Arg result_type;  
    typedef Microsoft::VisualC::StlClr::BinaryDelegate<  
        first_argument_type, second_argument_type, result_type>  
        delegate_type;  
  
    divides();  
    divides(divides<Arg>% right);  
  
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
|divide|Costruisce il functor.|  
  
|Operatore|Descrizione|  
|---------------|-----------------|  
|operator\(\)|Calcola la funzione desiderata.|  
|operatore delegate\_type^\(\)|Esegue il cast di functor a un delegato.|  
  
## Note  
 La classe modello descrive un functor a due argomenti.  Definisce l'operatore `operator()` membro in modo che, quando l'oggetto viene chiamato come funzione, restituisce il primo argomento diviso per il secondo.  
  
 È anche possibile passare l'oggetto poiché un argomento di funzione il cui tipo è `delegate_type^` e verrà convertito in modo appropriato.  
  
## Esempio  
  
```  
// cliext_divides.cpp   
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
        c2.begin(), c3.begin(), cliext::divides<int>());   
    for each (int elem in c3)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
    return (0);   
    }  
  
```  
  
  **4 3**  
 **2 1**  
 **2 3**   
## Requisiti  
 **Intestazione:**\<cliext\/functional\>  
  
 **Spazio dei nomi:** cliext  
  
## Vedere anche  
 [modulo](../dotnet/modulus-stl-clr.md)   
 [multiplies](../dotnet/multiplies-stl-clr.md)