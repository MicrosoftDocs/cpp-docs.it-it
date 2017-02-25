---
title: "Classe RuntimeClass | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "implements/Microsoft::WRL::RuntimeClass"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "RuntimeClass (classe)"
ms.assetid: d52f9d1a-98e5-41f2-a143-8fb629dd0727
caps.latest.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 5
---
# Classe RuntimeClass
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Rappresenta una classe istanziata che eredita il numero specificato di interfacce e fornisce il [!INCLUDE[wrt](../atl/reference/includes/wrt_md.md)] specificato, COM classico e il supporto di riferimento ridotto.  
  
 In genere si derivano i tipi di WRL da `RuntimeClass` poiché questa classe implementa `AddRef`, `Release` e `QueryInterface`, e consente di gestire il conteggio dei riferimenti complessivi del modulo.  
  
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
class RuntimeClass : public Details::RuntimeClass<typename Details::InterfaceListHelper<I0, I1, I2, I3, I4, I5, I6, I7, I8, I9>::TypeT, RuntimeClassFlags<WinRt>>;  
  
template <  
   unsigned int classFlags,  
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
class RuntimeClass<RuntimeClassFlags<classFlags>, I0, I1, I2, I3, I4, I5, I6, I7, I8> : public Details::RuntimeClass<typename Details::InterfaceListHelper<I0, I1, I2, I3, I4, I5, I6, I7, I8>::TypeT, RuntimeClassFlags<classFlags> >;  
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
  
 `classFlags`  
 Una combinazione di uno o più valori di enumerazione [RuntimeClassType](../windows/runtimeclasstype-enumeration.md).  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore RuntimeClass::RuntimeClass](../windows/runtimeclass-runtimeclass-constructor.md)|Inizializza l'istanza corrente della classe di RuntimeClass.|  
|[Distruttore RuntimeClass::~RuntimeClass](../windows/runtimeclass-tilde-runtimeclass-destructor.md)|Deinizializza l'istanza corrente della classe di RuntimeClass.|  
  
## Gerarchia di ereditarietà  
 `I0`  
  
 `ChainInterfaces`  
  
 `I0`  
  
 `RuntimeClassBase`  
  
 `ImplementsHelper`  
  
 `DontUseNewUseMake`  
  
 `RuntimeClassFlags`  
  
 `RuntimeClassBaseT`  
  
 `RuntimeClass`  
  
 `RuntimeClass`  
  
## Requisiti  
 **Intestazione:** implements.h  
  
 **Spazio dei nomi:** Microsoft::WRL  
  
## Vedere anche  
 [Spazio dei nomi Microsoft::WRL](../windows/microsoft-wrl-namespace.md)