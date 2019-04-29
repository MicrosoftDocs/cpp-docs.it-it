---
title: Avviso del compilatore (livello 4) C4256
ms.date: 11/04/2016
f1_keywords:
- C4256
helpviewer_keywords:
- C4256
ms.assetid: a755a32e-895a-4837-a2b5-4ea06b736798
ms.openlocfilehash: b1f7534098a04c7c65a380d302999260c960f284
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62400958"
---
# <a name="compiler-warning-level-4-c4256"></a>Avviso del compilatore (livello 4) C4256

'function': costruttore di classe con basi virtuali ha '...'; le chiamate potrebbero non essere compatibili con le versioni precedenti di Visual C++

Possibili incompatibilità.

Si prenda in considerazione il seguente esempio di codice. Se la definizione del costruttore S2::S2 (int i,...) è stato compilato con una versione del compilatore Visual C++ precedenti alla versione 7, ma nell'esempio seguente viene compilato con la versione corrente, la chiamata al costruttore per S3 non funziona più correttamente a causa di una modifica di convenzione di chiamata speciale. Utilizzando Visual C++ 6.0, in entrambi i casi la chiamata non funziona comunque, a meno che non venga passato alcun parametro per i puntini di sospensione.

Per risolvere il problema,

1. Non usare i puntini di sospensione in un costruttore.

1. Assicurarsi che tutti i componenti del progetto vengono compilati con la versione corrente (incluse le eventuali librerie che definiscono o fare riferimento a questa classe), quindi disattivare l'avviso utilizzando il [avviso](../../preprocessor/warning.md) pragma.

L'esempio seguente genera l'errore C4256:

```
// C4256.cpp
// compile with: /W4
// #pragma warning(disable : 4256)
struct S1
{
};

struct S2: virtual public S1
{
   S2( int i, ... )    // C4256
   {
      i = 0;
   }
   /*
   // try the following line instead
   S2( int i)
   {
      i = 0;
   }
   */
};

void func1()
{
   S2 S3( 2, 1, 2 );   // C4256
   // try the following line instead
   // S2 S3( 2 );
}

int main()
{
}
```