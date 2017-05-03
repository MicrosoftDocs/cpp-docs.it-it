---
title: "Metodo Object::Equals | Microsoft Docs"
ms.custom: ""
ms.date: "02/09/2017"
ms.prod: "windows-client-threshold"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "Platform/Platform::Object::Equals"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Platform, Object::Equals"
ms.assetid: 263ccd41-2a29-4716-a47e-4bf2883f3403
caps.latest.revision: 4
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# Metodo Object::Equals
Determina se l'oggetto specificato è uguale all'oggetto corrente.  
  
## Sintassi  
  
```cpp  
  
bool Equals(  
    Object^ obj  
)  
```  
  
## Parametri  
 obj  
 Oggetto da confrontare.  
  
## Valore restituito  
 `true` se gli oggetti sono uguali; in caso contrario, `false`.  
  
## Requisiti  
 **Client minimo supportato:** [!INCLUDE[win8](../cppcx/includes/win8-md.md)]  
  
 **Server minimo supportato:** [!INCLUDE[winserver8](../cppcx/includes/winserver8-md.md)]  
  
 **Spazio dei nomi:** Platform  
  
 **Intestazione:** vccorlib.h  
  
## Vedere anche  
 [Classe Platform::Object](../cppcx/platform-object-class.md)