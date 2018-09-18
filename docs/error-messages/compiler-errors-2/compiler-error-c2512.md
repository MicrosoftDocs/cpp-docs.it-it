---
title: Errore del compilatore C2512 | Microsoft Docs
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
ms.openlocfilehash: ba1fbba98237879927fd82d6535c0c2688c1c304
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46036919"
---
# <a name="compiler-error-c2512"></a>Errore del compilatore C2512

> «*identificatore*': non è disponibile alcun costruttore predefinito appropriato

Oggetto *costruttore predefinito*, un costruttore che non richiede argomenti, non è disponibile per la classe specificata, struttura o unione. Il compilatore fornisce un costruttore predefinito solo se non vengono forniti alcuna costruttori definiti dall'utente.

Se si specifica un costruttore che accetta un parametro non void e si vuole consentire la classe deve essere creata senza parametri (ad esempio gli elementi della matrice), è necessario fornire anche un costruttore predefinito. Il costruttore predefinito può essere un costruttore con valori predefiniti per tutti i parametri.

## <a name="example"></a>Esempio

Una causa comune dell'errore C2512 è quando si definisce un costruttore di classe o struct che accetta argomenti, e quindi si tenta di dichiarare un'istanza di classe o struct senza argomenti. Ad esempio, `struct B` di seguito dichiara un costruttore che richiede un `char *` argomento, ma non quello che non accetta argomenti. In `main`, viene dichiarata un'istanza di B, ma viene fornito alcun argomento. Il compilatore genera l'errore C2512 perché non è possibile trovare un costruttore predefinito per B.

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

È possibile risolvere il problema con la definizione di un costruttore predefinito per le struct o una classe, ad esempio `B() {}`, o un costruttore in cui tutti gli argomenti sono valori predefiniti, ad esempio `B (char * = nullptr) {}`.
