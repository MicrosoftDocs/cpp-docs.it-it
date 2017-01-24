---
title: "Errore del compilatore C3072 | Microsoft Docs"
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
  - "C3072"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3072"
ms.assetid: cdd5cb6b-c478-4698-adfa-c40188d34a18
caps.latest.revision: 5
caps.handback.revision: 5
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C3072
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

impossibile applicare l'operatore 'operatore' a un'istanza di una classe di riferimento  
  
 Utilizzare l'operatore '`operator`' unario per convertire un'istanza di una classe di riferimento in un tipo di handle  
  
 Un tipo CLR richiede operatori CLR anziché operatori nativi o standard.  Per ulteriori informazioni, vedere [Tracking Reference Operator](../../windows/tracking-reference-operator-cpp-component-extensions.md).  
  
## Esempio  
 Nell'esempio seguente viene generato l'errore C3072:  
  
```  
// C3072.cpp  
// compile with: /clr  
ref class R {};  
  
int main() {  
   R r1;  
   R^ r2 = &r1;   // C3072  
   R^ r3 = %r1;   // OK  
}  
```