---
title: "Errore del compilatore C3797 | Microsoft Docs"
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
  - "C3797"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3797"
ms.assetid: ab27ff34-8c1d-4297-b004-9e39bd3a4f25
caps.latest.revision: 4
caps.handback.revision: 4
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C3797
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'override': la dichiarazione di evento non può avere un identificatore di override \(da posizionare invece con i metodi Add\/Remove\/Raise evento\)  
  
 Non è possibile eseguire l'override di un evento semplice \(un evento senza metodi di accesso definiti in modo esplicito\) con un altro evento semplice.  L'evento di overriding deve definire il proprio comportamento con le funzioni di accesso.  
  
 Per ulteriori informazioni, vedere [event](../../windows/event-cpp-component-extensions.md).  
  
## Esempio  
 Nell'esempio seguente viene generato l'errore C3797:  
  
```  
// C3797.cpp  
// compile with: /clr /c  
delegate void MyDel();  
  
ref class Class1 {  
public:  
   virtual event MyDel ^ E;  
};  
  
ref class Class2 : public Class1 {  
public:  
   virtual event MyDel ^ E override;   // C3797  
};  
  
// OK  
ref class Class3 : public Class1 {  
public:  
   virtual event MyDel ^ E {  
      void add(MyDel ^ d) override {}  
      void remove(MyDel ^ d) override {}  
   }  
};  
```