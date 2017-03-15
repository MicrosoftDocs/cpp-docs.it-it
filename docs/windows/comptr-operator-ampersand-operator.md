---
title: "Operatore ComPtr::operator&amp; | Microsoft Docs"
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
  - "client/Microsoft::WRL::ComPtr::operator&"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "operator& (operatore)"
ms.assetid: 2d77fda6-f4b2-45c1-8a0e-fbc355013531
caps.latest.revision: 5
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Operatore ComPtr::operator&amp;
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Rilascia l'interfaccia associata a questo oggetto `ComPtr` quindi recupera l'indirizzo dell'oggetto `ComPtr`.  
  
## Sintassi  
  
```cpp  
Details::ComPtrRef<WeakRef> operator&()  
  
const Details::ComPtrRef<const WeakRef> operator&() const  
```  
  
## Valore restituito  
 Un riferimento debole all'oggetto `ComPtr` corrente.  
  
## Note  
 Questo metodo differisce da [ComPtr::GetAddressOf](../windows/comptr-getaddressof-method.md) in quanto questo metodo libera un riferimento al puntatore all'interfaccia.  Utilizzare `ComPtr::GetAddressOf` per richiedere l'indirizzo del puntatore all'interfaccia ma non si desidera rilasciare tale interfaccia.  
  
## Requisiti  
 **Header:** client.h  
  
 **Namespace:** Microsoft::WRL  
  
## Vedere anche  
 [Classe ComPtr](../windows/comptr-class.md)