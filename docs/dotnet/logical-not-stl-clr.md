---
title: "logical_not (STL/CLR) | Microsoft Docs"
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
  - "cliext::logical_not"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "logical_not (funzione) [STL/CLR]"
ms.assetid: 32a2c6e2-1c58-41ac-8827-f3ee5adfe81d
caps.latest.revision: 18
caps.handback.revision: 16
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# logical_not (STL/CLR)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La classe modello descrive un funtore che, una volta chiamato, restituisce true solo se entrambi i suoi test di argomento restituiscono false.  Si usa specificare un oggetto funzione in termini del relativo tipo di argomento.  
  
## Sintassi  
  
```  
template<typename Arg>  
    ref class logical_not  
    { // wrap operator()  
public:  
    typedef Arg argument_type;  
    typedef bool result_type;  
    typedef Microsoft::VisualC::StlClr::UnaryDelegate<  
        argument_type, result_type>  
        delegate_type;  
  
    logical_not();  
    logical_not(logical_not<Arg> %right);  
  
    result_type operator()(argument_type left);  
    operator delegate_type^();  
    };  
```  
  
#### Parametri  
 Arg  
 Il tipo degli argomenti.  
  
## Funzioni del membro  
  
|Definizione dei tipi|Descrizione|  
|--------------------------|-----------------|  
|argument\_type|Tipo dell'argomento del funtore.|  
|delegate\_type|Tipo dell'argomento del delegato generico.|  
|result\_type|Tipo del risultato del funtore.|  
  
|Membro|Descrizione|  
|------------|-----------------|  
|logical\_not|Costruisce il funtore.|  
  
|Operatore|Descrizione|  
|---------------|-----------------|  
|operator\(\)|Calcola la funzione desiderata.|  
|operatore delegate\_type^|Esegue il cast del funtore ad un delegato.|  
  
## Note  
 La classe modello descrive un funtore con un solo argomento.  Definisce l'operatore membro `operator()` in modo che, quando l'oggetto viene chiamato come funzione, restituisca true solo se i test dell'argomento restituiscono false.  
  
 È anche possibile passare l'oggetto come un argomento di funzione il cui tipo è `delegate_type^` ed esso verrà convertito nel modo appropriato.  
  
## Esempio  
  
```  
// cliext_logical_not.cpp   
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
    cliext::transform(c1.begin(), c1.begin() + 2,   
        c3.begin(), cliext::logical_not<int>());   
    for each (int elem in c3)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
    return (0);   
    }  
  
```  
  
  **4 0**  
 **0 1**   
## Requisiti  
 **Intestazione:** \<cliext\/functional\>  
  
 **Spazio dei nomi:** cliext  
  
## Vedere anche  
 [negate](../dotnet/negate-stl-clr.md)