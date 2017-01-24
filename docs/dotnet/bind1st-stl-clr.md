---
title: "bind1st (STL/CLR) | Microsoft Docs"
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
  - "cliext::bind1st"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "bind1st (funzione) [STL/CLR]"
ms.assetid: 03a04cef-60fb-4667-b22a-22a387adb028
caps.latest.revision: 14
caps.handback.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# bind1st (STL/CLR)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Genera un `binder1st` per un argomento e un functor.  
  
## Sintassi  
  
```  
template<typename Fun,  
    typename Arg>  
    binder1st<Fun> bind1st(Fun% functor,  
        Arg left);  
```  
  
## Parametri di template  
 Arg  
 Tipo dell'argomento.  
  
 Fun  
 Il tipo del functor.  
  
## Parametri di funzione  
 functor  
 Il functor su cui eseguire il wrapping.  
  
 left  
 Il primo argomento su cui eseguire il wrapping.  
  
## Note  
 La funzione di modello restituisce [binder1st](../dotnet/binder1st-stl-clr.md)`<Fun>(functor, left)`.  Utilizzarla come metodo conveniente per eseguire il wrapping di un functor a due argomenti e il suo primo argomento in un functor a un solo argomento che la chiama con un secondo argomento.  
  
## Esempio  
  
```  
// cliext_bind1st.cpp   
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
 **Intestazione:** \<cliext\/functional\>  
  
 **Spazio dei nomi:** cliext  
  
## Vedere anche  
 [binder1st](../dotnet/binder1st-stl-clr.md)