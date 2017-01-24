---
title: "Collegamenti in nomi con ambito classe | Microsoft Docs"
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
  - "nomi di classe [C++], collegamento"
  - "ambito classe [C++], collegamento in nomi"
  - "classi [C++], nomi"
  - "classi [C++], ambito"
  - "collegamento esterno, regole di collegamento ambito"
  - "collegamento [C++], regole di collegamento ambito"
  - "nomi [C++], regole di collegamento ambito"
  - "ambito [C++], nomi di classe"
  - "ambito [C++], regole di collegamento"
ms.assetid: 45275ff3-6e94-4967-82c8-ba540ef4da28
caps.latest.revision: 8
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Collegamenti in nomi con ambito classe
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Le seguenti regole di collegamento vengono applicate ai nomi con ambito classe:  
  
-   I membri di classe statici hanno un collegamento esterno.  
  
-   Le funzioni del membro classe hanno un collegamento esterno.  
  
-   Gli enumeratori e i nomi `typedef` non dispongono di collegamento.  
  
 **Sezione specifica Microsoft**  
  
-   Le funzioni dichiarate come funzioni `friend` devono disporre di collegamento esterno.  La dichiarazione di una funzione statica come `friend` genera un errore.  
  
 **Fine sezione specifica Microsoft**  
  
## Vedere anche  
 [Programma e collegamento](../cpp/program-and-linkage-cpp.md)