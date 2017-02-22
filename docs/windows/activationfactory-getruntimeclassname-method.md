---
title: "Metodo ActivationFactory::GetRuntimeClassName | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "module/Microsoft::WRL::ActivationFactory::GetRuntimeClassName"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "GetRuntimeClassName (metodo)"
ms.assetid: 74e34f0a-9c51-4b40-89f5-45c6c5886ece
caps.latest.revision: 3
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 3
---
# Metodo ActivationFactory::GetRuntimeClassName
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Ottiene il nome della classe runtime dell'oggetto che istanzia ActivationFactory.  
  
## Sintassi  
  
```  
STDMETHOD(  
   GetRuntimeClassName  
)(_Out_ HSTRING* runtimeName);  
```  
  
#### Parametri  
 `runtimeName`  
 Quando questa operazione completa, un handle a una stringa contenente il nome della classe runtime dell'oggetto che istanzia la ActivationFactory corrente.  
  
## Valore restituito  
 S\_OK se ha avuto successo, in caso contrario un HRESULT, che descrive perchè l'operazione è fallita.  
  
## Requisiti  
 **Header:** module.h  
  
 **Namespace:** Microsoft::WRL  
  
## Vedere anche  
 [Classe ActivationFactory](../windows/activationfactory-class.md)