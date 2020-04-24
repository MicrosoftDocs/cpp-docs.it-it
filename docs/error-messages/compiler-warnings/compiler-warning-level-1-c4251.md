---
title: Avviso del compilatore (livello 1) C4251
ms.date: 04/21/2020
f1_keywords:
- C4251
helpviewer_keywords:
- C4251
ms.assetid: a9992038-f0c2-4fc4-a9be-4509442cbc1e
ms.openlocfilehash: 9f261d3deb7f1cac8cd5c60b920e0be49bc8b7a6
ms.sourcegitcommit: 89d9e1cb08fa872483d1cde98bc2a7c870e505e9
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/22/2020
ms.locfileid: "82032330"
---
# <a name="compiler-warning-level-1-c4251"></a>Avviso del compilatore (livello 1) C4251

> '*tipo*' : classe '*tipo1*' deve avere un'interfaccia dll per essere utilizzata dai client della classe '*tipo2*'

## <a name="remarks"></a>Osservazioni

Per ridurre al minimo la possibilità di danneggiamento dei dati durante l'esportazione di una classe dichiarata come [__declspec(dllexport)](../../cpp/dllexport-dllimport.md), assicurarsi che:

- Tutti i dati statici sono accessibili tramite funzioni esportate dalla DLL.

- Nessun metodo inline della classe può modificare i dati statici.

- Nessun metodo inline della classe utilizza funzioni CRT o altre funzioni di libreria che utilizzano dati statici. Per ulteriori informazioni, vedere [Potenziali errori che passano oggetti CRT attraverso i limiti della DLL](../../c-runtime-library/potential-errors-passing-crt-objects-across-dll-boundaries.md).

- Nessun metodo della classe (indipendentemente dal fatto che sia inline o meno) può utilizzare tipi in cui la creazione di istanze nel file EXE e DLL presentano differenze di dati statici.

È possibile evitare problemi durante l'esportazione di una classe da una DLL: definire la classe in modo che disponga di funzioni virtuali e funzioni per creare un'istanza ed eliminare oggetti del tipo. È quindi possibile chiamare solo funzioni virtuali sul tipo.

L'errore C4251 può essere ignorato se la classe è derivata da un tipo nella libreria standard di C, si `_Container_base`sta compilando una versione di debug (**/MTd**) e se il messaggio di errore del compilatore fa riferimento a .

## <a name="example"></a>Esempio

In questo esempio `VecWrapper` viene `std::vector`esalto una classe specializzata derivata da .

```cpp
// C4251.cpp
// compile with: /EHsc /MTd /W2 /c
#include <vector>
using namespace std;
class Node;
class __declspec(dllexport) VecWrapper : vector<Node *> {};   // C4251
```
