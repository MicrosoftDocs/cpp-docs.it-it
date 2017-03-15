---
title: "Struttura ImplementsHelper | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "implements/Microsoft::WRL::Details::ImplementsHelper"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ImplementsHelper (struttura)"
ms.assetid: b857ba80-81bd-4e53-92b6-210991954243
caps.latest.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 5
---
# Struttura ImplementsHelper
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Supporta l'infrastruttura WRL e non può essere utilizzata direttamente dal proprio codice.  
  
## Sintassi  
  
```  
template <  
   typename RuntimeClassFlagsT,  
   typename ILst,  
   bool IsDelegateToClass  
>  
friend struct Details::ImplementsHelper;  
```  
  
#### Parametri  
 `RuntimeClassFlagsT`  
 Un campo di flag che specifica uno o più enumeratori [RuntimeClassType](../windows/runtimeclasstype-enumeration.md).  
  
 `ILst`  
 Elenco di interfacce ID.  
  
 `IsDelegateToClass`  
 `true` se l'istanza corrente di risorse è una classe base della prima interfaccia ID in `ILst`; in caso contrario, `false`.  
  
## Note  
 Le guide implementano la struttura [Implementa](../windows/implements-structure.md).  
  
 Questo modello attraversa l'elenco delle interfacce e le aggiunge come classi base e come informazioni necessarie per abilitare QueryInterface.  
  
## Membri  
  
## Gerarchia di ereditarietà  
 `ImplementsHelper`  
  
## Requisiti  
 **Header:** implements.h  
  
 **Namespace:** Microsoft::WRL::Details  
  
## Vedere anche  
 [Reference \(Windows Runtime Library\)](http://msdn.microsoft.com/it-it/00000000-0000-0000-0000-000000000000)   
 [Spazio dei nomi Microsoft::WRL::Details](../windows/microsoft-wrl-details-namespace.md)