---
title: "Avviso del compilatore (livello 3) C4534 | Microsoft Docs"
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
  - "c4534"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4534"
ms.assetid: ec2adf3b-d7a1-4005-bb0c-5d219df78dc8
caps.latest.revision: 8
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso del compilatore (livello 3) C4534
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'costruttore' non sarà un costruttore predefinito per classe 'classe' a causa dell'argomento predefinito  
  
 È possibile che una classe non gestita disponga di un costruttore con parametri i cui valori sono predefiniti e che questo venga utilizzato come costruttore predefinito.  Questa situazione non si verifica se la classe è contrassegnata con la parola chiave `value`.  
  
 Per ulteriori informazioni, vedere [Classes and Structs](../../windows/classes-and-structs-cpp-component-extensions.md).  
  
 Il seguente codice di esempio genera l'errore C4534:  
  
```  
// C4534.cpp  
// compile with: /W3 /clr /WX  
value class MyClass {  
public:  
   int ii;  
   MyClass(int i = 9) {   // C4534, will not be the default constructor  
      i++;  
   }  
};  
  
int main() {  
   MyClass ^ xx = gcnew MyClass;  
   xx->ii = 0;  
}  
```