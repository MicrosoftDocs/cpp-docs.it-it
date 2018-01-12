---
title: partizione (STL/CLR) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords: cliext::partition
dev_langs: C++
helpviewer_keywords: partition function [STL/CLR]
ms.assetid: 3f551eb3-31ec-4b1d-b585-07718d6a1bd7
caps.latest.revision: "4"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: dd14a691beda3930ffcb35f6b48ba04ca8ea5d00
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="partition-stlclr"></a>partition (STL/CLR)
Classifica gli elementi di un intervallo in due set non contigui, con gli elementi che soddisfano il predicato unario che precedono quelli che non lo soddisfano.  
  
## <a name="syntax"></a>Sintassi  
  
```  
template<class _BidIt, class _Pr> inline  
    _BidIt partition(_BidIt _First, _BidIt _Last, _Pr _Pred);  
```  
  
## <a name="remarks"></a>Note  
 Questa funzione si comporta come la funzione della libreria Standard C++ `partition`. Per ulteriori informazioni, vedere [partizione](../standard-library/algorithm-functions.md#partition).  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<cliext/algoritmo >  
  
 **Namespace:** cliext  
  
## <a name="see-also"></a>Vedere anche  
 [algorithm (STL/CLR)](../dotnet/algorithm-stl-clr.md)