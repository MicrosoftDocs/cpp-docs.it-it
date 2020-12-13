---
description: 'Altre informazioni su: errore del compilatore C2757'
title: Errore del compilatore C2757
ms.date: 11/04/2016
f1_keywords:
- C2757
helpviewer_keywords:
- C2757
ms.assetid: 421f102f-8a32-4d47-a109-811ddf2c909d
ms.openlocfilehash: e0be0f2a4c8dc5a5646400cbd0fa99e343ea82d5
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97336191"
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
