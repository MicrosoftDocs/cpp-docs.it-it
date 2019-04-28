---
title: Avviso della riga di comando D9043
ms.date: 11/04/2016
f1_keywords:
- D9043
helpviewer_keywords:
- D9043
ms.assetid: 9263e28d-217b-414c-bfb6-86efd3c27a77
ms.openlocfilehash: 62834c5f245bc1c0f6197638e4608b7fe71e7eb1
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62213494"
---
# <a name="command-line-warning-d9043"></a>Avviso della riga di comando D9043

valore non valido 'livello_avviso ' non valido per 'compiler_option'; verrà utilizzato ' 4999'; Avvisi dell'analisi codice non sono associati livelli di avviso

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C9043:.

```
// D9043.cpp
// compile with: /analyze /w16001
// D9043 warning expected
int main() {}
```