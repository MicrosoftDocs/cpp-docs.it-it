---
title: remove_copy_if (STL/CLR) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords: cliext::remove_copy_if
dev_langs: C++
helpviewer_keywords: remove_copy_if function [STL/CLR]
ms.assetid: 5307f5fe-b6bb-4968-8da1-fea84ab96655
caps.latest.revision: "4"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: 11e4b7086e9e61f6ac04edc06e8f86ddf7dc849b
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="removecopyif-stlclr"></a>remove_copy_if (STL/CLR)
Copia gli elementi di un intervallo di origine in un intervallo di destinazione, ad eccezione degli elementi che soddisfano un predicato, senza alterare l'ordine degli elementi rimanenti e restituendo la fine di un nuovo intervallo di destinazione.  
  
## <a name="syntax"></a>Sintassi  
  
```  
template<class _InIt, class _OutIt, class _Pr> inline  
    _OutIt remove_copy_if(_InIt _First, _InIt _Last, _OutIt _Dest,  
        _Pr _Pred);  
```  
  
## <a name="remarks"></a>Note  
 Questa funzione si comporta come la funzione della libreria Standard C++ `remove_copy_if`. Per ulteriori informazioni, vedere [remove_copy_if](../standard-library/algorithm-functions.md#remove_copy_if).  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<cliext/algoritmo >  
  
 **Namespace:** cliext  
  
## <a name="see-also"></a>Vedere anche  
 [algorithm (STL/CLR)](../dotnet/algorithm-stl-clr.md)