---
title: "Utilizzo di una funzione virtuale sealed | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "__sealed (parola chiave)"
  - "classi derivate, funzioni virtual"
  - "sealed (parola chiave) [C++]"
  - "funzioni virtual, sealed"
ms.assetid: 0e9fae03-6425-4512-9a24-8ccb6dc8a0d4
caps.latest.revision: 8
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Utilizzo di una funzione virtuale sealed
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La sintassi per l'utilizzo di una funzione virtuale sealed è stata modificata in [!INCLUDE[cpp_current_long](../dotnet/includes/cpp_current_long_md.md)] rispetto alle estensioni gestite di C\+\+.  
  
 La parola chiave `__sealed` viene utilizzata nelle estensioni gestite per modificare un tipo di riferimento, non consentendo la successiva derivazione \(vedere [Dichiarazione di un tipo classe gestito](../dotnet/declaration-of-a-managed-class-type.md)\), oppure per modificare una funzione virtuale, non consentendo il successivo override del metodo in una classe derivata.  Di seguito è riportato un esempio.  
  
```  
__gc class base { public: virtual void f(); };  
__gc class derived : public base {  
public:  
   __sealed void f();  
};  
```  
  
 Nell'esempio, `derived::f()` esegue l'override dell'istanza di `base::f()` in base alla corrispondenza esatta del prototipo di funzione.  La parola chiave `__sealed` indica che una successiva classe ereditata dalla classe derivata non può fornire un override di `derived::f()`.  
  
 Nella nuova sintassi, la parola chiave `sealed` viene inserita dopo la firma, anziché essere consentita in qualsiasi posizione prima del prototipo di funzione effettivo come in precedenza.  L'utilizzo di `sealed` richiede inoltre l'utilizzo esplicito anche della parola chiave `virtual`.  Di seguito è riportata la conversione corretta del precedente esempio di `derived`:  
  
```  
ref class derived: public base {  
public:  
   virtual void f() override sealed;  
};  
```  
  
 L'assenza della parola chiave `virtual` in questa istanza determina un errore.  Nella nuova sintassi, la parola chiave contestuale `abstract` può essere utilizzata al posto di `=0` per indicare una funzione virtuale pure.  Ciò non è supportato nelle estensioni gestite.  Di seguito è riportato un esempio.  
  
```  
__gc class base { public: virtual void f()=0; };  
```  
  
 può essere riscritto come segue:  
  
```  
ref class base { public: virtual void f() abstract; };  
```  
  
## Vedere anche  
 [Dichiarazioni di membri in una classe o interfaccia \(C\+\+\/CLI\)](../dotnet/member-declarations-within-a-class-or-interface-cpp-cli.md)   
 [sealed](../windows/sealed-cpp-component-extensions.md)