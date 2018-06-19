---
title: CriticalSection (classe) | Documenti Microsoft
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
ms.openlocfilehash: 8b5eda8fb22f72bd1f50801f9993b9bd7a864d35
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
ms.locfileid: "33871510"
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
|[Distruttore CriticalSection::~CriticalSection](../windows/criticalsection-tilde-criticalsection-destructor.md)|Deinizializza ed elimina l'oggetto CriticalSection corrente.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo CriticalSection::TryLock](../windows/criticalsection-trylock-method.md)|Tenta di immettere una sezione critica senza bloccare. Se la chiamata ha esito positivo, il thread chiamante acquisisce la proprietà della sezione critica.|  
|[Metodo CriticalSection::Lock](../windows/criticalsection-lock-method.md)|Attende che la proprietà dell'oggetto specificato sezione critica. La funzione restituisce quando il thread chiamante viene concessa la proprietà.|  
|[Metodo CriticalSection::IsValid](../windows/criticalsection-isvalid-method.md)|Indica se la sezione critica corrente è valida.|  
  
### <a name="protected-data-members"></a>Membri dati protetti  
  
|nome|Descrizione|  
|----------|-----------------|  
|[Membro dati CriticalSection::cs_](../windows/criticalsection-cs-data-member.md)|Dichiara un membro di dati della sezione critica.|  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `CriticalSection`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** corewrappers. h  
  
 **Namespace:** Microsoft::WRL::Wrappers  
  
## <a name="see-also"></a>Vedere anche  
 [Spazio dei nomi Microsoft::WRL::Wrappers](../windows/microsoft-wrl-wrappers-namespace.md)