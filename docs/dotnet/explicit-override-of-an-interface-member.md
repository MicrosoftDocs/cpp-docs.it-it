---
title: "Override esplicito di un membro di interfaccia | Microsoft Docs"
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
  - "override esplicito di funzioni virtuali"
  - "funzioni [C++], override"
  - "membri di interfaccia, override esplicito"
  - "override di funzioni"
  - "funzioni virtual, override esplicito"
ms.assetid: 46f1f536-bf43-4311-9a17-ff2282e528a9
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 9
---
# Override esplicito di un membro di interfaccia
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La sintassi per la dichiarazione di un override esplicito di un membro di interfaccia all'interno di una classe è stata modificata dalle estensioni gestite per C\+\+ in [!INCLUDE[cpp_current_long](../dotnet/includes/cpp_current_long_md.md)].  
  
 Spesso si desidera fornire due istanze di un membro di interfaccia all'interno di una classe che implementa l'interfaccia: un'istanza viene utilizzata in caso di modifica degli oggetti della classe tramite un handle di interfaccia e un'istanza viene utilizzata in caso di utilizzo degli oggetti della classe tramite l'interfaccia della classe.  Di seguito è riportato un esempio.  
  
```  
public __gc class R : public ICloneable {  
   // to be used through ICloneable  
   Object* ICloneable::Clone();  
  
   // to be used through an R  
   R* Clone();  
};  
```  
  
 Nelle estensioni gestite, a tale scopo viene fornita una dichiarazione esplicita del metodo di interfaccia, con il nome del metodo qualificato con il nome dell'interfaccia.  L'istanza specifica della classe non è qualificata.  Nell'esempio, in caso di chiamata esplicita tramite un'istanza di `R` non è pertanto necessario eseguire il downcast del valore restituito di `Clone`.  
  
 Nella nuova sintassi, è stato introdotto un meccanismo di override generale in sostituzione della sintassi delle estensioni gestite.  È possibile riscrivere l'esempio come segue:  
  
```  
public ref class R : public ICloneable {  
public:  
   // to be used through ICloneable  
   virtual Object^ InterfaceClone() = ICloneable::Clone;  
  
   // to be used through an R  
   virtual R^ Clone();  
};  
```  
  
 Con questa revisione è necessario che al membro di interfaccia sottoposto a override esplicito venga assegnato un nome univoco all'interno della classe.  In questo caso, è stato specificato il nome `InterfaceClone`.  Il comportamento rimane invariato: una chiamata tramite l'interfaccia `ICloneable` richiama il membro `InterfaceClone,` rinominato, mentre una chiamata tramite un oggetto di tipo `R` richiama la seconda istanza di `Clone`.  
  
## Vedere anche  
 [Dichiarazioni di membri in una classe o interfaccia \(C\+\+\/CLI\)](../dotnet/member-declarations-within-a-class-or-interface-cpp-cli.md)   
 [Explicit Overrides](../windows/explicit-overrides-cpp-component-extensions.md)