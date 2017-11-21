---
title: MakeAllocator (classe) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords: implements/Microsoft::WRL::Details::MakeAllocator
dev_langs: C++
helpviewer_keywords: MakeAllocator class
ms.assetid: a1114615-abd7-4a56-9bc3-750c118f0fa1
caps.latest.revision: "5"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 0333dec823cb3996a9546bbfa702b3febf711a61
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="makeallocator-class"></a>MakeAllocator (classe)
Supporta l'infrastruttura WRL e non deve essere utilizzato direttamente dal codice.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
template<  
   typename T,  
   bool hasWeakReferenceSupport =   
         !__is_base_of(RuntimeClassFlags<InhibitWeakReference>,   
   T)> , T)> class MakeAllocator;  
  
template<  
   typename T  
>  
class MakeAllocator<T, false>;  
  
template<  
   typename T  
>  
class MakeAllocator<T, true>;  
```  
  
#### <a name="parameters"></a>Parametri  
 `T`  
 Un nome di tipo.  
  
 `hasWeakReferenceSupport`  
 `true`allocare memoria per un oggetto che supporta riferimenti deboli; `false` ad allocare memoria per un oggetto che non supporta riferimenti deboli.  
  
## <a name="remarks"></a>Note  
 Alloca memoria per una classe attivabile, con o senza il supporto di riferimento debole.  
  
 Eseguire l'override della classe MakeAllocator per implementare un modello di allocazione di memoria definito dall'utente.  
  
 MakeAllocator viene in genere utilizzato per evitare perdite di memoria se un oggetto genera un'eccezione durante la costruzione.  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore MakeAllocator::MakeAllocator](../windows/makeallocator-makeallocator-constructor.md)|Inizializza una nuova istanza della classe MakeAllocator.|  
|[Distruttore MakeAllocator::~MakeAllocator](../windows/makeallocator-tilde-makeallocator-destructor.md)|Deinizializza l'istanza corrente della classe MakeAllocator.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo MakeAllocator::Allocate](../windows/makeallocator-allocate-method.md)|Alloca memoria e lo associa all'oggetto MakeAllocator corrente.|  
|[Metodo MakeAllocator::Detach](../windows/makeallocator-detach-method.md)|Rimuove l'associazione di memoria allocata per il [allocare](../windows/makeallocator-allocate-method.md) metodo dall'oggetto MakeAllocator corrente.|  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `MakeAllocator`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** h  
  
 **Namespace:** Microsoft::WRL::Details  
  
## <a name="see-also"></a>Vedere anche  
 [Spazio dei nomi Microsoft::WRL::Details](../windows/microsoft-wrl-details-namespace.md)