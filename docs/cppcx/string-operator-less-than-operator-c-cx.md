---
title: "Operatore String::operator&lt; (C++/CX) | Microsoft Docs"
ms.custom: ""
ms.date: "02/09/2017"
ms.prod: "windows-client-threshold"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "Platform/Platform::String::operator<"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Platform::String::operator<"
ms.assetid: 94221597-70dd-4456-a084-5bd2b8fa7723
caps.latest.revision: 3
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# Operatore String::operator&lt; (C++/CX)
Indica se il valore di un oggetto String è minore del valore di un secondo oggetto String.  
  
## Sintassi  
  
```cpp  
  
bool String::operator<( String^ str1,  
                         String^ str2)  
  
```  
  
#### Parametri  
 `str1`  
 Primo oggetto String.  
  
 `str2`  
 Secondo oggetto String.  
  
## Valore restituito  
 `true` se il valore di `str1` è minore del valore di `str2`; in caso contrario, `false`.  
  
## Requisiti  
 **Client minimo supportato:** [!INCLUDE[win8](../cppcx/includes/win8-md.md)]  
  
 **Server minimo supportato:** [!INCLUDE[winserver8](../cppcx/includes/winserver8-md.md)]  
  
 **Spazio dei nomi:** Platform  
  
 **Metadati:** vccorlib.h  
  
## Vedere anche  
 [Classe Platform::String](../cppcx/platform-string-class.md)