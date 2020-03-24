---
title: Spazio dei nomi Microsoft::WRL::Wrappers
ms.date: 11/04/2016
ms.topic: reference
f1_keywords:
- corewrappers/Microsoft::WRL::Wrappers
helpviewer_keywords:
- Wrappers namespace
ms.assetid: 36ac38c7-1fc3-42da-a879-5c68661dc9e1
ms.openlocfilehash: ece26b3f9928d44a593de830cf8a25c57e4c2d89
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80213746"
---
# <a name="microsoftwrlwrappers-namespace"></a>Spazio dei nomi Microsoft::WRL::Wrappers

Definisce i tipi di wrapper per l'acquisizione di risorse (RAII) che semplificano la gestione della durata di oggetti, stringhe e handle.

## <a name="syntax"></a>Sintassi

```cpp
namespace Microsoft::WRL::Wrappers;
```

## <a name="members"></a>Members

### <a name="typedefs"></a>Typedef

|Nome|Descrizione|
|----------|-----------------|
|`FileHandle`|`HandleT<HandleTraits::FileHandleTraits>`|

### <a name="classes"></a>Classi

|Nome|Descrizione|
|----------|-----------------|
|[Classe CriticalSection](criticalsection-class.md)|Rappresenta un oggetto sezione critica.|
|[Classe event (WRL)](event-class-wrl.md)|Rappresenta un evento.|
|[Classe HandleT](handlet-class.md)|Rappresenta un handle per un oggetto.|
|[Classe HString](hstring-class.md)|Fornisce supporto per la modifica degli handle HSTRING.|
|[Classe HStringReference](hstringreference-class.md)|Rappresenta un HSTRING creato da una stringa esistente.|
|[Classe Mutex](mutex-class.md)|Rappresenta un oggetto di sincronizzazione che controlla in modo esclusivo una risorsa condivisa.|
|[Classe RoInitializeWrapper](roinitializewrapper-class.md)|Inizializza la Windows Runtime.|
|[Classe Semaphore](semaphore-class.md)|Rappresenta un oggetto di sincronizzazione che controlla una risorsa condivisa in grado di supportare un numero limitato di utenti.|
|[Classe SRWLock](srwlock-class.md)|Rappresenta un blocco di lettura/scrittura sottile.|

## <a name="requirements"></a>Requisiti

**Intestazione:** corewrappers. h

**Spazio dei nomi:** Microsoft:: WRL:: Wrappers

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi Microsoft::WRL](microsoft-wrl-namespace.md)
