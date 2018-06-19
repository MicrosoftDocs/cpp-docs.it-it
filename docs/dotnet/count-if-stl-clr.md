---
title: count_if (STL/CLR) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-cli
ms.topic: reference
f1_keywords:
- cliext::count_if
dev_langs:
- C++
helpviewer_keywords:
- count_if function [STL/CLR]
ms.assetid: a8aa149d-20b8-4b3f-917b-1ec66f178a5d
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: e17e68471f42234d5f09c8c4792324765c5c0981
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33105270"
---
# <a name="countif-stlclr"></a>count_if (STL/CLR)
Restituisce il numero di elementi di un intervallo i cui valori corrispondono a una condizione specificata.  
  
## <a name="syntax"></a>Sintassi  
  
```  
template<class _InIt, class _Pr> inline  
    typename iterator_traits<_InIt>::difference_type  
        count_if(_InIt _First, _InIt _Last, _Pr _Pred);  
```  
  
## <a name="remarks"></a>Note  
 Questa funzione si comporta come la funzione della libreria Standard C++ `count_if`. Per ulteriori informazioni, vedere [count_if](../standard-library/algorithm-functions.md#count_if).  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<cliext/algoritmo >  
  
 **Namespace:** cliext  
  
## <a name="see-also"></a>Vedere anche  
 [algorithm (STL/CLR)](../dotnet/algorithm-stl-clr.md)