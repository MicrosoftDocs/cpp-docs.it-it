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
ms.openlocfilehash: 4b80fe7749fdb2f91e300cff007c01001edfa557
ms.sourcegitcommit: 6f8dd98de57bb80bf4c9852abafef1c35a7600f1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/22/2018
ms.locfileid: "42603038"
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