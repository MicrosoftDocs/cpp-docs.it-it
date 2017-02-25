---
title: "Errore del compilatore C3622 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C3622"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3622"
ms.assetid: 02836f78-0cf2-4947-b87e-710187d81014
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 11
---
# Errore del compilatore C3622
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'classe': impossibile creare un'istanza di una classe dichiarata come 'parola chiave'  
  
 Si è tentato di creare un'istanza di una classe contrassegnata come [abstract](../../windows/abstract-cpp-component-extensions.md) \(o [\_\_abstract](../../misc/abstract.md)\).  Non è possibile creare un'istanza di questo tipo di classe, che può invece essere utilizzata come classe base.  
  
## Esempio  
 Nell'esempio seguente viene generato l'errore C3622:  
  
```  
// C3622.cpp  
// compile with: /clr  
ref class a abstract {};  
  
int main() {  
   a aa;   // C3622  
}  
```  
  
## Esempio  
 Nell'esempio seguente viene generato l'errore C3622:  
  
```  
// C3622_b.cpp  
// compile with: /clr:oldSyntax  
__abstract class a {  
};  
int main() {  
   a aa;   // C3622  
}  
```