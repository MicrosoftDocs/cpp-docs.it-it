---
title: "Avviso del compilatore (livello 4) C4233 | Microsoft Docs"
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
  - "C4233"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4233"
ms.assetid: 9aa51fc6-8ef3-43b5-bafb-c9333cf60de3
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso del compilatore (livello 4) C4233
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

utilizzata estensione non standard: parola chiave 'parola chiave' supportata solo in C\+\+, non in C  
  
 Il codice sorgente è stato compilato come C anziché come C\+\+ ed è stata utilizzata una parola chiave valida solo in C\+\+.  Il file di origine viene compilato come C se ha estensione C o se si utilizza [\/Tc](../../build/reference/tc-tp-tc-tp-specify-source-file-type.md).  
  
 Questo avviso viene automaticamente trasformato in errore.  Per modificare tale comportamento, utilizzare [\#pragma warning](../../preprocessor/warning.md).  Se, ad esempio, si desidera rendere C4233 un avviso di livello 4, utilizzare la seguente riga di codice:  
  
```  
#pragma warning(2:4233)  
```  
  
 nel file del codice sorgente.