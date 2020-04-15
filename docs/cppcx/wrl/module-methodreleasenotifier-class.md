---
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
ms.openlocfilehash: c641f150b6f029facffa62f7b47c7da32138735e
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81371294"
---
# <a name="modulemethodreleasenotifier-class"></a>Classe Module::MethodReleaseNotifier

Richiama un gestore eventi quando viene rilasciato l'ultimo oggetto nel modulo corrente. Il gestore eventi viene specificato da un oggetto e dal relativo membro puntatore a un metodo.

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

Nome                                                                                                 | Descrizione
---------------------------------------------------------------------------------------------------- | ------------------------------------------------------------------------
[Modulo::MethodReleaseNotifier::MethodReleaseNotifier](#methodreleasenotifier-methodreleasenotifier) | Inizializza una nuova istanza della classe `Module::MethodReleaseNotifier`.

### <a name="public-methods"></a>Metodi pubblici

Nome                                                                   | Descrizione
---------------------------------------------------------------------- | -------------------------------------------------------------------------------------------
[Modulo::MethodReleaseNotifier::Invoke](#methodreleasenotifier-invoke) | Chiama il gestore eventi `Module::MethodReleaseNotifier` associato all'oggetto corrente.

### <a name="protected-data-members"></a>Membri dati protetti

Nome                                                                    | Descrizione
----------------------------------------------------------------------- | --------------------------------------------------------------------------------------------------------------------------------
[Modulo::MethodReleaseNotifier::method_](#methodreleasenotifier-method) | Contiene un puntatore al gestore eventi per l'oggetto corrente. `Module::MethodReleaseNotifier`
[Modulo::MethodReleaseNotifier::object_](#methodreleasenotifier-object) | Contiene un puntatore all'oggetto la cui funzione `Module::MethodReleaseNotifier` membro è il gestore eventi per l'oggetto corrente.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`ReleaseNotifier`

`MethodReleaseNotifier`

## <a name="requirements"></a>Requisiti

**Intestazione:** module.h

**Spazio dei nomi:** Microsoft::WRL

## <a name="modulemethodreleasenotifierinvoke"></a><a name="methodreleasenotifier-invoke"></a>Modulo::MethodReleaseNotifier::Invoke

Chiama il gestore eventi `Module::MethodReleaseNotifier` associato all'oggetto corrente.

```cpp
void Invoke();
```

## <a name="modulemethodreleasenotifiermethod_"></a><a name="methodreleasenotifier-method"></a>Modulo::MethodReleaseNotifier::method_

Contiene un puntatore al gestore eventi per l'oggetto corrente. `Module::MethodReleaseNotifier`

```cpp
void (T::* method_)();
```

## <a name="modulemethodreleasenotifiermethodreleasenotifier"></a><a name="methodreleasenotifier-methodreleasenotifier"></a>Modulo::MethodReleaseNotifier::MethodReleaseNotifier

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

*Oggetto*<br/>
Oggetto la cui funzione membro è un gestore eventi.

*Metodo*<br/>
Funzione membro *dell'oggetto* parametro che è il gestore eventi.

*Rilascio*<br/>
Specificare per abilitare `true` la chiamata al metodo [sottostante Module::ReleaseNotifier::Release();](module-releasenotifier-class.md#releasenotifier-release) in caso `false`contrario, specificare .

## <a name="modulemethodreleasenotifierobject_"></a><a name="methodreleasenotifier-object"></a>Modulo::MethodReleaseNotifier::object_

Contiene un puntatore all'oggetto la cui funzione `Module::MethodReleaseNotifier` membro è il gestore eventi per l'oggetto corrente.

```cpp
T* object_;
```
