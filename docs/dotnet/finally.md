---
title: Infine | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-cli
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- finally keyword [C++]
ms.assetid: b55f3c8e-1af0-43e8-bcfb-99c3685d2578
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: 70057cad8ff5bca0606f06dd43eaa485834d2c70
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="finally"></a>finally
Oltre a `try` e `catch` clausole, eccezioni CLR supporta un `finally` clausola. La semantica è identica al `__finally` bloccare (SEH) di gestione delle eccezioni strutturata. Oggetto `__finally` blocco può seguire un `try` o `catch` blocco.  
  
## <a name="remarks"></a>Note  
 Lo scopo del `finally` blocco è per pulire le risorse lasciate dopo che si è verificata l'eccezione. Si noti che il `finally` blocco viene sempre eseguito, anche se è stata generata alcuna eccezione. Il `catch` blocco viene eseguito solo se viene generata un'eccezione gestita all'interno associato `try` blocco.  
  
 `finally` è una parola chiave sensibile al contesto. vedere [le parole chiave sensibili al contesto](../windows/context-sensitive-keywords-cpp-component-extensions.md) per altre informazioni.  
  
## <a name="example"></a>Esempio  
 Nell'esempio seguente viene illustrato un semplice `finally` blocco:  
  
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
  
```Output  
in catch  
MyException  
in finally  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Gestione delle eccezioni](../windows/exception-handling-cpp-component-extensions.md)