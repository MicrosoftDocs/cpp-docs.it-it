---
title: "Metodo RuntimeClass::QueryInterface | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "implements/Microsoft::WRL::RuntimeClass::QueryInterface"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "QueryInterface (metodo)"
ms.assetid: 8f01f4a1-3fa2-4a8e-88c6-03629236cb9f
caps.latest.revision: 4
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 4
---
# Metodo RuntimeClass::QueryInterface
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Recupera un puntatore all'interfaccia ID.  
  
## Sintassi  
  
```  
  
STDMETHOD(  
   QueryInterface  
)  
   (REFIID riid,   
   _Deref_out_ void **ppvObject);  
```  
  
#### Parametri  
 `riid`  
 Un ID di interfaccia.  
  
 `ppvObject`  
 Quando l'operazione viene completata, un puntatore all'interfaccia specificata dal parametro `riid`.  
  
## Valore restituito  
 S\_OK se ha esito positivo; in caso contrario, un HRESULT, che indica l'errore.  
  
## Requisiti  
 **Header:** implements.h  
  
 **Namespace:** Microsoft::WRL  
  
## Vedere anche  
 [Classe RuntimeClass](../windows/runtimeclass-class.md)