---
title: Classe di evento (libreria modelli C++ per Windows Runtime) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- corewrappers/Microsoft::WRL::Wrappers::Event
dev_langs:
- C++
ms.assetid: 55dfc9fc-62d4-4bb2-9d85-5b6dd88569e8
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: b40e9c5e04c21cdbcc56581e02751edc84e4617d
ms.sourcegitcommit: 6f8dd98de57bb80bf4c9852abafef1c35a7600f1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/22/2018
ms.locfileid: "42606289"
---
# <a name="event-class-windows-runtime-c-template-library"></a>Classe di eventi (Libreria modelli C++ per Windows Runtime)

Rappresenta un evento.

## <a name="syntax"></a>Sintassi

```cpp
class Event : public HandleT<HandleTraits::EventTraits>;
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[Costruttore Event::Event (Libreria modelli C++ per Windows Runtime)](../windows/event-event-constructor-windows-runtime-cpp-template-library.md)|Inizializza una nuova istanza di **evento** classe.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[Operatore Event::operator=](../windows/event-operator-assign-operator.md)|Assegna l'oggetto specificato **evento** riferimento all'oggetto corrente **evento** istanza.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`HandleT`

`Event`

## <a name="requirements"></a>Requisiti

**Intestazione:** corewrappers. h

**Namespace:** Microsoft::WRL::Wrappers

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi Microsoft::WRL::Wrappers](../windows/microsoft-wrl-wrappers-namespace.md)