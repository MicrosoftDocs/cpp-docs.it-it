---
title: Errore del compilatore C3297
ms.date: 11/04/2016
f1_keywords:
- C3297
helpviewer_keywords:
- C3297
ms.assetid: 2a718b4c-6cdb-4418-92c0-fc3a259431c4
ms.openlocfilehash: 6df8fd3df023602f65c872dedd74da36bbbc6bd8
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50649917"
---
# <a name="compiler-error-c3297"></a>Errore del compilatore C3297

'constraint_2': impossibile utilizzare 'constraint_1' come vincolo poiché 'constraint_1' contiene il vincolo value

Le classi di valori sono sealed. Se un vincolo è una classe di valori, un altro vincolo non può mai derivare da quella stessa classe.

Per altre informazioni, vedere [vincoli su parametri di tipo generico (C + + CLI)](../../windows/constraints-on-generic-type-parameters-cpp-cli.md).

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C3297.

```
// C3297.cpp
// compile with: /clr /c
generic<class T, class U>
where T : value class
where U : T   // C3297
public ref struct R {};
```