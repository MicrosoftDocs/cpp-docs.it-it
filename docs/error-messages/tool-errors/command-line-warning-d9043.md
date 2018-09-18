---
title: Avviso della riga di comando D9043 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- D9043
dev_langs:
- C++
helpviewer_keywords:
- D9043
ms.assetid: 9263e28d-217b-414c-bfb6-86efd3c27a77
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: d29371e147c693b2aa49f8dcf838841af3c75c8d
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46031873"
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