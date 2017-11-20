---
title: sort_heap (STL/CLR) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords: cliext::sort_heap
dev_langs: C++
helpviewer_keywords: sort_heap function [STL/CLR]
ms.assetid: a8fa6b76-90cd-413b-9c5b-f65b93d4bbed
caps.latest.revision: "4"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 65160180d97b4db264fc0fa77afa7c6284d2863f
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="sortheap-stlclr"></a>sort_heap (STL/CLR)
Converte un heap in un intervallo ordinato.  
  
## <a name="syntax"></a>Sintassi  
  
```  
template<class _RanIt> inline  
    void sort_heap(_RanIt _First, _RanIt _Last);  
template<class _RanIt, class _Pr> inline  
    void sort_heap(_RanIt _First, _RanIt _Last, _Pr _Pred);  
```  
  
## <a name="remarks"></a>Note  
 Questa funzione si comporta come la funzione della libreria Standard C++ `sort_heap`. Per ulteriori informazioni, vedere [sort_heap](../standard-library/algorithm-functions.md#sort_heap).  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<cliext/algoritmo >  
  
 **Namespace:** cliext  
  
## <a name="see-also"></a>Vedere anche  
 [algorithm (STL/CLR)](../dotnet/algorithm-stl-clr.md)