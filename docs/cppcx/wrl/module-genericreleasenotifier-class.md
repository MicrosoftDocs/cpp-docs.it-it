---
description: 'Altre informazioni su: classe Module:: GenericReleaseNotifier'
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
ms.openlocfilehash: dd82da7c1b6b9a77c68b6d451bfa6dac31f51180
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97186376"
---
# <a name="modulegenericreleasenotifier-class"></a>Classe Module::GenericReleaseNotifier

Richiama un gestore eventi quando viene rilasciato l'ultimo oggetto nel modulo corrente. Il gestore eventi viene specificato da su un lambda, un functor o un puntatore a funzione.

## <a name="syntax"></a>Sintassi

```cpp
template<typename T>
class GenericReleaseNotifier : public ReleaseNotifier;
```

### <a name="parameters"></a>Parametri

*T*<br/>
Tipo del membro dati che contiene la posizione del gestore eventi.

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

Nome                                                                                                     | Description
-------------------------------------------------------------------------------------------------------- | -------------------------------------------------------------------------
[Module:: GenericReleaseNotifier:: GenericReleaseNotifier](#genericreleasenotifier-genericreleasenotifier) | Inizializza una nuova istanza della classe `Module::GenericReleaseNotifier`.

### <a name="public-methods"></a>Metodi pubblici

Nome                                                                     | Description
------------------------------------------------------------------------ | --------------------------------------------------------------------------------------------
[Module:: GenericReleaseNotifier:: Invoke](#genericreleasenotifier-invoke) | Chiama il gestore eventi associato all'oggetto corrente `Module::GenericReleaseNotifier` .

### <a name="protected-data-members"></a>Membri dati protetti

Nome                                                                          | Description
----------------------------------------------------------------------------- | ------------------------------------------------------------------------------------------------------------------------------------
[Module:: GenericReleaseNotifier:: callback_](#genericreleasenotifier-callback) | Include il gestore eventi lambda, functor o puntatore a funzione associato all' `Module::GenericReleaseNotifier` oggetto corrente.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`ReleaseNotifier`

`GenericReleaseNotifier`

## <a name="requirements"></a>Requisiti

**Intestazione:** Module. h

**Spazio dei nomi:** Microsoft::WRL

## <a name="modulegenericreleasenotifiercallback_"></a><a name="genericreleasenotifier-callback"></a> Module:: GenericReleaseNotifier:: callback_

Include il gestore eventi lambda, functor o puntatore a funzione associato all' `Module::GenericReleaseNotifier` oggetto corrente.

```cpp
T callback_;
```

## <a name="modulegenericreleasenotifiergenericreleasenotifier"></a><a name="genericreleasenotifier-genericreleasenotifier"></a> Module:: GenericReleaseNotifier:: GenericReleaseNotifier

Inizializza una nuova istanza della classe `Module::GenericReleaseNotifier`.

```cpp
GenericReleaseNotifier(
   T callback,
   bool release
) throw() : ReleaseNotifier(release), callback_(callback);
```

### <a name="parameters"></a>Parametri

*callback*<br/>
Un gestore eventi lambda, functor o puntatore a funzione che può essere richiamato con l'operatore di funzione parentesi ( `()` ).

*versione*<br/>
Specificare **`true`** per abilitare la chiamata al metodo [Module:: ReleaseNotifier:: Release ()](module-releasenotifier-class.md#releasenotifier-release) sottostante; in caso contrario, specificare **`false`** .

## <a name="modulegenericreleasenotifierinvoke"></a><a name="genericreleasenotifier-invoke"></a> Module:: GenericReleaseNotifier:: Invoke

Chiama il gestore eventi associato all'oggetto corrente `Module::GenericReleaseNotifier` .

```cpp
void Invoke();
```
