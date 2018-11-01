---
title: finally
ms.date: 11/04/2016
helpviewer_keywords:
- finally keyword [C++]
ms.assetid: b55f3c8e-1af0-43e8-bcfb-99c3685d2578
ms.openlocfilehash: 5849a24d7b5d3d4f4a6d24d8cab3dd32f9d1de14
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50490766"
---
# <a name="finally"></a>finally

Oltre a `try` e `catch` clausole, eccezioni Common Language Runtime supporta un `finally` clausola. La semantica è identica al `__finally` blocco (SEH) di gestione strutturata delle eccezioni. Oggetto `__finally` blocco può seguire un `try` o `catch` blocco.

## <a name="remarks"></a>Note

Lo scopo del `finally` blocco consiste nella pulizia delle risorse dopo che si è verificata l'eccezione a sinistra. Si noti che il `finally` blocco viene sempre eseguito, anche se è stata generata alcuna eccezione. Il `catch` blocco viene eseguito solo se viene generata un'eccezione gestita all'interno associato `try` blocco.

`finally` è una parola chiave sensibile al contesto. visualizzare [parole chiave sensibili al contesto](../windows/context-sensitive-keywords-cpp-component-extensions.md) per altre informazioni.

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

[Gestione delle eccezioni](../windows/exception-handling-cpp-component-extensions.md)