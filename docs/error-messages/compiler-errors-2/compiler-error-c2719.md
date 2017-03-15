---
title: "Errore del compilatore C2719 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2719"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2719"
ms.assetid: ea6236d3-8286-45cc-9478-c84ad3dd3c8e
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 9
---
# Errore del compilatore C2719
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'parameter': il parametro formale con \_\_declspec\(align\('\#'\)\) non verrà allineato  
  
 Il modificatore [align](../../cpp/align-cpp.md) `__declspec` non è consentito nei parametri di funzione.  L'allineamento dei parametri di funzione è controllato dalla convenzione di chiamata usata.  Per altre informazioni, vedere [Convenzioni di chiamata](../../cpp/calling-conventions.md).  
  
 L'esempio seguente genera l'errore C2719 e mostra come risolverlo:  
  
```  
// C2719.cpp  
void func(int __declspec(align(32)) i);   // C2719  
// try the following line instead  
// void func(int i);  
```