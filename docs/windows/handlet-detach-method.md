---
title: 'Metodo handlet:: Detach | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- corewrappers/Microsoft::WRL::Wrappers::HandleT::Detach
dev_langs:
- C++
helpviewer_keywords:
- Detach method
ms.assetid: f7df0f90-fafb-4d1b-a215-a6c62941f6b0
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: cc11d6be992584adb1ce2075e73d080cc3a43f47
ms.sourcegitcommit: d5d6bb9945c3550b8e8864b22b3a565de3691fde
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/06/2018
ms.locfileid: "39569479"
---
# <a name="handletdetach-method"></a>Metodo HandleT::Detach
Rimuove l'associazione corrente **HandleT** oggetto dal relativo handle sottostante.  
  
## <a name="syntax"></a>Sintassi  
  
```  
typename HandleTraits::Type Detach();  
```  
  
## <a name="return-value"></a>Valore restituito  
 L'handle sottostante.  
  
## <a name="remarks"></a>Note  
 Al termine di questa operazione, l'oggetto corrente **HandleT** viene impostato sullo stato non valido.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** corewrappers. h  
  
 **Namespace:** Microsoft::WRL::Wrappers  
  
## <a name="see-also"></a>Vedere anche  
 [Classe HandleT](../windows/handlet-class.md)