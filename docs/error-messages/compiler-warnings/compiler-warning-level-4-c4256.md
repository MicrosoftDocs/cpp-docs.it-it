---
description: 'Altre informazioni su: avviso del compilatore (livello 4) C4256'
title: Avviso del compilatore (livello 4) C4256
ms.date: 11/04/2016
f1_keywords:
- C4256
helpviewer_keywords:
- C4256
ms.assetid: a755a32e-895a-4837-a2b5-4ea06b736798
ms.openlocfilehash: 3ccd8447f930f40df5e488714cdcfb52e54d9928
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97189301"
---
# <a name="compiler-warning-level-4-c4256"></a>Avviso del compilatore (livello 4) C4256

' Function ': il costruttore per la classe con basi virtuali ha '.. .'; le chiamate potrebbero non essere compatibili con le versioni precedenti di Visual C++

Possibile incompatibilità.

Osservare l'esempio di codice seguente. Se la definizione del costruttore S2:: S2 (int i,...) è stata compilata utilizzando una versione del compilatore Microsoft C++ precedente alla versione 7, ma l'esempio seguente viene compilato utilizzando la versione corrente, la chiamata al costruttore per S3 non funzionerà correttamente a causa di una modifica speciale della convenzione di chiamata. Utilizzando Visual C++ 6.0, in entrambi i casi la chiamata non funziona comunque, a meno che non venga passato alcun parametro per i puntini di sospensione.

Per correggere il problema,

1. Non usare i puntini di sospensione in un costruttore.

1. Verificare che tutti i componenti del progetto siano compilati con la versione corrente (incluse le librerie che possono definire o fare riferimento a questa classe), quindi disabilitare l'avviso utilizzando il pragma [warning](../../preprocessor/warning.md) .

L'esempio seguente genera l'C4256:

```cpp
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
