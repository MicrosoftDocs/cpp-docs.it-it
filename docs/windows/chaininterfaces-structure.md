---
title: "Struttura ChainInterfaces | Microsoft Docs"
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
  - "implements/Microsoft::WRL::ChainInterfaces"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ChainInterfaces (struttura)"
ms.assetid: d7415b59-5468-4bef-a3fd-8d82b12f0e9c
caps.latest.revision: 3
caps.handback.revision: 3
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Struttura ChainInterfaces
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Specifica la verifica e le funzioni di inizializzazione che possono essere applicate a un set di interfaccia ID.  
  
## Sintassi  
  
```  
template <  
   typename I0,  
   typename I1,  
   typename I2 = Details::Nil,  
   typename I3 = Details::Nil,  
   typename I4 = Details::Nil,  
   typename I5 = Details::Nil,  
   typename I6 = Details::Nil,  
   typename I7 = Details::Nil,  
   typename I8 = Details::Nil,  
   typename I9 = Details::Nil  
>  
struct ChainInterfaces : I0;  
template <  
   typename DerivedType,  
   typename BaseType,  
   bool hasImplements,  
   typename I1,  
   typename I2,  
   typename I3,  
   typename I4,  
   typename I5,  
   typename I6,  
   typename I7,  
   typename I8,  
   typename I9  
>  
struct ChainInterfaces<MixIn<DerivedType, BaseType, hasImplements>, I1, I2, I3, I4, I5, I6, I7, I8, I9>;  
```  
  
#### Parametri  
 `I0`  
 \(Richiesto\) Interfaccia ID 0.  
  
 `I1`  
 \(Richiesto\) Interfaccia ID 1.  
  
 `I2`  
 \(Facoltativo\) Interfaccia ID 2.  
  
 `I3`  
 \(Facoltativo\) Interfaccia ID 3.  
  
 `I4`  
 \(Facoltativo\) Interfaccia ID 4.  
  
 `I5`  
 \(Facoltativo\) Interfaccia ID 5.  
  
 `I6`  
 \(Facoltativo\) Interfaccia ID 6.  
  
 `I7`  
 \(Facoltativo\) Interfaccia ID 7.  
  
 `I8`  
 \(Facoltativo\) Interfaccia ID 8.  
  
 `I9`  
 \(Facoltativo\) Interfaccia ID 9.  
  
 `DerivedType`  
 Un tipo derivato.  
  
 `BaseType`  
 Il tipo di base di tipo derivato.  
  
 `hasImplements`  
 Un valore booleano che se è `true`, significa che è impossibile utilizzare una struttura [MixIn](../windows/mixin-structure.md) con una classe non deriva dalla struttura [Implementa](../windows/implements-structure.md).  
  
## Membri  
  
### Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo ChainInterfaces::CanCastTo](../windows/chaininterfaces-cancastto-method.md)|Indica se l'id di interfaccia specificato è possibile eseguire il cast a ognuna delle specializzazioni definite dai parametri di modello di ChainInterface.|  
|[Metodo ChainInterfaces::CastToUnknown](../windows/chaininterfaces-casttounknown-method.md)|Esegue il cast del puntatore a interfaccia di tipo definito dal parametro di modello `I0` a un puntatore su IUnknown.|  
|[Metodo ChainInterfaces::FillArrayWithIid](../windows/chaininterfaces-fillarraywithiid-method.md)|Archivia l'interfaccia ID definita dal parametro di modello `I0` in una posizione specificata in un array specificata di interfacce ID.|  
|[Metodo ChainInterfaces::Verify](../windows/chaininterfaces-verify-method.md)|Verifica che a ogni interfaccia definita dai parametri di modello da `I0` a `I9` ereditino da IUnknown e\/o da IInspectable e che `I0` eredita da `I1` a `I9`.|  
  
### Costanti protette  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costante ChainInterfaces::IidCount](../windows/chaininterfaces-iidcount-constant.md)|Il numero totale delle interfacce ID contenute nelle interfacce specificate dai parametri di modello da `I0` a `I9`.|  
  
## Gerarchia di ereditarietà  
 `I0`  
  
 `ChainInterfaces`  
  
## Requisiti  
 **Header:** implements.h  
  
 **Namespace:** Microsoft::WRL  
  
## Vedere anche  
 [Spazio dei nomi Microsoft::WRL](../windows/microsoft-wrl-namespace.md)