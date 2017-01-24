---
title: "__try_cast | Microsoft Docs"
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
  - "__try_cast"
  - "__try_cast_cpp"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "__try_cast (parola chiave)"
  - "errori di cast"
  - "eccezioni, cast non riusciti"
  - "generazione di eccezioni, cast non riusciti"
ms.assetid: e9e5da3a-f5b9-4915-b30a-a432e8574d03
caps.latest.revision: 10
caps.handback.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# __try_cast
**Nota** Questo argomento si applica solo alla versione 1 delle estensioni gestite per C\+\+. Questa sintassi deve essere utilizzata solo per gestire il codice della versione 1. Vedere [safe\_cast](../windows/safe-cast-cpp-component-extensions.md) per informazioni sull'utilizzo della funzionalità equivalente nella nuova sintassi.  
  
 Esegue il cast specificato o genera un'eccezione se il cast non riesce.  
  
## Sintassi  
  
```  
  
__try_cast <  
 type-id  
 >  
(  
expression   
)  
  
```  
  
## Note  
 La parola chiave `__try_cast` \(simile nel comportamento a [dynamic\_cast](../cpp/dynamic-cast-operator.md)\) fornisce supporto per generare automaticamente un'eccezione \(di tipo **System::InvalidCastException**\) ogni volta che l'operazione di cast specificata ha esito negativo.  
  
 La parola chiave `__try_cast` può essere utilizzata durante la fase di test dell'applicazione, avvisando automaticamente riguardo a errori di cast possibili.  
  
 Durante l'importazione di estensioni gestite per C\+\+, sostituire `__try_cast` chiama con [safe\_cast](../windows/safe-cast-cpp-component-extensions.md).  
  
 `__try_cast` non funziona in cast di puntatore a tipi di valore \([\_\_value](../misc/value.md)\), poiché non è possibile controllare i tipi in fase di esecuzione.  
  
## Esempio  
 Nell'esempio seguente, viene effettuato un tentativo di eseguire il cast di un puntatore \(del tipo `Derived`\) a un altro puntatore \(di tipo `MoreDerived`\). Se il cast ha esito negativo, viene intercettato e segnalato dal blocco catch:  
  
```  
// keyword__try_cast.cpp  
// compile with: /clr:oldSyntax  
#using <mscorlib.dll>  
using namespace System;  
  
__gc struct Base {};   
__gc struct Derived : Base {};  
__gc struct MoreDerived : Derived {};  
  
int main() {  
   Base*bp = new Derived;  
   try {  
       MoreDerived* mdp = __try_cast<MoreDerived*>(bp);  
   }  
   catch(System::InvalidCastException*) {  
       Console::WriteLine("Could not cast 'bp' to MoreDerived*");  
   }  
}  
```  
  
## Output  
  
```  
Could not cast 'bp' to MoreDerived*  
```