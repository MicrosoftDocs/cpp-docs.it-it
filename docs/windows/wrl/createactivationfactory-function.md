---
title: CreateActivationFactory (funzione)
ms.date: 11/04/2016
ms.topic: reference
f1_keywords:
- module/Microsoft::WRL::Details::CreateActivationFactory
helpviewer_keywords:
- CreateActivationFactory function
ms.assetid: a1a53e04-6757-4faf-a4c8-ecf06e43b959
ms.openlocfilehash: 07bc0dceb8066faf9c1beab64d48245d8735aa64
ms.sourcegitcommit: 360b55e89e5954f494e52b1cf989fbaceda06f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/16/2019
ms.locfileid: "54336839"
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