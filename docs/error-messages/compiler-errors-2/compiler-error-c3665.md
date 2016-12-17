---
title: "Errore del compilatore C3665 | Microsoft Docs"
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
  - "C3665"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3665"
ms.assetid: 893bb47e-8de1-43aa-af7d-fa47ad149ee9
caps.latest.revision: 12
caps.handback.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C3665
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'distruttore': indicatore di override 'parola chiave' non consentito con un distruttore\/finalizzatore  
  
 È stata utilizzata una parola chiave non consentita con un distruttore o un finalizzatore.  
  
 In un distruttore o in un finalizzatore, ad esempio, non può essere richiesto un nuovo slot.  Per ulteriori informazioni, vedere [Override esplicito](../../windows/explicit-overrides-cpp-component-extensions.md) e [Distruttori e finalizzatori](../../dotnet/how-to-define-and-consume-classes-and-structs-cpp-cli.md#BKMK_Destructors_and_finalizers).  
  
 Il seguente codice di esempio genera l'errore C3665:  
  
```  
// C3665.cpp  
// compile with: /clr  
public ref struct R {  
   virtual ~R() { }  
   virtual void a() { }  
};  
  
public ref struct S : R {  
   virtual ~S() new {}   // C3665  
   virtual void a() new {}   // OK  
};  
```