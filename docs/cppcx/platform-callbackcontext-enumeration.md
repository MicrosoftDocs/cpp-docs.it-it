---
title: 'Enumerazione platform:: callbackcontext | Documenti Microsoft'
ms.custom: 
ms.date: 12/30/2016
ms.technology: cpp-windows
ms.reviewer: 
ms.suite: 
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- VCCORLIB/Platform::CallbackContext
dev_langs:
- C++
helpviewer_keywords:
- Platform::CallbackContext Enumeration
ms.assetid: 60e0c7cb-5d8f-482a-bdca-ca9335ae4899
caps.latest.revision: 
author: ghogen
ms.author: ghogen
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 9f9d34f7ef8a953ce60972c27b34e257ea66d62d
ms.sourcegitcommit: 6002df0ac79bde5d5cab7bbeb9d8e0ef9920da4a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/14/2018
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