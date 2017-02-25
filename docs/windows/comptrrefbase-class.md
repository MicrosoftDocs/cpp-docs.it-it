---
title: "Classe ComPtrRefBase | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "client/Microsoft::WRL::Details::ComPtrRefBase"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ComPtrRefBase (classe)"
ms.assetid: 6d344c1a-cc13-4a3f-8a0d-f167ccb9348f
caps.latest.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 5
---
# Classe ComPtrRefBase
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Supporta l'infrastruttura WRL e non può essere utilizzata direttamente dal proprio codice.  
  
## Sintassi  
  
```  
template <  
   typename T  
>  
class ComPtrRefBase;  
```  
  
#### Parametri  
 `T`  
 Un tipo [ComPtr\<T\>](../windows/comptr-class.md) o un tipo derivato da esso, non solamente l'interfaccia rappresentata dal ComPtr.  
  
## Note  
 Rappresenta la classe di base per la classe [ComPtrRef](../windows/comptrref-class.md).  
  
## Membri  
  
### Typedef pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`InterfaceType`|Un sinonimo del tipo di parametro di modello `T`.|  
  
### Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Operatore ComPtrRefBase::operator IInspectable\*\*](../windows/comptrrefbase-operator-iinspectable-star-star-operator.md)|Esegue il cast del membro dati corrente [ptr\_](../windows/comptrrefbase-ptr-data-member.md) a un puntatore dell'interfaccia di IInspectable.|  
|[Operatore ComPtrRefBase::operator IUnknown\*\*](../windows/comptrrefbase-operator-iunknown-star-star-operator.md)|Esegue il cast del membro dati corrente [ptr\_](../windows/comptrrefbase-ptr-data-member.md) a un puntatore dell'interfaccia di IUnknown.|  
  
### Membri di dati protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Membro dati ComPtrRefBase::ptr\_](../windows/comptrrefbase-ptr-data-member.md)|Puntatore al tipo specificato dal modello di parametro corrente.|  
  
## Gerarchia di ereditarietà  
 `ComPtrRefBase`  
  
## Requisiti  
 **Intestazione:** client.h  
  
 **Spazio dei nomi:** Microsoft::WRL::Details  
  
## Vedere anche  
 [Spazio dei nomi Microsoft::WRL::Details](../windows/microsoft-wrl-details-namespace.md)