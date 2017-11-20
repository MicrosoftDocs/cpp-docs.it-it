---
title: lower_bound (STL/CLR) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords: cliext::lower_bound
dev_langs: C++
helpviewer_keywords: lower_bound function [STL/CLR]
ms.assetid: 841b70b5-1f54-4ecf-8faa-7dda32a24c54
caps.latest.revision: "4"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 44ba30cf55df27b08d47b7dc7d540fcefced266d
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="lowerbound-stlclr"></a>lower_bound (STL/CLR)
Trova la posizione del primo elemento in un intervallo ordinato con un valore inferiore o equivalente a un valore specificato, in cui il criterio di ordinamento può essere specificato da un predicato binario.  
  
## <a name="syntax"></a>Sintassi  
  
```  
template<class _FwdIt, class _Ty> inline  
    _FwdIt lower_bound(_FwdIt _First, _FwdIt _Last, const _Ty% _Val);  
template<class _FwdIt, class _Ty, class _Pr> inline  
    _FwdIt lower_bound(_FwdIt _First, _FwdIt _Last,  
        const _Ty% _Val, _Pr _Pred);  
```  
  
## <a name="remarks"></a>Note  
 Questa funzione si comporta come la funzione della libreria Standard C++ `lower_bound`. Per ulteriori informazioni, vedere [lower_bound](../standard-library/algorithm-functions.md#lower_bound).  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<cliext/algoritmo >  
  
 **Namespace:** cliext  
  
## <a name="see-also"></a>Vedere anche  
 [algorithm (STL/CLR)](../dotnet/algorithm-stl-clr.md)