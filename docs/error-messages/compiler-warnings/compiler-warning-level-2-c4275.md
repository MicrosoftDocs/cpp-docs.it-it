---
title: Avviso del compilatore (livello 2) C4275
ms.date: 11/04/2016
f1_keywords:
- C4275
helpviewer_keywords:
- C4275
ms.assetid: 18de967a-0a44-4dbc-a2e8-fc4c067ba909
ms.openlocfilehash: 985a622e2c89306c453ae6c860d21e6265d0fff1
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50594324"
---
# <a name="compiler-warning-level-2-c4275"></a>Avviso del compilatore (livello 2) C4275

non - interfaccia DLL classkey 'identificatore' utilizzato come base per l'identificatore' interfaccia DLL classkey'

È stata derivata una classe esportata da una classe che non è stata esportata.

Per ridurre al minimo la possibilità di danneggiamento dei dati durante l'esportazione di una classe con [dllexport](../../cpp/dllexport-dllimport.md), assicurarsi che:

- Tutti i dati statici è accessibile tramite le funzioni esportate dalla DLL.

- Nessun metodo inline della classe può modificare i dati statici.

- Nessun metodo inline della classe utilizza le funzioni CRT o altre funzioni della libreria di usano i dati statici.

- Nessuna funzione resa inline classe usano funzioni CRT o altre funzioni della libreria, in cui, ad esempio, accedere ai dati statici.

- Nessun metodo della classe (indipendentemente l'incorporamento) possono usare i tipi in cui la creazione di istanze nel file EXE e DLL hanno differenze di dati statici.

È possibile evitare l'esportazione di classi definendo una DLL che definisce una classe con funzioni virtuali e le funzioni è possibile chiamare per creare un'istanza e l'eliminazione di oggetti del tipo.  È quindi possibile semplicemente chiamare funzioni virtuali sul tipo.

In Visual C++ è possibile ignorare l'avviso C4275 se si deriva da un tipo nella libreria Standard C++, la compilazione di una versione di debug (**/MTd**) e il messaggio di errore del compilatore in cui si intende Container_base.

```
// C4275.cpp
// compile with: /EHsc /MTd /W2 /c
#include <vector>
using namespace std;
class Node;
class __declspec(dllimport) VecWrapper : vector<Node *> {};   // C4275
```