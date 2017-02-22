---
title: "Struttura CloakedIid | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "implements/Microsoft::WRL::CloakedIid"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CloakedIid (struttura)"
ms.assetid: 82e0e377-ca3a-46bc-b850-ae2c46c15bb5
caps.latest.revision: 3
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 3
---
# Struttura CloakedIid
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Indica ai modelli di RuntimeClass, di Implement e ChainInterface che l'interfaccia specificata non è accessibile nell'elenco di IID.  
  
## Sintassi  
  
```  
template<  
   typename T  
>  
struct CloakedIid : T;  
```  
  
#### Parametri  
 `T`  
 L'interfaccia che è nascosta \(mascherato\).  
  
## Osservazioni  
 Di seguito viene riportato un esempio di come CloakedIid viene usato `struct MyRuntimeClass : RuntimeClass<CloakedIid<IMyCloakedInterface>> {}`.  
  
## Gerarchia di ereditarietà  
 `T`  
  
 `CloakedIid`  
  
## Requisiti  
 **Intestazione:** implements.h  
  
 **Spazio dei nomi:** Microsoft::WRL  
  
## Vedere anche  
 [Spazio dei nomi Microsoft::WRL](../windows/microsoft-wrl-namespace.md)