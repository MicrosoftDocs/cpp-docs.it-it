---
title: "Metodo Agile::Get | Microsoft Docs"
ms.custom: ""
ms.date: "02/09/2017"
ms.prod: "windows-client-threshold"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "agile/Platform::Agile::Get"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Platform::Agile::Get"
ms.assetid: d6295e21-ddbe-4302-9158-3498da4d9669
caps.latest.revision: 2
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# Metodo Agile::Get
Restituisce un handle all'oggetto rappresentato dall'oggetto Agile corrente.  
  
## Sintassi  
  
```cpp  
  
          T^ Get() const  
;  
```  
  
## Valore restituito  
 Handle all'oggetto rappresentato dall'oggetto Agile corrente.  
  
 Il tipo di valore restituito effettivo è un tipo interno riservato. Un modo pratico per contenere il valore restituito consiste nell'assegnarlo a una variabile dichiarata con la parola chiave di deduzione del tipo [auto](../Topic/auto%20\(C++\).md). Ad esempio `auto x = myAgileTvariable->Get();`.  
  
## Requisiti  
 **Client minimo supportato:** [!INCLUDE[win8](../cppcx/includes/win8-md.md)]  
  
 **Server minimo supportato:** [!INCLUDE[winserver8](../cppcx/includes/winserver8-md.md)]  
  
 **Spazio dei nomi:** Platform  
  
 **Intestazione:** vccorlib.h  
  
## Vedere anche  
 [Classe Platform::Agile](../cppcx/platform-agile-class.md)