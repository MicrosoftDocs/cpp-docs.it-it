---
title: 'Enumerazione platform:: callbackcontext | Microsoft Docs'
ms.custom: ''
ms.date: 12/30/2016
ms.technology: cpp-windows
ms.topic: reference
f1_keywords:
- VCCORLIB/Platform::CallbackContext
dev_langs:
- C++
helpviewer_keywords:
- Platform::CallbackContext Enumeration
ms.assetid: 60e0c7cb-5d8f-482a-bdca-ca9335ae4899
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: fe988a7dee7fb358d9454c06811d7baf2cd4ace0
ms.sourcegitcommit: 761c5f7c506915f5a62ef3847714f43e9b815352
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/07/2018
ms.locfileid: "44101963"
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