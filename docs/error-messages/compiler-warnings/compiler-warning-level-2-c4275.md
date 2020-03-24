---
title: Avviso del compilatore (livello 2) C4275
ms.date: 02/08/2019
f1_keywords:
- C4275
helpviewer_keywords:
- C4275
ms.assetid: 18de967a-0a44-4dbc-a2e8-fc4c067ba909
ms.openlocfilehash: ad12c1c27006a57c8339e9dad82e4d8e1a239a6e
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80161997"
---
# <a name="compiler-warning-level-2-c4275"></a>Avviso del compilatore (livello 2) C4275

> classe '*class_1*' non di interfaccia dll utilizzata come base per la classe di interfaccia dll '*class_2*'

Una classe esportata è derivata da una classe che non è stata esportata.

Per ridurre al minimo la possibilità di danneggiamento dei dati quando si esporta una classe con [__declspec (dllexport)](../../cpp/dllexport-dllimport.md), verificare che:

- È possibile accedere a tutti i dati statici tramite le funzioni esportate dalla DLL.

- Nessun metodo inline della classe può modificare i dati statici.

- Nessun metodo inline della classe utilizza funzioni CRT o altre funzioni di libreria che utilizzano dati statici.

- Nessuna funzione di classe inline usa funzioni CRT o altre funzioni di libreria, in cui si accede ai dati statici.

- Nessun metodo della classe (indipendentemente dall'incorporamento) può usare i tipi in cui la creazione di un'istanza in EXE e DLL presenta differenze di dati statiche.

È possibile evitare di esportare classi definendo una DLL che definisce una classe con funzioni virtuali e funzioni che è possibile chiamare per creare un'istanza ed eliminare oggetti del tipo.  È quindi possibile chiamare semplicemente funzioni virtuali sul tipo.

C4275 può essere ignorato in Visual C++ se si deriva da un tipo nella libreria C++ standard, si compila una versione di debug ( **/MTD**) e il messaggio di errore del compilatore fa riferimento a `_Container_base`.

```cpp
// C4275.cpp
// compile with: /EHsc /MTd /W2 /c
#include <vector>
using namespace std;
class Node;
class __declspec(dllimport) VecWrapper : vector<Node *> {};   // C4275
```
