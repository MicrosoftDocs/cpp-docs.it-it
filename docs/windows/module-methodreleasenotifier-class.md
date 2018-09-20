---
title: 'Classe Module:: methodreleasenotifier | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- module/Microsoft::WRL::Module::MethodReleaseNotifier
dev_langs:
- C++
helpviewer_keywords:
- MethodReleaseNotifier class
ms.assetid: 5c2902be-964b-488f-9f1c-adf504995cbc
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 5e223ce02fa8a50ac39298d1f45f1f531dbf1f97
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46411326"
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

|Nome|Descrizione|
|----------|-----------------|
|[Costruttore Module::MethodReleaseNotifier::MethodReleaseNotifier](../windows/module-methodreleasenotifier-methodreleasenotifier-constructor.md)|Inizializza una nuova istanza di **Module:: methodreleasenotifier** classe.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[Metodo Module::MethodReleaseNotifier::Invoke](../windows/module-methodreleasenotifier-invoke-method.md)|Chiama il gestore dell'evento associato all'oggetto corrente **Module:: methodreleasenotifier** oggetto.|

### <a name="protected-data-members"></a>Membri dati protetti

|nome|Descrizione|
|----------|-----------------|
|[Membro dati Module::MethodReleaseNotifier::method_](../windows/module-methodreleasenotifier-method-data-member.md)|Contiene un puntatore al gestore eventi per l'oggetto corrente **Module:: methodreleasenotifier** oggetto.|
|[Membro dati Module::MethodReleaseNotifier::object_](../windows/module-methodreleasenotifier-object-data-member.md)|Contiene un puntatore all'oggetto la cui funzione membro è il gestore eventi per l'oggetto corrente **Module:: methodreleasenotifier** oggetto.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`ReleaseNotifier`

`MethodReleaseNotifier`

## <a name="requirements"></a>Requisiti

**Intestazione:** module.h

**Spazio dei nomi:** Microsoft::WRL

## <a name="see-also"></a>Vedere anche

[Classe Module](../windows/module-class.md)