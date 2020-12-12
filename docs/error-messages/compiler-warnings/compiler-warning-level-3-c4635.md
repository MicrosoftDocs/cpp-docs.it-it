---
description: 'Altre informazioni su: avviso del compilatore (livello 3) C4635'
title: Avviso del compilatore (livello 3) C4635
ms.date: 11/04/2016
f1_keywords:
- C4635
helpviewer_keywords:
- C4635
ms.assetid: b2ba90de-c093-4a76-8076-b65878467574
ms.openlocfilehash: e885c501e4f10719618bb552c153dc13a481332d
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97168332"
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

L'output relativo a questo esempio è: **Il tag finale 'member' non corrisponde al tag iniziale 'summary'**.

Il problema di questo esempio è che il tag di fine per \<summary> non è formattato correttamente e il compilatore non lo riconosce come \<summary> tag di fine.  Il \<member> tag viene incorporato nel file con estensione xdc dal compilatore in ogni compilazione di/doc.  Il problema in questo caso è che il tag di fine \</member> non corrisponde al precedente tag di inizio elaborato dal compilatore ( \<summary> .
