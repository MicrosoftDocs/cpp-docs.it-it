---
title: "Limitazioni sulla funzione main | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "Main"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "main (funzione), restrizioni sull'utilizzo"
ms.assetid: 7b3df731-344b-44a8-850c-11cbcbfbfa83
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 8
---
# Limitazioni sulla funzione main
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Alla funzione **main** si applicano numerose restrizioni non applicabili alle altre funzioni C\+\+.  La funzione **main**:  
  
-   Non può essere sottoposta a overload. Vedere [Overload](../misc/overloading-cpp.md).  
  
-   Non può essere dichiarata come **inline**.  
  
-   Non può essere dichiarata come **static**.  
  
-   Non è possibile accettarne l'indirizzo.  
  
-   Non può essere chiamato.  
  
## Vedere anche  
 [main: avvio del programma](../cpp/main-program-startup.md)