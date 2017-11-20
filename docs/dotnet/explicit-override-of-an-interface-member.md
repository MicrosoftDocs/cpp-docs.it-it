---
title: Override esplicito di un membro di interfaccia | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- virtual functions, explicit overrides
- overriding functions
- interface members, explicit overrides
- functions [C++], overriding
- explicit override of virtual function
ms.assetid: 46f1f536-bf43-4311-9a17-ff2282e528a9
caps.latest.revision: "9"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: e8dad678572d0f49d3859ad37d307942b3561f71
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="explicit-override-of-an-interface-member"></a>Override esplicito di un membro di interfaccia
La sintassi per dichiarare un override esplicito di un membro di interfaccia all'interno di una classe è stata modificata dalle estensioni gestite per C++ a Visual C++.  
  
 È spesso necessario fornire due istanze di un membro di interfaccia all'interno di una classe che implementa l'interfaccia, che viene utilizzato quando vengono modificati gli oggetti della classe tramite un handle di interfaccia e uno che viene utilizzato quando vengono utilizzati gli oggetti della classe tramite l'interfaccia della classe. Ad esempio:  
  
```  
public __gc class R : public ICloneable {  
   // to be used through ICloneable  
   Object* ICloneable::Clone();  
  
   // to be used through an R  
   R* Clone();  
};  
```  
  
 Nelle estensioni gestite prepariamo queste fornendo una dichiarazione esplicita del metodo di interfaccia con il nome del metodo qualificato con il nome dell'interfaccia. L'istanza di classe specifico è non qualificato. Non è necessario eseguire il downcast il valore restituito di `Clone`, in questo esempio, quando la chiamata esplicita tramite un'istanza di `R`.  
  
 Nella nuova sintassi, è stato introdotto un meccanismo di override generale che sostituisce la sintassi di estensioni gestite. Questo esempio potrebbe essere riscritto come segue:  
  
```  
public ref class R : public ICloneable {  
public:  
   // to be used through ICloneable  
   virtual Object^ InterfaceClone() = ICloneable::Clone;  
  
   // to be used through an R  
   virtual R^ Clone();  
};  
```  
  
 Questa revisione richiede che il membro di interfaccia in modo esplicito da sottoporre a override sia assegnato un nome univoco all'interno della classe. In questo caso, ho fornito il nome `InterfaceClone`. Il comportamento corrisponde ancora - una chiamata tramite il `ICloneable` richiama l'interfaccia `InterfaceClone`, mentre una chiamata tramite un oggetto di tipo `R` richiama il secondo `Clone` istanza.  
  
## <a name="see-also"></a>Vedere anche  
 [Dichiarazioni di membro all'interno di una classe o interfaccia (C + c++ /CLI)](../dotnet/member-declarations-within-a-class-or-interface-cpp-cli.md)   
 [Override espliciti](../windows/explicit-overrides-cpp-component-extensions.md)