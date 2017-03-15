---
title: "Funzioni virtuali private | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "modificatori di accesso [C++], per i membri di classe"
  - "classi derivate, funzioni virtual"
  - "accesso membri [C++], membri virtual"
  - "funzioni virtual, private"
ms.assetid: 04448086-bf72-44be-9c1f-dfda1744949e
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 10
---
# Funzioni virtuali private
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La modalità di gestione delle funzioni virtuali private nelle classi derivate è stata modificata in [!INCLUDE[cpp_current_long](../dotnet/includes/cpp_current_long_md.md)] rispetto alle estensioni gestite di C\+\+.  
  
 Nelle estensioni gestite, il livello di accesso di una funzione virtuale non ne vincola la possibilità di essere sottoposta a override in una classe derivata.  Nella nuova sintassi, una funzione virtuale non può eseguire l'override di una funzione virtuale di classe base a cui non può accedere.  Di seguito è riportato un esempio.  
  
```  
__gc class MyBaseClass {  
   // inaccessible to a derived class   
   virtual void g();  
};  
  
__gc class MyDerivedClass : public MyBaseClass {  
public:  
   // okay in Managed Extensions; g() overrides MyBaseClass::g()  
   // error in new syntax; cannot override: MyBaseClass::g() is inaccessible …  
   void g();  
};  
```  
  
 Non è disponibile un mapping effettivo di questo tipo di progettazione nella nuova sintassi.  È semplicemente necessario rendere accessibili, ovvero non privati, i membri della classe base.  I metodi ereditati non devono necessariamente disporre dello stesso accesso.  Nell'esempio, la modifica meno invasiva consiste nell'impostare il membro MyBaseClass come `protected`.  In questo modo, l'accesso al metodo del programma generale tramite MyBaseClass non è comunque consentito.  
  
```  
ref class MyBaseClass {  
protected:  
   virtual void g();  
};  
  
ref class MyDerivedClass : MyBaseClass {  
public:  
   virtual void g() override;  
};  
```  
  
 L'assenza nella nuova sintassi della parola chiave `virtual` esplicita nella classe base genera un messaggio di avviso.  
  
## Vedere anche  
 [Dichiarazioni di membri in una classe o interfaccia \(C\+\+\/CLI\)](../dotnet/member-declarations-within-a-class-or-interface-cpp-cli.md)   
 [Visibilità di membri](../misc/member-visibility.md)