---
title: Errore del compilatore C2447
ms.date: 11/04/2016
f1_keywords:
- C2447
helpviewer_keywords:
- C2447
ms.assetid: d1bd6e9a-ee42-4510-ae5e-6b0378f7b931
ms.openlocfilehash: 14fec374927fc798956a249773d9bec814e7a823
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74744186"
---
# <a name="compiler-error-c2447"></a>Errore del compilatore C2447

'{': intestazione di funzione mancante. Elenco formale di tipo obsoleto?

Il compilatore ha rilevato una parentesi graffa aperta imprevista nell'ambito globale. Nella maggior parte dei casi, questo problema è dovuto a un'intestazione di funzione con formato errato, a una dichiarazione posizionata non correttamente o a un punto e virgola inutile. Per risolvere questo problema, verificare che la parentesi graffa aperta segua un'intestazione di funzione con formato corretto e non sia preceduta da una dichiarazione o da un punto e virgola inutile.

Questo errore può anche essere causato da un elenco di argomenti formali del linguaggio C obsoleti. Per risolvere questo problema, eseguire il refactoring dell'elenco di argomenti in base allo stile moderno, ovvero con l'utilizzo delle parentesi.

L'esempio seguente genera l'C2447:

```cpp
// C2447.cpp
int c;
{}       // C2447
```
