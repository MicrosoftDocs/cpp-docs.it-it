---
title: 'Metodo activationfactory:: AddRef | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- module/Microsoft::WRL::ActivationFactory::AddRef
dev_langs:
- C++
helpviewer_keywords:
- AddRef method
ms.assetid: dfe96189-ddbe-410a-9f8d-5d8ecc8cc7e6
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: bb4221a0432acdfcccb4e7ce77a2d16245e48a03
ms.sourcegitcommit: 37a10996022d738135999cbe71858379386bab3d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/08/2018
ms.locfileid: "39650872"
---
# <a name="activationfactoryaddref-method"></a>Metodo ActivationFactory::AddRef
Incrementa il conteggio dei riferimenti dell'oggetto corrente **ActivationFactory** oggetto.  
  
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
 [Classe ActivationFactory](../windows/activationfactory-class.md)