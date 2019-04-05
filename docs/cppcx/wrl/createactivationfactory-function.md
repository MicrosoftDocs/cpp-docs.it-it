---
title: CreateActivationFactory (funzione)
ms.date: 11/04/2016
ms.topic: reference
f1_keywords:
- module/Microsoft::WRL::Details::CreateActivationFactory
helpviewer_keywords:
- CreateActivationFactory function
ms.assetid: a1a53e04-6757-4faf-a4c8-ecf06e43b959
ms.openlocfilehash: ca3469128cf3d412138d5d39a1587cbc20150699
ms.sourcegitcommit: c7f90df497e6261764893f9cc04b5d1f1bf0b64b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/05/2019
ms.locfileid: "59040606"
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

*flag*<br/>
Una combinazione di uno o più [RuntimeClassType](runtimeclasstype-enumeration.md) valori di enumerazione.

*entry*<br/>
Puntatore a un [CreatorMap](creatormap-structure.md) che contiene informazioni di inizializzazione e la registrazione sul parametro *riid*.

*riid*<br/>
Riferimento all'ID di interfaccia.

*ppFactory*<br/>
Se questa operazione viene completata correttamente, un puntatore a una factory di attivazione.

## <a name="return-value"></a>Valore restituito

S_OK se riesce; in caso contrario, HRESULT indica un errore.

## <a name="remarks"></a>Note

Viene generato un errore di asserzione se il parametro di modello *Factory* non deriva dall'interfaccia `IActivationFactory`.

## <a name="requirements"></a>Requisiti

**Intestazione:** module.h

**Spazio dei nomi:** Microsoft::WRL

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi Microsoft::WRL::Wrappers::Details](microsoft-wrl-wrappers-details-namespace.md)