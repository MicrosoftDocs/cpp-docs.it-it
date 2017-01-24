---
title: "Collegamenti in nomi con ambito blocco | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ambito blocco [C++]"
  - "collegamento esterno, regole di collegamento ambito"
  - "collegamento [C++], regole di collegamento ambito"
  - "nomi [C++], regole di collegamento ambito"
  - "ambito [C++], regole di collegamento"
ms.assetid: 73efa91a-f761-47f7-bbd9-9f9e3508e218
caps.latest.revision: 8
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Collegamenti in nomi con ambito blocco
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Le seguenti regole di collegamento vengono applicate ai nomi con ambito blocco \(nomi locali\):  
  
-   I nomi dichiarati come `extern` dispongono di collegamento esterno a meno che non siano stati in precedenza dichiarati come **static**.  
  
-   Tutti gli altri nomi con ambito blocco non dispongono di collegamento.  
  
## Vedere anche  
 [Programma e collegamento](../cpp/program-and-linkage-cpp.md)