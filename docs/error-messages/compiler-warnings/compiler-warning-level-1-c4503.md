---
title: Avviso del compilatore (livello 1) C4503
ms.date: 05/14/2018
f1_keywords:
- C4503
helpviewer_keywords:
- C4503
ms.assetid: 7c5a98ae-5b6d-41d8-b881-12d3ffd5e392
ms.openlocfilehash: 94c88511d87c3adf3cf5687a94948c83ebc5b3d5
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50459787"
---
# <a name="compiler-warning-level-1-c4503"></a>Avviso del compilatore (livello 1) C4503

> «*identificatore*': lunghezza nome decorato superata, nome troncato

## <a name="remarks"></a>Note

L'avviso del compilatore è obsoleta e non viene generato in Visual Studio 2017 e versioni successive compilatori.

Il nome decorato supera il limite del compilatore (4096) e sono stato troncato. Per evitare questo avviso e il troncamento, ridurre il numero di argomenti o le lunghezze dei nomi di identificatori utilizzati. Nomi che sono di più rispetto al limite del compilatore un hash applicato e non sono a rischio di un conflitto di nomi decorati.

Quando si usa una versione precedente di Visual Studio, l'avviso può essere generato quando il codice contiene modelli specializzato su modelli più volte. Ad esempio, una mappa delle mappe (dalla libreria Standard C++). In questa situazione, è possibile rendere i typedef di un tipo (un **struct**, ad esempio) che contiene la mappa.

È possibile, tuttavia, decidere di non ristrutturare il codice.  È possibile spedire un'applicazione che genera C4503, ma se si verificano errori in fase di collegamento in un simbolo troncato, può essere più difficile determinare il tipo del simbolo nel messaggio di errore. Il debug di maggio anche essere più difficile; il debugger potrebbe essere problematica, di conseguenza il mapping al nome del simbolo per il nome del tipo. Tuttavia, la correttezza del programma, non è interessata dal nome troncato.

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

In questo esempio illustra un modo per riscrivere il codice per risolvere C4503:

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