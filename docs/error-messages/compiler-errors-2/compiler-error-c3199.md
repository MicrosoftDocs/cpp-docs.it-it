---
title: "Errore del compilatore C3199 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C3199"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3199"
ms.assetid: e7a478d3-115a-40a3-991b-c7454fd2e28e
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# Errore del compilatore C3199
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

uso non valido di pragma a virgola mobile: le eccezioni non sono supportate in modalità non precise  
  
 È stato utilizzato il pragma [float\_control](../../preprocessor/float-control.md) per specificare un modello di eccezioni a virgola mobile in un'impostazione [\/fp](../../build/reference/fp-specify-floating-point-behavior.md) diversa da **\/fp:precise**.  
  
 Il seguente codice di esempio genera l'errore C3199:  
  
```  
// C3199.cpp  
// compile with: /fp:fast  
#pragma float_control(except, on)   // C3199  
```