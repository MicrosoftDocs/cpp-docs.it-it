---
title: Errore del compilatore C2870
ms.date: 11/04/2016
f1_keywords:
- C2870
helpviewer_keywords:
- C2870
ms.assetid: 80523ee9-1fd3-4dc4-8a77-5083deb99066
ms.openlocfilehash: 3b006592723df1222d05e39b3bc9e5729efc8aa6
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74755031"
---
# <a name="compiler-error-c2870"></a>Errore del compilatore C2870

' name ': una definizione dello spazio dei nomi deve essere visualizzata in ambito file o immediatamente all'interno di un'altra definizione dello spazio dei nomi

Lo spazio dei nomi è stato definito in modo errato `name`. Gli spazi dei nomi devono essere definiti in ambito file (all'esterno di tutti i blocchi e classi) o immediatamente all'interno di un altro spazio dei nomi.

L'esempio seguente genera l'C2870:

```cpp
// C2870.cpp
// compile with: /c
int main() {
   namespace A { int i; };   // C2870
}
```
