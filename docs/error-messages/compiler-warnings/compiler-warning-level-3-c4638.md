---
description: 'Altre informazioni su: avviso del compilatore (livello 3) C4638'
title: Avviso del compilatore (livello 3) C4638
ms.date: 08/27/2018
f1_keywords:
- C4638
helpviewer_keywords:
- C4638
ms.assetid: 2c07923a-e103-4e40-bd11-fdfed428a5ec
ms.openlocfilehash: fc771004ebbfeef436a456523e2e2fc87382a291
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97338570"
---
# <a name="compiler-warning-level-3-c4638"></a>Avviso del compilatore (livello 3) C4638

> Destinazione commento documento XML: riferimento al simbolo sconosciuto '*Symbol*'

## <a name="remarks"></a>Commenti

Il compilatore non è riuscito a risolvere un simbolo (*simbolo*). Il simbolo deve essere valido per la compilazione.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C4638:

```cpp
// C4638.cpp
// compile with: /clr /doc /LD /W3
using namespace System;

/// Text for class MyClass.
public ref class MyClass {
public:
   /// <summary> Text </summary>
   /// <see cref="aSymbolThatAppearsNowhereInMyProject"/>
   // Try the following line instead:
   // /// <see cref="System::Console::WriteLine"/>
   void MyMethod() {}
};   // C4638
```
