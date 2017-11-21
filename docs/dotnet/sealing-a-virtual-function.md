---
title: Utilizzo di una funzione virtuale sealed | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- sealed keyword [C++]
- derived classes, virtual functions
- virtual functions, sealing
- __sealed keyword
ms.assetid: 0e9fae03-6425-4512-9a24-8ccb6dc8a0d4
caps.latest.revision: "8"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 500e5b5e6014b7141c000a4e453341ceb5e822d0
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="sealing-a-virtual-function"></a>Utilizzo di una funzione virtuale sealed
La sintassi per l'utilizzo di una funzione virtuale sealed è stata modificata dalle estensioni gestite per C++ in Visual C++.  
  
 Il `__sealed` parola chiave viene utilizzata nelle estensioni gestite per modificare un tipo di riferimento, non consentendo la successiva derivazione (vedere [dichiarazione di un tipo di classe gestita](../dotnet/declaration-of-a-managed-class-type.md)), o per modificare una funzione virtuale, disabilitazione successivamente si esegue l'override del metodo in una classe derivata. Ad esempio:  
  
```  
__gc class base { public: virtual void f(); };  
__gc class derived : public base {  
public:  
   __sealed void f();  
};  
```  
  
 In questo esempio, `derived::f()` esegue l'override di `base::f()` istanza in base alla corrispondenza esatta del prototipo di funzione. Il `__sealed` parola chiave indica che una successiva classe ereditata dalla classe derivata non può fornire un override di `derived::f()`.  
  
 Nella nuova sintassi, `sealed` viene posizionato dopo la firma, anziché essere consentita in qualsiasi posizione prima del prototipo di funzione effettivo, come in precedenza. Inoltre, l'utilizzo di `sealed` richiede l'utilizzo esplicito di `virtual` nonché (parola chiave). Vale a dire la traduzione corretta di `derived`precedente, è come segue:  
  
```  
ref class derived: public base {  
public:  
   virtual void f() override sealed;  
};  
```  
  
 L'assenza del `virtual` (parola chiave) in questa istanza genera un errore. Nella nuova sintassi, la parola chiave contestuale `abstract` può essere utilizzato al posto di `=0` per indicare una funzione virtuale pura. Ciò non è supportato nelle estensioni gestite. Ad esempio:  
  
```  
__gc class base { public: virtual void f()=0; };  
```  
  
 può essere riscritta come  
  
```  
ref class base { public: virtual void f() abstract; };  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Dichiarazioni di membro all'interno di una classe o interfaccia (C + c++ /CLI)](../dotnet/member-declarations-within-a-class-or-interface-cpp-cli.md)   
 [sealed](../windows/sealed-cpp-component-extensions.md)