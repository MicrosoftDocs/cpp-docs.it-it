---
title: "Metodo Agile::Release | Microsoft Docs"
ms.custom: ""
ms.date: "02/09/2017"
ms.prod: "windows-client-threshold"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "agile/Platform::Agile::Release"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Platform::Agile::Release"
ms.assetid: aa825134-943f-425d-857e-449ec104765e
caps.latest.revision: 2
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# Metodo Agile::Release
Rimuove l'oggetto e il contesto sottostanti dell'oggetto Agile corrente.  
  
## Sintassi  
  
```cpp  
  
void Release() throw();  
  
```  
  
## Note  
 Se esistono, l'oggetto e il contesto sottostanti dell'oggetto Agile corrente vengono rimossi, quindi il valore dell'oggetto Agile viene impostato su null.  
  
## Requisiti  
 **Client minimo supportato:** [!INCLUDE[win8](../cppcx/includes/win8-md.md)]  
  
 **Server minimo supportato:** [!INCLUDE[winserver8](../cppcx/includes/winserver8-md.md)]  
  
 **Spazio dei nomi:** Platform  
  
 **Intestazione:** vccorlib.h  
  
## Vedere anche  
 [Classe Platform::Agile](../cppcx/platform-agile-class.md)