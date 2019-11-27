---
title: Avviso del compilatore (livello 3) C4635
ms.date: 11/04/2016
f1_keywords:
- C4635
helpviewer_keywords:
- C4635
ms.assetid: b2ba90de-c093-4a76-8076-b65878467574
ms.openlocfilehash: b6fd45dc6c28c0d12eb2b2991f8a087b1841d1a9
ms.sourcegitcommit: 217fac22604639ebd62d366a69e6071ad5b724ac
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/19/2019
ms.locfileid: "74189139"
---
# <a name="compiler-warning-level-3-c4635"></a>Avviso del compilatore (livello 3) C4635

commento al documento XML di destinazione: XML in formato non valido: motivo

Il compilatore ha rilevato alcuni problemi con i tag XML.  Correggere il problema e ricompilare

L'esempio seguente genera l'errore C4635:

```cpp
// C4635.cpp
// compile with: /doc /clr /W3 /c
/// <summary>
/// The contents of the folder have changed.
/// <summary/>   // C4635

// try the following line instead
// /// </summary>
public ref class Test {};
```

L'output relativo a questo esempio è: **Il tag finale 'member' non corrisponde al tag iniziale 'summary'** .

Il problema di questo esempio è che il tag di fine per \<> di riepilogo non è stato formattato correttamente e che il compilatore non lo riconosce come \<di riepilogo > tag di fine.  Il \<membro > Tag è incorporato nel file con estensione xdc dal compilatore in ogni compilazione/doc.  Il problema in questo caso è che il tag di fine \</member >, non corrisponde al tag di inizio precedente elaborato dal compilatore (\<> di riepilogo.