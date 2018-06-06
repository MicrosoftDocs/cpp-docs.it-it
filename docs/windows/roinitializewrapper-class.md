---
title: Classe RoInitializeWrapper | Documenti Microsoft
ms.custom: ''
ms.date: 05/20/2018
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- corewrappers/Microsoft::WRL::Wrappers::RoInitializeWrapper
dev_langs:
- C++
ms.assetid: 4055fbe0-63a7-4c06-b5a0-414fda5640e5
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: cac71857e6b472f11d1c9eaba48d181ea78fb456
ms.sourcegitcommit: a4454b91d556a3dc43d8755cdcdeabcc9285a20e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/04/2018
ms.locfileid: "34705592"
---
# <a name="roinitializewrapper-class"></a>Classe RoInitializeWrapper
Inizializza il Runtime di Windows.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class RoInitializeWrapper  
```  
  
## <a name="remarks"></a>Note  
 RoInitializeWrapper è utile che inizializza il Runtime di Windows e restituisce un HRESULT che indica se l'operazione ha avuto esito positivo. Poiché chiama il distruttore della classe `::Windows::Foundation::Uninitialize`, le istanze di `RoInitializeWrapper` deve essere dichiarata in ambito globale o livello superiore.  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore RoInitializeWrapper::RoInitializeWrapper](../windows/roinitializewrapper-roinitializewrapper-constructor.md)|Inizializza una nuova istanza della classe RoInitializeWrapper.|  
|[Distruttore RoInitializeWrapper::~RoInitializeWrapper](../windows/roinitializewrapper-tilde-roinitializewrapper-destructor.md)|Elimina l'istanza corrente della classe RoInitializeWrapper.|  
  
### <a name="public-operators"></a>Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Operatore RoInitializeWrapper::HRESULT()](../windows/roinitializewrapper-hresult-parens-operator.md)|Recupera il valore di HRESULT prodotto dal costruttore di RoInitializeWrapper.|  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `RoInitializeWrapper`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** corewrappers. h  
  
 **Namespace:** Microsoft::WRL::Wrappers  
  
## <a name="see-also"></a>Vedere anche  
 [Spazio dei nomi Microsoft::WRL::Wrappers](../windows/microsoft-wrl-wrappers-namespace.md)