---
title: finally
ms.date: 11/04/2016
helpviewer_keywords:
- finally keyword [C++]
ms.assetid: b55f3c8e-1af0-43e8-bcfb-99c3685d2578
ms.openlocfilehash: f7db4320cf901412e3a9e3de682d0cfbcc9f23bc
ms.sourcegitcommit: 72583d30170d6ef29ea5c6848dc00169f2c909aa
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/18/2019
ms.locfileid: "58771513"
---
# <a name="finally"></a>finally

Oltre a `try` e `catch` clausole, eccezioni Common Language Runtime supporta un `finally` clausola. La semantica è identica al `__finally` blocco (SEH) di gestione strutturata delle eccezioni. Oggetto `__finally` blocco può seguire un `try` o `catch` blocco.

## <a name="remarks"></a>Note

Lo scopo del `finally` blocco consiste nella pulizia delle risorse dopo che si è verificata l'eccezione a sinistra. Si noti che il `finally` blocco viene sempre eseguito, anche se è stata generata alcuna eccezione. Il `catch` blocco viene eseguito solo se viene generata un'eccezione gestita all'interno associato `try` blocco.

`finally` è una parola chiave sensibile al contesto. visualizzare [parole chiave sensibili al contesto](../extensions/context-sensitive-keywords-cpp-component-extensions.md) per altre informazioni.

## <a name="example"></a>Esempio

L'esempio seguente illustra un semplice `finally` blocco:

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

[Gestione delle eccezioni](../extensions/exception-handling-cpp-component-extensions.md)
