---
title: "Metodo ClassFactory::QueryInterface | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "module/Microsoft::WRL::ClassFactory::QueryInterface"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "QueryInterface (metodo)"
ms.assetid: 9593881f-4585-4d70-8ca6-b328918d4d6b
caps.latest.revision: 3
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 3
---
# Metodo ClassFactory::QueryInterface
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Recupera un puntatore a interfaccia specificata dal parametro.  
  
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
 Quando questa operazione completa, un puntatore all'interfaccia specificata dal parametro `riid`.  
  
## Valore restituito  
 S\_OK se ha avuto successo, in caso contrario un HRESULT, che descrive perchè l'operazione è fallita.  
  
## Requisiti  
 **Header:** module.h  
  
 **Namespace:** Microsoft::WRL  
  
## Vedere anche  
 [Classe ClassFactory](../windows/classfactory-class.md)