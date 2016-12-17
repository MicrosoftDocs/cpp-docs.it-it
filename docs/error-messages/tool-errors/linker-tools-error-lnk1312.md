---
title: "Errore degli strumenti del linker LNK1312 | Microsoft Docs"
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
  - "LNK1312"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "LNK1312"
ms.assetid: 48284abb-d849-43fc-ab53-45aded14fd8a
caps.latest.revision: 6
caps.handback.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore degli strumenti del linker LNK1312
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

file non valido o danneggiato: impossibile importare l'assembly  
  
 Durante la generazione di un assembly, un file diverso da un modulo o da un assembly compilato con **\/clr** è stato passato all'opzione del linker **\/ASSEMBLYMODULE**.  Se è stato passato un file oggetto a **\/ASSEMBLYMODULE**, passare l'oggetto direttamente al linker anziché a **\/ASSEMBLYMODULE**.  
  
## Esempio  
 Nell'esempio riportato di seguito viene creato un file obj.  
  
```  
// LNK1312.cpp  
// compile with: /clr /LD  
public ref class A {  
public:  
   int i;  
};  
```  
  
## Esempio  
 Nell'esempio seguente viene generato l'errore LNK1312:  
  
```  
// LNK1312_b.cpp  
// compile with: /clr /LD /link /assemblymodule:LNK1312.obj  
// LNK1312 error expected  
public ref class M {};  
```