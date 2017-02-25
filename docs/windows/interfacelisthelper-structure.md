---
title: "Struttura InterfaceListHelper | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "implements/Microsoft::WRL::Details::InterfaceListHelper"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "InterfaceListHelper (struttura)"
ms.assetid: 4297e419-c96b-45df-8a00-7568062125ba
caps.latest.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 5
---
# Struttura InterfaceListHelper
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Supporta l'infrastruttura WRL e non può essere utilizzata direttamente dal proprio codice.  
  
## Sintassi  
  
```  
template <  
   typename T0,  
   typename T1 = Nil,  
   typename T2 = Nil,  
   typename T3 = Nil,  
   typename T4 = Nil,  
   typename T5 = Nil,  
   typename T6 = Nil,  
   typename T7 = Nil,  
   typename T8 = Nil,  
   typename T9 = Nil  
>  
struct InterfaceListHelper;  
  
template <  
   typename T0  
>  
struct InterfaceListHelper<T0, Nil, Nil, Nil, Nil, Nil, Nil, Nil, Nil>;  
```  
  
#### Parametri  
 `T0`  
 Parametro di modello 0, obbligatorio.  
  
 `T1`  
 Parametro di modello 1, che per impostazione predefinita non viene specificato.  
  
 `T2`  
 Parametro di modello 2, che per impostazione predefinita non viene specificato.Il terzo parametro di modello.  
  
 `T3`  
 Parametro di modello 3, che per impostazione predefinita non viene specificato.  
  
 `T4`  
 Parametro di modello 4, che per impostazione predefinita non viene specificato.  
  
 `T5`  
 Parametro di modello 5, che per impostazione predefinita non viene specificato.  
  
 `T6`  
 Parametro di modello 6, che per impostazione predefinita non viene specificato.  
  
 `T7`  
 Parametro di modello 7, che per impostazione predefinita non viene specificato.  
  
 `T8`  
 Parametro di modello 8, che per impostazione predefinita non viene specificato.  
  
 `T9`  
 Parametro di modello 9, che per impostazione predefinita non viene specificato.  
  
## Note  
 Compila ricorsivamente un tipo di InterfaceList applicando gli argomenti specifici dei parametro di modello.  
  
 Il modello di InterfaceListHelper utilizza i parametri del modello `T0` per definire il primo membro dati in una struttura InterfaceList, quindi ricorsivamente applica il modello InterfaceListHelper a tutti i parametri di modello rimanenti.  InterfaceListHelper si arresta quando non vi sono più parametri di modello.  
  
## Membri  
  
### Typedef pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`TypeT`|Un sinonimo per il tipo InterfaceList.|  
  
## Gerarchia di ereditarietà  
 `InterfaceListHelper`  
  
## Requisiti  
 **Header:** implements.h  
  
 **Namespace:** Microsoft::WRL::Details  
  
## Vedere anche  
 [Spazio dei nomi Microsoft::WRL::Details](../windows/microsoft-wrl-details-namespace.md)