---
description: 'Altre informazioni su: Funzione CreateClassFactory'
title: CreateClassFactory (funzione)
ms.date: 11/04/2016
ms.topic: reference
f1_keywords:
- module/Microsoft::WRL::Details::CreateClassFactory
helpviewer_keywords:
- CreateClassFactory function
ms.assetid: 772d5d1b-8872-4745-81ca-521a39564713
ms.openlocfilehash: 99565ee732843f57426f10375ffabc7680ef3c62
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97273059"
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
Combinazione di uno o più valori di enumerazione [RuntimeClassType](runtimeclasstype-enumeration.md) .

*voce*<br/>
Puntatore a un [CreatorMap](creatormap-structure.md) che contiene le informazioni di inizializzazione e registrazione sul parametro *riid*.

*riid*<br/>
Riferimento a un ID di interfaccia.

*ppFactory*<br/>
Se questa operazione viene completata correttamente, un puntatore a un class factory.

## <a name="return-value"></a>Valore restituito

S_OK se riesce; in caso contrario, HRESULT indica un errore.

## <a name="remarks"></a>Commenti

Viene generato un errore di asserzione se la *Factory* del parametro di modello non deriva dall'interfaccia `IClassFactory` .

## <a name="requirements"></a>Requisiti

**Intestazione:** Module. h

**Spazio dei nomi:** Microsoft::WRL

## <a name="see-also"></a>Vedi anche

[Microsoft:: WRL:: Wrappers: spazio dei nomi:D etails](microsoft-wrl-wrappers-details-namespace.md)
