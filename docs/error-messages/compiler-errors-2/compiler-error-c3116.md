---
description: 'Altre informazioni su: errore del compilatore C3116'
title: Errore del compilatore C3116
ms.date: 11/04/2016
f1_keywords:
- C3116
helpviewer_keywords:
- C3116
ms.assetid: 597463e1-a5cc-4ed3-a917-eae9a61d3312
ms.openlocfilehash: ea11d851c4348725c48e408ffdd0ed6de4393e6e
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97115937"
---
# <a name="compiler-error-c3116"></a>Errore del compilatore C3116

' storage specifier ': classe di archiviazione non valida per il metodo di interfaccia

È stato usato **`typedef`** , **`register`** o **`static`** come classe di archiviazione per un metodo di interfaccia. Queste classi di archiviazione non sono consentite nei membri di interfaccia.

L'esempio seguente genera l'C3116:

```cpp
// C3116.cpp
__interface ImyInterface
{
   static void myFunc();   // C3116
};
```
