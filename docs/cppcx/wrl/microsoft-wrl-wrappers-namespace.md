---
title: Metodo Microsoft::WRL::Wrappers
ms.date: 11/04/2016
ms.topic: reference
f1_keywords:
- corewrappers/Microsoft::WRL::Wrappers
helpviewer_keywords:
- Wrappers namespace
ms.assetid: 36ac38c7-1fc3-42da-a879-5c68661dc9e1
ms.openlocfilehash: 4b88ad0da31321a696c1238f1c9838d3b3a1c927
ms.sourcegitcommit: c7f90df497e6261764893f9cc04b5d1f1bf0b64b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/05/2019
ms.locfileid: "59030115"
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
|[CriticalSection (classe)](criticalsection-class.md)|Rappresenta una sezione critica.|
|[Classe di evento (WRL)](event-class-wrl.md)|Rappresenta un evento.|
|[HandleT (classe)](handlet-class.md)|Rappresenta un handle a un oggetto.|
|[Classe HString](hstring-class.md)|Fornisce supporto per modificare un handle HSTRING.|
|[Classe HStringReference](hstringreference-class.md)|Rappresenta un HSTRING creato da una stringa esistente.|
|[Classe Mutex](mutex-class.md)|Rappresenta un oggetto di sincronizzazione che controlla esclusivamente una risorsa condivisa.|
|[Classe RoInitializeWrapper](roinitializewrapper-class.md)|Inizializza il Runtime di Windows.|
|[Semaphore (classe)](semaphore-class.md)|Rappresenta un oggetto di sincronizzazione che controlla una risorsa condivisa che può supportare un numero limitato di utenti.|
|[SRWLock (classe)](srwlock-class.md)|Rappresenta un blocco in lettura/scrittura.|

## <a name="requirements"></a>Requisiti

**Intestazione:** corewrappers. h

**Spazio dei nomi:** Microsoft::WRL::Wrappers

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi Microsoft::WRL](microsoft-wrl-namespace.md)