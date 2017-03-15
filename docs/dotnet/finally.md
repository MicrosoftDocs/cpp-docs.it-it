---
title: "finally | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "finally (parola chiave) [C++]"
ms.assetid: b55f3c8e-1af0-43e8-bcfb-99c3685d2578
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 7
---
# finally
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Oltre a `try` e le clausole di `catch`, la gestione delle eccezioni CLR supporta una clausola di `finally`.  La semantica è identica al blocco di `__finally` nella gestione delle eccezioni strutturata \(SEH\).  Un blocco di `__finally` può seguire un blocco di `catch` o di `try`.  
  
## Note  
 Lo scopo del blocco di `finally` è per pulire eventuali risorse viene mantenuto dopo l'eccezione si è verificato.  Si noti che il blocco di `finally` viene eseguita sempre, anche se non è stata generata un'eccezione.  Il blocco di `catch` viene eseguito solo se viene generata un'eccezione gestita all'interno del blocco collegato di `try`.  
  
 `finally` è una parola chiave sensibile al contesto, vedere la pagina [Parole chiave sensibili al contesto](../windows/context-sensitive-keywords-cpp-component-extensions.md) per ulteriori informazioni.  
  
## Esempio  
 Nell'esempio seguente viene illustrato un semplice blocco di `finally` :  
  
```  
// keyword__finally.cpp  
// compile with: /clr  
using namespace System;  
  
ref class MyException: public System::Exception{};  
  
void ThrowMyException() {  
   throw gcnew MyException;  
}  
  
int main() {  
   try {  
      ThrowMyException();  
   }  
   catch ( MyException^ e ) {  
      Console::WriteLine(  "in catch" );  
      Console::WriteLine( e->GetType() );  
   }  
   finally {  
      Console::WriteLine(  "in finally" );  
   }  
}  
```  
  
  **in blocco catch**  
**MyException**  
**in finally**   
## Vedere anche  
 [Exception Handling](../windows/exception-handling-cpp-component-extensions.md)