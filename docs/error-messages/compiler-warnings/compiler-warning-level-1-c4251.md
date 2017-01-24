---
title: "Avviso del compilatore (livello 1) C4251 | Microsoft Docs"
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
  - "C4251"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4251"
ms.assetid: a9992038-f0c2-4fc4-a9be-4509442cbc1e
caps.latest.revision: 16
caps.handback.revision: 16
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso del compilatore (livello 1) C4251
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'identificatore': classe 'tipo' deve avere un'interfaccia dll per essere utilizzata dai client di classe 'tipo2'  
  
 Per ridurre al minimo la possibilità che i dati vengano danneggiati durante l'esportazione di una classe con [\_\_declspec\(dllexport\)](../../cpp/dllexport-dllimport.md), tenere presenti i seguenti aspetti:  
  
-   L'accesso a tutti i dati statici deve avvenire tramite funzioni esportate dalla DLL.  
  
-   Nessun metodo inline della classe può modificare i dati statici.  
  
-   Nessun metodo inline della classe utilizza funzioni CRT né altre funzioni di libreria utilizzano dati statici. Per ulteriori informazioni, vedere [Potenziali errori di passaggio di oggetti CRT attraverso i limiti DLL](../../c-runtime-library/potential-errors-passing-crt-objects-across-dll-boundaries.md).  
  
-   Nessun metodo della classe, indipendentemente dall'inline, può utilizzare tipi in cui la creazione di istanze nell'EXE e nella DLL presentano dati statici diversi.  
  
 È possibile evitare di esportare le classi specificando una DLL che definisce una classe con funzioni virtuali e funzioni che possono essere chiamate per la creazione di istanze e l'eliminazione di oggetti del tipo.  Sarà quindi sufficiente chiamare le funzioni virtuali nel tipo.  
  
 Per ulteriori informazioni sull'esportazione dei modelli, vedere [http:\/\/support.microsoft.com\/default.aspx?scid\=KB;EN\-US;168958](http://support.microsoft.com/default.aspx?scid=KB;EN-US;168958).  
  
 È possibile ignorare l'avviso C4251 se si effettua la derivazione da un tipo della libreria C\+\+ standard, se si compila una versione di debug \(**\/MTd**\) e se il messaggio di errore del compilatore fa riferimento a \_Container\_base.  
  
```  
// C4251.cpp  
// compile with: /EHsc /MTd /W2 /c  
#include <vector>  
using namespace std;  
class Node;  
class __declspec(dllimport) VecWrapper : vector<Node *> {};   // C4251  
```