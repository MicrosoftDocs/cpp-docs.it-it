---
title: Avviso del compilatore (livello 1) C4691
ms.date: 11/04/2016
f1_keywords:
- C4691
helpviewer_keywords:
- C4691
ms.assetid: 722133d9-87f6-46c1-9e86-9825453d6999
ms.openlocfilehash: 8065129e20b627eb387421455527f6aaec3fdc2f
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80175376"
---
# <a name="compiler-warning-level-1-c4691"></a>Avviso del compilatore (livello 1) C4691

' type ': previsto tipo a cui si fa riferimento nell'assembly senza riferimenti ' file ', tipo definito nell'unità di conversione corrente utilizzata

Al file di metadati che contiene la definizione di tipo originale non viene fatto riferimento e il compilatore utilizza una definizione di tipo locale.

Nel caso in cui si stia ricompilando il *file*, C4691 può essere ignorato o disattivato con pragma [warning](../../preprocessor/warning.md).  Ovvero, se il file che si sta compilando corrisponde al file in cui il compilatore prevede di trovare la definizione del tipo, è possibile ignorare C4691.

Tuttavia, può verificarsi un comportamento imprevisto se il compilatore utilizza una definizione non appartenente allo stesso assembly a cui si fa riferimento nei metadati; I tipi CLR sono digitati non solo dal nome del tipo, ma anche dall'assembly.  Ovvero un tipo Z dall'assembly z. dll è diverso da un tipo Z dall'assembly y. dll.

## <a name="example"></a>Esempio

Questo esempio contiene la definizione di tipo originale.

```cpp
// C4691_a.cpp
// compile with: /clr /LD /W1
public ref class Original_Type {};
```

## <a name="example"></a>Esempio

Questo esempio fa riferimento a C4691_a. dll e dichiara un campo di tipo Original_Type.

```cpp
// C4691_b.cpp
// compile with: /clr /LD
#using "C4691_a.dll"
public ref class Client {
public:
   Original_Type^ ot;
};
```

## <a name="example"></a>Esempio

L'esempio seguente genera l'C4691.  Si noti che questo esempio contiene una definizione per Original_Type e non fa riferimento a C4691a. dll.

Per risolverlo, fare riferimento al file di metadati che contiene la definizione di tipo originale e rimuovere la dichiarazione e la definizione locali.

```cpp
// C4691_c.cpp
// compile with: /clr /LD /W1
// C4691 expected

// Uncomment the following line to resolve.
// #using "C4691_a.dll"
#using "C4691_b.dll"

// Delete the following line to resolve.
ref class Original_Type;

public ref class MyClass : Client {};
```
