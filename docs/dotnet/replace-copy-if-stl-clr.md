---
title: replace_copy_if (STL/CLR) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-cli
ms.topic: reference
f1_keywords:
- cliext::replace_copy_if
dev_langs:
- C++
helpviewer_keywords:
- replace_copy_if function [STL/CLR]
ms.assetid: 60edf9b8-34e6-4d94-a611-363ef7b7fb80
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: 7f7c266e99b5ef86b8c85c23c77a0ed3cbd2dfcf
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33161746"
---
# <a name="replacecopyif-stlclr"></a>replace_copy_if (STL/CLR)
Esamina ogni elemento di un intervallo di origine e lo sostituisce se soddisfa un predicato specificato copiando nel contempo il risultato in un nuovo intervallo di destinazione.  
  
## <a name="syntax"></a>Sintassi  
  
```  
template<class _InIt, class _OutIt, class _Pr, class _Ty> inline  
    _OutIt replace_copy_if(_InIt _First, _InIt _Last, _OutIt _Dest,  
        _Pr _Pred, const _Ty% _Val);  
```  
  
## <a name="remarks"></a>Note  
 Questa funzione si comporta come la funzione della libreria Standard C++ `replace_copy_if`. Per ulteriori informazioni, vedere [replace_copy_if](../standard-library/algorithm-functions.md#replace_copy_if).  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<cliext/algoritmo >  
  
 **Namespace:** cliext  
  
## <a name="see-also"></a>Vedere anche  
 [algorithm (STL/CLR)](../dotnet/algorithm-stl-clr.md)