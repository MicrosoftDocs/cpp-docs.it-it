---
title: Platform::Collections (spazio dei nomi)
ms.date: 01/18/2018
ms.topic: reference
f1_keywords:
- collection/Platform::Collections
helpviewer_keywords:
- Platform::Collections Namespace
ms.assetid: b5042864-5f22-40b7-b7a5-c0691f65cc47
ms.openlocfilehash: 025c25d6c01ab9a28c68574cc2a13e09dbf28388
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62161745"
---
# <a name="platformcollections-namespace"></a>Platform::Collections (spazio dei nomi)

Lo spazio dei nomi platform:: Collections contiene il `Map`, `MapView`, `Vector`, e `VectorView` classi. Queste classi sono implementazioni concrete delle interfacce corrispondenti definite nello spazio dei nomi [Windows::Foundation::Collections](/uwp/api/Windows.Foundation.Collections) . I tipi di raccolta concreti non sono portabili tramite ABI ad esempio quando un programma JavaScript o C# chiama il componente C++), ma sono implicitamente convertibili nei tipi di interfaccia corrispondenti. Ad esempio, se si implementa un metodo pubblico che popola e restituisce una raccolta, usare [Platform::Collections::Vector](../cppcx/platform-collections-vector-class.md) per implementare la raccolta internamente e [Windows::Foundation::Collections::IVector](/uwp/api/Windows.Foundation.Collections.IVector_T_) come tipo restituito. Per altre informazioni, vedere [raccolte](../cppcx/collections-c-cx.md) e [creazione di componenti Windows Runtime in C++](/windows/uwp/winrt-components/creating-windows-runtime-components-in-cpp).

Puoi costruire un oggetto Platform::Collections::Vector da un oggetto [std::vector](../standard-library/vector-class.md) e un oggetto [Platform::Collections::Map](../cppcx/platform-collections-map-class.md) da [std::map](../standard-library/map-class.md).

Inoltre, lo spazio dei nomi platform:: Collections fornisce il supporto per gli iteratori di input e di inserimento e `Vector` e `VectorView` gli iteratori.

È necessario includere (`#include`) l'intestazione Collection. h come utilizzare i tipi nello spazio dei nomi platform:: Collections.

## <a name="syntax"></a>Sintassi

```cpp
#include <collection.h>
using namespace Platform::Collections;
```

### <a name="members"></a>Membri

Questo spazio dei nomi contiene i seguenti membri.

|Nome|Descrizione|
|----------|-----------------|
|[Classe Platform::Collections::BackInsertIterator](../cppcx/platform-collections-backinsertiterator-class.md)|Rappresenta un iteratore che inserisce un elemento alla fine di una raccolta.|
|[Classe Platform::Collections::InputIterator](../cppcx/platform-collections-inputiterator-class.md)|Rappresenta un iteratore che inserisce un elemento all'inizio di una raccolta.|
|[Platform::Collections::Map](../cppcx/platform-collections-map-class.md)|Rappresenta una raccolta modificabile di coppie chiave-valore alle quali è possibile accedere in base a una chiave. Simile a [std::map](../standard-library/map-class.md).|
|[Platform::Collections::MapView](../cppcx/platform-collections-mapview-class.md)|Rappresenta una raccolta di sola lettura di coppie chiave-valore alle quali è possibile accedere in base a una chiave.|
|[Platform::Collections::Vector Class](../cppcx/platform-collections-vector-class.md)|Rappresenta una sequenza di elementi modificabile. Simile a [std::vector](../standard-library/vector-class.md).|
|[Classe Platform::Collections::VectorIterator](../cppcx/platform-collections-vectoriterator-class.md)|Rappresenta un iteratore che attraversa una raccolta `Vector` .|
|[Platform::Collections::VectorView](../cppcx/platform-collections-vectorview-class.md)|Rappresenta una sequenza di sola lettura di elementi.|
|[Classe Platform::Collections::VectorViewIterator](../cppcx/platform-collections-vectorviewiterator-class.md)|Rappresenta un iteratore che attraversa una raccolta `VectorView` .|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[Spazio dei nomi Platform](../cppcx/platform-namespace-c-cx.md)

### <a name="requirements"></a>Requisiti

**Metadati:** platform.winmd

**Spazio dei nomi:** Platform::Collections

**Opzione del compilatore:** /ZW

## <a name="see-also"></a>Vedere anche

[Platform Namespace](../cppcx/platform-namespace-c-cx.md)
