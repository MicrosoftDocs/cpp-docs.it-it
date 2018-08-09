---
title: 'Metodo asyncbase:: Put_id | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- async/Microsoft::WRL::AsyncBase::put_Id
dev_langs:
- C++
helpviewer_keywords:
- put_Id method
ms.assetid: aebad85f-4774-42de-b625-a9cf5f65cb4e
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: f55896ac0bca162df9f17703225552cdb70c079c
ms.sourcegitcommit: 37a10996022d738135999cbe71858379386bab3d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/08/2018
ms.locfileid: "39647086"
---
# <a name="asyncbaseputid-method"></a>Metodo AsyncBase::put_Id
Imposta l'handle dell'operazione asincrona.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
STDMETHOD(  
   put_Id  
)(const unsigned int id);  
```  
  
### <a name="parameters"></a>Parametri  
 *ID*  
 Un handle diverso da zero.  
  
## <a name="return-value"></a>Valore restituito  
 S_OK se l'esito positivo. in caso contrario, E_INVALIDARG o E_ILLEGAL_METHOD_CALL.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** Async. h  
  
 **Spazio dei nomi:** Microsoft::WRL  
  
## <a name="see-also"></a>Vedere anche  
 [Classe AsyncBase](../windows/asyncbase-class.md)