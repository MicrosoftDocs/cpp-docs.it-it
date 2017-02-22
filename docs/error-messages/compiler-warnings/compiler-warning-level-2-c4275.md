---
title: "Avviso del compilatore (livello 2) C4275 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C4275"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4275"
ms.assetid: 18de967a-0a44-4dbc-a2e8-fc4c067ba909
caps.latest.revision: 14
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 14
---
# Avviso del compilatore (livello 2) C4275
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

chiaveclasse di interfaccia non dll 'identificatore' utilizzato come base per chiaveclasse di interfaccia dll 'identificatore'  
  
 Una classe esportata è stata derivata da una classe non esportata.  
  
 Per ridurre al minimo la possibilità che i dati vengano danneggiati durante l'esportazione di una classe con [\_\_declspec\(dllexport\)](../../cpp/dllexport-dllimport.md), tenere presenti i seguenti aspetti:  
  
-   L'accesso a tutti i dati statici deve avvenire tramite funzioni esportate dalla DLL.  
  
-   Nessun metodo inline della classe può modificare i dati statici.  
  
-   Nessun metodo inline della classe utilizza funzioni CRT né altre funzioni di libreria utilizzano dati statici.  
  
-   Nessuna funzione inline della classe utilizza funzioni CRT né altre funzioni di libreria, in cui ad esempio si accede ai dati statici.  
  
-   Nessun metodo della classe, indipendentemente dall'inline, può utilizzare tipi in cui la creazione di istanze nell'EXE e nella DLL presentano dati statici diversi.  
  
 È possibile evitare di esportare le classi specificando una DLL che definisce una classe con funzioni virtuali e funzioni che possono essere chiamate per la creazione di istanze e l'eliminazione di oggetti del tipo.  Sarà quindi sufficiente chiamare le funzioni virtuali nel tipo.  
  
 Per ulteriori informazioni sull'esportazione dei modelli, vedere [http:\/\/support.microsoft.com\/default.aspx?scid\=KB;EN\-US;168958](http://support.microsoft.com/default.aspx?scid=KB;EN-US;168958).  
  
 In Visual C\+\+ è possibile ignorare l'avviso C4275 se si effettua la derivazione da un tipo della libreria C\+\+ standard, se si compila una versione di debug \(**\/MTd**\) e se il messaggio di errore del compilatore fa riferimento a \_Container\_base.  
  
```  
// C4275.cpp  
// compile with: /EHsc /MTd /W2 /c  
#include <vector>  
using namespace std;  
class Node;  
class __declspec(dllimport) VecWrapper : vector<Node *> {};   // C4275  
```