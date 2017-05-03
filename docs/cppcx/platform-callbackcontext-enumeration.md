---
title: "Platform::CallbackContext (enumerazione) | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.prod: "windows-client-threshold"
ms.technology: ""
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "Platform/Platform::CallbackContext"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Platform::CallbackContext (enumerazione)"
ms.assetid: 60e0c7cb-5d8f-482a-bdca-ca9335ae4899
caps.latest.revision: 3
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
caps.handback.revision: 3
---
# Platform::CallbackContext (enumerazione)
Specifica il contesto del thread in cui viene eseguita una funzione di callback \(gestore eventi\).  
  
## Sintassi  
  
```cpp  
enum class CallbackContext {};  
```  
  
## Membri  
  
|Codice di tipo|Descrizione|  
|--------------------|-----------------|  
|Qualsiasi|La funzione di callback può essere eseguita in qualsiasi contesto del thread.|  
|Idem|La funzione di callback può essere eseguita solo nel contesto del thread che ha avviato l'operazione asincrona.|  
  
## Requisiti  
 **Client minimo supportato:** [!INCLUDE[win8](../cppcx/includes/win8-md.md)]  
  
 **Server minimo supportato:** [!INCLUDE[winserver8](../cppcx/includes/winserver8-md.md)]  
  
 **Spazio dei nomi:** Platform  
  
 **Metadati:** platform.winmd