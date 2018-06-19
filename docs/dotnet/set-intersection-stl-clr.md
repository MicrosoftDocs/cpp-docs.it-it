---
title: set_intersection (STL/CLR) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-cli
ms.topic: reference
f1_keywords:
- cliext::set_intersection
dev_langs:
- C++
helpviewer_keywords:
- set_intersection function [STL/CLR]
ms.assetid: 8a799b20-55a5-4fba-a9c1-a48597cbdae6
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: 3b94978b2a630a6c54b8252b64b1c67c0110a50e
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33162382"
---
# <a name="setintersection-stlclr"></a>set_intersection (STL/CLR)
Unisce tutti gli elementi appartenenti a entrambi gli intervalli di origine ordinati in un unico intervallo di destinazione ordinato in cui il criterio di ordinamento può essere specificato da un predicato binario.  
  
## <a name="syntax"></a>Sintassi  
  
```  
template<class _InIt1, class _InIt2, class _OutIt> inline  
    _OutIt set_intersection(_InIt1 _First1, _InIt1 _Last1,  
        _InIt2 _First2, _InIt2 _Last2, _OutIt _Dest);  
template<class _InIt1, class _InIt2, class _OutIt, class _Pr> inline  
    _OutIt set_intersection(_InIt1 _First1, _InIt1 _Last1,  
        _InIt2 _First2, _InIt2 _Last2, _OutIt _Dest, _Pr _Pred);  
```  
  
## <a name="remarks"></a>Note  
 Questa funzione si comporta come la funzione della libreria Standard C++ `set_intersection`. Per ulteriori informazioni, vedere [set_intersection](../standard-library/algorithm-functions.md#set_intersection).  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<cliext/algoritmo >  
  
 **Namespace:** cliext  
  
## <a name="see-also"></a>Vedere anche  
 [algorithm (STL/CLR)](../dotnet/algorithm-stl-clr.md)