---
title: "Errore del compilatore C3153 | Microsoft Docs"
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
  - "C3153"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3153"
ms.assetid: d775d97e-2480-484f-81f1-88406b10f947
caps.latest.revision: 9
caps.handback.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C3153
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'interfaccia': impossibile creare un'istanza di un'interfaccia  
  
 Non è possibile creare un'istanza di un'interfaccia.  Per poter utilizzare i membri di un'interfaccia, è necessario derivare una classe dall'interfaccia e implementare i membri di quest'ultima.  
  
 Il seguente codice di esempio genera l'errore C3153:  
  
```  
// C3153.cpp  
// compile with: /clr  
interface class A {  
};  
  
int main() {  
   A^ a = gcnew A;   // C3153  
}  
```  
  
 Il seguente codice di esempio genera l'errore C3153:  
  
```  
// C3153b.cpp  
// compile with: /clr:oldSyntax  
#using <mscorlib.dll>  
__interface A {  
};  
  
int main() {  
   A *a = new A;   // C3153  
}  
```