---
title: "Metodo String::Equals | Microsoft Docs"
ms.custom: ""
ms.date: "02/09/2017"
ms.prod: "windows-client-threshold"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "Platform/Platform::String::Equals"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Platform::String::Equals"
ms.assetid: b0c78419-242d-4d38-93e3-ff2818412624
caps.latest.revision: 4
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# Metodo String::Equals
Indica se la stringa specificata ha lo stesso valore dell'oggetto corrente.  
  
## Sintassi  
  
```cpp  
  
bool String::Equals(Object^ str);  
  
bool String::Equals(String^ str);  
  
```  
  
#### Parametri  
 `str`  
 Oggetto da confrontare.  
  
## Valore restituito  
 `true` se `str` è uguale all'oggetto corrente; in caso contrario, `false`.  
  
## Note  
 Questo metodo è equivalente al [Metodo String::CompareOrdinal](../cppcx/string-compareordinal-method.md). Nel primo overload, si prevede che il parametro `str` possa essere sottoposto a cast a un oggetto String^.  
  
## Requisiti  
 **Client minimo supportato:** [!INCLUDE[win8](../cppcx/includes/win8-md.md)]  
  
 **Server minimo supportato:** [!INCLUDE[winserver8](../cppcx/includes/winserver8-md.md)]  
  
 **Spazio dei nomi:** Platform  
  
 **Metadati:** vccorlib.h  
  
## Vedere anche  
 [Classe Platform::String](../cppcx/platform-string-class.md)