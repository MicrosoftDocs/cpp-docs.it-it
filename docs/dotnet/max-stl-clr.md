---
title: max (STL/CLR) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords: cliext::max
dev_langs: C++
helpviewer_keywords: max function [STL/CLR]
ms.assetid: bf51aedc-b7a0-4b6c-a76e-fdbc4af042fa
caps.latest.revision: "4"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 609e27f35aa1e80a90a9ae5e66ffc230dcc18d0a
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="max-stlclr"></a>max (STL/CLR)
Confronta due oggetti e restituisce il maggiore dei due in cui il criterio di ordinamento può essere specificato da un predicato binario.  
  
## <a name="syntax"></a>Sintassi  
  
```  
template<class _Ty> inline  
    const _Ty max(const _Ty% _Left, const _Ty% _Right);  
template<class _Ty, class _Pr> inline  
    const _Ty max(const _Ty% _Left, const _Ty% _Right, _Pr _Pred);  
```  
  
## <a name="remarks"></a>Note  
 Questa funzione si comporta come la funzione della libreria Standard C++ `max`. Per ulteriori informazioni, vedere [max](../standard-library/algorithm-functions.md#max).  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<cliext/algoritmo >  
  
 **Namespace:** cliext  
  
## <a name="see-also"></a>Vedere anche  
 [algorithm (STL/CLR)](../dotnet/algorithm-stl-clr.md)