---
title: jitintrinsic | Microsoft Docs
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
ms.openlocfilehash: f8b1c932f53651b8ad116139724348714b183506
ms.sourcegitcommit: 1fd1eb11f65f2999dfd93a2d924390ed0a0901ed
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/10/2018
ms.locfileid: "37939390"
---
# <a name="jitintrinsic"></a>jitintrinsic
Contrassegna la funzione come significativa in Common Language Runtime a 64 bit. Viene utilizzato in alcune funzioni in librerie fornite da Microsoft.  
  
## <a name="syntax"></a>Sintassi  
  
```  
__declspec(jitintrinsic)  
```  
  
## <a name="remarks"></a>Note  
 `jitintrinsic` aggiungi un oggetto MODOPT (<xref:System.Runtime.CompilerServices.IsJitIntrinsic>) a una firma di funzione.  
  
 Si consiglia di non utilizzo questo **declspec** modificatore, come risultati imprevisti può verificarsi.  
  
## <a name="see-also"></a>Vedere anche  
 [__declspec](../cpp/declspec.md)   
 [Parole chiave](../cpp/keywords-cpp.md)