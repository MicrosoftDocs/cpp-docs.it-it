---
title: generare (STL/CLR) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-cli
ms.topic: reference
f1_keywords:
- cliext::generate
dev_langs:
- C++
helpviewer_keywords:
- generate function [STL/CLR]
ms.assetid: 970f209f-31db-47c4-a0bb-4c3e579adb52
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: 9ec425853f515500b68594d2890bcc9cc76410fb
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33105953"
---
# <a name="generate-stlclr"></a>generate (STL/CLR)
Assegna i valori generati da un oggetto funzione a ogni elemento di un intervallo.  
  
## <a name="syntax"></a>Sintassi  
  
```  
template<class _FwdIt, class _Fn0> inline  
    void generate(_FwdIt _First, _FwdIt _Last, _Fn0 _Func);  
```  
  
## <a name="remarks"></a>Note  
 Questa funzione si comporta come la funzione della libreria Standard C++ `generate`. Per ulteriori informazioni, vedere [generare](../standard-library/algorithm-functions.md#generate).  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<cliext/algoritmo >  
  
 **Namespace:** cliext  
  
## <a name="see-also"></a>Vedere anche  
 [algorithm (STL/CLR)](../dotnet/algorithm-stl-clr.md)