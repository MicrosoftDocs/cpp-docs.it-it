---
title: "Operatore ComPtr::operator-&gt; | Microsoft Docs"
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
  - "client/Microsoft::WRL::ComPtr::operator->"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "operator-> (operatore)"
ms.assetid: 7b7faefd-d1e4-4f31-a77d-17a42e0d6b6a
caps.latest.revision: 3
caps.handback.revision: 3
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Operatore ComPtr::operator-&gt;
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Recupera un puntatore al tipo specificato dal modello di parametro corrente.  
  
## Sintassi  
  
```  
WRL_NOTHROW Microsoft::WRL::Details::RemoveIUnknown<InterfaceType>* operator->() const;  
```  
  
## Valore restituito  
 Puntatore al tipo specificato dal nome del tipo corrente del modello.  
  
## Note  
 Questa funzione di supporto rimuove un inutile sovraccarico provocato utilizzando la macro di STDMETHOD.  Questa funzione genera i tipi di IUnknown privati anziché virtuali.  
  
## Requisiti  
 **Header:** client.h  
  
 **Namespace:** Microsoft::WRL  
  
## Vedere anche  
 [Classe ComPtr](../windows/comptr-class.md)