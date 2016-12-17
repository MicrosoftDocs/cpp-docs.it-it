---
title: "Struttura IsBaseOfStrict | Microsoft Docs"
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
  - "internal/Microsoft::WRL::Details::IsBaseOfStrict"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "IsBaseOfStrict (struttura)"
ms.assetid: 6fed7366-c8d4-4991-b4fb-43ed93f8e1bf
caps.latest.revision: 5
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Struttura IsBaseOfStrict
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Supporta l'infrastruttura WRL e non può essere utilizzata direttamente dal proprio codice.  
  
## Sintassi  
  
```  
template <  
   typename Base,  
   typename Derived  
>  
  
struct IsBaseOfStrict;  
template <  
   typename Base  
>  
struct IsBaseOfStrict<Base, Base>;  
```  
  
#### Parametri  
 `Base`  
 Tipo di base.  
  
 `Derived`  
 Il tipo derivato.  
  
## Note  
 Testa se un tipo è la base di un altro.  
  
 Il primo modello verifica se un tipo è derivato da un tipo base, il quale potrebbe produrre **true** o **false**.  Il secondo modello verifica se un tipo è derivato da se stesso, il quale produce sempre **false**.  
  
## Membri  
  
### Costanti pubbliche  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costante IsBaseOfStrict::value](../windows/isbaseofstrict-value-constant.md)|Indica se un tipo è la base di un altro.|  
  
## Gerarchia di ereditarietà  
 `IsBaseOfStrict`  
  
## Requisiti  
 **Header:** internal.h  
  
 **Namespace:** Microsoft::WRL::Details  
  
## Vedere anche  
 [Spazio dei nomi Microsoft::WRL::Details](../windows/microsoft-wrl-details-namespace.md)