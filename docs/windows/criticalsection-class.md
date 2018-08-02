---
title: CriticalSection (classe) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- corewrappers/Microsoft::WRL::Wrappers::CriticalSection
dev_langs:
- C++
helpviewer_keywords:
- CriticalSection class
ms.assetid: f2e0a024-71a3-4f6b-99ea-d93a4a608ac4
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 0b8aa37f6ac12cad91fa02a2387c95911227319d
ms.sourcegitcommit: 51f804005b8d921468775a0316de52ad39b77c3e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/02/2018
ms.locfileid: "39466137"
---
# <a name="criticalsection-class"></a>CriticalSection (classe)
Rappresenta una sezione critica.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CriticalSection;  
```  
  
## <a name="members"></a>Membri  
  
### <a name="constructor"></a>Costruttore  
  
|nome|Descrizione|  
|----------|-----------------|  
|[Costruttore CriticalSection::CriticalSection](../windows/criticalsection-criticalsection-constructor.md)|Inizializza un oggetto di sincronizzazione che è simile a un oggetto mutex, ma può essere utilizzato da solo i thread di un singolo processo.|  
|[Distruttore CriticalSection::~CriticalSection](../windows/criticalsection-tilde-criticalsection-destructor.md)|Deinizializza ed elimina l'oggetto corrente **CriticalSection** oggetto.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo CriticalSection::TryLock](../windows/criticalsection-trylock-method.md)|Tenta di immettere una sezione critica senza bloccare. Se la chiamata ha esito positivo, il thread chiamante ha la proprietà della sezione critica.|  
|[Metodo CriticalSection::Lock](../windows/criticalsection-lock-method.md)|Attende che la proprietà dell'oggetto specificato sezione critica. La funzione restituisce quando il thread chiamante è concessa la proprietà.|  
|[Metodo CriticalSection::IsValid](../windows/criticalsection-isvalid-method.md)|Indica se la sezione critica corrente è valida.|  
  
### <a name="protected-data-members"></a>Membri dati protetti  
  
|nome|Descrizione|  
|----------|-----------------|  
|[Membro dati CriticalSection::cs_](../windows/criticalsection-cs-data-member.md)|Dichiara un membro dati di sezione critica.|  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `CriticalSection`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** corewrappers. h  
  
 **Namespace:** Microsoft::WRL::Wrappers  
  
## <a name="see-also"></a>Vedere anche  
 [Spazio dei nomi Microsoft::WRL::Wrappers](../windows/microsoft-wrl-wrappers-namespace.md)