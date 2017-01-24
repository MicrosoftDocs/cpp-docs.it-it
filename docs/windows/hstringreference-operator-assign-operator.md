---
title: "Operatore HStringReference::Operator= | Microsoft Docs"
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
  - "corewrappers/Microsoft::WRL::Wrappers::HStringReference::operator="
dev_langs: 
  - "C++"
ms.assetid: ea100ed3-e566-4c9e-b6a8-f296088dea9c
caps.latest.revision: 2
caps.handback.revision: 2
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Operatore HStringReference::Operator=
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Sposta il valore di un altro oggetto di HStringReference all'oggetto corrente di HStringReference.  
  
## Sintassi  
  
```cpp  
HStringReference& operator=(HStringReference&& other) throw()  
```  
  
#### Parametri  
 `other`  
 Un oggetto esistente di HStringReference.  
  
## Note  
 Il valore dell'oggetto esistente `other` viene copiato all'oggetto corrente di HStringReference, quindi l'oggetto `other` viene eliminato.  
  
## Requisiti  
 **Header:** corewrappers.h  
  
 **Namespace:** Microsoft::WRL::Wrappers  
  
## Vedere anche  
 [Classe HStringReference](../windows/hstringreference-class.md)