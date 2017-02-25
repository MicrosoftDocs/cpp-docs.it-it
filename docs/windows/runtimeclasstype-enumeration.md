---
title: "Enumerazione RuntimeClassType | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "implements/Microsoft::WRL::RuntimeClassType"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "RuntimeClassType (enumerazione)"
ms.assetid: d380712d-672e-4ea9-b7c5-cf9fa7dbb770
caps.latest.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 6
---
# Enumerazione RuntimeClassType
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Specifica il tipo di istanza [RuntimeClass](../windows/runtimeclass-class.md) supportata.  
  
## Sintassi  
  
```  
enum RuntimeClassType;  
```  
  
## Membri  
  
### Valori  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`ClassicCom`|Una classica classe di runtime COM.|  
|`Delegate`|Equivalente a **ClassicCom**.|  
|`InhibitFtmBase`|Disabilita il supporto `FtmBase` intanto che `__WRL_CONFIGURATION_LEGACY__` non è definito.|  
|`InhibitWeakReference`|Disabilita il supporto di riferimento debole.|  
|`WinRt`|Classe [!INCLUDE[wrt](../atl/reference/includes/wrt_md.md)].|  
|`WinRtClassicComMix`|Combinazione di `WinRt` e `ClassicCom`.|  
  
## Requisiti  
 **Header:** implements.h  
  
 **Namespace:** Microsoft::  
  
## Vedere anche  
 [Spazio dei nomi Microsoft::WRL](../windows/microsoft-wrl-namespace.md)