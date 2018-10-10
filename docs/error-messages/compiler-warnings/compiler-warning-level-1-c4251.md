---
title: Compilatore avviso (livello 1) C4251 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4251
dev_langs:
- C++
helpviewer_keywords:
- C4251
ms.assetid: a9992038-f0c2-4fc4-a9be-4509442cbc1e
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: d964c375adf80caef3bb5a6eb06c67ef8e3e7200
ms.sourcegitcommit: d3c41b16bf05af2149090e996d8e71cd6cd55c7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/09/2018
ms.locfileid: "48890049"
---
# <a name="compiler-warning-level-1-c4251"></a>Avviso del compilatore (livello 1) C4251

'identifier': classe 'type' deve avere un'interfaccia dll per essere usata dai client della classe 'type2'

Per ridurre al minimo la possibilità di danneggiamento dei dati durante l'esportazione di una classe con [dllexport](../../cpp/dllexport-dllimport.md), assicurarsi che:

- Tutti i dati statici è l'accesso tramite le funzioni esportate dalla DLL.

- Nessun metodo inline della classe può modificare i dati statici.

- Nessun metodo della classe inline utilizza funzioni CRT o altre funzioni della libreria dati statici (vedere [potenziali errori di passaggio CRT oggetti tra i limiti DLL](../../c-runtime-library/potential-errors-passing-crt-objects-across-dll-boundaries.md) per altre informazioni).

- Nessun metodo della classe (indipendentemente l'incorporamento) possono usare i tipi in cui la creazione di istanze nel file EXE e DLL hanno differenze di dati statici.

È possibile evitare l'esportazione di classi definendo una DLL che definisce una classe con funzioni virtuali e le funzioni è possibile chiamare per creare un'istanza e l'eliminazione di oggetti del tipo.  È quindi possibile semplicemente chiamare funzioni virtuali sul tipo.

C4251 può essere ignorato se si deriva da un tipo nella libreria Standard C++, la compilazione di una versione di debug (**/MTd**) e il messaggio di errore del compilatore in cui si intende Container_base.

```cpp
// C4251.cpp
// compile with: /EHsc /MTd /W2 /c
#include <vector>
using namespace std;
class Node;
class __declspec(dllimport) VecWrapper : vector<Node *> {};   // C4251
```