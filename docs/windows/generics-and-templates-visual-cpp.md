---
title: "Generics and Templates (Visual C++) | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "generics [C++], vs. templates"
  - "templates, C++"
ms.assetid: 63adec79-b1dc-4a1a-a21d-b8a72a8fce31
caps.latest.revision: 19
caps.handback.revision: 19
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Generics and Templates (Visual C++)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

I generics e i modelli sono entrambi funzionalità del linguaggio che forniscono il supporto per i tipi con parametri.  Tuttavia, sono diversi e hanno utilizzi diversi.  Questo argomento fornisce una panoramica delle varie differenze.  
  
 Per ulteriori informazioni, vedere [Windows Runtime and Managed Templates](../windows/windows-runtime-and-managed-templates-cpp-component-extensions.md) e [Cenni preliminari sui modelli](../Topic/Templates%20Overview.md).  
  
## Confrontare i modelli e i generics  
 Differenze chiave tra modelli C\+\+ e generics:  
  
-   I generics sono generici fino a che i tipi non vengono sostituiti in fase di esecuzione.  I modelli sono specializzati in fase di compilazione in modo che non sono più tipi parametrizzati in fase di esecuzione  
  
-   Il Common Language Runtime in particolare supporta i generics in MSIL.  Poiché il runtime conosce i generics, i tipi specifici possono essere sostituiti dai tipi generici quando si fa riferimento a un assembly che contiene un tipo generico.  I modelli, invece, risolvono in tipi comuni in fase di compilazione e i tipi risultanti potrebbero non essere specializzati in altri assembly.  
  
-   I generics specializzati in due assembly diversi con gli stessi argomenti di tipo sono lo stesso tipo.  I modelli specializzati in due assembly diversi con gli stessi argomenti di tipo sono considerati dal runtime come due tipi diversi.  
  
-   I generics vengono generati come singola porzione di codice eseguibile utilizzato per tutti gli argomenti di tipo di riferimento \(ciò non accade per i tipi di valore, i quali hanno un'implementazione univoca per tipo di valore\).  Il compilatore JIT è al corrente dei generics e può ottimizzare il codice per i tipi di riferimento o di valore utilizzati come argomenti di tipo.  I modelli generano codice a runtime distinto per ogni specializzazione.  
  
-   I generics non consentono di utilizzare parametri di modello non di tipo, ad esempio `template <int i> C {}`.  I modelli lo consentano.  
  
-   I generics non permettono la specializzazione esplicita, \(ossia un'implementazione personalizzata di un modello per un tipo specifico\).  I modelli si.  
  
-   I generics non permettono la specializzazione parziale, \(ossia un'implementazione personalizzata per un sottoinsieme degli argomenti del tipo\).  I modelli si.  
  
-   I generics non consentono l'utilizzo del parametro di tipo come classe base per il tipo generico.  I modelli si.  
  
-   I modelli supportano parametri modello\-modello \(ad esempio  `template<template<class T> class X> class MyClass`\), ma i generics no.  
  
## Combinare i modelli e i generics  
  
-   La differenza di base in generics ha implicazioni per compilare applicazioni che combinano i modelli e i generics.  Si supponga, ad esempio, di avere una classe modello per cui si desidera creare un wrapper generico per esporre quel modello ad altri linguaggi come generico.  Non è possibile che generic prenda un parametro di tipo che quindi passa al modello, poiché il modello deve avere il parametro di tipo in fase di compilazione, ma il generico non risolverà il parametro di tipo fino alla fase di esecuzione.  L'annidamento di un modello in un generic non funzionerà in quanto non è possibile espandere i modelli in fase di compilazione per i tipi generici arbitrari che potrebbero essere istanziati in fase di esecuzione.  
  
## Esempio  
  
### Descrizione  
 L'esempio seguente mostra un esempio semplice dell'uso dei modelli e dei generics assieme.  In questo esempio, la classe modello passa il suo parametro tramite il tipo generico.  L'inverso non è possibile.  
  
 Questo linguaggio potrebbe essere utilizzato quando si desidera compilare su un'api generico esistente con il codice del modello che è locale a un assembly di Visual C\+\+, o se è necessario aggiungere un ulteriore livello di parametrizzazione a un tipo generico per usufruire di determinate funzionalità dei modelli che non sono supportate dai generics.  
  
### Codice  
  
```  
// templates_and_generics.cpp  
// compile with: /clr  
using namespace System;  
  
generic <class ItemType>  
ref class MyGeneric {  
   ItemType m_item;  
  
public:  
   MyGeneric(ItemType item) : m_item(item) {}  
   void F() {   
      Console::WriteLine("F");   
   }  
};  
  
template <class T>  
public ref class MyRef {  
MyGeneric<T>^ ig;  
  
public:  
   MyRef(T t) {  
      ig = gcnew MyGeneric<T>(t);  
      ig->F();  
    }      
};  
  
int main() {  
   // instantiate the template  
   MyRef<int>^ mref = gcnew MyRef<int>(11);  
}  
```  
  
### Output  
  
```  
F  
```  
  
## Vedere anche  
 [Generics](../windows/generics-cpp-component-extensions.md)