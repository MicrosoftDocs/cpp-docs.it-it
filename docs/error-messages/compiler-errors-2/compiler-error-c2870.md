---
title: Errore del compilatore C2870
ms.date: 11/04/2016
f1_keywords:
- C2870
helpviewer_keywords:
- C2870
ms.assetid: 80523ee9-1fd3-4dc4-8a77-5083deb99066
ms.openlocfilehash: f61281da23e46236e7fce496a4d89086e5d6c0ea
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50546370"
---
# <a name="compiler-error-c2870"></a>Errore del compilatore C2870

'name': una definizione dello spazio dei nomi deve comparire in ambito file o immediatamente all'interno di un'altra definizione dello spazio dei nomi

È definito lo spazio dei nomi `name` in modo non corretto. Gli spazi dei nomi deve essere definita nell'ambito file (all'esterno di tutti i blocchi e le classi) o immediatamente all'interno di un altro spazio dei nomi.

L'esempio seguente genera l'errore C2870:

```
// C2870.cpp
// compile with: /c
int main() {
   namespace A { int i; };   // C2870
}
```