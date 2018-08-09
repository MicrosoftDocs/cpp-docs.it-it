---
title: HandleT (classe) | Microsoft Docs
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
ms.openlocfilehash: a34b66a6e2c901ddbfb3005a0bdb8fd686317af0
ms.sourcegitcommit: 37a10996022d738135999cbe71858379386bab3d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/08/2018
ms.locfileid: "39641505"
---
# <a name="handlet-class"></a>HandleT (classe)
Rappresenta un handle a un oggetto.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
template <  
   typename HandleTraits  
>  
class HandleT;  
```  
  
### <a name="parameters"></a>Parametri  
 *HandleTraits*  
 Un'istanza di [HandleTraits](../windows/handletraits-structure.md) struttura che definisce le caratteristiche comuni di un handle.  
  
## <a name="members"></a>Membri  
  
### <a name="public-typedefs"></a>Typedef pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`Traits`|Sinonimo di `HandleTraits`.|  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore HandleT::HandleT](../windows/handlet-handlet-constructor.md)|Inizializza una nuova istanza di **HandleT** classe.|  
|[Distruttore HandleT::~HandleT](../windows/handlet-tilde-handlet-destructor.md)|Deinizializza un'istanza di **HandleT** classe.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo HandleT::Attach](../windows/handlet-attach-method.md)|Associa l'handle specificato con l'attuale **HandleT** oggetto.|  
|[Metodo HandleT::Close](../windows/handlet-close-method.md)|Chiude l'oggetto corrente **HandleT** oggetto.|  
|[Metodo HandleT::Detach](../windows/handlet-detach-method.md)|Rimuove l'associazione corrente **HandleT** oggetto dal relativo handle sottostante.|  
|[Metodo HandleT::Get](../windows/handlet-get-method.md)|Ottiene il valore dell'handle sottostante.|  
|[Metodo HandleT::IsValid](../windows/handlet-isvalid-method.md)|Indica se l'oggetto corrente **HandleT** oggetto rappresenta un handle.|  
  
### <a name="protected-methods"></a>Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo HandleT::InternalClose](../windows/handlet-internalclose-method.md)|Chiude l'oggetto corrente **HandleT** oggetto.|  
  
### <a name="public-operators"></a>Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Operatore HandleT::operator=](../windows/handlet-operator-assign-operator.md)|Sposta il valore dell'oggetto specificato **HandleT** oggetto all'oggetto corrente **HandleT** oggetto.|  
  
### <a name="protected-data-members"></a>Membri dati protetti  
  
|nome|Descrizione|  
|----------|-----------------|  
|[Membro dati HandleT::handle_](../windows/handlet-handle-data-member.md)|Contiene l'handle che è rappresentato dal **HandleT** oggetto.|  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `HandleT`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** corewrappers. h  
  
 **Namespace:** Microsoft::WRL::Wrappers  
  
## <a name="see-also"></a>Vedere anche  
 [Spazio dei nomi Microsoft::WRL::Wrappers](../windows/microsoft-wrl-wrappers-namespace.md)