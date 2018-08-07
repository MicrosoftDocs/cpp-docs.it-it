---
title: 'Costruttore roinitializewrapper:: Roinitializewrapper | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- corewrappers/Microsoft::WRL::Wrappers::RoInitializeWrapper::RoInitializeWrapper
dev_langs:
- C++
ms.assetid: c6f7fb07-14af-4574-9135-cea164607f30
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 193f0d16b03991e24cb16a90b3310512f6e86054
ms.sourcegitcommit: 4586bfc32d8bc37ab08b24816d7fad5df709bfa3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/07/2018
ms.locfileid: "39604398"
---
# <a name="roinitializewrapperroinitializewrapper-constructor"></a>Costruttore RoInitializeWrapper::RoInitializeWrapper
Inizializza una nuova istanza di **RoInitializeWrapper** classe.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
RoInitializeWrapper(   RO_INIT_TYPE flags)  
```  
  
### <a name="parameters"></a>Parametri  
 *flags*  
 Una delle enumerazioni RO_INIT_TYPE, che specifica il supporto fornito dal Runtime di Windows.  
  
## <a name="remarks"></a>Note  
 Il **RoInitializeWrapper** classe richiama `Windows::Foundation::Initialize(flags)`.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** corewrappers. h  
  
 **Namespace:** Microsoft::WRL::Wrappers  
  
## <a name="see-also"></a>Vedere anche  
 [Classe HandleT](../windows/handlet-class.md)