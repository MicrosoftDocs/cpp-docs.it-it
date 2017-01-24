---
title: "not_equal_to (STL/CLR) | Microsoft Docs"
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
  - "cliext::not_equal_to"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "not_equal_to (funzione) [STL/CLR]"
ms.assetid: 1b66e0ca-eace-4672-8da9-ed16f8608bca
caps.latest.revision: 16
caps.handback.revision: 14
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# not_equal_to (STL/CLR)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La classe modello descrive un funtore che, una volta chiamato, restituirà true solo se il primo argomento non è uguale al secondo.  Si usa specificare un oggetto funzione in termini del relativo tipo di argomento.  
  
## Sintassi  
  
```  
template<typename Arg>  
    ref class not_equal_to  
    { // wrap operator()  
public:  
    typedef Arg first_argument_type;  
    typedef Arg second_argument_type;  
    typedef bool result_type;  
    typedef Microsoft::VisualC::StlClr::BinaryDelegate<  
        first_argument_type, second_argument_type, result_type>  
        delegate_type;  
  
    not_equal_to();  
    not_equal_to(not_equal_to<Arg>% right);  
  
    result_type operator()(first_argument_type left,  
        second_argument_type right);  
    operator delegate_type^();  
    };  
```  
  
#### Parametri  
 Arg  
 Il tipo degli argomenti.  
  
## Funzioni del membro  
  
|Definizione del tipo|Descrizione|  
|--------------------------|-----------------|  
|delegate\_type|Il tipo del delegato generico.|  
|first\_argument\_type|Il tipo del primo argomento funtore.|  
|result\_type|Tipo del risultato del funtore.|  
|second\_argument\_type|Il tipo del secondo argomento funtore.|  
  
|Membro|Descrizione|  
|------------|-----------------|  
|not\_equal\_to|Costruisce il funtore.|  
  
|Operatore|Descrizione|  
|---------------|-----------------|  
|operator\(\)|Calcola la funzione desiderata.|  
|operatore delegate\_type^|Esegue il cast del funtore ad un delegato.|  
  
## Note  
 La classe modello descrive un funtore con due argomenti.  Definisce l'operatore membro `operator()` in modo che, quando l'oggetto viene chiamato come funzione, restituire true solo se il primo argomento non è uguale al secondo.  
  
 È anche possibile passare l'oggetto come un argomento di funzione il cui tipo è `delegate_type^` ed esso verrà convertito nel modo appropriato.  
  
## Esempio  
  
```  
// cliext_not_equal_to.cpp   
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
    cliext::transform(c1.begin(), c1.begin() + 2,   
        c2.begin(), c3.begin(), cliext::not_equal_to<int>());   
    for each (int elem in c3)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
    return (0);   
    }  
  
```  
  
  **4 3**  
 **4 4**  
 **0 1**   
## Requisiti  
 **Intestazione:** \<cliext\/functional\>  
  
 **Spazio dei nomi:** cliext  
  
## Vedere anche  
 [equal\_to](../dotnet/equal-to-stl-clr.md)