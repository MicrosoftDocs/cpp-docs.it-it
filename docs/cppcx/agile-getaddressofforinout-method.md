---
title: "Metodo Agile::GetAddressOfForInOut | Microsoft Docs"
ms.custom: ""
ms.date: "02/09/2017"
ms.prod: "windows-client-threshold"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "agile/Platform::Agile::GetAddressOfForInOut"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Platform::Agile::GetAddressOfForInOut"
ms.assetid: 8bb27b4c-c325-49ee-91db-9adf87c530c4
caps.latest.revision: 2
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# Metodo Agile::GetAddressOfForInOut
Restituisce l'indirizzo di un handle all'oggetto rappresentato dall'oggetto Agile corrente.  
  
## Sintassi  
  
```cpp  
  
       T^* GetAddressOfForInOut()   
throw();  
  
```  
  
#### Parametri  
 `T`  
 Tipo specificato dal parametro typename del modello.  
  
## Valore restituito  
 Indirizzo di un handle all'oggetto rappresentato dall'oggetto Agile corrente.  
  
## Note  
 Questa operazione acquisisce il contesto di threading corrente e successivamente restituisce l'indirizzo di un handle all'oggetto sottostante.  
  
## Requisiti  
 **Client minimo supportato:** [!INCLUDE[win8](../cppcx/includes/win8-md.md)]  
  
 **Server minimo supportato:** [!INCLUDE[winserver8](../cppcx/includes/winserver8-md.md)]  
  
 **Spazio dei nomi:** Platform  
  
 **Intestazione:** vccorlib.h  
  
## Vedere anche  
 [Classe Platform::Agile](../cppcx/platform-agile-class.md)