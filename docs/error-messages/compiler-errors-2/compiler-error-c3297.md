---
description: 'Altre informazioni su: errore del compilatore C3297'
title: Errore del compilatore C3297
ms.date: 11/04/2016
f1_keywords:
- C3297
helpviewer_keywords:
- C3297
ms.assetid: 2a718b4c-6cdb-4418-92c0-fc3a259431c4
ms.openlocfilehash: 39cbdfe6bbc19341c904d6bae90a71595f388400
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97144599"
---
# <a name="compiler-error-c3297"></a>Errore del compilatore C3297

'constraint_2': impossibile utilizzare 'constraint_1' come vincolo poiché 'constraint_1' contiene il vincolo value

Le classi di valori sono sealed. Se un vincolo è una classe di valori, un altro vincolo non può mai derivare da quella stessa classe.

Per altre informazioni, vedere [Vincoli su parametri di tipo generico (C++/CLI)](../../extensions/constraints-on-generic-type-parameters-cpp-cli.md).

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C3297.

```cpp
// C3297.cpp
// compile with: /clr /c
generic<class T, class U>
where T : value class
where U : T   // C3297
public ref struct R {};
```
