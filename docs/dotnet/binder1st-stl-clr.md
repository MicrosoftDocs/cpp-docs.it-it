---
title: "binder1st (STL/CLR) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "cliext::binder1st"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "binder1st (funzione) [STL/CLR]"
ms.assetid: a989c9cc-a485-45d9-bd19-519018e6974b
caps.latest.revision: 18
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 16
---
# binder1st (STL/CLR)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La classe modello descrive un functor di un solo argomento che, una volta chiamato, restituisce il relativo functor archiviato a due argomenti chiamato dal primo argomento archiviato e il secondo argomento fornito.  La si specifica un oggetto funzione in termini di relativo functor archiviato.  
  
## Sintassi  
  
```  
template<typename Fun>  
    ref class binder1st  
    { // wrap operator()  
public:  
    typedef Fun stored_function_type;  
    typedef typename Fun::first_argument_type first_argument_type;  
    typedef typename Fun::second_argument_type second_argument_type;  
    typedef typename Fun:result_type result_type;  
    typedef Microsoft::VisualC::StlClr::UnaryDelegate<  
        second_argument_type, result_type>  
        delegate_type;  
  
    binder1st(Fun% functor, first_argument_type left);  
    binder1st(binder1st<Arg>% right);  
  
    result_type operator()(second_argument_type right);  
    operator delegate_type^();  
    };  
```  
  
#### Parametri  
 Fun  
 Il tipo di functor archiviato.  
  
## Funzioni del membro  
  
|Definizione del tipo|Descrizione|  
|--------------------------|-----------------|  
|delegate\_type|Il tipo di delegato generico.|  
|first\_argument\_type|Il tipo del primo argomento di functor.|  
|result\_type|Il tipo di risultato di functor.|  
|second\_argument\_type|Il tipo di argomento di functor secondo.|  
|stored\_function\_type|Il tipo di functor.|  
  
|Membro|Descrizione|  
|------------|-----------------|  
|binder1st|Costruisce il functor.|  
  
|Operatore|Descrizione|  
|---------------|-----------------|  
|operator\(\)|Calcola la funzione desiderata.|  
|operatore delegate\_type^\(\)|Esegue il cast di functor a un delegato.|  
  
## Note  
 La classe modello descrive un functor di un solo argomento che memorizza un functor a due argomenti e un primo argomento.  Definisce l'operatore `operator()` membro in modo che, quando l'oggetto viene chiamato come funzione, restituire il risultato della chiamata del functor archiviato con il primo argomento archiviato e il secondo argomento fornito.  
  
 È anche possibile passare l'oggetto poiché un argomento di funzione il cui tipo è `delegate_type^` e verrà convertito in modo appropriato.  
  
## Esempio  
  
```  
// cliext_binder1st.cpp   
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
    Myvector c3(2, 0);   
  
// display initial contents " 4 3"   
    for each (int elem in c1)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// transform and display   
    cliext::minus<int> sub_op;   
    cliext::binder1st<cliext::minus<int> > subfrom3(sub_op, 3);   
  
    cliext::transform(c1.begin(), c1.begin() + 2, c3.begin(),   
        subfrom3);   
    for each (int elem in c3)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// transform and display with function   
    cliext::transform(c1.begin(), c1.begin() + 2, c3.begin(),   
        bind1st(sub_op, 3));   
    for each (int elem in c3)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
    return (0);   
    }  
  
```  
  
  **4 3**  
 **\-1 0**  
 **\-1 0**   
## Requisiti  
 **Intestazione:**\<cliext\/functional\>  
  
 **Spazio dei nomi:** cliext  
  
## Vedere anche  
 [bind1st](../dotnet/bind1st-stl-clr.md)