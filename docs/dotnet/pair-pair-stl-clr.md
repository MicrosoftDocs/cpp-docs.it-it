---
title: "pair::pair (STL/CLR) | Microsoft Docs"
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
  - "cliext::pair::pair"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "pair (membro) [STL/CLR]"
ms.assetid: 188035f3-bd37-4b46-96dd-5ceb9a16df79
caps.latest.revision: 8
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# pair::pair (STL/CLR)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Costruisce un oggetto coppia.  
  
## Sintassi  
  
```  
pair();  
pair(pair<Coll>% right);  
pair(pair<Coll>^ right);  
pair(Value1 val1, Value2 val2);  
```  
  
#### Parametri  
 right  
 Coppia da archiviare.  
  
 val1  
 Primo valore da archiviare.  
  
 val2  
 Secondo valore da archiviare.  
  
## Note  
 Il costruttore:  
  
 `pair();`  
  
 inizializza la coppia archiviata con i valori costruiti per impostazione predefinita.  
  
 Il costruttore:  
  
 `pair(pair<Value1, Value2>% right);`  
  
 inizializza la coppia archiviata con `right``.`[pair::first](../dotnet/pair-first-stl-clr.md) e `right``.`[pair::second](../dotnet/pair-second-stl-clr.md).  
  
 `pair(pair<Value1, Value2>^ right);`  
  
 inizializza la coppia archiviata con `right``->`[pair::first](../dotnet/pair-first-stl-clr.md) e `right``>`[pair::second](../dotnet/pair-second-stl-clr.md).  
  
 Il costruttore:  
  
 `pair(Value1 val1, Value2 val2);`  
  
 inizializza la coppia archiviata con `val1` e `val2`.  
  
## Esempio  
  
```  
// cliext_pair_construct.cpp   
// compile with: /clr   
#include <cliext/utility>   
  
int main()   
    {   
// construct an empty container   
    cliext::pair<wchar_t, int> c1;   
    System::Console::WriteLine("[{0}, {1}]",   
        c1.first == L'\0' ? "\\0" : "??", c1.second);   
  
// construct with a pair of values   
    cliext::pair<wchar_t, int> c2(L'x', 3);   
    System::Console::WriteLine("[{0}, {1}]", c2.first, c2.second);   
  
// construct by copying another pair   
    cliext::pair<wchar_t, int> c3(c2);   
    System::Console::WriteLine("[{0}, {1}]", c3.first, c3.second);   
  
// construct by copying a pair handle   
    cliext::pair<wchar_t, int> c4(%c3);   
    System::Console::WriteLine("[{0}, {1}]", c4.first, c4.second);   
  
    return (0);   
    }  
  
```  
  
  **\[\\0, 0\]**  
**\[x, 3\]**  
**\[x, 3\]**  
**\[x, 3\]**   
## Requisiti  
 **Intestazione:** \<cliext\/utility\>  
  
 **Spazio dei nomi:** cliext  
  
## Vedere anche  
 [pair](../dotnet/pair-stl-clr.md)