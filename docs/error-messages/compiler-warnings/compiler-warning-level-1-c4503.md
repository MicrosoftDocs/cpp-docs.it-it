---
title: Compilatore (livello 1) avviso C4503 | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C4503
dev_langs:
- C++
helpviewer_keywords:
- C4503
ms.assetid: 7c5a98ae-5b6d-41d8-b881-12d3ffd5e392
caps.latest.revision: 8
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
translationtype: Machine Translation
ms.sourcegitcommit: 3f69f0c3176d2fbe19e11ce08c071691a72d858d
ms.openlocfilehash: f999fcb73860bfd2fabb3484e78f313a32240dee
ms.lasthandoff: 02/24/2017

---
# <a name="compiler-warning-level-1-c4503"></a>Avviso del compilatore (livello 1) C4503
'identificatore': lunghezza nome decorato superata, nome troncato  
  
 Il nome decorato supera il limite del compilatore (4096) e sono stato troncato. Per evitare questo avviso e il troncamento, ridurre il numero di argomenti o lunghezza del nome di identificatori utilizzati.  
  
 Una situazione in cui verrà generato questo avviso è quando il codice contiene modelli specializzati in modelli più volte.  Ad esempio, una mappa di mappe (dalla libreria C++ Standard).  In questo caso, è possibile rendere i typedef in un tipo (ad esempio struct) che contiene la mappa.  
  
 È possibile, tuttavia, decidere di non ristrutturare il codice.  È possibile fornire un'applicazione che viene generato l'errore C4503, ma se si verificano errori in fase di collegamento su un simbolo troncato, sarà più difficile determinare il tipo del simbolo nel messaggio di errore.  Il debug anche risulterà più difficile; il debugger avrà difficoltà mapping nome del simbolo per nome.  Tuttavia, la correttezza del programma, è interessata da nome troncato.  
  
 Nell'esempio seguente viene generato l'errore C4503:  
  
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
  
 Nell'esempio seguente viene illustrato un modo per riscrivere il codice per risolvere C4503:  
  
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
