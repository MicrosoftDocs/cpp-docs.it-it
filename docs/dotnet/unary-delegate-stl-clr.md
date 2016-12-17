---
title: "unary_delegate (STL/CLR) | Microsoft Docs"
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
  - "cliext::unary_delegate"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "unary_delegate (funzione) [STL/CLR]"
ms.assetid: b3ee253c-98e8-466e-a272-505e47aed061
caps.latest.revision: 14
caps.handback.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# unary_delegate (STL/CLR)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La classe genereic descrive un delegato di un solo argomento.  La si specifica un delegato in termini dei relativi argomenti e i tipi restituiti.  
  
## Sintassi  
  
```  
generic<typename Arg,  
    typename Result>  
    delegate Result unary_delegate(Arg);  
```  
  
#### Parametri  
 Argomento  
 Tipo dell'argomento.  
  
 Risultato  
 Tipo restituito.  
  
## Note  
 Il delegato genereic descrive una funzione di un solo argomento.  
  
 Si noti che per:  
  
 `unary_delegare<int, int> Fun1;`  
  
 `unary_delegare<int, int> Fun2;`  
  
 i tipi `Fun1` e `Fun2` sono sinonimi, mentre per:  
  
 `delegate int Fun1(int);`  
  
 `delegate int Fun2(int);`  
  
 non sono dello stesso tipo.  
  
## Esempio  
  
```  
// cliext_unary_delegate.cpp   
// compile with: /clr   
#include <cliext/functional>   
  
int hash_val(wchar_t val)   
    {   
    return ((val * 17 + 31) % 67);   
    }   
  
typedef cliext::unary_delegate<wchar_t, int> Mydelegate;   
int main()   
    {   
    Mydelegate^ myhash = gcnew Mydelegate(&hash_val);   
  
    System::Console::WriteLine("hash(L'a') = {0}", myhash(L'a'));   
    System::Console::WriteLine("hash(L'b') = {0}", myhash(L'b'));   
    return (0);   
    }  
  
```  
  
  **hash \(L'a\) \= 5**  
**hash \(L'b\) \= 22**   
## Requisiti  
 **Intestazione:**\<cliext\/functional\>  
  
 **Spazio dei nomi:** cliext  
  
## Vedere anche  
 [binary\_delegate](../dotnet/binary-delegate-stl-clr.md)   
 [binary\_delegate\_noreturn](../dotnet/binary-delegate-noreturn-stl-clr.md)   
 [unary\_delegate\_noreturn](../dotnet/unary-delegate-noreturn-stl-clr.md)