---
description: 'Altre informazioni su: errore del compilatore C2512'
title: Errore del compilatore C2512
ms.date: 02/09/2018
f1_keywords:
- C2512
helpviewer_keywords:
- C2512
ms.assetid: 15206da9-1164-451a-b869-280e00711aad
ms.openlocfilehash: 40574ab7fc54ba678729429401ed14fefefe9ebd
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97212909"
---
# <a name="compiler-error-c2512"></a>Errore del compilatore C2512

> '*Identifier*': non è disponibile alcun costruttore predefinito appropriato

Un *costruttore predefinito*, un costruttore che non richiede alcun argomento, non è disponibile per la classe, la struttura o l'unione specificata. Il compilatore fornisce un costruttore predefinito solo se non vengono forniti costruttori definiti dall'utente.

Se si fornisce un costruttore che accetta un parametro non void e si desidera consentire la creazione della classe senza parametri, ad esempio gli elementi di una matrice, è necessario fornire anche un costruttore predefinito. Il costruttore predefinito può essere un costruttore con valori predefiniti per tutti i parametri.

## <a name="example"></a>Esempio

Una provocazione comune dell'errore C2512 è quando si definisce un costruttore di classe o struct che accetta argomenti, quindi si tenta di dichiarare un'istanza della classe o dello struct senza argomenti. Ad esempio, di `struct B` seguito viene dichiarato un costruttore che richiede un `char *` argomento, ma non uno che non accetta argomenti. In `main` viene dichiarata un'istanza di B, ma non viene fornito alcun argomento. Il compilatore genera C2512 perché non è in grado di trovare un costruttore predefinito per B.

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

È possibile risolvere questo problema definendo un costruttore predefinito per la struct o la classe, ad esempio `B() {}` , o un costruttore in cui tutti gli argomenti hanno valori predefiniti, ad esempio `B (char * = nullptr) {}` .
