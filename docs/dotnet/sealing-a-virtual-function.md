---
title: Utilizzo di una funzione virtuale sealed | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-cli
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- sealed keyword [C++]
- derived classes, virtual functions
- virtual functions, sealing
- __sealed keyword
ms.assetid: 0e9fae03-6425-4512-9a24-8ccb6dc8a0d4
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: 69ac614d55ade10b94621da2a3eb1c43d25ebaf5
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46385183"
---
# <a name="sealing-a-virtual-function"></a>Utilizzo di una funzione virtuale sealed

La sintassi per l'utilizzo di una funzione virtuale sealed ha modificato dalle estensioni gestite per C++ in Visual C++.

Il `__sealed` parola chiave viene usata nelle estensioni gestite per modificare un tipo di riferimento, non consentendo la derivazione successivi (vedere [dichiarazione di un tipo di classe gestita](../dotnet/declaration-of-a-managed-class-type.md)), o per modificare una funzione virtuale, non consentendo la le successive si esegue l'override del metodo in una classe derivata. Ad esempio:

```
__gc class base { public: virtual void f(); };
__gc class derived : public base {
public:
   __sealed void f();
};
```

In questo esempio `derived::f()` esegue l'override di `base::f()` istanza in base alla corrispondenza esatta del prototipo di funzione. Il `__sealed` parola chiave indica che una successiva classe ereditata dalla classe derivata non può fornire un override di `derived::f()`.

Nella nuova sintassi, `sealed` viene posizionato dopo la firma, anziché essere consentita in qualsiasi posizione prima del prototipo di funzione effettivo, come in precedenza. Inoltre, l'uso di `sealed` richiede l'uso esplicito del `virtual` anche (parola chiave). Vale a dire, la corretta traduzione di `derived`precedente, è come segue:

```
ref class derived: public base {
public:
   virtual void f() override sealed;
};
```

L'assenza del `virtual` parola chiave in questa istanza genera un errore. Nella nuova sintassi, la parola chiave contestuale `abstract` può essere usato al posto di `=0` per indicare una funzione virtuale pura. Ciò non è supportato nelle estensioni gestite. Ad esempio:

```
__gc class base { public: virtual void f()=0; };
```

può essere riscritta come

```
ref class base { public: virtual void f() abstract; };
```

## <a name="see-also"></a>Vedere anche

[Dichiarazioni di membri in una classe o interfaccia (C++/CLI)](../dotnet/member-declarations-within-a-class-or-interface-cpp-cli.md)<br/>
[sealed](../windows/sealed-cpp-component-extensions.md)