---
title: "Avviso del compilatore (livello 1) C4965 | Microsoft Docs"
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
  - "C4965"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4965"
ms.assetid: 47f3f6dc-459b-4a25-9947-f394c8966cb5
caps.latest.revision: 14
caps.handback.revision: 14
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso del compilatore (livello 1) C4965
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

boxing implicito dell'integer 0; utilizzare nullptr o un cast esplicito  
  
 In Visual C\+\+ sono disponibili funzionalità per il boxing implicito dei tipi di valore.  Un'istruzione che generava l'assegnazione di un valore null tramite le estensioni gestite per C\+\+ diventa ora un'assegnazione a un valore int boxed.  
  
 Per ulteriori informazioni, vedere [Boxing](../../windows/boxing-cpp-component-extensions.md).  
  
## Esempio  
 Nell'esempio seguente viene generato l'errore C4965:  
  
```  
// C4965.cpp  
// compile with: /clr /W1  
int main() {  
   System::Object ^o = 0;   // C4965  
  
   // the previous line is the same as the following line  
   // using Managed Extensions for C++  
   // System::Object *o = __box(0);  
  
   // OK  
   System::Object ^o2 = nullptr;  
   System::Object ^o3 = safe_cast<System::Object^>(0);  
}  
```