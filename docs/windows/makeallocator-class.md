---
title: MakeAllocator (classe) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- implements/Microsoft::WRL::Details::MakeAllocator
dev_langs:
- C++
helpviewer_keywords:
- MakeAllocator class
ms.assetid: a1114615-abd7-4a56-9bc3-750c118f0fa1
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 742b16dfc27e7e35a578bcc26283752c5c608012
ms.sourcegitcommit: 38af5a1bf35249f0a51e3aafc6e4077859c8f0d9
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/09/2018
ms.locfileid: "40014156"
---
# <a name="makeallocator-class"></a>MakeAllocator (classe)
Supporta l'infrastruttura WRL e non deve essere usato direttamente dal codice.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
template<  
   typename T,  
   bool hasWeakReferenceSupport =   
         !__is_base_of(RuntimeClassFlags<InhibitWeakReference>, T)>
 class MakeAllocator;  
  
template<typename T>  
class MakeAllocator<T, false>;  
  
template<typename T>  
class MakeAllocator<T, true>;  
```  
  
### <a name="parameters"></a>Parametri  
 *T*  
 Un nome di tipo.  
  
 *hasWeakReferenceSupport*  
 **true** ad allocare memoria per un oggetto che supporta riferimenti deboli; **false** ad allocare memoria per un oggetto che non supporta riferimenti deboli.  
  
## <a name="remarks"></a>Note  
 Alloca memoria per una classe attivabile, con o senza supporto dei riferimenti deboli.  
  
 Eseguire l'override di **MakeAllocator** classe per implementare un modello di allocazione di memoria definito dall'utente.  
  
 **MakeAllocator** viene generalmente utilizzato per evitare perdite di memoria se un oggetto genera un'eccezione durante la costruzione.  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore MakeAllocator::MakeAllocator](../windows/makeallocator-makeallocator-constructor.md)|Inizializza una nuova istanza di **MakeAllocator** classe.|  
|[Distruttore MakeAllocator::~MakeAllocator](../windows/makeallocator-tilde-makeallocator-destructor.md)|Deinizializza l'istanza corrente del **MakeAllocator** classe.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo MakeAllocator::Allocate](../windows/makeallocator-allocate-method.md)|Alloca la memoria e lo associa all'oggetto corrente **MakeAllocator** oggetto.|  
|[Metodo MakeAllocator::Detach](../windows/makeallocator-detach-method.md)|Rimuove l'associazione di memoria allocata tramite il [Allocate](../windows/makeallocator-allocate-method.md) metodo dall'insieme corrente **MakeAllocator** oggetto.|  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `MakeAllocator`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** Implements. h  
  
 **Namespace:** Microsoft::WRL::Details  
  
## <a name="see-also"></a>Vedere anche  
 [Spazio dei nomi Microsoft::WRL::Details](../windows/microsoft-wrl-details-namespace.md)