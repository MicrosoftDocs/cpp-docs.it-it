---
title: "Avviso del compilatore (livello 4) C4268 | Microsoft Docs"
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
  - "C4268"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4268"
ms.assetid: d0511e80-904f-4ee1-b4d7-39b5c0bd8234
caps.latest.revision: 6
caps.handback.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso del compilatore (livello 4) C4268
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'identificatore': dati statici\/globali di tipo 'const' inizializzati con un costruttore predefinito generato dal compilatore riempiono l'oggetto con zeri  
  
 Un'istanza globale o statica di tipo **const** di una classe non comune viene inizializzata con un costruttore predefinito generato dal compilatore.  
  
## Esempio  
  
```  
// C4268.cpp  
// compile with: /c /LD /W4  
class X {  
public:  
   int m_data;  
};  
  
const X x1;   // C4268  
```  
  
 Poiché l'istanza della classe è di tipo **const**, non è possibile modificare il valore di `m_data`.