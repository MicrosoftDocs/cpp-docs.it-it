---
title: Platform::CallbackContext (enumerazione)
ms.date: 12/30/2016
ms.topic: reference
f1_keywords:
- VCCORLIB/Platform::CallbackContext
helpviewer_keywords:
- Platform::CallbackContext Enumeration
ms.assetid: 60e0c7cb-5d8f-482a-bdca-ca9335ae4899
ms.openlocfilehash: 1daa3988fcb985dab9d3083233a3703a20cc2fdb
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80214268"
---
# <a name="platformcallbackcontext-enumeration"></a>Platform::CallbackContext (enumerazione)

Specifica il contesto del thread in cui viene eseguita una funzione di callback (gestore eventi).

## <a name="syntax"></a>Sintassi

```cpp
enum class CallbackContext {};
```

### <a name="members"></a>Members

|Codice di tipo|Descrizione|
|---------------|-----------------|
|Qualsiasi|La funzione di callback può essere eseguita in qualsiasi contesto del thread.|
|Uguale|La funzione di callback può essere eseguita solo nel contesto del thread che ha avviato l'operazione asincrona.|

### <a name="requirements"></a>Requisiti

**Client minimo supportato:** Windows 8

**Server minimo supportato:** Windows Server 2012

**Spazio dei nomi:** Platform

**Metadati:** platform.winmd
