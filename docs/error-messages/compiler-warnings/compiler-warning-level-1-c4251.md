---
title: Avviso del compilatore (livello 1) C4251
ms.date: 11/04/2016
f1_keywords:
- C4251
helpviewer_keywords:
- C4251
ms.assetid: a9992038-f0c2-4fc4-a9be-4509442cbc1e
ms.openlocfilehash: 8a723b7ce7fc79fb6be9c9dd2b500631098622b0
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80163219"
---
# <a name="compiler-warning-level-1-c4251"></a>Avviso del compilatore (livello 1) C4251

' Identifier ': la classe ' type ' deve avere un'interfaccia dll che deve essere usata dai client della classe ' tipo2'

Per ridurre al minimo la possibilità di danneggiamento dei dati quando si esporta una classe con [__declspec (dllexport)](../../cpp/dllexport-dllimport.md), verificare che:

- Tutti i dati statici sono accessibili tramite le funzioni esportate dalla DLL.

- Nessun metodo inline della classe può modificare i dati statici.

- Nessun metodo inline della classe utilizza funzioni CRT o altre funzioni di libreria utilizzano dati statici. per ulteriori informazioni, vedere [potenziali errori di passaggio di oggetti CRT attraverso i limiti dll](../../c-runtime-library/potential-errors-passing-crt-objects-across-dll-boundaries.md) .

- Nessun metodo della classe (indipendentemente dall'incorporamento) può usare i tipi in cui la creazione di un'istanza in EXE e DLL presenta differenze di dati statiche.

È possibile evitare di esportare classi definendo una DLL che definisce una classe con funzioni virtuali e funzioni che è possibile chiamare per creare un'istanza ed eliminare oggetti del tipo.  È quindi possibile chiamare semplicemente funzioni virtuali sul tipo.

Possibile avviso C4251 può essere ignorato se si deriva da un tipo nella libreria C++ standard, si compila una versione di debug ( **/MTD**) e il messaggio di errore del compilatore fa riferimento a _Container_base.

```cpp
// C4251.cpp
// compile with: /EHsc /MTd /W2 /c
#include <vector>
using namespace std;
class Node;
class __declspec(dllimport) VecWrapper : vector<Node *> {};   // C4251
```
