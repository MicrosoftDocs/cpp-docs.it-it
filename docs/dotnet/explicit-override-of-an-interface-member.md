---
title: Override esplicito di un membro di interfaccia | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-cli
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- virtual functions, explicit overrides
- overriding functions
- interface members, explicit overrides
- functions [C++], overriding
- explicit override of virtual function
ms.assetid: 46f1f536-bf43-4311-9a17-ff2282e528a9
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: 57c26c1185eff0e88e18ef23cb8506fb1fed407a
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46409025"
---
# <a name="explicit-override-of-an-interface-member"></a>Override esplicito di un membro di interfaccia

La sintassi per dichiarare un override esplicito di un membro di interfaccia all'interno di una classe è stato modificato dalle estensioni gestite per C++ in Visual C++.

È spesso necessario fornire due istanze di un membro di interfaccia all'interno di una classe che implementa l'interfaccia: uno che viene usato quando gli oggetti della classe vengono modificati tramite un handle di interfaccia e quella usata quando vengono usati gli oggetti della classe tramite l'interfaccia della classe. Ad esempio:

```
public __gc class R : public ICloneable {
   // to be used through ICloneable
   Object* ICloneable::Clone();

   // to be used through an R
   R* Clone();
};
```

Nelle estensioni gestite è eseguire questa operazione fornendo una dichiarazione esplicita del metodo di interfaccia con il nome del metodo qualificato con il nome dell'interfaccia. L'istanza di classe specifico è non qualificato. Ciò elimina la necessità di eseguire il downcast il valore restituito di `Clone`, in questo esempio, quando viene chiamato esplicito tramite un'istanza di `R`.

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

Questa revisione richiede che il membro di interfaccia da sottoporre a override in modo esplicito sia assegnato un nome univoco all'interno della classe. In questo caso, ho fornito il nome di `InterfaceClone`. Il comportamento è ancora gli stessi, una chiamata tramite il `ICloneable` interfaccia richiama rinominato `InterfaceClone`, mentre una chiamata tramite un oggetto di tipo `R` richiama il secondo `Clone` istanza.

## <a name="see-also"></a>Vedere anche

[Dichiarazioni di membri in una classe o interfaccia (C++/CLI)](../dotnet/member-declarations-within-a-class-or-interface-cpp-cli.md)<br/>
[Override espliciti](../windows/explicit-overrides-cpp-component-extensions.md)