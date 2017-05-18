---
title: Compilatore (livello 2) avviso C4275 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C4275
dev_langs:
- C++
helpviewer_keywords:
- C4275
ms.assetid: 18de967a-0a44-4dbc-a2e8-fc4c067ba909
caps.latest.revision: 14
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
ms.translationtype: Machine Translation
ms.sourcegitcommit: 3f91eafaf3b5d5c1b8f96b010206d699f666e224
ms.openlocfilehash: f9ecbe931c14cfde1d48438bdb76f70452e324d3
ms.contentlocale: it-it
ms.lasthandoff: 04/01/2017

---
# <a name="compiler-warning-level-2-c4275"></a>Avviso del compilatore (livello 2) C4275
non - interfaccia DLL classkey 'identificatore' utilizzato come base per classkey 'identificatore di interfaccia DLL'  
  
 Una classe esportata è stata derivata da una classe che non è stata esportata.  
  
 Per ridurre al minimo la possibilità di danneggiamento dei dati durante l'esportazione di una classe con [dllexport](../../cpp/dllexport-dllimport.md), assicurarsi che:  
  
-   Tutti i dati statici per accedere a funzioni esportate dalla DLL.  
  
-   Nessun metodo inline della classe è possibile modificare i dati statici.  
  
-   Nessun metodo inline della classe utilizza funzioni CRT o altre funzioni di libreria utilizzano dati statici.  
  
-   Nessuna funzione inline classe utilizzano funzioni CRT, o altre funzioni di libreria, in cui, ad esempio, si accede ai dati statici.  
  
-   Nessun metodo della classe (indipendentemente dall'incorporamento) può utilizzare tipi in cui la creazione di istanze nel file EXE e DLL presentano differenze di dati statici.  
  
 È possibile evitare l'esportazione di classi definendo una DLL che definisce una classe con funzioni virtuali e funzioni che è possibile chiamare per creare un'istanza ed eliminare oggetti del tipo.  Quindi è possibile chiamare solo funzioni virtuali al tipo.  
  
 Per ulteriori informazioni sull'esportazione di modelli, vedere [http://support.microsoft.com/default.aspx?scid=KB; EN-US; 168958](http://support.microsoft.com/default.aspx?scid=KB;EN-US;168958).  
  
 In Visual C++ è possibile ignorare l'avviso C4275 se si deriva da un tipo nella libreria Standard C++, la compilazione di una versione di debug (**/MTd**) e se il messaggio di errore del compilatore fa riferimento a Container_base.  
  
```  
// C4275.cpp  
// compile with: /EHsc /MTd /W2 /c  
#include <vector>  
using namespace std;  
class Node;  
class __declspec(dllimport) VecWrapper : vector<Node *> {};   // C4275  
```
