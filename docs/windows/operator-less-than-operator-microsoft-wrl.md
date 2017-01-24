---
title: "Operatore operator&lt; (Microsoft::WRL) | Microsoft Docs"
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
  - "client/Microsoft::WRL::operator<"
dev_langs: 
  - "C++"
ms.assetid: bfae0e1c-1648-482b-99c2-3217d62aba46
caps.latest.revision: 3
caps.handback.revision: 3
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Operatore operator&lt; (Microsoft::WRL)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Determina se l'indirizzo di un oggetto è minore di un'altra.  
  
## Sintassi  
  
```cpp  
template<class T, class U>  
bool operator<(const ComPtr<T>& a, const ComPtr<U>& b) throw();  
template<class T, class U>  
bool operator<(const Details::ComPtrRef<ComPtr<T>>& a, const Details::ComPtrRef<ComPtr<U>>& b) throw();  
```  
  
#### Parametri  
 `a`  
 L'oggetto di sinistra.  
  
 `b`  
 L'oggetto di destra.  
  
## Valore restituito  
 `true` se l'indirizzo di `a` è minore dell'indirizzo di `b`; in caso contrario, `false`.  
  
## Requisiti  
 **Header:** client.h  
  
 **Namespace:** Microsoft::WRL  
  
## Vedere anche  
 [Spazio dei nomi Microsoft::WRL](../windows/microsoft-wrl-namespace.md)