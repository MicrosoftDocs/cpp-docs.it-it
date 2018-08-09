---
title: BoolStruct (struttura) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- internal/Microsoft::WRL::Details::BoolStruct
dev_langs:
- C++
helpviewer_keywords:
- BoolStruct structure
ms.assetid: 666eae78-e81d-4fb7-a9e4-1ba617d6d4cd
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 14e3d81ca273bf96b4812f08a46904c9d521c5cf
ms.sourcegitcommit: 37a10996022d738135999cbe71858379386bab3d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/08/2018
ms.locfileid: "39650482"
---
# <a name="boolstruct-structure"></a>BoolStruct (struttura)
Supporta l'infrastruttura WRL e non deve essere usato direttamente dal codice.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
struct BoolStruct;  
```  
  
## <a name="remarks"></a>Note  
 Il **BoolStruct** struttura definisce se un `ComPtr` gestisce la durata dell'oggetto di un'interfaccia. **BoolStruct** viene usato internamente dal [BoolType()](../windows/comptr-operator-microsoft-wrl-details-booltype-operator.md) operatore.  
  
## <a name="members"></a>Membri  
  
### <a name="public-data-members"></a>Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Membro dati BoolStruct::Member](../windows/boolstruct-member-data-member.md)|Specifica che un [ComPtr](../windows/comptr-class.md) è o non lo è, gestire la durata dell'oggetto di un'interfaccia.|  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `BoolStruct`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** FTM  
  
 **Namespace:** Microsoft::WRL::Details  
  
## <a name="see-also"></a>Vedere anche  
 [Microsoft::WRL::Details Namespace](../windows/microsoft-wrl-details-namespace.md)   
 [Operatore ComPtr::operator Microsoft::WRL::Details::BoolType](../windows/comptr-operator-microsoft-wrl-details-booltype-operator.md)