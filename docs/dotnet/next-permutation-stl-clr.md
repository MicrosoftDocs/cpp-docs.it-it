---
title: next_permutation (STL/CLR) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-cli
ms.topic: reference
f1_keywords:
- cliext::next_permutation
dev_langs:
- C++
helpviewer_keywords:
- next_permutation function [STL/CLR]
ms.assetid: e36e821f-4b8d-461b-8074-69cd0175ccec
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: 36b21ecabb9ab44f1b5c233cffe6567dc8a99eb8
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33133766"
---
# <a name="nextpermutation-stlclr"></a>next_permutation (STL/CLR)
Riordina gli elementi in un intervallo in modo che l'ordine originale venga sostituito dalla maggior permutazione a livello lessicografico successiva, se esiste, dove il senso di successivo può essere specificato con un predicato binario.  
  
## <a name="syntax"></a>Sintassi  
  
```  
template<class _BidIt> inline  
    bool next_permutation(_BidIt _First, _BidIt _Last);  
template<class _BidIt, class _Pr> inline  
    bool next_permutation(_BidIt _First, _BidIt _Last, _Pr _Pred);  
```  
  
## <a name="remarks"></a>Note  
 Questa funzione si comporta come la funzione della libreria Standard C++ `next_permutation`. Per ulteriori informazioni, vedere [next_permutation](../standard-library/algorithm-functions.md#next_permutation).  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<cliext/algoritmo >  
  
 **Namespace:** cliext  
  
## <a name="see-also"></a>Vedere anche  
 [algorithm (STL/CLR)](../dotnet/algorithm-stl-clr.md)