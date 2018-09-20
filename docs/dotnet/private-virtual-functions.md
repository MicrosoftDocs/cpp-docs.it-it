---
title: Funzioni virtuali private | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-cli
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- virtual functions, private
- derived classes, virtual functions
- access modifiers [C++], for class members
- member access [C++], virtual members
ms.assetid: 04448086-bf72-44be-9c1f-dfda1744949e
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: 0058d023268fa4d9ca5abe802ff45856e9855dc7
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46418073"
---
# <a name="private-virtual-functions"></a>Funzioni virtuali private

La modalità di gestione delle funzioni virtuali private in classi derivate ha modificato dalle estensioni gestite per C++ in Visual C++.

Nelle estensioni gestite, il livello di accesso di una funzione virtuale non vincola la possibilità di eseguire l'override in una classe derivata. Nella nuova sintassi, una funzione virtuale non è possibile eseguire l'override di una funzione virtuale di classe di base che non riesce ad accedere. Ad esempio:

```
__gc class MyBaseClass {
   // inaccessible to a derived class
   virtual void g();
};

__gc class MyDerivedClass : public MyBaseClass {
public:
   // okay in Managed Extensions; g() overrides MyBaseClass::g()
   // error in new syntax; cannot override: MyBaseClass::g() is inaccessible
   void g();
};
```

Non esiste un mapping reale di questo tipo di progettazione nella nuova sintassi. È sufficiente, è necessario rendere i membri della classe base accessibile -, ovvero non privata. I metodi ereditati non sono necessario tenere lo stesso accesso. In questo esempio, la modifica meno invasiva consiste nell'impostare il membro MyBaseClass `protected`. In questo modo l'accesso del programma generale per il metodo mediante MyBaseClass non è ancora consentita.

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

Si noti che l'assenza di esplicita `virtual` parola chiave nella classe di base, con la nuova sintassi, genera un messaggio di avviso.

## <a name="see-also"></a>Vedere anche

[Dichiarazioni di membri in una classe o interfaccia (C++/CLI)](../dotnet/member-declarations-within-a-class-or-interface-cpp-cli.md)
