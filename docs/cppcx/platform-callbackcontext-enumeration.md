---
title: Platform::CallbackContext (enumerazione)
ms.date: 12/30/2016
ms.topic: reference
f1_keywords:
- VCCORLIB/Platform::CallbackContext
helpviewer_keywords:
- Platform::CallbackContext Enumeration
ms.assetid: 60e0c7cb-5d8f-482a-bdca-ca9335ae4899
ms.openlocfilehash: 7f4e020ab0b1e377456c27d3b4666e15b5a4f7a1
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50441354"
---
# <a name="platformcallbackcontext-enumeration"></a>Platform::CallbackContext (enumerazione)

Specifica il contesto del thread in cui viene eseguita una funzione di callback (gestore eventi).

## <a name="syntax"></a>Sintassi

```cpp
enum class CallbackContext {};
```

### <a name="members"></a>Membri

|Codice di tipo|Descrizione|
|---------------|-----------------|
|Qualsiasi|La funzione di callback può essere eseguita in qualsiasi contesto del thread.|
|Idem|La funzione di callback può essere eseguita solo nel contesto del thread che ha avviato l'operazione asincrona.|

### <a name="requirements"></a>Requisiti

**Client minimo supportato:** Windows 8

**Server minimo supportato:** Windows Server 2012

**Spazio dei nomi:** Platform

**Metadati:** platform.winmd