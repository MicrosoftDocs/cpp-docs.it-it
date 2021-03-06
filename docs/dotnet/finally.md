---
description: 'Ulteriori informazioni su: infine'
title: finally
ms.date: 11/04/2016
helpviewer_keywords:
- finally keyword [C++]
ms.assetid: b55f3c8e-1af0-43e8-bcfb-99c3685d2578
ms.openlocfilehash: 039c3fab7854d045c9b4917d2a0bc9f01fdc61a3
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97252155"
---
# <a name="finally"></a>finally

Oltre alle **`try`** **`catch`** clausole and, la gestione delle eccezioni CLR supporta una **`finally`** clausola. La semantica è identica a quella del **`__finally`** blocco nella gestione delle eccezioni strutturata (SEH). Un **`__finally`** blocco può seguire un **`try`** **`catch`** blocco o.

## <a name="remarks"></a>Commenti

Lo scopo del **`finally`** blocco consiste nel pulire tutte le risorse rimaste dopo che si è verificata l'eccezione. Si noti che il **`finally`** blocco viene sempre eseguito, anche se non è stata generata alcuna eccezione. Il **`catch`** blocco viene eseguito solo se viene generata un'eccezione gestita all'interno del **`try`** blocco associato.

`finally` è una parola chiave sensibile al contesto; Per ulteriori informazioni, vedere [parole chiave sensibili al contesto](../extensions/context-sensitive-keywords-cpp-component-extensions.md) .

## <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato un **`finally`** blocco semplice:

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

## <a name="see-also"></a>Vedi anche

[Gestione delle eccezioni](../extensions/exception-handling-cpp-component-extensions.md)
