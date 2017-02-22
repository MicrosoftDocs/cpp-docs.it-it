---
title: "Errore del compilatore C2873 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2873"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2873"
ms.assetid: 7a10036b-400e-4364-bd2f-dcd7370c5e28
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# Errore del compilatore C2873
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'simbolo': il simbolo non può essere utilizzato in una dichiarazione using  
  
 In una direttiva `using` manca una parola chiave [namespace](../../misc/namespace-declaration.md).  Per questo motivo, il codice viene erroneamente interpretato come [dichiarazione using](../../cpp/using-declaration.md) e non come [direttiva using](../../misc/using-directive-cpp.md).