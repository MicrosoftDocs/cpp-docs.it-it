---
title: Funzioni virtuali private | Documenti Microsoft
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
ms.openlocfilehash: 97b4d7d9f47901fa69aa50bfc6f405355cf378b8
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33162338"
---
# <a name="private-virtual-functions"></a>Funzioni virtuali private
La modalità di gestione delle funzioni virtuali private nelle classi derivate è cambiato da estensioni gestite per C++ a Visual C++.  
  
 Nelle estensioni gestite, il livello di accesso di una funzione virtuale non vincola la possibilità di essere sottoposto a override in una classe derivata. Nella nuova sintassi, una funzione virtuale non è possibile eseguire l'override di una funzione di classe base virtuale che non può accedere. Ad esempio:  
  
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
  
 Non è presente alcun mapping reale di questo tipo di progettazione nella nuova sintassi. È semplicemente necessario rendere i membri della classe base accessibile -, ovvero non privata. I metodi ereditati non è necessario tenere lo stesso accesso. In questo esempio, la modifica meno invasiva è per il membro MyBaseClass `protected`. In questo modo l'accesso del programma generale per il metodo tramite MyBaseClass comunque consentito.  
  
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
  
 Si noti che l'assenza di esplicita `virtual` parola chiave nella classe base, nella nuova sintassi, genera un messaggio di avviso.  
  
## <a name="see-also"></a>Vedere anche  
 [Dichiarazioni di membri in una classe o interfaccia (C++/CLI)](../dotnet/member-declarations-within-a-class-or-interface-cpp-cli.md)   
 