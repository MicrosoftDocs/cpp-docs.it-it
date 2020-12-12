---
description: 'Altre informazioni su: avviso del compilatore (livello 2) C4275'
title: Avviso del compilatore (livello 2) C4275
ms.date: 02/08/2019
f1_keywords:
- C4275
helpviewer_keywords:
- C4275
ms.assetid: 18de967a-0a44-4dbc-a2e8-fc4c067ba909
ms.openlocfilehash: 0dd212d7439b73c28a5426574b72ff8150abe93c
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97173649"
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

C4275 può essere ignorato in Visual C++ se si deriva da un tipo nella libreria standard C++, si compila una versione di debug (**/MTD**) e si fa riferimento al messaggio di errore del compilatore `_Container_base` .

```cpp
// C4275.cpp
// compile with: /EHsc /MTd /W2 /c
#include <vector>
using namespace std;
class Node;
class __declspec(dllimport) VecWrapper : vector<Node *> {};   // C4275
```
