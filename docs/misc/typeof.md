---
title: "__typeof | Microsoft Docs"
ms.custom: ""
ms.date: "11/16/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "__typeof_cpp"
  - "__typeof"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "__typeof (parola chiave)"
ms.assetid: d71b9603-35d0-4c62-b5b4-90ffc2305a55
caps.latest.revision: 8
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# __typeof
**Nota** Questo argomento si applica solo alla versione 1 delle estensioni gestite per C\+\+. Questa sintassi deve essere utilizzata solo per gestire il codice della versione 1. Vedere [typeid](../windows/typeid-cpp-component-extensions.md) per informazioni sull'utilizzo della funzionalità equivalente nella nuova sintassi.  
  
 Restituisce **System::Type** di un tipo specificato.  
  
```  
  
__typeof(  
typename  
)  
  
```  
  
 dove:  
  
 *typename*  
 Il nome di un tipo gestito per il quale si desidera il nome **System::Type**. Si noti che in un programma gestito, alcuni tipi nativi hanno effettuato aliasing a tipi in Common Language Runtime. Ad esempio, `int` è un alias per **System::Int32**.  
  
## Note  
 L'operatore **\_\_typeof** consente di ottenere il tipo **System::Type** di un tipo specificato.**\_\_typeof** può essere utilizzato anche per restituire un valore di **System::Type** in un blocco di attributi personalizzati. Per ulteriori informazioni sulla creazione di attributi personalizzati, vedere [Attributo](../windows/attribute.md).  
  
## Esempio  
 Nell'esempio seguente, un attributo personalizzato \(`AtClass`\) viene applicato a una classe \_\_gc \(`B`\). Il valore dell'attributo personalizzato viene quindi recuperato con **\_\_typeof**:  
  
```  
// keyword__typeof.cpp  
// compile with: /clr:oldSyntax  
#using <mscorlib.dll>  
using namespace System;  
  
public __gc class MyClass {};  
  
[attribute(All)]  
__gc class AtClass {  
public:  
   AtClass(Type*) {  
      Console::WriteLine("in Type * constructor");  
   }  
  
   AtClass(String*) {}  
   AtClass(int) {}  
};  
  
[AtClass(__typeof(MyClass))]   // Apply AtClass attribute to class B  
__gc class B {};  
  
int main() {  
   Type * mytype = __typeof(B);  
   Object * myobject __gc[] = mytype -> GetCustomAttributes(true);  
   Console::WriteLine(myobject[0]);  
}  
```  
  
## Output  
  
```  
in Type * constructor  
AtClass  
```