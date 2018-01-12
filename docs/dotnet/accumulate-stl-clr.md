---
title: accumulare (STL/CLR) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords: cliext::accumulate
dev_langs: C++
helpviewer_keywords: accumulate function [STL/CLR]
ms.assetid: b80e1ef1-1858-4c1d-817b-c42ad1f17a2f
caps.latest.revision: "4"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: d9fefc3e7e7a2838891488996518b405972ba0f8
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="accumulate-stlclr"></a>accumulate (STL/CLR)
Calcola la somma di tutti gli elementi in un intervallo specificato, incluso il valore iniziale, elaborando le somme parziali successive oppure calcola il risultato dei risultati parziali successivi ottenuti analogamente tramite l'uso di un'operazione binaria specificata diversa da quella di somma.  
  
## <a name="syntax"></a>Sintassi  
  
```  
template<class _InIt, class _Ty> inline  
    _Ty accumulate(_InIt _First, _InIt _Last, _Ty _Val);  
template<class _InIt, class _Ty, class _Fn2> inline  
    _Ty accumulate(_InIt _First, _InIt _Last, _Ty _Val, _Fn2 _Func);  
```  
  
## <a name="remarks"></a>Note  
 Questa funzione si comporta come la funzione numerica della libreria Standard C++ `accumulate`. Per ulteriori informazioni, vedere [accumulare](../standard-library/numeric-functions.md#accumulate).  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<cliext/numeric >  
  
 **Namespace:** cliext  
  
## <a name="see-also"></a>Vedere anche  
 [numeric (STL/CLR)](../dotnet/numeric-stl-clr.md)