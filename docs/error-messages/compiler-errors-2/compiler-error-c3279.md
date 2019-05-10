---
title: Errore del compilatore C3279
ms.date: 11/04/2016
f1_keywords:
- C3279
helpviewer_keywords:
- C3279
ms.assetid: 639afc20-984c-4a95-be35-8bf9409f02d5
ms.openlocfilehash: 72646d7611163748fe7e27ea6c78cd38426eb6ad
ms.sourcegitcommit: 7d64c5f226f925642a25e07498567df8bebb00d4
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2019
ms.locfileid: "65447809"
---
# <a name="compiler-error-c3279"></a>Errore del compilatore C3279

le specializzazioni parziali ed esplicite e le creazioni di istanze esplicite di modelli di classe dichiarati nello spazio dei nomi cli non sono consentite

Lo spazio dei nomi `cli` è definito da Microsoft e contiene pseudo-modelli. Microsoft C++ compilatore non consente specializzazioni definito dall'utente parziali ed esplicite e le creazioni di istanze esplicite di modelli di classe in questo spazio dei nomi.

L'esempio seguente genera l'errore C3279:

```
// C3279.cpp
// compile with: /clr
namespace cli {
   template <> ref class array<int> {};   // C3279
   template <typename T> ref class array<T, 2> {};   // C3279
}
```