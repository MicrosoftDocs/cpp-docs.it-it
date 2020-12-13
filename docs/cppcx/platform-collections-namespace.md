---
description: 'Altre informazioni su: spazio dei nomi Platform:: Collections'
title: Platform::Collections (spazio dei nomi)
ms.date: 01/18/2018
ms.topic: reference
f1_keywords:
- collection/Platform::Collections
helpviewer_keywords:
- Platform::Collections Namespace
ms.assetid: b5042864-5f22-40b7-b7a5-c0691f65cc47
ms.openlocfilehash: d80479ed73183450dedd86119dda2da1fab800e0
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97340411"
---
# <a name="platformcollections-namespace"></a>Platform::Collections (spazio dei nomi)

Lo spazio dei nomi Platform:: Collections contiene le `Map` `MapView` classi,, `Vector` e `VectorView` . Queste classi sono implementazioni concrete delle interfacce corrispondenti definite nello spazio dei nomi [Windows::Foundation::Collections](/uwp/api/windows.foundation.collections) . I tipi di raccolta concreti non sono portabili tramite ABI ad esempio quando un programma JavaScript o C# chiama il componente C++), ma sono implicitamente convertibili nei tipi di interfaccia corrispondenti. Ad esempio, se si implementa un metodo pubblico che popola e restituisce una raccolta, usare [Platform::Collections::Vector](../cppcx/platform-collections-vector-class.md) per implementare la raccolta internamente e [Windows::Foundation::Collections::IVector](/uwp/api/windows.foundation.collections.ivector-1) come tipo restituito. Per altre informazioni, vedere [raccolte](../cppcx/collections-c-cx.md) e [creazione di componenti Windows Runtime in C++](/windows/uwp/winrt-components/creating-windows-runtime-components-in-cpp).

Puoi costruire un oggetto Platform::Collections::Vector da un oggetto [std::vector](../standard-library/vector-class.md) e un oggetto [Platform::Collections::Map](../cppcx/platform-collections-map-class.md) da [std::map](../standard-library/map-class.md).

Inoltre, lo spazio dei nomi Platform:: Collections fornisce il supporto per gli iteratori di input e di input back e gli `Vector` `VectorView` iteratori e.

È necessario includere ( `#include` ) l'intestazione Collection. h per usare i tipi nello spazio dei nomi Platform:: Collections.

## <a name="syntax"></a>Sintassi

```cpp
#include <collection.h>
using namespace Platform::Collections;
```

### <a name="members"></a>Members

Questo spazio dei nomi contiene i seguenti membri.

|Nome|Description|
|----------|-----------------|
|[Classe Platform:: Collections:: BackInsertIterator](../cppcx/platform-collections-backinsertiterator-class.md)|Rappresenta un iteratore che inserisce un elemento alla fine di una raccolta.|
|[Classe Platform:: Collections:: InputIterator](../cppcx/platform-collections-inputiterator-class.md)|Rappresenta un iteratore che inserisce un elemento all'inizio di una raccolta.|
|[Classe Platform:: Collections:: Map](../cppcx/platform-collections-map-class.md)|Rappresenta una raccolta modificabile di coppie chiave-valore alle quali è possibile accedere in base a una chiave. Simile a [std::map](../standard-library/map-class.md).|
|[Classe Platform:: Collections:: MapView](../cppcx/platform-collections-mapview-class.md)|Rappresenta una raccolta di sola lettura di coppie chiave-valore alle quali è possibile accedere in base a una chiave.|
|[Classe Platform:: Collections:: Vector](../cppcx/platform-collections-vector-class.md)|Rappresenta una sequenza di elementi modificabile. Simile a [std::vector](../standard-library/vector-class.md).|
|[Classe Platform:: Collections:: oggetto VectorIterator](../cppcx/platform-collections-vectoriterator-class.md)|Rappresenta un iteratore che attraversa una raccolta `Vector` .|
|[Classe Platform:: Collections:: VectorView](../cppcx/platform-collections-vectorview-class.md)|Rappresenta una sequenza di sola lettura di elementi.|
|[Classe Platform:: Collections:: oggetto VectorViewIterator](../cppcx/platform-collections-vectorviewiterator-class.md)|Rappresenta un iteratore che attraversa una raccolta `VectorView` .|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[Spazio dei nomi Platform](../cppcx/platform-namespace-c-cx.md)

### <a name="requirements"></a>Requisiti

**Metadati:** Platform. winmd

**Spazio dei nomi:** Platform::Collections

**Opzione del compilatore:** /ZW

## <a name="see-also"></a>Vedi anche

[Spazio dei nomi Platform](../cppcx/platform-namespace-c-cx.md)
