---
title: New (nuovo slot in vtable) (estensioni del componente C++) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: language-reference
dev_langs: C++
helpviewer_keywords: new keyword [C++]
ms.assetid: 1a9a5704-f02f-46ae-ad65-f0f2b6dbabc3
caps.latest.revision: "20"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 4612df74e360c389c34e750dd315074de415447c
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="new-new-slot-in-vtable--c-component-extensions"></a>nuovo (nuovo slot in vtable) (Estensioni del componente C++)
Il `new` parola chiave indica che un membro virtuale verrà visualizzato un nuovo slot in vtable.  
  
## <a name="all-runtimes"></a>Tutti i runtime  
 Non esistono note per questa funzionalità del linguaggio che si applichino a tutti i runtime.  
  
## <a name="windows-runtime"></a>Windows Runtime  
 Non è supportato in Windows Runtime.  
  
## <a name="common-language-runtime"></a>Common Language Runtime 
 **Note**  
  
 In un **/clr** compilazione, `new` indica che un membro virtuale verrà visualizzato un nuovo slot in vtable; che la funzione non esegue l'override di un metodo della classe base.  
  
 `new`fa sì che il modificatore newslot da aggiungere a livello di integrità per la funzione.  Per ulteriori informazioni su newslot, vedere:  
  
-   [Metodo MethodInfo.GetBaseDefinition](https://msdn.microsoft.com/en-us/library/system.reflection.methodinfo.getbasedefinition.aspx)  
  
-   [Enumerazione MethodAttributes](https://msdn.microsoft.com/en-us/library/system.reflection.methodattributes.aspx)  
  
### <a name="requirements"></a>Requisiti  
 Opzione del compilatore: **/clr**  
  
### <a name="examples"></a>Esempi  
 **Esempio**  
  
 L'esempio seguente viene illustrato l'effetto di `new`.  
  
```  
// newslot.cpp  
// compile with: /clr  
ref class C {  
public:  
   virtual void f() {  
      System::Console::WriteLine("C::f() called");  
   }  
  
   virtual void g() {  
      System::Console::WriteLine("C::g() called");  
   }  
};  
  
ref class D : public C {  
public:  
   virtual void f() new {  
      System::Console::WriteLine("D::f() called");  
   }  
  
   virtual void g() override {  
      System::Console::WriteLine("D::g() called");  
   }  
};  
  
ref class E : public D {  
public:  
   virtual void f() override {  
      System::Console::WriteLine("E::f() called");  
   }  
};  
  
int main() {  
   D^ d = gcnew D;  
   C^ c = gcnew D;  
  
   c->f();   // calls C::f  
   d->f();   // calls D::f  
  
   c->g();   // calls D::g  
   d->g();   // calls D::g  
  
   D ^ e = gcnew E;  
   e->f();   // calls E::f  
}  
```  
  
 **Output**  
  
```Output  
C::f() called  
  
D::f() called  
  
D::g() called  
  
D::g() called  
  
E::f() called  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Estensioni componenti per le piattaforme Runtime](../windows/component-extensions-for-runtime-platforms.md)   
 [Identificatori di override](../windows/override-specifiers-cpp-component-extensions.md)