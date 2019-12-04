---
title: Errore del compilatore C2757
ms.date: 11/04/2016
f1_keywords:
- C2757
helpviewer_keywords:
- C2757
ms.assetid: 421f102f-8a32-4d47-a109-811ddf2c909d
ms.openlocfilehash: a9f4661495e0fa5219a517b6f6ca410323a77269
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74759529"
---
# <a name="compiler-error-c2757"></a>Errore del compilatore C2757

' symbol ': esiste già un simbolo con questo nome e pertanto questo nome non può essere usato come nome dello spazio dei nomi

Un simbolo usato nella compilazione corrente come identificatore dello spazio dei nomi è già in uso in un assembly a cui si fa riferimento.

L'esempio seguente genera l'C2757:

```cpp
// C2757a.cpp
// compile with: /clr /LD
public ref class Nes {};
```

E quindi,

```cpp
// C2757b.cpp
// compile with: /clr /c
#using <C2757a.dll>

namespace Nes {    // C2757
// try the following line instead
// namespace Nes2 {
   public ref class X {};
}
```
