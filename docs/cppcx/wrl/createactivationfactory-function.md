---
description: 'Altre informazioni su: funzione CreateActivationFactory'
title: CreateActivationFactory (funzione)
ms.date: 11/04/2016
ms.topic: reference
f1_keywords:
- module/Microsoft::WRL::Details::CreateActivationFactory
helpviewer_keywords:
- CreateActivationFactory function
ms.assetid: a1a53e04-6757-4faf-a4c8-ecf06e43b959
ms.openlocfilehash: 25f2181a00bb018361b05ea6570ebbadc6f7a975
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97273107"
---
# <a name="createactivationfactory-function"></a>CreateActivationFactory (funzione)

Crea una factory che produce istanze della classe specificata che può essere attivata da Windows Runtime.

## <a name="syntax"></a>Sintassi

```cpp
template<typename Factory>
   inline HRESULT STDMETHODCALLTYPE CreateActivationFactory(
      _In_ unsigned int *flags,        _In_ const CreatorMap* entry,
      REFIID riid,
   _Outptr_ IUnknown **ppFactory) throw();
```

### <a name="parameters"></a>Parametri

*flags*<br/>
Combinazione di uno o più valori di enumerazione [RuntimeClassType](runtimeclasstype-enumeration.md) .

*voce*<br/>
Puntatore a un [CreatorMap](creatormap-structure.md) che contiene le informazioni di inizializzazione e registrazione sul parametro *riid*.

*riid*<br/>
Riferimento a un ID di interfaccia.

*ppFactory*<br/>
Se questa operazione viene completata correttamente, un puntatore a una factory di attivazione.

## <a name="return-value"></a>Valore restituito

S_OK se riesce; in caso contrario, HRESULT indica un errore.

## <a name="remarks"></a>Commenti

Viene generato un errore di asserzione se la *Factory* del parametro di modello non deriva dall'interfaccia `IActivationFactory` .

## <a name="requirements"></a>Requisiti

**Intestazione:** Module. h

**Spazio dei nomi:** Microsoft::WRL

## <a name="see-also"></a>Vedi anche

[Microsoft:: WRL:: Wrappers: spazio dei nomi:D etails](microsoft-wrl-wrappers-details-namespace.md)
