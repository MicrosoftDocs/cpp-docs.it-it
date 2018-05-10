---
title: 'Costruttore roinitializewrapper:: Roinitializewrapper | Documenti Microsoft'
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
ms.openlocfilehash: 64f2af40c671760bb8d4e667c209598c46b24665
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
---
# <a name="roinitializewrapperroinitializewrapper-constructor"></a>Costruttore RoInitializeWrapper::RoInitializeWrapper
Inizializza una nuova istanza della classe RoInitializeWrapper.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
RoInitializeWrapper(   RO_INIT_TYPE flags)  
```  
  
#### <a name="parameters"></a>Parametri  
 `flags`  
 Una delle enumerazioni RO_INIT_TYPE, che specifica il supporto fornito da Windows Runtime.  
  
## <a name="remarks"></a>Note  
 La classe RoInitializeWrapper richiama Windows::Foundation::Initialize (*flag*).  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** corewrappers. h  
  
 **Namespace:** Microsoft::WRL::Wrappers  
  
## <a name="see-also"></a>Vedere anche  
 [Classe HandleT](../windows/handlet-class.md)