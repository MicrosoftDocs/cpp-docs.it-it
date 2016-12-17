---
title: "Operatore ComPtr::operator= | Microsoft Docs"
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
  - "client/Microsoft::WRL::ComPtr::operator="
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "operator= (operatore)"
ms.assetid: 1a0c2752-f7d8-4819-9443-07b88b69ef02
caps.latest.revision: 3
caps.handback.revision: 3
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Operatore ComPtr::operator=
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Assegna un valore al ComPtr corrente.  
  
## Sintassi  
  
```  
WRL_NOTHROW ComPtr& operator=(  
   decltype(__nullptr)  
);  
WRL_NOTHROW ComPtr& operator=(  
   _In_opt_ T *other  
);  
template <  
   typename U  
>  
WRL_NOTHROW ComPtr& operator=(  
   _In_opt_ U *other  
);  
WRL_NOTHROW ComPtr& operator=(  
   const ComPtr &other  
);  
template<  
   class U  
>  
WRL_NOTHROW ComPtr& operator=(  
   const ComPtr<U>& other  
);  
WRL_NOTHROW ComPtr& operator=(  
   _Inout_ ComPtr &&other  
);  
template<  
   class U  
>  
WRL_NOTHROW ComPtr& operator=(  
   _Inout_ ComPtr<U>&& other  
);  
```  
  
#### Parametri  
 `U`  
 Una classe.  
  
 `other`  
 Un puntatore, un riferimento, o un riferimento rvalue ad un tipo o ad un altro ComPtr.  
  
## Valore restituito  
 Un Riferimento al tipo ComPtr corrente.  
  
## Note  
 La prima versione di questo operatore assegna un valore vuoto al ComPtr corrente.  
  
 Nella seconda versione, se il puntatore all'interfaccia assegnato non corrisponde al puntatore all'interfaccia corrente di ComPtr, il secondo puntatore viene assegnato al ComPtr corrente.  
  
 Nella terza versione, il puntatore all'interfaccia assegnato viene assegnato al ComPtr corrente.  
  
 Nella quarta versione, se il puntatore all'interfaccia del valore assegnato non corrisponde al puntatore all'interfaccia corrente di ComPtr, il secondo puntatore viene assegnato al ComPtr corrente.  
  
 La quinta versione è un operatore di copia, un riferimento a ComPtr viene assegnato al ComPtr corrente.  
  
 La sesta versione è un operatore di copia che utilizza la semantica di spostamento, un rvalue si riferisce a ComPtr se qualsiasi tipo viene castato in maniera statica, quindi viene assegnato al ComPtr corrente.  
  
 La settima versione è un operatore di copia che utilizza la semantica di spostamento; un rvalue riferito al ComPtr di tipo `U` viene castato in modo statico e quindi viene assegnato al ComPtr corrente.  
  
## Requisiti  
 **Header:** client.h  
  
 **Namespace:** Microsoft::WRL  
  
## Vedere anche  
 [Classe ComPtr](../windows/comptr-class.md)