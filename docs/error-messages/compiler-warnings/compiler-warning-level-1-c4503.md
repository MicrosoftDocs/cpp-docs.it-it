---
title: Compilatore avviso (livello 1) C4503 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
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
ms.openlocfilehash: adafddff679cbe04cf26a39647760bf595af0bd3
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="compiler-warning-level-1-c4503"></a>Avviso del compilatore (livello 1) C4503
'identifier': lunghezza nome decorato superata, nome troncato  
  
 Il nome decorato supera il limite del compilatore (4096) e sono stato troncato. Per evitare questo avviso e il troncamento, ridurre il numero di argomenti o lunghezza del nome di identificatori utilizzati.  
  
 Una situazione in cui verrà generato questo avviso è quando il codice contiene modelli specializzati in modelli più volte.  Ad esempio, una mappa delle mappe (libreria C++ Standard).  In questo caso, è possibile rendere i typedef in un tipo (ad esempio struct) che contiene la mappa.  
  
 È possibile, tuttavia, decidere di non ristrutturare il codice.  È possibile fornire un'applicazione che genera l'errore C4503, ma se si verificano errori in fase di collegamento su un simbolo troncato, sarà più difficile determinare il tipo del simbolo nel messaggio di errore.  Debug anche risulterà più difficile; il debugger sarà inoltre necessario difficoltà mapping nome del simbolo per nome.  Tuttavia, la correttezza del programma, non è interessata dal nome troncato.  
  
 L'esempio seguente genera l'errore C4503:  
  
```  
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
  
 L'esempio seguente viene illustrato un modo per riscrivere il codice per risolvere C4503:  
  
```  
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