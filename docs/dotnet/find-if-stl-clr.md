---
title: find_if (STL/CLR) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- cliext::find_if
dev_langs:
- C++
helpviewer_keywords:
- find_if function [STL/CLR]
ms.assetid: fd0db2be-a1e1-417e-8eea-653b08c9577e
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: 99b2759e590ac596b6dcebd1ec54b585af9ee89a
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="findif-stlclr"></a>find_if (STL/CLR)
Individua la posizione della prima occorrenza di un elemento in un intervallo che soddisfa una condizione specificata.  
  
## <a name="syntax"></a>Sintassi  
  
```  
template<class _InIt, class _Pr> inline  
    _InIt find_if(_InIt _First, _InIt _Last, _Pr _Pred);  
```  
  
## <a name="remarks"></a>Note  
 Questa funzione si comporta come la funzione della libreria Standard C++ `find_if`. Per ulteriori informazioni, vedere [find_if](../standard-library/algorithm-functions.md#find_if).  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<cliext/algoritmo >  
  
 **Namespace:** cliext  
  
## <a name="see-also"></a>Vedere anche  
 [algorithm (STL/CLR)](../dotnet/algorithm-stl-clr.md)