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
ms.openlocfilehash: e3cc8e33d596fb1d3ecc4a94fee7971a50ffe596
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81371298"
---
# <a name="modulegenericreleasenotifier-class"></a>Classe Module::GenericReleaseNotifier

Richiama un gestore eventi quando viene rilasciato l'ultimo oggetto nel modulo corrente. Il gestore eventi è specificato da in un'espressione lambda, un funtore o un puntatore a funzione.

## <a name="syntax"></a>Sintassi

```cpp
template<typename T>
class GenericReleaseNotifier : public ReleaseNotifier;
```

### <a name="parameters"></a>Parametri

*T*<br/>
Tipo del membro dati che contiene il percorso del gestore eventi.

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

Nome                                                                                                     | Descrizione
-------------------------------------------------------------------------------------------------------- | -------------------------------------------------------------------------
[Modulo::GenericReleaseNotifier::GenericReleaseNotifier](#genericreleasenotifier-genericreleasenotifier) | Inizializza una nuova istanza della classe `Module::GenericReleaseNotifier`.

### <a name="public-methods"></a>Metodi pubblici

Nome                                                                     | Descrizione
------------------------------------------------------------------------ | --------------------------------------------------------------------------------------------
[Modulo::GenericReleaseNotifier::Richiamare](#genericreleasenotifier-invoke) | Chiama il gestore eventi `Module::GenericReleaseNotifier` associato all'oggetto corrente.

### <a name="protected-data-members"></a>Membri dati protetti

Nome                                                                          | Descrizione
----------------------------------------------------------------------------- | ------------------------------------------------------------------------------------------------------------------------------------
[Modulo::GenericReleaseNotifier::callback_](#genericreleasenotifier-callback) | Contiene il gestore eventi lambda, funtore o puntatore a funzione associato all'oggetto corrente. `Module::GenericReleaseNotifier`

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`ReleaseNotifier`

`GenericReleaseNotifier`

## <a name="requirements"></a>Requisiti

**Intestazione:** module.h

**Spazio dei nomi:** Microsoft::WRL

## <a name="modulegenericreleasenotifiercallback_"></a><a name="genericreleasenotifier-callback"></a>Modulo::GenericReleaseNotifier::callback_

Contiene il gestore eventi lambda, funtore o puntatore a funzione associato all'oggetto corrente. `Module::GenericReleaseNotifier`

```cpp
T callback_;
```

## <a name="modulegenericreleasenotifiergenericreleasenotifier"></a><a name="genericreleasenotifier-genericreleasenotifier"></a>Modulo::GenericReleaseNotifier::GenericReleaseNotifier

Inizializza una nuova istanza della classe `Module::GenericReleaseNotifier`.

```cpp
GenericReleaseNotifier(
   T callback,
   bool release
) throw() : ReleaseNotifier(release), callback_(callback);
```

### <a name="parameters"></a>Parametri

*callback*<br/>
Un gestore eventi lambda, funtore o puntatore a funzione che può`()`essere richiamato con l'operatore di funzione parentesi ( ).

*Rilascio*<br/>
Specificare per abilitare `true` la chiamata al metodo [sottostante Module::ReleaseNotifier::Release();](module-releasenotifier-class.md#releasenotifier-release) in caso `false`contrario, specificare .

## <a name="modulegenericreleasenotifierinvoke"></a><a name="genericreleasenotifier-invoke"></a>Modulo::GenericReleaseNotifier::Richiamare

Chiama il gestore eventi `Module::GenericReleaseNotifier` associato all'oggetto corrente.

```cpp
void Invoke();
```
