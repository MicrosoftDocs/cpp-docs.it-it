---
title: "Avviso del compilatore (livello 2) C4099 | Microsoft Docs"
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
  - "C4099"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4099"
ms.assetid: 00bb803d-cae7-4ab8-8969-b46f54139ac8
caps.latest.revision: 9
caps.handback.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso del compilatore (livello 2) C4099
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'identificatore': il nome del tipo che in precedenza utilizzava 'tipooggetto1' ora utilizza 'tipooggetto2'  
  
 Un oggetto dichiarato come struttura viene definito come classe oppure un oggetto dichiarato come classe viene definito come struttura.  Il compilatore utilizza il tipo fornito nella definizione.  
  
## Esempio  
 Nell'esempio seguente viene generato l'errore C4099:  
  
```  
// C4099.cpp  
// compile with: /W2 /c  
struct A;  
class A {};   // C4099, use different identifer or use same object type  
```