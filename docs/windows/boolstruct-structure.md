---
title: BoolStruct (struttura) | Documenti Microsoft
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
ms.openlocfilehash: af2827d85a1df647dca2c02c5c6ee5a12a416d51
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
ms.locfileid: "33860122"
---
# <a name="boolstruct-structure"></a>BoolStruct (struttura)
Supporta l'infrastruttura WRL e non deve essere utilizzato direttamente dal codice.  
  
## <a name="syntax"></a>Sintassi  
  
```  
struct BoolStruct;  
```  
  
## <a name="remarks"></a>Note  
 La struttura BoolStruct definisce se un ComPtr gestisce la durata dell'oggetto di un'interfaccia. BoolStruct viene utilizzato internamente dal [BoolType()](../windows/comptr-operator-microsoft-wrl-details-booltype-operator.md) operatore.  
  
## <a name="members"></a>Membri  
  
### <a name="public-data-members"></a>Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Membro dati BoolStruct::Member](../windows/boolstruct-member-data-member.md)|Specifica che un [ComPtr](../windows/comptr-class.md) è o non lo è, la durata dell'oggetto di un'interfaccia di gestione.|  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `BoolStruct`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** h  
  
 **Namespace:** Microsoft::WRL::Details  
  
## <a name="see-also"></a>Vedere anche  
 [Namespace Microsoft::WRL::Details](../windows/microsoft-wrl-details-namespace.md)   
 [Operatore ComPtr::operator Microsoft::WRL::Details::BoolType](../windows/comptr-operator-microsoft-wrl-details-booltype-operator.md)