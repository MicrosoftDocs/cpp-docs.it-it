---
title: "Struttura InterfaceTraits | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "implements/Microsoft::WRL::Details::InterfaceTraits"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "InterfaceTraits (struttura)"
ms.assetid: ede0c284-19a7-4892-9738-ff3da4923d0a
caps.latest.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 5
---
# Struttura InterfaceTraits
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Supporta l'infrastruttura WRL e non può essere utilizzata direttamente dal proprio codice.  
  
## Sintassi  
  
```  
template<  
   typename I0  
>  
struct __declspec(novtable) InterfaceTraits;  
  
template<  
   typename CloakedType  
>  
struct __declspec(novtable) InterfaceTraits<CloakedIid<CloakedType>>;  
  
template<>  
struct __declspec(novtable) InterfaceTraits<Nil>;  
```  
  
#### Parametri  
 `I0`  
 Nome di un'interfaccia.  
  
 `CloakedType`  
 Per RuntimeClass, Implements e ChainInterfaces, un'interfaccia non sarà nell'elenco delle interfacce ID supportate.  
  
## Note  
 Implementa le funzionalità comuni di un'interfaccia.  
  
 Il secondo modello è una specializzazione delle interfacce mascherate.  Il terzo modello è una specializzazione per i parametri Nil.  
  
## Membri  
  
### Typedef pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`Base`|Un sinonimo del parametro di modello `I0`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo InterfaceTraits::CanCastTo](../windows/interfacetraits-cancastto-method.md)|Indica se sul puntatore specificato è possibile eseguire il cast da puntatore a `Base`.|  
|[Metodo InterfaceTraits::CastToBase](../windows/interfacetraits-casttobase-method.md)|Il cast specifica il puntatore a un puntatore a `Base`.|  
|[Metodo InterfaceTraits::CastToUnknown](../windows/interfacetraits-casttounknown-method.md)|Il cast specifica il puntatore a un puntatore a IUnknown.|  
|[Metodo InterfaceTraits::FillArrayWithIid](../windows/interfacetraits-fillarraywithiid-method.md)|Assegna l'interfaccia ID di `Base` all'elemento array specificato dall'argomento dell'indice.|  
|[Metodo InterfaceTraits::Verify](../windows/interfacetraits-verify-method.md)|Verifica che la base sia correttamente derivata.|  
  
### Costanti pubbliche  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costante InterfaceTraits::IidCount](../windows/interfacetraits-iidcount-constant.md)|Utilizzare il numero dell'interfaccia ID associata all'oggetto corrente di InterfaceTraits.|  
  
## Gerarchia di ereditarietà  
 `InterfaceTraits`  
  
## Requisiti  
 **Header:** implements.h  
  
 **Namespace:** Microsoft::WRL::Details  
  
## Vedere anche  
 [Spazio dei nomi Microsoft::WRL::Details](../windows/microsoft-wrl-details-namespace.md)