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
ms.openlocfilehash: ab629946b9fc5acec6b0fb0ba8f573a3fa90a031
ms.sourcegitcommit: d5d6bb9945c3550b8e8864b22b3a565de3691fde
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/06/2018
ms.locfileid: "39570041"
---
# <a name="handletoperator-operator"></a>Operatore HandleT::operator=
Sposta il valore dell'oggetto specificato **HandleT** oggetto all'oggetto corrente **HandleT** oggetto.  
  
## <a name="syntax"></a>Sintassi  
  
```  
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