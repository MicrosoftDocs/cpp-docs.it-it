---
title: 'Classe Module:: methodreleasenotifier | Microsoft Docs'
ms.custom: ''
ms.date: 09/17/2018
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- module/Microsoft::WRL::Module::MethodReleaseNotifier
- module/Microsoft::WRL::Module::MethodReleaseNotifier::Invoke
- module/Microsoft::WRL::Module::MethodReleaseNotifier::method_
- module/Microsoft::WRL::Module::MethodReleaseNotifier::MethodReleaseNotifier
- module/Microsoft::WRL::Module::MethodReleaseNotifier::object_
dev_langs:
- C++
helpviewer_keywords:
- Microsoft::WRL::Module::MethodReleaseNotifier class
- Microsoft::WRL::Module::MethodReleaseNotifier::Invoke method
- Microsoft::WRL::Module::MethodReleaseNotifier::method_ data member
- Microsoft::WRL::Module::MethodReleaseNotifier::MethodReleaseNotifier, constructor
- Microsoft::WRL::Module::MethodReleaseNotifier::object_ data member
ms.assetid: 5c2902be-964b-488f-9f1c-adf504995cbc
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 68f85794c8d70d642295f9125ac45311df29f16e
ms.sourcegitcommit: 8480f16893f09911f08a58caf684405404f7ac8e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/12/2018
ms.locfileid: "49163517"
---
# <a name="modulemethodreleasenotifier-class"></a>Classe Module::MethodReleaseNotifier

Richiama un gestore eventi quando viene rilasciato l'ultimo oggetto nel modulo corrente. Il gestore eventi viene specificato da un oggetto e il relativo membro puntatore al metodo.

## <a name="syntax"></a>Sintassi

```cpp
template<typename T>
class MethodReleaseNotifier : public ReleaseNotifier;
```

### <a name="parameters"></a>Parametri

*T*<br/>
Il tipo dell'oggetto la cui funzione membro è il gestore eventi.

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

Nome                                                                                                 | Descrizione
---------------------------------------------------------------------------------------------------- | ------------------------------------------------------------------------
[Module::MethodReleaseNotifier::MethodReleaseNotifier](#methodreleasenotifier-methodreleasenotifier) | Inizializza una nuova istanza della classe `Module::MethodReleaseNotifier`.

### <a name="public-methods"></a>Metodi pubblici

Nome                                                                   | Descrizione
---------------------------------------------------------------------- | -------------------------------------------------------------------------------------------
[Module:: methodreleasenotifier:: Invoke](#methodreleasenotifier-invoke) | Chiama il gestore dell'evento associato all'oggetto corrente `Module::MethodReleaseNotifier` oggetto.

### <a name="protected-data-members"></a>Membri dati protetti

nome                                                                    | Descrizione
----------------------------------------------------------------------- | --------------------------------------------------------------------------------------------------------------------------------
[Module::MethodReleaseNotifier::method_](#methodreleasenotifier-method) | Contiene un puntatore al gestore dell'evento corrente `Module::MethodReleaseNotifier` oggetto.
[Module::MethodReleaseNotifier::object_](#methodreleasenotifier-object) | Contiene un puntatore all'oggetto la cui funzione membro è il gestore eventi per l'oggetto corrente `Module::MethodReleaseNotifier` oggetto.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`ReleaseNotifier`

`MethodReleaseNotifier`

## <a name="requirements"></a>Requisiti

**Intestazione:** module.h

**Spazio dei nomi:** Microsoft::WRL

## <a name="methodreleasenotifier-invoke"></a>Module:: methodreleasenotifier:: Invoke

Chiama il gestore dell'evento associato all'oggetto corrente `Module::MethodReleaseNotifier` oggetto.

```cpp
void Invoke();
```

## <a name="methodreleasenotifier-method"></a>Module::MethodReleaseNotifier::method_

Contiene un puntatore al gestore dell'evento corrente `Module::MethodReleaseNotifier` oggetto.

```cpp
void (T::* method_)();
```

## <a name="methodreleasenotifier-methodreleasenotifier"></a>Module::MethodReleaseNotifier::MethodReleaseNotifier

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
Un oggetto la cui funzione membro è un gestore eventi.

*(Metodo)*<br/>
La funzione membro del parametro *oggetto* vale a dire il gestore dell'evento.

*release*<br/>
Specificare **true** per abilitare la chiamata sottostante [Module:: ReleaseNotifier::Release()](../windows/module-releasenotifier-class.md#releasenotifier-release) metodo; in caso contrario, specificare **false**.

## <a name="methodreleasenotifier-object"></a>Module::MethodReleaseNotifier::object_

Contiene un puntatore all'oggetto la cui funzione membro è il gestore eventi per l'oggetto corrente `Module::MethodReleaseNotifier` oggetto.

```cpp
T* object_;
```
