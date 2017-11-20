---
title: jitintrinsic | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-language
ms.tgt_pltfrm: 
ms.topic: language-reference
f1_keywords:
- jitintrinsic
- jitintrinsic_cpp
dev_langs: C++
helpviewer_keywords:
- __declspec keyword [C++], jitintrinsic
- jitintrinsic __declspec modifier
ms.assetid: 23dbe416-7ef6-442b-b16d-9a81aab04fa6
caps.latest.revision: "8"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 69e0350df240d4748a91b1400c1811209b9dfdd1
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
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
 [declspec](../cpp/declspec.md)   
 [Parole chiave](../cpp/keywords-cpp.md)