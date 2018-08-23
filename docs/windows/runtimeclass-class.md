---
title: Classe RuntimeClass | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- implements/Microsoft::WRL::RuntimeClass
dev_langs:
- C++
helpviewer_keywords:
- RuntimeClass class
ms.assetid: d52f9d1a-98e5-41f2-a143-8fb629dd0727
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 8f6cca23834eb889ecb83d91b40861b92fe922ad
ms.sourcegitcommit: 6f8dd98de57bb80bf4c9852abafef1c35a7600f1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/22/2018
ms.locfileid: "42605984"
---
# <a name="runtimeclass-class"></a>Classe RuntimeClass

Rappresenta una classe COM o WinRT che eredita le interfacce specificate e fornisce il Runtime di Windows specificato, COM classico e supporto dei riferimenti deboli.

Questa classe fornisce l'implementazione di boilerplate di classi WinRT e COM, che fornisce l'implementazione di `QueryInterface`, `AddRef`, `Release` e così via, gestisce il conteggio dei riferimenti del modulo e include il supporto per fornire la class factory per oggetti attivabili.

## <a name="syntax"></a>Sintassi

```cpp
template <typename ...TInterfaces> class RuntimeClass
template <unsigned int classFlags, typename ...TInterfaces> class RuntimeClass;
```

### <a name="parameters"></a>Parametri

*classFlags*  
Parametro facoltativo. Una combinazione di uno o più [RuntimeClassType](../windows/runtimeclasstype-enumeration.md) valori di enumerazione. Il `__WRL_CONFIGURATION_LEGACY__` macro può essere definita per modificare il valore predefinito di classFlags per tutte le classi di runtime nel progetto. Se definito, RuntimeClass istanze non sono agile per impostazione predefinita. Quando non è definito, le istanze RuntimeClass sono agile per impostazione predefinita. Per evitare ambiguità, specificare sempre il `Microsoft::WRL::FtmBase` nelle `TInterfaces` o `RuntimeClassType::InhibitFtmBase`. Si noti che, se InhibitFtmBase e FtmBase vengono che entrambe usate l'oggetto sarà agili.

*TInterfaces*  
L'elenco delle interfacce dell'oggetto implementi oltre `IUnknown`, `IInspectable` o altre interfacce controllate da [RuntimeClassType](../windows/runtimeclasstype-enumeration.md). Anche possibile elencare ad altre classi di derivare da, in particolare `Microsoft::WRL::FtmBase` per rendere l'oggetto agile e ne implementa `IMarshal`.

## <a name="members"></a>Membri

`RuntimeClassInitialize` Una funzione che inizializza l'oggetto se il `MakeAndInitialize` funzione del modello viene utilizzata per costruire l'oggetto. Restituisce S_OK se l'oggetto è stato inizializzato correttamente o un codice di errore COM se l'inizializzazione non riuscita. Il codice di errore COM viene propagato come valore restituito di `MakeAndInitialize`. Si noti che il `RuntimeClassInitialize` metodo non viene chiamato se il `Make` funzione del modello viene utilizzata per costruire l'oggetto.

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[Costruttore RuntimeClass::RuntimeClass](../windows/runtimeclass-runtimeclass-constructor.md)|Inizializza l'istanza corrente della classe di RuntimeClass.|
|[Distruttore RuntimeClass::~RuntimeClass](../windows/runtimeclass-tilde-runtimeclass-destructor.md)|Deinizializza l'istanza corrente della classe di RuntimeClass.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

Questo è un dettaglio di implementazione.

## <a name="requirements"></a>Requisiti

**Intestazione:** Implements. h

**Spazio dei nomi:** Microsoft::WRL

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi Microsoft::WRL](../windows/microsoft-wrl-namespace.md)