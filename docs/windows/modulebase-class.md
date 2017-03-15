---
title: "Classe ModuleBase | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "implements/Microsoft::WRL::Details::ModuleBase"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ModuleBase (classe)"
ms.assetid: edce7591-6893-46f7-94a7-382827775548
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 7
---
# Classe ModuleBase
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Supporta l'infrastruttura WRL e non può essere utilizzato direttamente dal codice.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class ModuleBase;  
```  
  
## <a name="remarks"></a>Note  
 Rappresenta la classe di base di [modulo](../windows/module-class.md) classi.  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore modulebase:: Modulebase](../windows/modulebase-modulebase-constructor.md)|Inizializza un'istanza della classe del modulo.|  
|[ModuleBase:: ~ ModuleBase distruttore](../windows/modulebase-tilde-modulebase-destructor.md)|Deinitializes l'istanza corrente della classe del modulo.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo modulebase:: Decrementobjectcount](../windows/modulebase-decrementobjectcount-method.md)|Quando viene implementato, riduce il numero di oggetti registrati dal modulo.|  
|[Metodo modulebase:: Incrementobjectcount](../windows/modulebase-incrementobjectcount-method.md)|Quando implementato, incrementa il numero di oggetti registrati dal modulo.|  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `ModuleBase`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** implements.h  
  
 **Spazio dei nomi:** Microsoft::WRL::Details  
  
## <a name="see-also"></a>Vedere anche  
 [Spazio dei nomi Microsoft::WRL::Details](../windows/microsoft-wrl-details-namespace.md)