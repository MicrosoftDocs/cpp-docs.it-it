---
title: 'Enumerazione platform:: callbackcontext | Documenti Microsoft'
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
author: ghogen
ms.author: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 757de5f686bb809a5d2fb159a3ee547a20edc982
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33086948"
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