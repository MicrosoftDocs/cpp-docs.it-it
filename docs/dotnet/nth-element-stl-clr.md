---
title: nth_element (STL/CLR) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords: cliext::nth_element
dev_langs: C++
helpviewer_keywords: nth_element function [STL/CLR]
ms.assetid: 19fc1695-62a9-4f85-9920-d153c1c6481f
caps.latest.revision: "4"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: 3bad46035c7d31250c6d4beddee70819f4a648e6
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="nthelement-stlclr"></a>nth_element (STL/CLR)
Partizioni di un intervallo di elementi, individuare correttamente il `n`elemento della sequenza nell'intervallo in modo che tutti gli elementi davanti a è minore o uguale a esso e tutti gli elementi che lo seguono nella sequenza sono maggiore o uguale a esso.  
  
## <a name="syntax"></a>Sintassi  
  
```  
template<class _RanIt> inline  
    void nth_element(_RanIt _First, _RanIt _Nth, _RanIt _Last);  
template<class _RanIt, class _Pr> inline  
    void nth_element(_RanIt _First, _RanIt _Nth, _RanIt _Last,  
        _Pr _Pred);  
```  
  
## <a name="remarks"></a>Note  
 Questa funzione si comporta come la funzione della libreria Standard C++ `nth_element`. Per ulteriori informazioni, vedere [nth_element](../standard-library/algorithm-functions.md#nth_element).  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<cliext/algoritmo >  
  
 **Namespace:** cliext  
  
## <a name="see-also"></a>Vedere anche  
 [algorithm (STL/CLR)](../dotnet/algorithm-stl-clr.md)