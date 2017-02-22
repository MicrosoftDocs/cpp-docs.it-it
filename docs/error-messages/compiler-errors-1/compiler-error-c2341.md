---
title: "Errore del compilatore C2341 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2341"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2341"
ms.assetid: aa2a7da5-e1c8-4225-9939-5bdc50158f31
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 9
---
# Errore del compilatore C2341
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'nome sezione': il segmento deve essere definito prima dell'utilizzo tramite \#pragma data\_seg, code\_seg o una sezione  
  
 Un'istruzione [allocate](../../cpp/allocate.md) fa riferimento a un segmento non ancora definito dai pragma [code\_seg](../../preprocessor/code-seg.md), [data\_seg](../../preprocessor/data-seg.md) o [section](../../preprocessor/section.md).  
  
 Il seguente codice di esempio genera l'errore C2341:  
  
```  
// C2341.cpp  
// compile with: /c  
__declspec(allocate(".test"))   // C2341  
int j = 1;  
```  
  
 Possibile soluzione:  
  
```  
// C2341b.cpp  
// compile with: /c  
#pragma data_seg(".test")  
__declspec(allocate(".test"))  
int j = 1;  
```