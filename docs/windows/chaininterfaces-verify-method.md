---
title: "Metodo ChainInterfaces::Verify | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "implements/Microsoft::WRL::ChainInterfaces::Verify"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Verify (metodo)"
ms.assetid: c591e130-8686-4130-ba69-1aaedc250038
caps.latest.revision: 4
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 4
---
# Metodo ChainInterfaces::Verify
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Verifica che a ogni interfaccia definita dai parametri di modello da `I0` a `I9` ereditino da IUnknown e\/o da IInspectable e che `I0` eredita da `I1` a `I9`.  
  
## Sintassi  
  
```  
WRL_NOTHROW __forceinline static void Verify();  
```  
  
## Note  
 Se l'operazione di verifica ha esito negativo, `static_assert` genera un messaggio di errore che descrive l'errore.  
  
## Note  
 I parametri di modello `I0` e `I1` sono necessari, mentre i parametri da `I2` a `I9` sono facoltativi.  
  
## Requisiti  
 **Header:** implements.h  
  
 **Namespace:** Microsoft::WRL  
  
## Vedere anche  
 [Struttura ChainInterfaces](../windows/chaininterfaces-structure.md)