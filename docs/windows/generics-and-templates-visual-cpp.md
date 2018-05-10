---
title: Generics e modelli (Visual C++) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- generics [C++], vs. templates
- templates, C++
ms.assetid: 63adec79-b1dc-4a1a-a21d-b8a72a8fce31
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 5d6dc0a64c5d225f6e80a21dc008e5a2486ad3d9
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
---
# <a name="generics-and-templates-visual-c"></a>Generics e modelli (Visual C++)
Generics e modelli sono entrambi funzionalità del linguaggio che forniscono supporto per tipi con parametri. Tuttavia, sono diversi e vengono utilizzati per scopi diversi. In questo argomento viene fornita una panoramica delle numerose differenze.  
  
 Per ulteriori informazioni, vedere [Windows Runtime e modelli gestiti](../windows/windows-runtime-and-managed-templates-cpp-component-extensions.md).  
  
## <a name="comparing-templates-and-generics"></a>Confronto tra Generics e modelli  
 Principali differenze tra generics e modelli C++:  
  
-   I generics sono generici, fino a quando i tipi vengono sostituiti con essi in fase di esecuzione. I modelli sono specializzati in fase di compilazione in modo non sono ancora parametri di tipi in fase di esecuzione  
  
-   In particolare, common language runtime supporta i generics in MSIL. Poiché il runtime SA sui generics, è possono sostituire tipi specifici per i tipi generici quando si fa riferimento a un assembly contenente un tipo generico. Modelli, al contrario, risolvere in tipi comuni in fase di compilazione e i tipi non possono essere specializzati in altri assembly.  
  
-   Generics specializzato in due assembly diversi con lo stesso tipo, gli argomenti sono dello stesso tipo. I modelli specializzati in due assembly diversi con lo stesso tipo, gli argomenti vengono considerati dal runtime di tipi diversi.  
  
-   I generics vengono generati come una singola parte di codice eseguibile che viene utilizzato per tutti gli argomenti di tipo riferimento (ciò non è possibile per i tipi di valore, che dispongono di un'implementazione univoca per ogni tipo di valore). Il compilatore JIT conosce i generics ed è in grado di ottimizzare il codice per i tipi di valore o riferimento che vengono utilizzati come argomenti di tipo. Modelli di generano il codice di runtime separato per ogni specializzazione.  
  
-   Generics non consentono i parametri di modello non di tipo, ad esempio `template <int i> C {}`. I modelli consentono a essi.  
  
-   Generics non consentono la specializzazione esplicita (vale a dire un'implementazione personalizzata di un modello per un tipo specifico). Eseguire modelli.  
  
-   Generics non consentono la specializzazione parziale (un'implementazione personalizzata per un subset degli argomenti di tipo). Eseguire modelli.  
  
-   Generics non consentono il parametro di tipo essere utilizzata come classe di base per il tipo generico. Eseguire modelli.  
  
-   I modelli supportano parametri di modello template (ad esempio `template<template<class T> class X> class MyClass`), ma non i generics.  
  
## <a name="combining-templates-and-generics"></a>Generics e modelli di combinazione  
  
-   La differenza di base in generics ha implicazioni per la creazione di applicazioni che combinano i generics e modelli. Si supponga, ad esempio, che si dispone di una classe modello che si desidera creare wrapper generici per esporre il modello per altri linguaggi come generico. Non è possibile avere il generico accettano un parametro di tipo che viene quindi passato per il modello, poiché il modello deve disporre di tale parametro di tipo in fase di compilazione, ma il tipo generico non risolve il parametro di tipo fino all'esecuzione. Nidificazione di un modello all'interno di un oggetto generico non funzionerà neanche perché non è possibile espandere i modelli in fase di compilazione per i tipi generici arbitrari che può essere creata un'istanza in fase di esecuzione.  
  
## <a name="example"></a>Esempio  
  
### <a name="description"></a>Descrizione  
 Nell'esempio seguente viene illustrato un semplice esempio di utilizzo congiunto di modelli e generics. In questo esempio, la classe modello passa il parametro tramite al tipo generico. Non è possibile il contrario.  
  
 Questo linguaggio potrebbe essere utilizzato quando si desidera compilare su un'API esistente generica con il codice di modello che è locale a un assembly di Visual C++, o quando è necessario aggiungere un ulteriore livello di parametrizzazione per un tipo generico, per poter sfruttare alcune funzionalità dei modelli non supporte s delle generics.  
  
### <a name="code"></a>Codice  
  
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
  
### <a name="output"></a>Output  
  
```  
F  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Generics](../windows/generics-cpp-component-extensions.md)