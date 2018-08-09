---
title: 'Handlet:: operator = (operatore) | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- corewrappers/Microsoft::WRL::Wrappers::HandleT::operator=
dev_langs:
- C++
helpviewer_keywords:
- operator= operator
ms.assetid: 9e42dcca-30fa-4e8b-8954-802fd64a5595
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: fa253bec9f150d08f699333cd5d5f6d4538fc2d6
ms.sourcegitcommit: 37a10996022d738135999cbe71858379386bab3d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/08/2018
ms.locfileid: "39653157"
---
# <a name="handletoperator-operator"></a>Operatore HandleT::operator=
Sposta il valore dell'oggetto specificato **HandleT** oggetto all'oggetto corrente **HandleT** oggetto.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
HandleT& operator=(  
   _Inout_ HandleT&& h  
);  
```  
  
### <a name="parameters"></a>Parametri  
 *h*  
 Un riferimento rvalue a un handle.  
  
## <a name="return-value"></a>Valore restituito  
 Un riferimento all'oggetto corrente **HandleT** oggetto.  
  
## <a name="remarks"></a>Note  
 Questa operazione consente di invalidare la **HandleT** oggetto specificato dal parametro *h*.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** corewrappers. h  
  
 **Namespace:** Microsoft::WRL::Wrappers  
  
## <a name="see-also"></a>Vedere anche  
 [Classe HandleT](../windows/handlet-class.md)