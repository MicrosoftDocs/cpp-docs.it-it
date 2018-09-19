---
title: Compilatore avviso (livello 1) C4216 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4216
dev_langs:
- C++
helpviewer_keywords:
- C4216
ms.assetid: 211079dc-59d0-42a7-801c-2ddab21d7232
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: d6f9e53115b7b162fa4c36ad9a3fa227de777bf8
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46042988"
---
# <a name="compiler-warning-level-1-c4216"></a>Avviso del compilatore (livello 1) C4216

utilizzata estensione non standard: float long

Le estensioni di Microsoft (/Ze) predefinita considerano **long float** come **doppie**. Garantire la compatibilità ANSI ([/Za](../../build/reference/za-ze-disable-language-extensions.md)) non esiste. Uso **doppie** per mantenere la compatibilità. L'esempio seguente genera l'errore C4216:

```
// C4216.cpp
// compile with: /W1
float long a;   // C4216

// use the line below to resolve the warning
// double a;

int main() {
}
```