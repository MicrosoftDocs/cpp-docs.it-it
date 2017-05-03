---
title: "Type::GetTypeCode (metodo) | Microsoft Docs"
ms.custom: ""
ms.date: "02/09/2017"
ms.prod: "windows-client-threshold"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "Platform/Platform::Type::GetTypeCode"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Type::GetTypeCode (metodo)"
ms.assetid: 20c30432-91a3-400e-b9d6-eba265daaefc
caps.latest.revision: 3
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# Type::GetTypeCode (metodo)
Recupera una categoria di tipo numerico dei tipi incorporati.  
  
## Sintassi  
  
```cpp  
Platform::TypeCode GetTypeCode();  
```  
  
## Valore restituito  
 Uno dei valori enumerati di Platform::TypeCode.  
  
## Note  
 L'equivalente del metodo del membro GetTypeCode\(\) è proprietà `typeid`.  
  
## Requisiti  
 **Client minimo supportato:** [!INCLUDE[win8](../cppcx/includes/win8-md.md)]  
  
 **Server minimo supportato:** [!INCLUDE[winserver8](../cppcx/includes/winserver8-md.md)]  
  
 **Spazio dei nomi:** Platform  
  
 **Metadati:** platform.winmd  
  
## Vedere anche  
 [Platform::ValueType \(classe\)](../cppcx/platform-valuetype-class.md)