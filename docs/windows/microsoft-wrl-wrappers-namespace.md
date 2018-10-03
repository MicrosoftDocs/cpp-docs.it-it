---
title: Namespace Microsoft::WRL::Wrappers | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- corewrappers/Microsoft::WRL::Wrappers
dev_langs:
- C++
helpviewer_keywords:
- Wrappers namespace
ms.assetid: 36ac38c7-1fc3-42da-a879-5c68661dc9e1
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 2b1a63494e06ce3117e7e8fccd1d0cbca8cdb4d0
ms.sourcegitcommit: d1527eb2d50156bf923f2a32ec3af9efc7fc4304
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/03/2018
ms.locfileid: "48250341"
---
# <a name="microsoftwrlwrappers-namespace"></a>Metodo Microsoft::WRL::Wrappers

Definisce i tipi di wrapper risorse acquisizione è inizializzazione (RAII) che consentono di semplificare la gestione della durata di oggetti, stringhe e gli handle.

## <a name="syntax"></a>Sintassi

```cpp
namespace Microsoft::WRL::Wrappers;
```

## <a name="members"></a>Membri

### <a name="typedefs"></a>Definizioni typedef

|Nome|Descrizione|
|----------|-----------------|
|`FileHandle`|`HandleT<HandleTraits::FileHandleTraits>`|

### <a name="classes"></a>Classi

|Nome|Descrizione|
|----------|-----------------|
|[Classe CriticalSection](../windows/criticalsection-class.md)|Rappresenta una sezione critica.|
|[Classe di evento (WRL)](../windows/event-class-wrl.md)|Rappresenta un evento.|
|[Classe HandleT](../windows/handlet-class.md)|Rappresenta un handle a un oggetto.|
|[Classe HString](../windows/hstring-class.md)|Fornisce supporto per modificare un handle HSTRING.|
|[Classe HStringReference](../windows/hstringreference-class.md)|Rappresenta un HSTRING creato da una stringa esistente.|
|[Classe Mutex](../windows/mutex-class.md)|Rappresenta un oggetto di sincronizzazione che controlla esclusivamente una risorsa condivisa.|
|[Classe RoInitializeWrapper](../windows/roinitializewrapper-class.md)|Inizializza il Runtime di Windows.|
|[Classe Semaphore](../windows/semaphore-class.md)|Rappresenta un oggetto di sincronizzazione che controlla una risorsa condivisa che può supportare un numero limitato di utenti.|
|[Classe SRWLock](../windows/srwlock-class.md)|Rappresenta un blocco in lettura/scrittura.|

## <a name="requirements"></a>Requisiti

**Intestazione:** corewrappers. h

**Namespace:** Microsoft::WRL::Wrappers

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi Microsoft::WRL](../windows/microsoft-wrl-namespace.md)