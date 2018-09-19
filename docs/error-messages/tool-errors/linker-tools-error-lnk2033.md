---
title: Errore LNK2033 degli strumenti del linker | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- LNK2033
dev_langs:
- C++
helpviewer_keywords:
- LNK2033
ms.assetid: d61db467-9328-4788-bf54-e2a20537f13f
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: a6c547b4d35e2e7fe057cdd67f0dad47f58d000c
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46039992"
---
# <a name="linker-tools-error-lnk2033"></a>Errore degli strumenti del linker LNK2033

token typeref non risolto (token) per 'type'

Un tipo non ha una definizione nei metadati MSIL.

Errore LNK2033 possono verificarsi durante la compilazione con **/CLR: safe** e in cui è presente solo una dichiarazione con prototipo per un tipo in un modulo MSIL, in cui il tipo fa riferimento al modulo MSIL.

Il tipo deve essere definito in **/CLR: safe**.

Per altre informazioni, vedere [/clr (Compilazione Common Language Runtime)](../../build/reference/clr-common-language-runtime-compilation.md).

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore LNK2033.

```
// LNK2033.cpp
// compile with: /clr:safe
// LNK2033 expected
ref class A;
ref class B {};

int main() {
   A ^ aa = nullptr;
   B ^ bb = nullptr;   // OK
};
```