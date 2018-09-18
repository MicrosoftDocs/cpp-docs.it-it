---
title: Del compilatore (livello 2) avviso C4275 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4275
dev_langs:
- C++
helpviewer_keywords:
- C4275
ms.assetid: 18de967a-0a44-4dbc-a2e8-fc4c067ba909
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 7cb8f397243bb6531f33ac5e444914cfa36e5fe1
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46022636"
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

Per altre informazioni sull'esportazione di modelli, vedere [ http://support.microsoft.com/default.aspx?scid=KB; EN-US; 168958](http://support.microsoft.com/default.aspx?scid=KB;EN-US;168958).

In Visual C++ è possibile ignorare l'avviso C4275 se si deriva da un tipo nella libreria Standard C++, la compilazione di una versione di debug (**/MTd**) e il messaggio di errore del compilatore in cui si intende Container_base.

```
// C4275.cpp
// compile with: /EHsc /MTd /W2 /c
#include <vector>
using namespace std;
class Node;
class __declspec(dllimport) VecWrapper : vector<Node *> {};   // C4275
```