---
description: 'Altre informazioni su: errore del compilatore C2870'
title: Errore del compilatore C2870
ms.date: 11/04/2016
f1_keywords:
- C2870
helpviewer_keywords:
- C2870
ms.assetid: 80523ee9-1fd3-4dc4-8a77-5083deb99066
ms.openlocfilehash: 74e7f2de5cfbb5aca6bd653f5711b989de4ef326
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97333770"
---
# <a name="compiler-error-c2870"></a>Errore del compilatore C2870

' name ': una definizione dello spazio dei nomi deve essere visualizzata in ambito file o immediatamente all'interno di un'altra definizione dello spazio dei nomi

Lo spazio dei nomi è stato definito in `name` modo errato. Gli spazi dei nomi devono essere definiti in ambito file (all'esterno di tutti i blocchi e classi) o immediatamente all'interno di un altro spazio dei nomi.

L'esempio seguente genera l'C2870:

```cpp
// C2870.cpp
// compile with: /c
int main() {
   namespace A { int i; };   // C2870
}
```
