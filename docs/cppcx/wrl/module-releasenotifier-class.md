---
title: Classe Module::ReleaseNotifier
ms.date: 09/17/2018
ms.topic: reference
f1_keywords:
- module/Microsoft::WRL::Module::ReleaseNotifier
- module/Microsoft::WRL::Module::ReleaseNotifier::~ReleaseNotifier
- module/Microsoft::WRL::Module::ReleaseNotifier::Invoke
- module/Microsoft::WRL::Module::ReleaseNotifier::Release
- module/Microsoft::WRL::Module::ReleaseNotifier::ReleaseNotifier
helpviewer_keywords:
- Microsoft::WRL::Module::ReleaseNotifier class
- Microsoft::WRL::Module::ReleaseNotifier::~ReleaseNotifier, destructor
- Microsoft::WRL::Module::ReleaseNotifier::Invoke method
- Microsoft::WRL::Module::ReleaseNotifier::Release method
- Microsoft::WRL::Module::ReleaseNotifier::ReleaseNotifier, constructor
ms.assetid: 17249cd1-4d88-42e3-8146-da9e942d12bd
ms.openlocfilehash: 25fbb23ee7ecb7e55377aed74effe8bfa43a1597
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87218364"
---
# <a name="modulereleasenotifier-class"></a>Classe Module::ReleaseNotifier

Richiama un gestore eventi quando viene rilasciato l'ultimo oggetto in un modulo.

## <a name="syntax"></a>Sintassi

```cpp
class ReleaseNotifier;
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

Nome                                                                                | Descrizione
----------------------------------------------------------------------------------- | --------------------------------------------------------------------------
[Module:: ReleaseNotifier:: ~ ReleaseNotifier](#releasenotifier-tilde-releasenotifier) | Consente di deinizializzare l'istanza corrente della `Module::ReleaseNotifier` classe.
[Module:: ReleaseNotifier:: ReleaseNotifier](#releasenotifier-releasenotifier)        | Inizializza una nuova istanza della classe `Module::ReleaseNotifier`.

### <a name="public-methods"></a>Metodi pubblici

Nome                                                         | Descrizione
------------------------------------------------------------ | --------------------------------------------------------------------------------------------------------------
[Module:: ReleaseNotifier:: Invoke](#releasenotifier-invoke)   | Quando viene implementato, chiama un gestore eventi quando viene rilasciato l'ultimo oggetto in un modulo.
[Module::ReleaseNotifier::Release](#releasenotifier-release) | Elimina l' `Module::ReleaseNotifier` oggetto corrente se l'oggetto è stato costruito con un parametro di **`true`** .

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`ReleaseNotifier`

## <a name="requirements"></a>Requisiti

**Intestazione:** Module. h

**Spazio dei nomi:** Microsoft::WRL

## <a name="modulereleasenotifierreleasenotifier"></a><a name="releasenotifier-tilde-releasenotifier"></a>Module:: ReleaseNotifier:: ~ ReleaseNotifier

Consente di deinizializzare l'istanza corrente della `Module::ReleaseNotifier` classe.

```cpp
WRL_NOTHROW virtual ~ReleaseNotifier();
```

## <a name="modulereleasenotifierinvoke"></a><a name="releasenotifier-invoke"></a>Module:: ReleaseNotifier:: Invoke

Quando viene implementato, chiama un gestore eventi quando viene rilasciato l'ultimo oggetto in un modulo.

```cpp
virtual void Invoke() = 0;
```

## <a name="modulereleasenotifierrelease"></a><a name="releasenotifier-release"></a>Module:: ReleaseNotifier:: Release

Elimina l' `Module::ReleaseNotifier` oggetto corrente se l'oggetto è stato costruito con un parametro di **`true`** .

```cpp
void Release() throw();
```

## <a name="modulereleasenotifierreleasenotifier"></a><a name="releasenotifier-releasenotifier"></a>Module:: ReleaseNotifier:: ReleaseNotifier

Inizializza una nuova istanza della classe `Module::ReleaseNotifier`.

```cpp
ReleaseNotifier(bool release) throw();
```

### <a name="parameters"></a>Parametri

*versione*<br/>
**`true`** per eliminare questa istanza quando `Release` viene chiamato il metodo; **`false`** per non eliminare l'istanza.
