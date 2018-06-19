---
title: Classe HStringReference | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- corewrappers/Microsoft::WRL::Wrappers::HStringReference
dev_langs:
- C++
ms.assetid: 9bf823b1-17eb-4ac4-8c5d-27d27c7a4150
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 90e94471fe114eafec91a19ddad5d47ce39a8de7
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
ms.locfileid: "33879555"
---
# <a name="hstringreference-class"></a>Classe HStringReference
Rappresenta un HSTRING creato da una stringa esistente.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
class HStringReference;  
```  
  
## <a name="remarks"></a>Note  
 La durata del buffer di backup in HSTRING di nuovo non è gestita da Windows Runtime. Il chiamante alloca una stringa di origine nel frame dello stack per evitare un'allocazione di heap e per eliminare il rischio di perdita di memoria. Inoltre, il chiamante deve assicurare che la stringa di origine rimane invariata durante la durata di HSTRING l'allegato. Per ulteriori informazioni, vedere [WindowsCreateStringReference funzione](http://msdn.microsoft.com/en-us/0361bb7e-da49-4289-a93e-de7aab8712ac).  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore HStringReference::HStringReference](../windows/hstringreference-hstringreference-constructor.md)|Inizializza una nuova istanza della classe HStringReference.|  
  
### <a name="members"></a>Membri  
  
|Membro|Descrizione|  
|------------|-----------------|  
|[Metodo HStringReference::CopyTo](../windows/hstringreference-copyto-method.md)|Copie di HStringReference corrente dell'oggetto a un oggetto HSTRING.|  
|[Metodo HStringReference::Get](../windows/hstringreference-get-method.md)|Recupera il valore dell'handle HSTRING sottostante.|  
  
### <a name="public-operators"></a>Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Operatore HStringReference::Operator=](../windows/hstringreference-operator-assign-operator.md)|Sposta il valore di un altro oggetto HStringReference all'oggetto HStringReference corrente.|  
|[Operatore HStringReference::Operator==](../windows/hstringreference-operator-equality-operator.md)|Indica se i due parametri sono uguali.|  
|[Operatore HStringReference::Operator!=](../windows/hstringreference-operator-inequality-operator.md)|Indica se i due parametri non sono uguali.|  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `HStringReference`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** corewrappers. h  
  
 **Namespace:** Microsoft::WRL::Wrappers  
  
## <a name="see-also"></a>Vedere anche  
 [Spazio dei nomi Microsoft::WRL::Wrappers](../windows/microsoft-wrl-wrappers-namespace.md)