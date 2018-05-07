---
title: Errore del compilatore C2512 | Documenti Microsoft
ms.custom: ''
ms.date: 02/09/2018
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2512
dev_langs:
- C++
helpviewer_keywords:
- C2512
ms.assetid: 15206da9-1164-451a-b869-280e00711aad
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 286be19ca407039a77d51503a34c7a27da1c3d5b
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="compiler-error-c2512"></a>Errore del compilatore C2512

> '*identificatore*': non è disponibile alcun costruttore predefinito appropriato  

Oggetto *costruttore predefinito*, un costruttore che non richiede argomenti, non è disponibile per la classe specificata, struttura o unione. Il compilatore fornisce un costruttore predefinito solo se non è specificati alcun costruttore definito dall'utente.

Se si fornisce un costruttore che accetta un parametro non void e si desidera che la classe possa essere creata senza parametri (ad esempio, gli elementi della matrice), è necessario fornire anche un costruttore predefinito. Il costruttore predefinito può essere un costruttore con valori predefiniti per tutti i parametri.

## <a name="example"></a>Esempio

Una causa comune di errore C2512 è quando si definisce un costruttore di classe o struct che accetta argomenti, e quindi si tenta di dichiarare un'istanza della classe o struct senza argomenti. Ad esempio, `struct B` seguito dichiara un costruttore che richiede un `char *` argomento, ma non uno che non accetta argomenti. In `main`, viene dichiarata un'istanza di B, ma viene fornito alcun argomento. Il compilatore genera l'errore C2512 perché non è possibile trovare un costruttore predefinito per B.

```cpp
// C2512.cpp
// Compile with: cl /W4 c2512.cpp
// C2512 expected
struct B {
   B (char *) {}
   // Uncomment the following line to fix.
   // B() {}
};

int main() {
   B b;   // C2512 - This requires a default constructor
}
```

È possibile risolvere il problema mediante la definizione di un costruttore predefinito per la struttura o una classe, ad esempio `B() {}`, o un costruttore in cui tutti gli argomenti presentano valori predefiniti, ad esempio `B (char * = nullptr) {}`.
