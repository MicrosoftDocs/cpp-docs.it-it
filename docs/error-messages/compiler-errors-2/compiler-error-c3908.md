---
title: "Errore del compilatore C3908 | Microsoft Docs"
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
  - "C3908"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3908"
ms.assetid: 3c322482-c79e-4197-a578-2ad9bc379d1a
caps.latest.revision: 8
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C3908
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

livello di accesso meno restrittivo di quello di 'costrutto'  
  
 Il livello di accesso dei metodi della funzione di accesso a una proprietà \(get o set\) non può essere meno restrittivo dell'accesso specificato in tale proprietà.  Ciò è valido anche per i metodi della funzione di accesso agli eventi.  
  
 Per ulteriori informazioni, vedere [event](../../windows/event-cpp-component-extensions.md) e [property](../../windows/property-cpp-component-extensions.md).  
  
 Il seguente codice di esempio genera l'errore C3908:  
  
```  
// C3908.cpp  
// compile with: /clr  
ref class X {  
protected:  
   property int i {  
   public:   // C3908 property i is protected   
      int get();  
   private:  
      void set(int);   // OK more restrictive  
   };  
};  
```