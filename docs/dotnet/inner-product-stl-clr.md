---
title: "inner_product (STL/CLR) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "cliext::inner_product"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "inner_product (funzione) [STL/CLR]"
ms.assetid: 97d7a507-7494-4216-aedf-0546ed0edb3f
caps.latest.revision: 4
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 4
---
# inner_product (STL/CLR)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Calcola la somma del prodotto è costituito da due intervalli e aggiunta a un valore iniziale specificato o calcola il risultato di una routine generalizzata in cui la somma e le operazioni binari del prodotto vengono sostituite da altre operazioni binarie specificate.  
  
## Sintassi  
  
```  
template<class _InIt1, class _InIt2, class _Ty> inline  
    _Ty inner_product(_InIt1 _First1, _InIt1 _Last1, _InIt2 _First2,  
        _Ty _Val);  
template<class _InIt1, class _InIt2, class _Ty, class _Fn21,  
       class _Fn22> inline  
    _Ty inner_product(_InIt1 _First1, _InIt1 _Last1, _InIt2 _First2,  
        _Ty _Val, _Fn21 _Func1, _Fn22 _Func2);  
```  
  
## Note  
 Questa funzione si comporta lo stesso della funzione numerica `inner_product`STL.  Per ulteriori informazioni, vedere [inner\_product](../Topic/inner_product.md).  
  
## Requisiti  
 **Intestazione:**\<cliext\/numeric\>  
  
 **Spazio dei nomi:** cliext  
  
## Vedere anche  
 [numeric](../dotnet/numeric-stl-clr.md)