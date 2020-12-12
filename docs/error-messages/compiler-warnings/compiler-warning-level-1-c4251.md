---
description: 'Altre informazioni su: avviso del compilatore (livello 1) possibile avviso C4251'
title: Avviso del compilatore (livello 1) C4251
ms.date: 04/21/2020
f1_keywords:
- C4251
helpviewer_keywords:
- C4251
ms.assetid: a9992038-f0c2-4fc4-a9be-4509442cbc1e
ms.openlocfilehash: 4d08462442fd64ebef85573f5d538d6a884c8131
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97266234"
---
# <a name="compiler-warning-level-1-c4251"></a>Avviso del compilatore (livello 1) C4251

> '*Type*': la classe '*tipo1*' deve avere un'interfaccia dll che deve essere usata dai client della classe '*tipo2*'

## <a name="remarks"></a>Commenti

Per ridurre al minimo la possibilità di danneggiamento dei dati quando si esporta una classe dichiarata come [__declspec (dllexport)](../../cpp/dllexport-dllimport.md), verificare che:

- È possibile accedere a tutti i dati statici tramite le funzioni esportate dalla DLL.

- Nessun metodo inline della classe può modificare i dati statici.

- Nessun metodo inline della classe utilizza funzioni CRT o altre funzioni di libreria che utilizzano dati statici. Per altre informazioni, vedere [potenziali errori di passaggio di oggetti CRT attraverso i limiti dll](../../c-runtime-library/potential-errors-passing-crt-objects-across-dll-boundaries.md).

- Nessun metodo della classe (indipendentemente dal fatto che sia inline o meno) può usare i tipi in cui la creazione di istanze nel file EXE e nella DLL presenta differenze di dati statiche.

È possibile evitare problemi durante l'esportazione di una classe da una DLL: definire la classe in modo che disponga di funzioni virtuali e funzioni per creare un'istanza ed eliminare oggetti di tipo. È quindi possibile chiamare semplicemente funzioni virtuali sul tipo.

Possibile avviso C4251 può essere ignorato se la classe è derivata da un tipo nella libreria standard C++, si sta compilando una versione di debug (**/MTD**) e il messaggio di errore del compilatore fa riferimento a `_Container_base` .

## <a name="example"></a>Esempio

Questo esempio esporta una classe specializzata `VecWrapper` derivata da `std::vector` .

```cpp
// C4251.cpp
// compile with: /EHsc /MTd /W2 /c
#include <vector>
using namespace std;
class Node;
class __declspec(dllexport) VecWrapper : vector<Node *> {};   // C4251
```
