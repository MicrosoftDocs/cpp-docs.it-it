---
title: 'Metodo ClassFactory:: AddRef | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- module/Microsoft::WRL::ClassFactory::AddRef
dev_langs:
- C++
helpviewer_keywords:
- AddRef method
ms.assetid: 5b091785-dea4-42b6-a502-0db5fc7a5a2e
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 276024be7b3d75edf308e43a08e4d2cbe9901c1e
ms.sourcegitcommit: 37a10996022d738135999cbe71858379386bab3d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/08/2018
ms.locfileid: "39652055"
---
# <a name="classfactoryaddref-method"></a>Metodo ClassFactory::AddRef
Incrementa il conteggio dei riferimenti per l'oggetto corrente **ClassFactory** oggetto.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
STDMETHOD_(  
   ULONG,  
   AddRef  
)();  
```  
  
## <a name="return-value"></a>Valore restituito  
 S_OK se riesce; in caso contrario, HRESULT che descrive l'errore.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** module.h  
  
 **Spazio dei nomi:** Microsoft::WRL  
  
## <a name="see-also"></a>Vedere anche  
 [Classe ClassFactory](../windows/classfactory-class.md)