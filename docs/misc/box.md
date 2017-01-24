---
title: "__box | Microsoft Docs"
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
  - "__box"
  - "__box_cpp"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "__box (parola chiave)"
  - "conversione boxing"
  - "conversione unboxing"
  - "conversione boxing, parola chiave box"
ms.assetid: 935b4a4d-fc45-484c-87c6-d95cfc67cc9d
caps.latest.revision: 10
caps.handback.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# __box
> [!NOTE]
>  Questo argomento si applica solo alla versione 1 delle estensioni gestite per C\+\+. Questa sintassi deve essere utilizzata solo per gestire il codice della versione 1. Vedere [Boxing](../windows/boxing-cpp-component-extensions.md) per informazioni sull'utilizzo della funzionalità equivalente nella nuova sintassi.  
  
 Viene creata una copia gestita di un oggetto di classe \_\_value.  
  
## Sintassi  
  
```  
  
__box(  
value-class identifier  
)  
  
```  
  
## Note  
 La parola chiave `__box` viene utilizzata per creare un oggetto gestito \(derivato da **System::ValueType**\) da un oggetto di classe \_\_value esistente. Quando la parola chiave `__box` viene applicata a una classe \_\_value:  
  
-   Un oggetto gestito viene allocato nell'heap di Common Language Runtime.  
  
-   Il valore corrente dell'oggetto di classe \_\_value viene copiato bit per bit nell'oggetto gestito.  
  
-   Viene restituito l'indirizzo del nuovo oggetto gestito.  
  
 Questo processo è noto come conversione boxing. Ciò consente di utilizzare qualsiasi oggetto di classe \_\_value nelle routine generiche adatte a tutti gli oggetti gestiti, perché l'oggetto gestito eredita indirettamente da **System::Object**, dato che **System::ValueType** eredita da **System::Object**.  
  
> [!NOTE]
>  L'oggetto boxed appena creato è una copia dell'oggetto di classe \_\_value. Di conseguenza, le modifiche al valore dell'oggetto boxed non influiscono sul contenuto dell'oggetto di classe \_\_value.  
  
## Esempio  
 Nell'esempio seguente vengono eseguite le conversioni boxing e unboxing:  
  
```  
// keyword__box.cpp  
// compile with: /clr:oldSyntax  
#using < mscorlib.dll >  
using namespace System;  
  
int main() {  
  Int32 i = 1;  
  System::Object* obj = __box(i);  
  Int32 j = *dynamic_cast<__box Int32*>(obj);  
}  
```  
  
 Nell'esempio seguente, un tipo di valore non gestito \(`V`\) viene sottoposto a boxing e passato come parametro gestito alla funzione `Positive`.  
  
```  
// keyword__box2.cpp  
// compile with: /clr:oldSyntax  
#using <mscorlib.dll>  
using namespace System;  
  
__value struct V {  
   int i;  
};  
void Positive(Object*) {}   // expects a managed class  
  
int main() {  
   V v={10};   // allocate and initialize  
   Console::WriteLine(v.i);  
  
   // copy to the common language runtime heap  
   __box V* pBoxedV = __box(v);  
   Positive(pBoxedV);   // treat as a managed class  
  
   pBoxedV->i = 20;   // update the boxed version  
   Console::WriteLine(pBoxedV->i);  
}  
```  
  
 **10 20**