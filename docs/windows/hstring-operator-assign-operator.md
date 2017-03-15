---
title: "Operatore HString::Operator= | Microsoft Docs"
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
  - "corewrappers/Microsoft::WRL::Wrappers::HString::operator="
dev_langs: 
  - "C++"
ms.assetid: 8e68c1ff-bc57-4526-810e-af3c284b4e30
caps.latest.revision: 2
caps.handback.revision: 2
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Operatore HString::Operator=
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Sposta il valore di un altro oggetto di HString all'oggetto corrente di HString.  
  
## Sintassi  
  
```cpp  
HString& operator=(HString&& other) throw()  
```  
  
#### Parametri  
 `other`  
 Un oggetto esistente di HString.  
  
## Note  
 Il valore dell'oggetto esistente `other` viene copiato all'oggetto corrente di HString, quindi l'oggetto `other` viene eliminato.  
  
## Requisiti  
 **Header:** corewrappers.h  
  
 **Namespace:** Microsoft::WRL::Wrappers  
  
## Vedere anche  
 [Classe HString](../windows/hstring-class.md)