---
title: Avviso del compilatore (livello 1) C4503
ms.date: 05/14/2018
f1_keywords:
- C4503
helpviewer_keywords:
- C4503
ms.assetid: 7c5a98ae-5b6d-41d8-b881-12d3ffd5e392
ms.openlocfilehash: 9077c448f3b5f1d70d18047b91dcf300e606c91f
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80186545"
---
# <a name="compiler-warning-level-1-c4503"></a>Avviso del compilatore (livello 1) C4503

> '*Identifier*': lunghezza del nome decorata superata. il nome è stato troncato

## <a name="remarks"></a>Osservazioni

Questo avviso del compilatore è obsoleto e non viene generato nei compilatori Visual Studio 2017 e versioni successive.

Il nome decorato è più lungo del limite del compilatore (4096) ed è stato troncato. Per evitare questo avviso e il troncamento, ridurre il numero di argomenti o la lunghezza del nome degli identificatori utilizzati. I nomi decorati più lunghi del limite del compilatore hanno un hash applicato e non sono a rischio di un conflitto di nomi.

Quando si usa una versione precedente di Visual Studio, questo avviso può essere generato quando il codice contiene modelli specializzati sui modelli ripetutamente. Ad esempio, una mappa delle mappe (dalla libreria C++ standard). In questa situazione, è possibile rendere i typedef un tipo, ad esempio uno **struct**, che contiene la mappa.

Tuttavia, è possibile decidere di non ristrutturare il codice.  È possibile spedire un'applicazione che genera C4503, ma se si ottengono errori di collegamento in un simbolo troncato, può risultare più difficile determinare il tipo del simbolo nell'errore. Il debug può anche risultare più difficile; il debugger potrebbe avere difficoltà nel mapping del nome del simbolo al nome del tipo. La correttezza del programma, tuttavia, non è interessata dal nome troncato.

## <a name="example"></a>Esempio

L'esempio seguente genera C4503 nei compilatori prima di Visual Studio 2017:

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

Questo esempio illustra un modo per riscrivere il codice per risolvere C4503:

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
