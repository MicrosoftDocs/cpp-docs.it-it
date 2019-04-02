---
title: CreateClassFactory (funzione)
ms.date: 11/04/2016
ms.topic: reference
f1_keywords:
- module/Microsoft::WRL::Details::CreateClassFactory
helpviewer_keywords:
- CreateClassFactory function
ms.assetid: 772d5d1b-8872-4745-81ca-521a39564713
ms.openlocfilehash: e7e213d1b0679f17ce070de85ee9410ff9546716
ms.sourcegitcommit: 5cecccba0a96c1b4ccea1f7a1cfd91f259cc5bde
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/01/2019
ms.locfileid: "58785344"
---
# <a name="createclassfactory-function"></a>CreateClassFactory (funzione)

Crea una factory che produce istanze della classe specificata.

## <a name="syntax"></a>Sintassi

```cpp
template<typename Factory>
inline HRESULT STDMETHODCALLTYPE CreateClassFactory(
   _In_ unsigned int *flags,
   _In_ const CreatorMap* entry,
   REFIID riid,
   _Outptr_ IUnknown **ppFactory
) throw();
```

### <a name="parameters"></a>Parametri

*flags*<br/>
Una combinazione di uno o più [RuntimeClassType](runtimeclasstype-enumeration.md) valori di enumerazione.

*entry*<br/>
Puntatore a un [CreatorMap](creatormap-structure.md) che contiene informazioni di inizializzazione e la registrazione sul parametro *riid*.

*riid*<br/>
Riferimento all'ID di interfaccia.

*ppFactory*<br/>
Se questa operazione viene completata correttamente, un puntatore a una class factory.

## <a name="return-value"></a>Valore restituito

S_OK se riesce; in caso contrario, HRESULT indica un errore.

## <a name="remarks"></a>Note

Viene generato un errore di asserzione se il parametro di modello *Factory* non deriva dall'interfaccia `IClassFactory`.

## <a name="requirements"></a>Requisiti

**Intestazione:** module.h

**Spazio dei nomi:** Microsoft::WRL

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi Microsoft::WRL::Wrappers::Details](microsoft-wrl-wrappers-details-namespace.md)