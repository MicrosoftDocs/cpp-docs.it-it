---
title: "Metodo WeakReference::DecrementStrongReference | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "implements/Microsoft::WRL::Details::WeakReference::DecrementStrongReference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "DecrementStrongReference (metodo)"
ms.assetid: 97d70d9f-41b8-4f8d-a6fa-4137cc4f9029
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 8
---
# Metodo WeakReference::DecrementStrongReference
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Supporta l'infrastruttura WRL e non può essere utilizzato direttamente dal codice.  
  
## <a name="syntax"></a>Sintassi  
  
```  
ULONG DecrementStrongReference();  
```  
  
## <a name="remarks"></a>Note  
 Decrementa il forti conteggio dei riferimenti dell'oggetto WeakReference corrente.  
  
 Quando il conteggio dei riferimenti forti diventa zero, viene impostato il riferimento forte `nullptr`.  
  
## <a name="return-value"></a>Valore restituito  
 Il conteggio dei riferimenti forti decrementato.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** implements.h  
  
 **Spazio dei nomi:** Microsoft::WRL::Details  
  
## <a name="see-also"></a>Vedere anche  
[Classe WeakReference](../windows/weakreference-class1.md)  
 [Spazio dei nomi Microsoft::WRL::Details](../windows/microsoft-wrl-details-namespace.md)