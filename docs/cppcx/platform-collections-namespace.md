---
title: Platform::Collections (spazio dei nomi)
ms.date: 01/18/2018
ms.topic: reference
f1_keywords:
- collection/Platform::Collections
helpviewer_keywords:
- Platform::Collections Namespace
ms.assetid: b5042864-5f22-40b7-b7a5-c0691f65cc47
ms.openlocfilehash: ab6b78f1b88c586a11276d36387fb42ea6ee667f
ms.sourcegitcommit: 89d9e1cb08fa872483d1cde98bc2a7c870e505e9
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/22/2020
ms.locfileid: "82032421"
---
# <a name="platformcollections-namespace"></a>Platform::Collections (spazio dei nomi)

Lo spazio dei nomi `Map`Platform::Collections contiene le classi , `MapView`, `Vector`, e `VectorView` . Queste classi sono implementazioni concrete delle interfacce corrispondenti definite nello spazio dei nomi [Windows::Foundation::Collections](/uwp/api/windows.foundation.collections) . I tipi di raccolta concreti non sono portabili tramite ABI ad esempio quando un programma JavaScript o C# chiama il componente C++), ma sono implicitamente convertibili nei tipi di interfaccia corrispondenti. Ad esempio, se si implementa un metodo pubblico che popola e restituisce una raccolta, usare [Platform::Collections::Vector](../cppcx/platform-collections-vector-class.md) per implementare la raccolta internamente e [Windows::Foundation::Collections::IVector](/uwp/api/windows.foundation.collections.ivector-1) come tipo restituito. Per ulteriori informazioni, consultate [Raccolte](../cppcx/collections-c-cx.md) e [Creazione di componenti di Windows Runtime in C.](/windows/uwp/winrt-components/creating-windows-runtime-components-in-cpp)

Puoi costruire un oggetto Platform::Collections::Vector da un oggetto [std::vector](../standard-library/vector-class.md) e un oggetto [Platform::Collections::Map](../cppcx/platform-collections-map-class.md) da [std::map](../standard-library/map-class.md).

Inoltre, il Platform::Collections dello spazio dei nomi fornisce `Vector` il `VectorView` supporto per gli iteratori di input e inserimento e indietro e gli iteratori.

È necessario`#include`includere ( ) l'intestazione collection.h per utilizzare i tipi nello spazio dei nomi Platform::Collections.

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
|[Classe Platform::Collections::MapView](../cppcx/platform-collections-mapview-class.md)|Rappresenta una raccolta di sola lettura di coppie chiave-valore alle quali è possibile accedere in base a una chiave.|
|[Classe Platform::Collections::Vector](../cppcx/platform-collections-vector-class.md)|Rappresenta una sequenza di elementi modificabile. Simile a [std::vector](../standard-library/vector-class.md).|
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

[Spazio dei nomi della piattaforma](../cppcx/platform-namespace-c-cx.md)
