---
title: "Errore del compilatore C2516 | Microsoft Docs"
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
  - "C2516"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2516"
ms.assetid: cd3accc1-0179-4a13-9587-616908c4ad1d
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C2516
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'nome': non è una classe base valida  
  
 La classe è derivata da un nome di tipo definito da un'istruzione `typedef`.  
  
 Il seguente codice di esempio genera l'errore C2516:  
  
```  
// C2516.cpp  
typedef unsigned long ulong;  
class C : public ulong {}; // C2516  
```