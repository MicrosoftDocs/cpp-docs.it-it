---
title: Errore del compilatore C2757
ms.date: 11/04/2016
f1_keywords:
- C2757
helpviewer_keywords:
- C2757
ms.assetid: 421f102f-8a32-4d47-a109-811ddf2c909d
ms.openlocfilehash: 98b43a2f3c0888fc385226cd80889b9911c84690
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62227914"
---
# <a name="compiler-error-c2757"></a>Errore del compilatore C2757

'symbol': un simbolo con questo nome esiste già e pertanto questo nome non può essere usato come uno spazio dei nomi

Un simbolo usato nella compilazione corrente come un identificatore dello spazio dei nomi è già in uso in un assembly di riferimento.

L'esempio seguente genera l'errore C2757:

```
// C2757a.cpp
// compile with: /clr /LD
public ref class Nes {};
```

E quindi,

```
// C2757b.cpp
// compile with: /clr /c
#using <C2757a.dll>

namespace Nes {    // C2757
// try the following line instead
// namespace Nes2 {
   public ref class X {};
}
```
