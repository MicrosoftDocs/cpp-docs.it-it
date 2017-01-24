---
title: "Errore del compilatore C2865 | Microsoft Docs"
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
  - "C2865"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2865"
ms.assetid: 973eb6a0-c99a-4d25-b3e5-fe0539794d77
caps.latest.revision: 8
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C2865
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'funzione': confronto non valido per handle\_o\_puntatore  
  
 È possibile confrontare solo le uguaglianze tra i riferimenti a tipi [Classes and Structs](../../windows/classes-and-structs-cpp-component-extensions.md) o [\_\_gc](../../misc/gc.md) per verificare se fanno riferimento allo stesso oggetto \(\=\=\) o a oggetti differenti \(\!\=\).  
  
 Non è possibile confrontarli per ordinarli, in quanto i servizi di runtime .NET potrebbero spostare gli oggetti gestiti in qualsiasi momento, modificando il risultato della prova.