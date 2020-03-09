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
ms.openlocfilehash: 5fc1b8965bf8bf2f86dd30f2195fa825f85f6d7e
ms.sourcegitcommit: 3e8fa01f323bc5043a48a0c18b855d38af3648d4
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/06/2020
ms.locfileid: "78865587"
---
# <a name="modulereleasenotifier-class"></a>Classe Module::ReleaseNotifier

Richiama un gestore eventi quando viene rilasciato l'ultimo oggetto in un modulo.

## <a name="syntax"></a>Sintassi

```cpp
class ReleaseNotifier;
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

Name                                                                                | Descrizione
----------------------------------------------------------------------------------- | --------------------------------------------------------------------------
[Module:: ReleaseNotifier:: ~ ReleaseNotifier](#releasenotifier-tilde-releasenotifier) | Consente di deinizializzare l'istanza corrente della classe `Module::ReleaseNotifier`.
[Module:: ReleaseNotifier:: ReleaseNotifier](#releasenotifier-releasenotifier)        | Inizializza una nuova istanza della classe `Module::ReleaseNotifier`.

### <a name="public-methods"></a>Metodi pubblici

Name                                                         | Descrizione
------------------------------------------------------------ | --------------------------------------------------------------------------------------------------------------
[Module:: ReleaseNotifier:: Invoke](#releasenotifier-invoke)   | Quando viene implementato, chiama un gestore eventi quando viene rilasciato l'ultimo oggetto in un modulo.
[Module::ReleaseNotifier::Release](#releasenotifier-release) | Elimina l'oggetto `Module::ReleaseNotifier` corrente se l'oggetto è stato costruito con un parametro **true**.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`ReleaseNotifier`

## <a name="requirements"></a>Requisiti

**Intestazione:** Module. h

**Spazio dei nomi:** Microsoft::WRL

## <a name="releasenotifier-tilde-releasenotifier"></a>Module:: ReleaseNotifier:: ~ ReleaseNotifier

Consente di deinizializzare l'istanza corrente della classe `Module::ReleaseNotifier`.

```cpp
WRL_NOTHROW virtual ~ReleaseNotifier();
```

## <a name="releasenotifier-invoke"></a>Module:: ReleaseNotifier:: Invoke

Quando viene implementato, chiama un gestore eventi quando viene rilasciato l'ultimo oggetto in un modulo.

```cpp
virtual void Invoke() = 0;
```

## <a name="releasenotifier-release"></a>Module:: ReleaseNotifier:: Release

Elimina l'oggetto `Module::ReleaseNotifier` corrente se l'oggetto è stato costruito con un parametro **true**.

```cpp
void Release() throw();
```

## <a name="releasenotifier-releasenotifier"></a>Module:: ReleaseNotifier:: ReleaseNotifier

Inizializza una nuova istanza della classe `Module::ReleaseNotifier`.

```cpp
ReleaseNotifier(bool release) throw();
```

### <a name="parameters"></a>Parametri

*release*<br/>
`true` eliminare questa istanza quando viene chiamato il metodo `Release`; `false` non eliminare questa istanza.
