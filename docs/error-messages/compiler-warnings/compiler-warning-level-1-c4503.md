---
title: "Avviso del compilatore (livello 1) C4503 | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C4503"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4503"
ms.assetid: 7c5a98ae-5b6d-41d8-b881-12d3ffd5e392
caps.latest.revision: 8
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso del compilatore (livello 1) C4503
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'identificatore': lunghezza nome decorato superata. Nome troncato  
  
 Il nome decorato ha una lunghezza superiore al limite del compilatore \(4096 caratteri\) ed è stato troncato.  Per evitare la visualizzazione dell'avviso e il troncamento, ridurre il numero di argomenti o la lunghezza dei nomi degli identificatori utilizzati.  
  
 Questo avviso verrà ad esempio generato se nel codice sono contenuti ripetutamente modelli specializzati in modelli,  quale una mappa di mappe della libreria C\+\+ standard.  In questo caso, è possibile trasformare i typedef in un tipo, ad esempio una struttura, contenente la mappa.  
  
 La ristrutturazione del codice non è tuttavia obbligatoria.  Un'applicazione che genera l'avviso C4503 può essere distribuita, ma se vengono generati errori in fase di collegamento, sarà più difficile determinare il tipo del simbolo interessato dall'errore.  Sarà più complesso anche il debug, poiché risulterà difficile anche eseguire il mapping tra il nome del simbolo e quello del tipo.  Il troncamento del nome non influisce tuttavia sulla correttezza del programma.  
  
 Il seguente codice di esempio genera l'errore C4503:  
  
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
  
 Nell'esempio riportato di seguito viene illustrato un modo per riscrivere il codice che consente di evitare la visualizzazione dell'avviso.  
  
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