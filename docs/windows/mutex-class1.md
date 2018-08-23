---
title: Mutex Class1 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- corewrappers/Microsoft::WRL::Wrappers::Mutex
dev_langs:
- C++
helpviewer_keywords:
- Mutex class
ms.assetid: 682a0963-721c-46a2-8871-000e9997505b
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: b20c270f7848a346d717357f474d89e37ea117a4
ms.sourcegitcommit: 6f8dd98de57bb80bf4c9852abafef1c35a7600f1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/22/2018
ms.locfileid: "42600028"
---
# <a name="mutex-class1"></a>mutex Class1

Rappresenta un oggetto di sincronizzazione che controlla esclusivamente una risorsa condivisa.

## <a name="syntax"></a>Sintassi

```cpp
class Mutex : public HandleT<HandleTraits::MutexTraits>
```

## <a name="members"></a>Membri

### <a name="public-typedefs"></a>Typedef pubblici

|Nome|Descrizione|
|----------|-----------------|
|`SyncLock`|Un sinonimo per una classe che supporta i blocchi sincroni.|

### <a name="public-constructor"></a>Costruttore pubblico

|nome|Descrizione|
|----------|-----------------|
|[Costruttore Mutex::Mutex](../windows/mutex-mutex-constructor.md)|Inizializza una nuova istanza di **Mutex** classe.|

### <a name="public-members"></a>Membri pubblici

|nome|Descrizione|
|----------|-----------------|
|[Metodo Mutex::Lock](../windows/mutex-lock-method.md)|Attende fino a quando l'oggetto corrente, o la **Mutex** oggetto associato all'handle specificato, le versioni è trascorso l'intervallo di timeout specificato o il mutex.|

### <a name="public-operator"></a>Operatore pubblico

|nome|Descrizione|
|----------|-----------------|
|[Operatore Mutex::operator=](../windows/mutex-operator-assign-operator.md)|Assegna (sposta) specificato **Mutex** oggetto all'oggetto corrente **Mutex** oggetto.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`Mutex`

## <a name="requirements"></a>Requisiti

**Intestazione:** corewrappers. h

**Namespace:** Microsoft::WRL::Wrappers

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi Microsoft::WRL::Wrappers](../windows/microsoft-wrl-wrappers-namespace.md)