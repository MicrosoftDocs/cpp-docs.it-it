---
title: jitintrinsic | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
f1_keywords:
- jitintrinsic
- jitintrinsic_cpp
dev_langs:
- C++
helpviewer_keywords:
- __declspec keyword [C++], jitintrinsic
- jitintrinsic __declspec modifier
ms.assetid: 23dbe416-7ef6-442b-b16d-9a81aab04fa6
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 71cd88882ea104275e4c1a43ccf05494a859d303
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="jitintrinsic"></a>jitintrinsic
Contrassegna la funzione come significativa in Common Language Runtime a 64 bit. Viene utilizzato in alcune funzioni in librerie fornite da Microsoft.  
  
## <a name="syntax"></a>Sintassi  
  
```  
__declspec(jitintrinsic)  
```  
  
## <a name="remarks"></a>Note  
 `jitintrinsic` aggiungi un oggetto MODOPT (<xref:System.Runtime.CompilerServices.IsJitIntrinsic>) a una firma di funzione.  
  
 Si consiglia di non utilizzare il modificatore `__declspec` poiché potrebbero verificarsi risultati imprevisti.  
  
## <a name="see-also"></a>Vedere anche  
 [__declspec](../cpp/declspec.md)   
 [Parole chiave](../cpp/keywords-cpp.md)