---
title: adjacent_difference (STL/CLR) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-cli
ms.topic: reference
f1_keywords:
- cliext::adjacent_difference
dev_langs:
- C++
helpviewer_keywords:
- adjacent_difference function
ms.assetid: 2b462e2e-b8f2-4b2e-9b87-5f688d8da9f4
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: fe926d375103ef0f9d1ac5afa56a52742512ace7
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33103931"
---
# <a name="adjacentdifference-stlclr"></a>adjacent_difference (STL/CLR)
Calcola le differenze successive tra ogni elemento e il relativo predecessore in un intervallo di input e restituisce i risultati in un intervallo di destinazione oppure calcola il risultato di una procedura generalizzata in cui l'operazione di differenza viene sostituita da un'altra operazione binaria specificata.  
  
## <a name="syntax"></a>Sintassi  
  
```  
template<class _InIt, class _OutIt> inline  
    _OutIt adjacent_difference(_InIt _First, _InIt _Last,  
        _OutIt _Dest);  
template<class _InIt, class _OutIt, class _Fn2> inline  
    _OutIt adjacent_difference(_InIt _First, _InIt _Last,  
        _OutIt _Dest, _Fn2 _Func);  
```  
  
## <a name="remarks"></a>Note  
 Questa funzione si comporta come la funzione numerica della libreria Standard C++ `adjacent_difference`. Per ulteriori informazioni, vedere [adjacent_difference](../standard-library/numeric-functions.md#adjacent_difference).  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<cliext/numeric >  
  
 **Namespace:** cliext  
  
## <a name="see-also"></a>Vedere anche  
 [numeric (STL/CLR)](../dotnet/numeric-stl-clr.md)