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
ms.openlocfilehash: cee634ab62e699b4de6af54a57b0fe3d6b5e9a40
ms.sourcegitcommit: 6f8dd98de57bb80bf4c9852abafef1c35a7600f1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/22/2018
ms.locfileid: "42606608"
---
# <a name="modulemethodreleasenotifier-class"></a>Classe Module::MethodReleaseNotifier

Richiama un gestore eventi quando viene rilasciato l'ultimo oggetto nel modulo corrente. Il gestore eventi viene specificato da un oggetto e il relativo membro puntatore al metodo.

## <a name="syntax"></a>Sintassi

```cpp
template<typename T>
class MethodReleaseNotifier : public ReleaseNotifier;
```

### <a name="parameters"></a>Parametri

*T*  
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