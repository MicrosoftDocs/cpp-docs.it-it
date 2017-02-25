---
title: "Metodo Implements::CanCastTo | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "implements/Microsoft::WRL::Implements::CanCastTo"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CanCastTo (metodo)"
ms.assetid: a8e85c7d-4dcd-446d-bebc-a97da46ce44a
caps.latest.revision: 4
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 4
---
# Metodo Implements::CanCastTo
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Ottiene un puntatore all'interfaccia specificata.  
  
## Sintassi  
  
```  
__forceinline HRESULT CanCastTo(  
   REFIID riid,  
   _Deref_out_ void **ppv  
);  
```  
  
#### Parametri  
 `riid`  
 Un riferimento a un'interfaccia ID.  
  
 `ppv`  
 Se l'operazione riesce, un puntatore a un'interfaccia specificata da `riid`.  
  
## Valore restituito  
 S\_OK se ha esito positivo; in caso contrario, un HRESULT che indica un errore, come E\_NOINTERFACE.  
  
## Note  
 Questa è una funzione di supporto interna che esegue un'operazione di QueryInterface.  
  
## Requisiti  
 **Header:** implements.h  
  
 **Namespace:** Microsoft::WRL  
  
## Vedere anche  
 [Implementa la struttura](../windows/implements-structure.md)