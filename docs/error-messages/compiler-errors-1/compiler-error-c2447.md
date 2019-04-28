---
title: Errore del compilatore C2447
ms.date: 11/04/2016
f1_keywords:
- C2447
helpviewer_keywords:
- C2447
ms.assetid: d1bd6e9a-ee42-4510-ae5e-6b0378f7b931
ms.openlocfilehash: 64dca8313af8b640b7b03c1ab27a1a31fa90de09
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62301968"
---
# <a name="compiler-error-c2447"></a>Errore del compilatore C2447

'{': intestazione di funzione mancante. Elenco formale di tipo obsoleto?

Il compilatore ha rilevato una parentesi graffa aperta imprevista nell'ambito globale. Nella maggior parte dei casi, questo problema è dovuto a un'intestazione di funzione con formato errato, a una dichiarazione posizionata non correttamente o a un punto e virgola inutile. Per risolvere questo problema, verificare che la parentesi graffa aperta segua un'intestazione di funzione con formato corretto e non sia preceduta da una dichiarazione o da un punto e virgola inutile.

Questo errore può anche essere causato da un elenco di argomenti formali del linguaggio C obsoleti. Per risolvere questo problema, eseguire il refactoring dell'elenco di argomenti in base allo stile moderno, ovvero con l'utilizzo delle parentesi.

L'esempio seguente genera l'errore C2447:

```
// C2447.cpp
int c;
{}       // C2447
```