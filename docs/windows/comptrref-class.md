---
title: "Classe ComPtrRef | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "client/Microsoft::WRL::Details::ComPtrRef"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ComPtrRef (classe)"
ms.assetid: d6bdfd20-e977-45b4-9ac1-1b8efbdb77de
caps.latest.revision: 6
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Classe ComPtrRef
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Supporta l'infrastruttura WRL e non può essere utilizzata direttamente dal proprio codice.  
  
## Sintassi  
  
```  
template <  
   typename T  
>  
class ComPtrRef : public ComPtrRefBase<T>;  
```  
  
#### Parametri  
 `T`  
 Un tipo [ComPtr\<T\>](../windows/comptr-class.md) o un tipo derivato da esso, non solamente l'interfaccia rappresentata dal ComPtr.  
  
## Note  
 Rappresenta un riferimento a un oggetto di tipo ComPtr\<T\>.  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore ComPtrRef::ComPtrRef](../windows/comptrref-comptrref-constructor.md)|Inizializza una nuova istanza della classe di ComPtrRef da un puntatore specificato a un altro oggetto di ComPtrRef.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo ComPtrRef::GetAddressOf](../windows/comptrref-getaddressof-method.md)|Viene recuperato l'indirizzo di un puntatore a un'interfaccia rappresentata dall'oggetto corrente di ComPtrRef.|  
|[Metodo ComPtrRef::ReleaseAndGetAddressOf](../windows/comptrref-releaseandgetaddressof-method.md)|Elimina l'oggetto corrente ComPtrRef e restituisce un puntatore a un'interfaccia che è stata rappresentata dall'oggetto ComPtrRef.|  
  
### Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Operatore ComPtrRef::operator InterfaceType\*\*](../windows/comptrref-operator-interfacetype-star-star-operator.md)|Elimina l'oggetto corrente ComPtrRef e restituisce un puntatore a un'interfaccia che è stata rappresentata dall'oggetto ComPtrRef.|  
|[Operatore ComPtrRef::operator T\*](../windows/comptrref-operator-t-star-operator.md)|Restituisce il valore del membro dati [ptr\_](../windows/comptrrefbase-ptr-data-member.md) dell'oggetto corrente di ComPtrRef.|  
|[Operatore ComPtrRef::operator void\*\*](../windows/comptrref-operator-void-star-star-operator.md)|Elimina l'oggetto corrente di ComPtrRef, esegue il cast del puntatore all'interfaccia che è stata rappresentata dall'oggetto di ComPtrRef come puntatore a puntatore a `void` quindi restituisce il puntatore di cast.|  
|[Operatore ComPtrRef::operator\*](../windows/comptrref-operator-star-operator.md)|Recupera un puntatore a un'interfaccia rappresentata dall'oggetto corrente ComPtrRef.|  
|[Operatore ComPtrRef::operator\=\=](../windows/comptrref-operator-equality-operator.md)|Indica se due oggetti ComPtrRef sono uguali.|  
|[Operatore ComPtrRef::operator\!\=](../windows/comptrref-operator-inequality-operator.md)|Indica se due oggetti ComPtrRef non sono uguali.|  
  
## Gerarchia di ereditarietà  
 `ComPtrRefBase`  
  
 `ComPtrRef`  
  
## Requisiti  
 **Intestazione:** client.h  
  
 **Spazio dei nomi:** Microsoft::WRL::Details  
  
## Vedere anche  
 [Spazio dei nomi Microsoft::WRL::Details](../windows/microsoft-wrl-details-namespace.md)