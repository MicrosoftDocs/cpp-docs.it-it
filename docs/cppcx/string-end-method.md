---
title: "Metodo String::End | Microsoft Docs"
ms.custom: ""
ms.date: "02/09/2017"
ms.prod: "windows-client-threshold"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "Platform/Platform::String::End"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Platform::String::End"
ms.assetid: c02ad0db-d35d-45f4-9b2a-cfc76716358e
caps.latest.revision: 3
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# Metodo String::End
Restituisce un puntatore successivo alla fine della stringa corrente.  
  
## Sintassi  
  
```cpp  
  
char16* End()  
```  
  
## Valore restituito  
 Puntatore successivo alla fine della stringa corrente.  
  
## Note  
 End\(\) restituisce Begin\(\)\+Length.  
  
## Requisiti  
 **Client minimo supportato:** [!INCLUDE[win8](../cppcx/includes/win8-md.md)]  
  
 **Server minimo supportato:** [!INCLUDE[winserver8](../cppcx/includes/winserver8-md.md)]  
  
 **Spazio dei nomi:** Platform  
  
 **Metadati:** vccorlib.h  
  
## Vedere anche  
 [Classe Platform::String](../cppcx/platform-string-class.md)