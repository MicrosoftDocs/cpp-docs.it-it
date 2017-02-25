---
title: "make_pair (STL/CLR) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "cliext::make_pair"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "make_pair (funzione) [STL/CLR]"
ms.assetid: 74733f2c-97b0-4d69-b431-5ab8f0de9e3e
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 6
---
# make_pair (STL/CLR)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Fare `pair` da una coppia di valori.  
  
## Sintassi  
  
```  
template<typename Value1,  
    typename Value2>  
    pair<Value1, Value2> make_pair(Value1 first, Value2 second);  
```  
  
#### Parametri  
 Value1  
 Il tipo del valore prima eseguito il wrapping.  
  
 Value2  
 Il tipo del secondo valore trasformato.  
  
 innanzitutto  
 Primo valore di cui eseguire il wrapping.  
  
 in secondo luogo  
 Secondo valore di cui eseguire il wrapping.  
  
## Note  
 La funzione di modello restituisce `pair<``Value1``,` `Value2``>(``first``,` `second``)`.  Utilizzarla per costruire un oggetto di `pair``<``Value1``,` `Value2``>` da una coppia di valori.  
  
## Esempio  
  
```  
// cliext_make_pair.cpp   
// compile with: /clr   
#include <cliext/utility>   
  
int main()   
    {   
    cliext::pair<wchar_t, int> c1(L'x', 3);   
    System::Console::WriteLine("[{0}, {1}]", c1.first, c1.second);   
  
    c1 = cliext::make_pair(L'y', 4);   
    System::Console::WriteLine("[{0}, {1}]", c1.first, c1.second);   
    return (0);   
    }  
  
```  
  
  **\[x, 3\]**  
**\[y, 4\]**   
## Requisiti  
 **Intestazione:**\<cliext\/utility\>  
  
 **Spazio dei nomi:** cliext  
  
## Vedere anche  
 [range\_adapter](../dotnet/range-adapter-stl-clr.md)