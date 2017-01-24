---
title: "Implementa la struttura | Microsoft Docs"
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
  - "implements/Microsoft::WRL::Implements"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Implementa la struttura"
ms.assetid: 29b13e90-34d4-4a0b-babd-5187c9eb0c36
caps.latest.revision: 5
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Implementa la struttura
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Implementa QueryInterface e GetIid per le interfacce specificate.  
  
## Sintassi  
  
```  
template <  
   typename I0,  
   typename I1 = Details::Nil,  
   typename I2 = Details::Nil,  
   typename I3 = Details::Nil,  
   typename I4 = Details::Nil,  
   typename I5 = Details::Nil,  
   typename I6 = Details::Nil,  
   typename I7 = Details::Nil,  
   typename I8 = Details::Nil,  
   typename I9 = Details::Nil  
>  
struct __declspec(novtable) Implements : Details::ImplementsHelper<RuntimeClassFlags<WinRt>, typename Details::InterfaceListHelper<I0, I1, I2, I3, I4, I5, I6, I7, I8, I9>::TypeT>, Details::ImplementsBase;  
template <  
   int flags,  
   typename I0,  
   typename I1,  
   typename I2,  
   typename I3,  
   typename I4,  
   typename I5,  
   typename I6,  
   typename I7,  
   typename I8  
>  
struct __declspec(novtable) Implements<RuntimeClassFlags<flags>, I0, I1, I2, I3, I4, I5, I6, I7, I8> : Details::ImplementsHelper<RuntimeClassFlags<flags>, typename Details::InterfaceListHelper<I0, I1, I2, I3, I4, I5, I6, I7, I8>::TypeT>, Details::ImplementsBase;  
```  
  
#### Parametri  
 `I0`  
 L'interfaccia con ID numero zero \(Obbligatorio\)  
  
 `I1`  
 Il primo ID di interfaccia. \(Facoltativo\)  
  
 `I2`  
 Il secondo ID di interfaccia \(Facoltativo\)  
  
 `I3`  
 Il terzo ID di interfaccia \(Facoltativo\)  
  
 `I4`  
 Il quarto ID di interfaccia \(Facoltativo\)  
  
 `I5`  
 Il quinto ID di interfaccia \(Facoltativo\)  
  
 `I6`  
 Il sesto ID di interfaccia \(Facoltativo\)  
  
 `I7`  
 Il settimo ID di interfaccia \(Facoltativo\)  
  
 `I8`  
 L'ottavo ID di interfaccia \(Facoltativo\)  
  
 `I9`  
 Il nono ID di interfaccia \(Facoltativo\)  
  
 `flags`  
 Flag di configurazione per la classe.  Una o più enumerazioni [RuntimeClassType](../windows/runtimeclasstype-enumeration.md) specificate in una struttura [RuntimeClassFlags](../windows/runtimeclassflags-structure.md).  
  
## Osservazioni  
 Deriva dall'elenco delle interfacce specificate e implementa i modelli di supporto per QueryInterface e GetIid.  
  
 Ogni `I0` con il parametro di interfaccia `I9` deve derivare da IUnknown, IInspectable, o dal modello [ChainInterfaces](../windows/chaininterfaces-structure.md).  Il parametro `flags` determina se il supporto viene generato da IUnknown o IInspectable.  
  
## Membri  
  
### Typedef pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`ClassFlags`|Un sinonimo per `RuntimeClassFlags<WinRt>`.|  
  
### Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo Implements::CanCastTo](../windows/implements-cancastto-method.md)|Ottiene un puntatore all'interfaccia specificata.|  
|[Metodo Implements::CastToUnknown](../windows/implements-casttounknown-method.md)|Ottiene un puntatore all'interfaccia IUnknown sottostante.|  
|[Metodo Implements::FillArrayWithIid](../windows/implements-fillarraywithiid-method.md)|Inserisce l'ID di interfaccia specificata dal parametro di indice zero del modello corrente nell'array di elementi specificato.|  
  
### Costanti protette  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costante Implements::IidCount](../windows/implements-iidcount-constant.md)|Mantiene il numero di ID di interfaccia implementati.|  
  
## Gerarchia di ereditarietà  
 `I0`  
  
 `ChainInterfaces`  
  
 `I0`  
  
 `ImplementsBase`  
  
 `ImplementsHelper`  
  
 `Implements`  
  
## Requisiti  
 **Intestazione:** implements.h  
  
 **Spazio dei nomi:** Microsoft::WRL  
  
## Vedere anche  
 [Spazio dei nomi Microsoft::WRL](../windows/microsoft-wrl-namespace.md)