---
title: Compilatore avviso (livello 4) C4207 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4207
dev_langs:
- C++
helpviewer_keywords:
- C4207
ms.assetid: f4e09e3e-ac87-4489-8e3f-c8f76b82e721
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: a5aa7f364eb8f60d680dde4c252b9c84e258cda0
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46068832"
---
# <a name="compiler-warning-level-4-c4207"></a>Avviso del compilatore (livello 4) C4207

utilizzata estensione non standard: forma inizializzatore estesa

Con le estensioni Microsoft (/Ze), è possibile inizializzare una matrice non dimensionata di `char` usando una stringa all'interno delle parentesi graffe.

## <a name="example"></a>Esempio

```
// C4207.c
// compile with: /W4
char c[] = { 'a', 'b', "cdefg" }; // C4207

int main()
{
}
```

Tale inizializzazione non sono valide in compatibilità ANSI ([/Za](../../build/reference/za-ze-disable-language-extensions.md)).