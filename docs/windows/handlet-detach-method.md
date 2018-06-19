---
title: 'Metodo handlet:: Detach | Documenti Microsoft'
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
ms.openlocfilehash: 100d215099494c9b2714fd2c42dee69644a5006c
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
ms.locfileid: "33878463"
---
# <a name="handletdetach-method"></a>Metodo HandleT::Detach
Rimuove l'associazione oggetto HandleT corrente dal relativo handle sottostante.  
  
## <a name="syntax"></a>Sintassi  
  
```  
typename HandleTraits::Type Detach();  
```  
  
## <a name="return-value"></a>Valore restituito  
 L'handle sottostante.  
  
## <a name="remarks"></a>Note  
 Quando questa operazione viene completata, il HandleT corrente viene impostato sullo stato non valido.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** corewrappers. h  
  
 **Namespace:** Microsoft::WRL::Wrappers  
  
## <a name="see-also"></a>Vedere anche  
 [Classe HandleT](../windows/handlet-class.md)