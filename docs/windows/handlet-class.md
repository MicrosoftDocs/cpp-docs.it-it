---
title: HandleT (classe) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- corewrappers/Microsoft::WRL::Wrappers::HandleT
dev_langs:
- C++
helpviewer_keywords:
- HandleT class
ms.assetid: 3822b32a-a426-4d94-a54d-919d4df60ee2
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 99a596bf1e086ac7b1a1a72c3504ce4f41844ba4
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
ms.locfileid: "33876150"
---
# <a name="handlet-class"></a>HandleT (classe)
Rappresenta un handle a un oggetto.  
  
## <a name="syntax"></a>Sintassi  
  
```  
template <  
   typename HandleTraits  
>  
class HandleT;  
```  
  
#### <a name="parameters"></a>Parametri  
 `HandleTraits`  
 Un'istanza di [HandleTraits](../windows/handletraits-structure.md) struttura che definisce le caratteristiche comuni di un handle.  
  
## <a name="members"></a>Membri  
  
### <a name="public-typedefs"></a>Typedef pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`Traits`|Sinonimo di `HandleTraits`.|  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore HandleT::HandleT](../windows/handlet-handlet-constructor.md)|Inizializza una nuova istanza della classe HandleT.|  
|[Distruttore HandleT::~HandleT](../windows/handlet-tilde-handlet-destructor.md)|Deinizializza un'istanza della classe HandleT.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo HandleT::Attach](../windows/handlet-attach-method.md)|Associa l'handle specificato con l'oggetto HandleT corrente.|  
|[Metodo HandleT::Close](../windows/handlet-close-method.md)|Chiude l'oggetto HandleT corrente.|  
|[Metodo HandleT::Detach](../windows/handlet-detach-method.md)|Rimuove l'associazione oggetto HandleT corrente dal relativo handle sottostante.|  
|[Metodo HandleT::Get](../windows/handlet-get-method.md)|Ottiene il valore dell'handle sottostante.|  
|[Metodo HandleT::IsValid](../windows/handlet-isvalid-method.md)|Indica se l'oggetto HandleT corrente rappresenta un handle.|  
  
### <a name="protected-methods"></a>Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo HandleT::InternalClose](../windows/handlet-internalclose-method.md)|Chiude l'oggetto HandleT corrente.|  
  
### <a name="public-operators"></a>Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Operatore HandleT::operator=](../windows/handlet-operator-assign-operator.md)|Sposta il valore dell'oggetto HandleT specificato all'oggetto HandleT corrente.|  
  
### <a name="protected-data-members"></a>Membri dati protetti  
  
|nome|Descrizione|  
|----------|-----------------|  
|[Membro dati HandleT::handle_](../windows/handlet-handle-data-member.md)|Contiene l'handle che è rappresentato dall'oggetto HandleT.|  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `HandleT`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** corewrappers. h  
  
 **Namespace:** Microsoft::WRL::Wrappers  
  
## <a name="see-also"></a>Vedere anche  
 [Spazio dei nomi Microsoft::WRL::Wrappers](../windows/microsoft-wrl-wrappers-namespace.md)