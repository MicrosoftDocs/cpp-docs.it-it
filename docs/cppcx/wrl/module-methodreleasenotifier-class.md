---
description: 'Altre informazioni su: classe Module:: MethodReleaseNotifier'
title: Classe Module::MethodReleaseNotifier
ms.date: 09/17/2018
ms.topic: reference
f1_keywords:
- module/Microsoft::WRL::Module::MethodReleaseNotifier
- module/Microsoft::WRL::Module::MethodReleaseNotifier::Invoke
- module/Microsoft::WRL::Module::MethodReleaseNotifier::method_
- module/Microsoft::WRL::Module::MethodReleaseNotifier::MethodReleaseNotifier
- module/Microsoft::WRL::Module::MethodReleaseNotifier::object_
helpviewer_keywords:
- Microsoft::WRL::Module::MethodReleaseNotifier class
- Microsoft::WRL::Module::MethodReleaseNotifier::Invoke method
- Microsoft::WRL::Module::MethodReleaseNotifier::method_ data member
- Microsoft::WRL::Module::MethodReleaseNotifier::MethodReleaseNotifier, constructor
- Microsoft::WRL::Module::MethodReleaseNotifier::object_ data member
ms.assetid: 5c2902be-964b-488f-9f1c-adf504995cbc
ms.openlocfilehash: 6c0b2569abe8dbebde893bb7c8aee84abc3d8047
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97186363"
---
# <a name="modulemethodreleasenotifier-class"></a>Classe Module::MethodReleaseNotifier

Richiama un gestore eventi quando viene rilasciato l'ultimo oggetto nel modulo corrente. Il gestore eventi viene specificato da un oggetto e dal relativo membro puntatore a metodo.

## <a name="syntax"></a>Sintassi

```cpp
template<typename T>
class MethodReleaseNotifier : public ReleaseNotifier;
```

### <a name="parameters"></a>Parametri

*T*<br/>
Tipo dell'oggetto la cui funzione membro è il gestore eventi.

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

Nome                                                                                                 | Description
---------------------------------------------------------------------------------------------------- | ------------------------------------------------------------------------
[Module:: MethodReleaseNotifier:: MethodReleaseNotifier](#methodreleasenotifier-methodreleasenotifier) | Inizializza una nuova istanza della classe `Module::MethodReleaseNotifier`.

### <a name="public-methods"></a>Metodi pubblici

Nome                                                                   | Description
---------------------------------------------------------------------- | -------------------------------------------------------------------------------------------
[Module:: MethodReleaseNotifier:: Invoke](#methodreleasenotifier-invoke) | Chiama il gestore eventi associato all'oggetto corrente `Module::MethodReleaseNotifier` .

### <a name="protected-data-members"></a>Membri dati protetti

Nome                                                                    | Description
----------------------------------------------------------------------- | --------------------------------------------------------------------------------------------------------------------------------
[Module:: MethodReleaseNotifier:: method_](#methodreleasenotifier-method) | Include un puntatore al gestore eventi per l'oggetto corrente `Module::MethodReleaseNotifier` .
[Module:: MethodReleaseNotifier:: object_](#methodreleasenotifier-object) | Include un puntatore all'oggetto la cui funzione membro è il gestore eventi per l' `Module::MethodReleaseNotifier` oggetto corrente.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`ReleaseNotifier`

`MethodReleaseNotifier`

## <a name="requirements"></a>Requisiti

**Intestazione:** Module. h

**Spazio dei nomi:** Microsoft::WRL

## <a name="modulemethodreleasenotifierinvoke"></a><a name="methodreleasenotifier-invoke"></a> Module:: MethodReleaseNotifier:: Invoke

Chiama il gestore eventi associato all'oggetto corrente `Module::MethodReleaseNotifier` .

```cpp
void Invoke();
```

## <a name="modulemethodreleasenotifiermethod_"></a><a name="methodreleasenotifier-method"></a> Module:: MethodReleaseNotifier:: method_

Include un puntatore al gestore eventi per l'oggetto corrente `Module::MethodReleaseNotifier` .

```cpp
void (T::* method_)();
```

## <a name="modulemethodreleasenotifiermethodreleasenotifier"></a><a name="methodreleasenotifier-methodreleasenotifier"></a> Module:: MethodReleaseNotifier:: MethodReleaseNotifier

Inizializza una nuova istanza della classe `Module::MethodReleaseNotifier`.

```cpp
MethodReleaseNotifier(
   _In_ T* object,
   _In_ void (T::* method)(),
   bool release) throw() :
            ReleaseNotifier(release), object_(object),
            method_(method);
```

### <a name="parameters"></a>Parametri

*object*<br/>
Oggetto la cui funzione membro è un gestore eventi.

*Metodo*<br/>
Funzione membro dell' *oggetto* Parameter che rappresenta il gestore eventi.

*versione*<br/>
Specificare **`true`** per abilitare la chiamata al metodo [Module:: ReleaseNotifier:: Release ()](module-releasenotifier-class.md#releasenotifier-release) sottostante; in caso contrario, specificare **`false`** .

## <a name="modulemethodreleasenotifierobject_"></a><a name="methodreleasenotifier-object"></a> Module:: MethodReleaseNotifier:: object_

Include un puntatore all'oggetto la cui funzione membro è il gestore eventi per l' `Module::MethodReleaseNotifier` oggetto corrente.

```cpp
T* object_;
```
