---
title: "Avviso della riga di comando D9043 | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "D9043"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "D9043"
ms.assetid: 9263e28d-217b-414c-bfb6-86efd3c27a77
caps.latest.revision: 6
caps.handback.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso della riga di comando D9043
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

valore 'livello\_avviso' non valido per 'opzione\_compilatore'; verrà utilizzato '4999'; gli avvisi dell'analisi codice non sono associati ai livelli di avviso  
  
## Esempio  
 Nell'esempio seguente viene generato l'errore C9043:  
  
```  
// D9043.cpp  
// compile with: /analyze /w16001  
// D9043 warning expected  
int main() {}  
```