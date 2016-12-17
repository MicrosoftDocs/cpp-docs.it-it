---
title: "__delegate | Microsoft Docs"
ms.custom: ""
ms.date: "11/17/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "__delegate_cpp"
  - "__delegate"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "delegati, delegate (parola chiave)"
  - "puntatori a funzione, gestiti"
  - "__delegate (parola chiave)"
ms.assetid: a41d2211-b79b-4509-a4c2-cc91f3d4fc9d
caps.latest.revision: 8
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# __delegate
**Nota** Questo argomento si applica solo alla versione 1 delle estensioni gestite per C\+\+. Questa sintassi deve essere utilizzata solo per gestire il codice della versione 1. Vedere [delegato](../windows/delegate-cpp-component-extensions.md) per informazioni sull'utilizzo della funzionalità equivalente nella nuova sintassi.  
  
 Viene definito un tipo di riferimento che può essere utilizzato per incapsulare un metodo con una firma specifica.  
  
## Sintassi  
  
```  
  
__delegate   
function-declarator  
  
```  
  
## Note  
 Un delegato equivale approssimativamente a un puntatore di funzione C\+\+, eccezion fatta per le seguenti differenze:  
  
-   Un delegato può essere associato a uno o più metodi solo all'interno una classe \_\_gc.  
  
 Quando il compilatore rileva la parola chiave `__delegate`, viene generata una definizione di classe \_\_gc. Tale classe \_\_gc presenta le caratteristiche seguenti:  
  
-   Eredita da **System::MulticastDelegate**.  
  
-   Ha un costruttore che accetta due argomenti: un puntatore a una classe \_\_gc o a **NULL** \(nel caso di associazione ad un metodo statico\) e un metodo completamente qualificato del tipo specificato.  
  
-   Ha un metodo denominato `Invoke`, la cui firma corrisponde alla firma del delegato dichiarata.  
  
## Esempio  
 Nell'esempio seguente, una classe \_\_gc \(`MyCalendar`\) e un delegato \(`GetDayOfWeek`\) vengono dichiarati. Il delegato viene, quindi, associato ai diversi metodi di `MyCalendar`, richiamandoli tutti a turno:  
  
```  
// keyword__delegate.cpp  
// compile with: /clr:oldSyntax  
#using <mscorlib.dll>  
using namespace System;  
  
__delegate int GetDayOfWeek();  
__gc class MyCalendar {  
public:  
   MyCalendar() : m_nDayOfWeek(4) {}  
   int MyGetDayOfWeek() {   
      Console::WriteLine("handler"); return m_nDayOfWeek;   
   }  
   static int MyStaticGetDayOfWeek() {   
      Console::WriteLine("static handler");   
      return 6;  
   }  
private:  
   int m_nDayOfWeek;  
};  
  
int main () {  
   GetDayOfWeek * pGetDayOfWeek;  // declare delegate type  
   int nDayOfWeek;  
  
   // bind delegate to static method  
   pGetDayOfWeek = new GetDayOfWeek(0, &MyCalendar::MyStaticGetDayOfWeek);  
   nDayOfWeek = pGetDayOfWeek->Invoke();  
   Console::WriteLine(nDayOfWeek);  
  
   // bind delegate to instance method  
   MyCalendar * pcal = new MyCalendar();  
   pGetDayOfWeek = static_cast<GetDayOfWeek*>(Delegate::Combine(pGetDayOfWeek,  
      new GetDayOfWeek(pcal, &MyCalendar::MyGetDayOfWeek)));  
   nDayOfWeek = pGetDayOfWeek->Invoke();  
   Console::WriteLine(nDayOfWeek);  
  
   // delegate now bound to two methods; remove instance method  
   pGetDayOfWeek = static_cast<GetDayOfWeek*>(Delegate::Remove(pGetDayOfWeek,  
      new GetDayOfWeek(pcal, &MyCalendar::MyGetDayOfWeek)));  
}  
```  
  
## Esempio di output  
  
```  
static handler  
6  
static handler  
handler  
4  
```