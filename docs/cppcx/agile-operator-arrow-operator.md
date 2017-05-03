---
title: "Operatore Agile::operator-&gt; | Microsoft Docs"
ms.custom: ""
ms.date: "02/09/2017"
ms.prod: "windows-client-threshold"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "agile/Platform::Agile::operator->"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Platform::Agile::operator->"
ms.assetid: 570f4b0b-1735-49b3-8a30-4a302ac57074
caps.latest.revision: 2
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# Operatore Agile::operator-&gt;
Recupera un handle all'oggetto rappresentato dall'oggetto Agile corrente.  
  
## Sintassi  
  
```cpp  
  
       T^ operator->()   
const throw();  
```  
  
## Valore restituito  
 Handle all'oggetto rappresentato dall'oggetto Agile corrente.  
  
 Questo operatore restituisce un tipo interno riservato. Un modo pratico per contenere il valore restituito consiste nell'assegnarlo a una variabile dichiarata con la parola chiave di deduzione del tipo [auto](../Topic/auto%20\(C++\).md).  
  
## Requisiti  
 **Client minimo supportato:** [!INCLUDE[win8](../cppcx/includes/win8-md.md)]  
  
 **Server minimo supportato:** [!INCLUDE[winserver8](../cppcx/includes/winserver8-md.md)]  
  
 **Spazio dei nomi:** Platform  
  
 **Intestazione:** vccorlib.h  
  
## Vedere anche  
 [Classe Platform::Agile](../cppcx/platform-agile-class.md)