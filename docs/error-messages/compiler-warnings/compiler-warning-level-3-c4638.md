---
title: Avviso del compilatore (livello 3) C4638
ms.date: 08/27/2018
f1_keywords:
- C4638
helpviewer_keywords:
- C4638
ms.assetid: 2c07923a-e103-4e40-bd11-fdfed428a5ec
ms.openlocfilehash: 3662116359f906ef6f0a004fada8efd6771d0a0a
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80174128"
---
# <a name="compiler-warning-level-3-c4638"></a>Avviso del compilatore (livello 3) C4638

> Destinazione commento documento XML: riferimento al simbolo sconosciuto '*Symbol*'

## <a name="remarks"></a>Osservazioni

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
