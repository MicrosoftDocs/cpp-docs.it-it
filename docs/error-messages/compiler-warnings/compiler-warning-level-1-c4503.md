---
title: Compilatore avviso (livello 1) C4503 | Documenti Microsoft
ms.custom: ''
ms.date: 05/14/2018
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4503
dev_langs:
- C++
helpviewer_keywords:
- C4503
ms.assetid: 7c5a98ae-5b6d-41d8-b881-12d3ffd5e392
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: f60fdb44c5368ccc5c5f089002614332d95a63fe
ms.sourcegitcommit: 19a108b4b30e93a9ad5394844c798490cb3e2945
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/17/2018
---
# <a name="compiler-warning-level-1-c4503"></a>Avviso del compilatore (livello 1) C4503

> '*identificatore*': lunghezza nome decorato superata, nome troncato

## <a name="remarks"></a>Note

Questo avviso del compilatore è obsoleto e non viene generato in Visual Studio 2017 e compilatori successive.

Il nome decorato supera il limite del compilatore (4096) e sono stato troncato. Per evitare questo avviso e il troncamento, ridurre il numero di argomenti o la lunghezza del nome di identificatori utilizzati. Nomi che periodo di tempo superiore al limite del compilatore presentano un hash applicato e non rischiano di un conflitto di nomi decorati.

Quando si utilizza una versione precedente di Visual Studio, l'avviso può essere generato quando il codice contiene modelli specializzato su modelli più volte. Ad esempio, una mappa delle mappe (libreria C++ Standard). In questa situazione, è possibile rendere il typedef di un tipo (un **struct**, ad esempio) che contiene la mappa.

È possibile, tuttavia, decidere di non ristrutturare il codice.  È possibile fornire un'applicazione che genera l'errore C4503, ma se si verificano errori in fase di collegamento su un simbolo troncato, può essere più difficile determinare il tipo del simbolo nel messaggio di errore. Il debug potrebbe anche essere più difficile; il debugger potrebbe avere difficoltà mapping del nome del simbolo per il nome del tipo. Tuttavia, la correttezza del programma, non è interessata dal nome troncato.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C4503 nei compilatori prima di Visual Studio 2017:

```cpp
// C4503.cpp
// compile with: /W1 /EHsc /c
// C4503 expected
#include <string>
#include <map>

class Field{};

typedef std::map<std::string, Field> Screen;
typedef std::map<std::string, Screen> WebApp;
typedef std::map<std::string, WebApp> WebAppTest;
typedef std::map<std::string, WebAppTest> Hello;
Hello MyWAT;
```

In questo esempio viene illustrato un modo per riscrivere il codice per risolvere C4503:

```cpp
// C4503b.cpp
// compile with: /W1 /EHsc /c
#include <string>
#include <map>

class Field{};

struct Screen2 {
   std::map<std::string, Field> Element;
};

struct WebApp2 {
   std::map<std::string, Screen2> Element;
};

struct WebAppTest2 {
   std::map<std::string, WebApp2> Element;
};

struct Hello2 {
   std::map<std::string, WebAppTest2> Element;
};

Hello2 MyWAT2;
```