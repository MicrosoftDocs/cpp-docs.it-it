---
title: "Metodo ActivationFactory::QueryInterface | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "module/Microsoft::WRL::ActivationFactory::QueryInterface"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "QueryInterface (metodo)"
ms.assetid: 2a9b71aa-61c0-43f7-aa35-00f0ee0af031
caps.latest.revision: 3
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 3
---
# Metodo ActivationFactory::QueryInterface
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Recupera un puntatore all'interfaccia specificata.  
  
## Sintassi  
  
```  
STDMETHOD(  
   QueryInterface  
)(REFIID riid, _Deref_out_ void **ppvObject);  
```  
  
#### Parametri  
 `riid`  
 Un ID di interfaccia.  
  
 `ppvObject`  
 Quando l'operazione viene completata, un puntatore all'interfaccia specificata dal parametro `riid`.  
  
## Valore restituito  
 S\_OK se ha avuto successo, in caso contrario un HRESULT ,che descrive perchè l'operazione è fallita.  
  
## Requisiti  
 **Header:** module.h  
  
 **Namespace:** Microsoft::WRL  
  
## Vedere anche  
 [Classe ActivationFactory](../windows/activationfactory-class.md)