---
title: "Errore del compilatore C3131 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C3131"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3131"
ms.assetid: 38f20fac-83c9-4cd9-b7b5-74ca8f650ea6
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# Errore del compilatore C3131
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

il progetto deve avere un attributo 'module' con una proprietà 'name'  
  
 L'attributo [module](../../windows/module-cpp.md) deve avere un parametro name.  
  
 Il seguente codice di esempio genera l'errore C3131:  
  
```  
// C3131.cpp  
[emitidl];  
[module];   // C3131  
// try the following line instead  
// [module (name="MyLib")];  
  
[public]  
typedef long int LongInt;  
```