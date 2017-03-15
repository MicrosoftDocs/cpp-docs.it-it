---
title: "Errore del compilatore C3880 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C3880"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3880"
ms.assetid: b0e05d1e-32d0-4034-9246-f37d23573ea9
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 11
---
# Errore del compilatore C3880
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'variabile': non può essere un membro dati literal  
  
 Il tipo di un attributo [literal](../../windows/literal-cpp-component-extensions.md) deve essere, o deve essere convertibile in durante l'esecuzione, uno dei seguenti tipi:  
  
-   tipo integrale  
  
-   string  
  
-   enumerazione con un tipo integrale o sottostante  
  
 Il seguente codice di esempio genera l'errore C3880:  
  
```  
// C3880.cpp  
// compile with: /clr /c  
ref struct Y1 {  
   literal System::Decimal staticConst1 = 10;   // C3880  
   literal int staticConst2 = 10;   // OK  
};  
```