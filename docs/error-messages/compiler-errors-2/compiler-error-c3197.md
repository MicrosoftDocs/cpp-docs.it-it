---
title: "Errore del compilatore C3197 | Microsoft Docs"
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
  - "C3197"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3197"
ms.assetid: 4e385c3b-222e-425c-9612-46e83ed41650
caps.latest.revision: 8
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C3197
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'parola chiave': utilizzabile solo nelle definizioni  
  
 Una parola chiave è stata utilizzata in una dichiarazione, ma è valida solo in una definizione.  
  
 Il seguente codice di esempio genera l'errore C3197:  
  
```  
// C3197.cpp  
// compile with: /clr /c  
ref struct R abstract;   // C3197  
ref struct R abstract {};   // OK  
  
public ref class MyObject;   // C3197  
ref class MyObject;   // OK  
public ref class MyObject {};   // OK  
```