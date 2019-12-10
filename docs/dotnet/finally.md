---
title: finally
ms.date: 11/04/2016
helpviewer_keywords:
- finally keyword [C++]
ms.assetid: b55f3c8e-1af0-43e8-bcfb-99c3685d2578
ms.openlocfilehash: 2574ba5a10bbf5eddc68d6e0265d5dfc99c6d8fc
ms.sourcegitcommit: 573b36b52b0de7be5cae309d45b68ac7ecf9a6d8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/10/2019
ms.locfileid: "74988339"
---
# <a name="finally"></a>finally

Oltre alle clausole `try` e `catch`, la gestione delle eccezioni CLR supporta una clausola `finally`. La semantica è identica a quella del blocco `__finally` nella gestione delle eccezioni strutturata (SEH). Un blocco di `__finally` può seguire un blocco `try` o `catch`.

## <a name="remarks"></a>Note

Lo scopo del blocco `finally` consiste nel pulire le risorse rimaste dopo l'eccezione. Si noti che il blocco `finally` viene sempre eseguito, anche se non è stata generata alcuna eccezione. Il blocco `catch` viene eseguito solo se viene generata un'eccezione gestita all'interno del blocco di `try` associato.

`finally` è una parola chiave sensibile al contesto; Per ulteriori informazioni, vedere [parole chiave sensibili al contesto](../extensions/context-sensitive-keywords-cpp-component-extensions.md) .

## <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato un blocco di `finally` semplice:

```cpp
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
