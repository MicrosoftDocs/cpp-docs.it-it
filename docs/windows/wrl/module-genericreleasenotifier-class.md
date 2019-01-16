---
title: Classe Module::GenericReleaseNotifier
ms.date: 09/17/2018
ms.topic: reference
f1_keywords:
- module/Microsoft::WRL::Module::GenericReleaseNotifier
- module/Microsoft::WRL::Module::GenericReleaseNotifier::callback_
- module/Microsoft::WRL::Module::GenericReleaseNotifier::GenericReleaseNotifier
- module/Microsoft::WRL::Module::GenericReleaseNotifier::Invoke
helpviewer_keywords:
- Microsoft::WRL::Module::GenericReleaseNotifier class
- Microsoft::WRL::Module::GenericReleaseNotifier::callback_ data member
- Microsoft::WRL::Module::GenericReleaseNotifier::GenericReleaseNotifier, constructor
- Microsoft::WRL::Module::GenericReleaseNotifier::Invoke method
ms.assetid: 244a8fbe-f89b-409b-aa65-db3e37f9b125
ms.openlocfilehash: 318415c9726426cbd60c205759a6ff8572cc555e
ms.sourcegitcommit: 360b55e89e5954f494e52b1cf989fbaceda06f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/16/2019
ms.locfileid: "54336460"
---
# <a name="modulegenericreleasenotifier-class"></a>Classe Module::GenericReleaseNotifier

Richiama un gestore eventi quando viene rilasciato l'ultimo oggetto nel modulo corrente. Il gestore dell'evento è specificato da un'espressione lambda, funtore o puntatore a funzione.

## <a name="syntax"></a>Sintassi

```cpp
template<typename T>
class GenericReleaseNotifier : public ReleaseNotifier;
```

### <a name="parameters"></a>Parametri

*T*<br/>
Il tipo del membro dati che contiene il percorso del gestore dell'evento.

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

Nome                                                                                                     | Descrizione
-------------------------------------------------------------------------------------------------------- | -------------------------------------------------------------------------
[Module::GenericReleaseNotifier::GenericReleaseNotifier](#genericreleasenotifier-genericreleasenotifier) | Inizializza una nuova istanza della classe `Module::GenericReleaseNotifier`.

### <a name="public-methods"></a>Metodi pubblici

Nome                                                                     | Descrizione
------------------------------------------------------------------------ | --------------------------------------------------------------------------------------------
[Module:: genericreleasenotifier:: Invoke](#genericreleasenotifier-invoke) | Chiama il gestore dell'evento associato all'oggetto corrente `Module::GenericReleaseNotifier` oggetto.

### <a name="protected-data-members"></a>Membri dati protetti

nome                                                                          | Descrizione
----------------------------------------------------------------------------- | ------------------------------------------------------------------------------------------------------------------------------------
[Module::GenericReleaseNotifier::callback_](#genericreleasenotifier-callback) | Contiene l'espressione lambda, funtore o il gestore eventi puntatore a funzione associato all'oggetto corrente `Module::GenericReleaseNotifier` oggetto.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`ReleaseNotifier`

`GenericReleaseNotifier`

## <a name="requirements"></a>Requisiti

**Intestazione:** module.h

**Spazio dei nomi:** Microsoft::WRL

## <a name="genericreleasenotifier-callback"></a>Module::GenericReleaseNotifier::callback_

Contiene l'espressione lambda, funtore o il gestore eventi puntatore a funzione associato all'oggetto corrente `Module::GenericReleaseNotifier` oggetto.

```cpp
T callback_;
```

## <a name="genericreleasenotifier-genericreleasenotifier"></a>Module::GenericReleaseNotifier::GenericReleaseNotifier

Inizializza una nuova istanza della classe `Module::GenericReleaseNotifier`.

```cpp
GenericReleaseNotifier(
   T callback,
   bool release
) throw() : ReleaseNotifier(release), callback_(callback);
```

### <a name="parameters"></a>Parametri

*callback*<br/>
Un'espressione lambda, funtore o gestore eventi puntatore a funzione che può essere richiamato con l'operatore della funzione delle parentesi (`()`).

*release*<br/>
Specificare `true` per abilitare la chiamata sottostante [Module:: ReleaseNotifier::Release()](module-releasenotifier-class.md#releasenotifier-release) metodo; in caso contrario, specificare `false`.

## <a name="genericreleasenotifier-invoke"></a>Module:: genericreleasenotifier:: Invoke

Chiama il gestore dell'evento associato all'oggetto corrente `Module::GenericReleaseNotifier` oggetto.

```cpp
void Invoke();
```
