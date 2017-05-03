---
title: "Operatore ArrayReference::operator() | Microsoft Docs"
ms.custom: ""
ms.date: "02/09/2017"
ms.prod: "windows-client-threshold"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "vccorlib/Platform::ArrayReference::operatorArray^"
dev_langs: 
  - "C++"
ms.assetid: 48726344-82bb-4c1d-b246-ed74b895f99b
caps.latest.revision: 5
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# Operatore ArrayReference::operator()
Converte l'oggetto [Platform::ArrayReference](../cppcx/platform-arrayreference-class.md) corrente in una classe [Platform::Array](../cppcx/platform-array-class.md).  
  
## Sintassi  
  
```cpp  
  
Array<__TArg>^ operator ();  
  
```  
  
## Valore restituito  
 Handle a oggetto di tipo `Array<__TArg>^`  
  
## Note  
 [Platform::ArrayReference](../cppcx/platform-arrayreference-class.md) e [Platform::Array](../cppcx/platform-array-class.md) sono modelli di classe C\+\+ standard, non classi di riferimento.  
  
## Requisiti  
 **Client minimo supportato:** [!INCLUDE[win8](../cppcx/includes/win8-md.md)]  
  
 **Server minimo supportato:** [!INCLUDE[winserver8](../cppcx/includes/winserver8-md.md)]  
  
 **Spazio dei nomi:** Platform  
  
 **Intestazione:** vccorlib.h  
  
## Vedere anche  
 [Platform::ArrayReference \(classe\)](../cppcx/platform-arrayreference-class.md)