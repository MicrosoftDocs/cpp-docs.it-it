---
title: Classe RuntimeClass | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- implements/Microsoft::WRL::RuntimeClass
dev_langs:
- C++
helpviewer_keywords:
- RuntimeClass class
ms.assetid: d52f9d1a-98e5-41f2-a143-8fb629dd0727
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: d5c75492b55cd1c238798d3500e2157738c3c58f
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="runtimeclass-class"></a>Classe RuntimeClass
Rappresenta una classe COM o WinRT che eredita le interfacce specificate e fornisce il Runtime di Windows specificato, COM classico e supporto di riferimento debole.  
  
Questa classe fornisce l'implementazione standard di classi WinRT e COM, che fornisce l'implementazione di `QueryInterface`, `AddRef`, `Release` e così via, gestisce il conteggio dei riferimenti del modulo e dispone del supporto per fornire la class factory per oggetti attivabili.
  
## <a name="syntax"></a>Sintassi  
  
```
template <typename ...TInterfaces> class RuntimeClass
template <unsigned int classFlags, typename ...TInterfaces> class RuntimeClass;
```
  
#### <a name="parameters"></a>Parametri  
 `classFlags`  
Parametro facoltativo. Una combinazione di uno o più [RuntimeClassType](../windows/runtimeclasstype-enumeration.md) valori di enumerazione. Il `__WRL_CONFIGURATION_LEGACY__` macro può essere definita per modificare il valore predefinito di classFlags per tutte le classi di runtime nel progetto. Se definito, le istanze di RuntimeClass non sono agile per impostazione predefinita. Se non è definito, le istanze di RuntimeClass sono agile per impostazione predefinita. Per evitare ambiguità, specificare sempre il Microsoft::WRL::FtmBase in `TInterfaces` o RuntimeClassType::InhibitFtmBase. Si noti che, se InhibitFtmBase e FtmBase vengono che entrambi utilizzati l'oggetto sarà agili.
 
 `TInterfaces`  
L'elenco delle interfacce l'oggetto implementa oltre IUnknown, IInspectable o altre interfacce controllate da [RuntimeClassType](../windows/runtimeclasstype-enumeration.md). Può elencare inoltre alle altre classi di essere derivata da, in particolare Microsoft::WRL::FtmBase per rendere l'oggetto agile in modo che venga implementare IMarshal.
  
## <a name="members"></a>Membri  
`RuntimeClassInitialize`Una funzione che inizializza l'oggetto se la funzione di modello MakeAndInitialize viene utilizzata per costruire l'oggetto. Se l'inizializzazione non riuscita, viene restituito S_OK se l'oggetto è stato inizializzato correttamente oppure un codice di errore COM. Il codice di errore COM viene propagato come il valore restituito di MakeAndInitialize. Si noti che se la funzione di modello di creazione viene utilizzata per costruire l'oggetto non viene chiamato il metodo RuntimeClassInitialize.

### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore RuntimeClass::RuntimeClass](../windows/runtimeclass-runtimeclass-constructor.md)|Inizializza l'istanza corrente della classe RuntimeClass.|  
|[Distruttore RuntimeClass::~RuntimeClass](../windows/runtimeclass-tilde-runtimeclass-destructor.md)|Deinizializza l'istanza corrente della classe RuntimeClass.|  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
Questo è un dettaglio di implementazione.
  
## <a name="requirements"></a>Requisiti  
**Intestazione:** h  
  
**Spazio dei nomi:** Microsoft::WRL  
  
## <a name="see-also"></a>Vedere anche  
[Spazio dei nomi Microsoft::WRL](../windows/microsoft-wrl-namespace.md)
