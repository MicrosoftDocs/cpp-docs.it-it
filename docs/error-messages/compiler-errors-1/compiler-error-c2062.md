---
title: Errore del compilatore C2062
ms.date: 11/04/2016
f1_keywords:
- C2062
helpviewer_keywords:
- C2062
ms.assetid: 6cc98353-2ddf-43ab-88a2-9cc91cdd6033
ms.openlocfilehash: dcfac9629a90b82744f87ec105c30301b2102cdf
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62408745"
---
# <a name="compiler-error-c2062"></a>Errore del compilatore C2062

tipo 'type' imprevisto

Il compilatore non è previsto un nome di tipo.

L'esempio seguente genera l'errore C2062:

```
// C2062.cpp
// compile with: /c
struct A {  : int l; };   // C2062
struct B { private: int l; };   // OK
```

C2062 può verificarsi anche a causa del modo il compilatore gestisce i tipi non definiti nell'elenco di parametri del costruttore. Se il compilatore rileva un tipo non definito (errori di ortografia), si presuppone il costruttore è un'espressione e rilascia C2062. Per risolvere, usare solo i tipi definiti in un elenco di parametri di costruttore.