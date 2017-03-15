---
title: "bind2nd (STL/CLR) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "cliext::bind2nd"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "bind2nd (funzione) [STL/CLR]"
ms.assetid: 457cebea-38e4-4466-a468-fe9eb138e80c
caps.latest.revision: 16
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 14
---
# bind2nd (STL/CLR)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Genera `binder2nd` per un argomento e un functor.  
  
## Sintassi  
  
```  
template<typename Fun,  
    typename Arg>  
    binder2nd<Fun> bind2nd(Fun% functor,  
        Arg right);  
```  
  
## Parametri di template  
 Argomento  
 Tipo dell'argomento.  
  
 Fun  
 Il tipo di functor.  
  
## Parametri di funzione  
 functor  
 Il functor cui eseguire il wrapping.  
  
 right  
 Il secondo argomento per eseguire il wrapping.  
  
## Note  
 La funzione di modello restituisce [binder2nd](../dotnet/binder2nd-stl-clr.md)`<Fun>(functor, right)`.  Utilizzarla come comodo mezzo per eseguire il wrapping di un functor a due argomenti e il secondo argomento in un functor di un solo argomento che viene chiamato con un primo argomento.  
  
## Esempio  
  
```  
// cliext_bind2nd.cpp   
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
    cliext::binder2nd<cliext::minus<int> > sub4(sub_op, 4);   
  
    cliext::transform(c1.begin(), c1.begin() + 2, c3.begin(),   
        sub4);   
    for each (int elem in c3)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// transform and display with function   
    cliext::transform(c1.begin(), c1.begin() + 2, c3.begin(),   
        bind2nd(sub_op, 4));   
    for each (int elem in c3)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
    return (0);   
    }  
  
```  
  
  **4 3**  
 **0 \-1**  
 **0 \-1**   
## Requisiti  
 **Intestazione:**\<cliext\/functional\>  
  
 **Spazio dei nomi:** cliext  
  
## Vedere anche  
 [binder2nd](../dotnet/binder2nd-stl-clr.md)