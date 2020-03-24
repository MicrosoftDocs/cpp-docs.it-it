---
title: Funzione CreateActivationFactory
ms.date: 11/04/2016
ms.topic: reference
f1_keywords:
- module/Microsoft::WRL::Details::CreateActivationFactory
helpviewer_keywords:
- CreateActivationFactory function
ms.assetid: a1a53e04-6757-4faf-a4c8-ecf06e43b959
ms.openlocfilehash: ab03b15a968c6aba3fa6df8c975fb98e873f8e23
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80214071"
---
# <a name="createactivationfactory-function"></a>Funzione CreateActivationFactory

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

*entry*<br/>
Puntatore a un [CreatorMap](creatormap-structure.md) che contiene le informazioni di inizializzazione e registrazione sul parametro *riid*.

*riid*<br/>
Riferimento a un ID di interfaccia.

*ppFactory*<br/>
Se questa operazione viene completata correttamente, un puntatore a una factory di attivazione.

## <a name="return-value"></a>Valore restituito

S_OK se riesce; in caso contrario, HRESULT indica un errore.

## <a name="remarks"></a>Osservazioni

Viene generato un errore di asserzione se la *Factory* del parametro di modello non deriva dall'interfaccia `IActivationFactory`.

## <a name="requirements"></a>Requisiti

**Intestazione:** Module. h

**Spazio dei nomi:** Microsoft::WRL

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi Microsoft::WRL::Wrappers::Details](microsoft-wrl-wrappers-details-namespace.md)
