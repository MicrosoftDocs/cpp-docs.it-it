---
title: "Operatore String::operator== (C++/CX) | Microsoft Docs"
ms.custom: ""
ms.date: "02/09/2017"
ms.prod: "windows-client-threshold"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "Platform/Platform::String::operator=="
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Platform::String::operator=="
ms.assetid: c804b269-64f9-4bc0-929b-2dfa87bf46ac
caps.latest.revision: 4
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# Operatore String::operator== (C++/CX)
Indica se due oggetti String specificati hanno lo stesso valore di testo.  
  
## Sintassi  
  
```cpp  
  
bool String::operator==( String^ str1,  
                         String^ str2)  
  
```  
  
#### Parametri  
 `str1`  
 Primo oggetto String da confrontare.  
  
 `str2`  
 Secondo oggetto String da confrontare.  
  
## Valore restituito  
 `true` se il contenuto di `str1` è uguale a `str2`. In caso contrario, `false`.  
  
## Note  
 Questo operatore è equivalente al [Metodo String::CompareOrdinal](../cppcx/string-compareordinal-method.md).  
  
## Requisiti  
 **Client minimo supportato:** [!INCLUDE[win8](../cppcx/includes/win8-md.md)]  
  
 **Server minimo supportato:** [!INCLUDE[winserver8](../cppcx/includes/winserver8-md.md)]  
  
 **Spazio dei nomi:** Platform  
  
 **Metadati:** vccorlib.h  
  
## Vedere anche  
 [Classe Platform::String](../cppcx/platform-string-class.md)