---
title: Errore del compilatore C3297
ms.date: 11/04/2016
f1_keywords:
- C3297
helpviewer_keywords:
- C3297
ms.assetid: 2a718b4c-6cdb-4418-92c0-fc3a259431c4
ms.openlocfilehash: e4661119680dff34dfaa43fb9ce71bf97150a8bd
ms.sourcegitcommit: 5cecccba0a96c1b4ccea1f7a1cfd91f259cc5bde
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/01/2019
ms.locfileid: "58769537"
---
# <a name="compiler-error-c3297"></a>Errore del compilatore C3297

'constraint_2': impossibile utilizzare 'constraint_1' come vincolo poiché 'constraint_1' contiene il vincolo value

Le classi di valori sono sealed. Se un vincolo è una classe di valori, un altro vincolo non può mai derivare da quella stessa classe.

Per altre informazioni, vedere [vincoli su parametri di tipo generico (C + + CLI)](../../extensions/constraints-on-generic-type-parameters-cpp-cli.md).

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