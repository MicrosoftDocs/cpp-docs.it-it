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
ms.openlocfilehash: f314d09c443d0d284e3a821b5c879bfb74baf812
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81371281"
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
[Modulo::ReleaseNotifier::](#releasenotifier-tilde-releasenotifier) | Deinizializza l'istanza corrente `Module::ReleaseNotifier` della classe.
[Modulo::ReleaseNotifier::ReleaseNotifier](#releasenotifier-releasenotifier)        | Inizializza una nuova istanza della classe `Module::ReleaseNotifier`.

### <a name="public-methods"></a>Metodi pubblici

Nome                                                         | Descrizione
------------------------------------------------------------ | --------------------------------------------------------------------------------------------------------------
[Modulo::ReleaseNotifier::Richiamare](#releasenotifier-invoke)   | Quando implementato, chiama un gestore eventi quando viene rilasciato l'ultimo oggetto in un modulo.
[Module::ReleaseNotifier::Release](#releasenotifier-release) | Elimina l'oggetto corrente `Module::ReleaseNotifier` se l'oggetto è stato costruito con un parametro **true**.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`ReleaseNotifier`

## <a name="requirements"></a>Requisiti

**Intestazione:** module.h

**Spazio dei nomi:** Microsoft::WRL

## <a name="modulereleasenotifierreleasenotifier"></a><a name="releasenotifier-tilde-releasenotifier"></a>Modulo::ReleaseNotifier::

Deinizializza l'istanza corrente `Module::ReleaseNotifier` della classe.

```cpp
WRL_NOTHROW virtual ~ReleaseNotifier();
```

## <a name="modulereleasenotifierinvoke"></a><a name="releasenotifier-invoke"></a>Modulo::ReleaseNotifier::Richiamare

Quando implementato, chiama un gestore eventi quando viene rilasciato l'ultimo oggetto in un modulo.

```cpp
virtual void Invoke() = 0;
```

## <a name="modulereleasenotifierrelease"></a><a name="releasenotifier-release"></a>Modulo::ReleaseNotifier::Release

Elimina l'oggetto corrente `Module::ReleaseNotifier` se l'oggetto è stato costruito con un parametro **true**.

```cpp
void Release() throw();
```

## <a name="modulereleasenotifierreleasenotifier"></a><a name="releasenotifier-releasenotifier"></a>Modulo::ReleaseNotifier::ReleaseNotifier

Inizializza una nuova istanza della classe `Module::ReleaseNotifier`.

```cpp
ReleaseNotifier(bool release) throw();
```

### <a name="parameters"></a>Parametri

*Rilascio*<br/>
`true`per eliminare questa `Release` istanza quando viene chiamato il metodo; `false` per non eliminare questa istanza.
