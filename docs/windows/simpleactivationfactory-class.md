---
title: Classe SimpleActivationFactory | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- module/Microsoft::WRL::SimpleActivationFactory
dev_langs:
- C++
helpviewer_keywords:
- SimpleActivationFactory class
ms.assetid: aff768e0-0038-4fd7-95d2-ad7d308da41c
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 0820012c8c22de1287fcb09037212b870a4ff7bf
ms.sourcegitcommit: 6f8dd98de57bb80bf4c9852abafef1c35a7600f1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/22/2018
ms.locfileid: "42594798"
---
# <a name="simpleactivationfactory-class"></a>SimpleActivationFactory (classe)

Fornisce un meccanismo semplice per creare una classe base di Windows Runtime o COM classica.

## <a name="syntax"></a>Sintassi

```cpp
template<typename Base>
class SimpleActivationFactory : public ActivationFactory<>;
```

### <a name="parameters"></a>Parametri

*base*  
Classe di base.

## <a name="remarks"></a>Note

La classe di base deve fornire un costruttore predefinito.

Esempio di codice seguente viene illustrato come utilizzare SimpleActivationFactory con la [ActivatableClassWithFactoryEx](../windows/activatableclass-macros.md) macro.

`ActivatableClassWithFactoryEx(MyClass, SimpleActivationFactory, MyServerName);`

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[Metodo SimpleActivationFactory::ActivateInstance](../windows/simpleactivationfactory-activateinstance-method.md)|Crea un'istanza dell'interfaccia specificata.|
|[Metodo SimpleActivationFactory::GetRuntimeClassName](../windows/simpleactivationfactory-getruntimeclassname-method.md)|Ottiene il nome di classe di runtime di un'istanza della classe specificata per il *Base* parametro di modello di classe.|
|[Metodo SimpleActivationFactory::GetTrustLevel](../windows/simpleactivationfactory-gettrustlevel-method.md)|Ottiene il livello di attendibilità di un'istanza della classe specificata per il *Base* parametro di modello di classe.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`I0`

`ChainInterfaces`

`I0`

`RuntimeClassBase`

`ImplementsHelper`

`DontUseNewUseMake`

`RuntimeClassFlags`

`RuntimeClassBaseT`

`RuntimeClass`

`ActivationFactory`

`SimpleActivationFactory`

## <a name="requirements"></a>Requisiti

**Intestazione:** module.h

**Spazio dei nomi:** Microsoft::WRL

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi Microsoft::WRL](../windows/microsoft-wrl-namespace.md)