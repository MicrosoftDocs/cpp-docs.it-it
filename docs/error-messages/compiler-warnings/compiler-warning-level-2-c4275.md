---
title: Compilatore (livello 2) avviso C4275 | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
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
translationtype: Machine Translation
ms.sourcegitcommit: 3f69f0c3176d2fbe19e11ce08c071691a72d858d
ms.openlocfilehash: 873a96d4595b75ff6b9567500723c32d7ba5bd2b
ms.lasthandoff: 02/24/2017

---
# <a name="compiler-warning-level-2-c4275"></a>Avviso del compilatore (livello 2) C4275
non un'interfaccia DLL classkey 'identificatore' utilizzato come base per un'interfaccia DLL classkey 'identificatore'  
  
 Una classe esportata è stata derivata da una classe che non è stata esportata.  
  
 Per ridurre al minimo la possibilità di danneggiamento dei dati durante l'esportazione di una classe con [dllexport](../../cpp/dllexport-dllimport.md), assicurarsi che:  
  
-   Tutti i dati statici per accedere a funzioni esportate dalla DLL.  
  
-   Nessun metodo inline della classe è possibile modificare i dati statici.  
  
-   Nessun metodo inline della classe utilizza funzioni CRT o altre funzioni di libreria utilizzano dati statici.  
  
-   Nessuna funzione inline classe utilizzano funzioni CRT o altre funzioni di libreria, in cui, ad esempio, si accede ai dati statici.  
  
-   Nessun metodo della classe (indipendentemente dall'inline) può utilizzare tipi delle differenze dei dati statici che prevedono la creazione di istanze nel file EXE e DLL.  
  
 È possibile evitare l'esportazione di classi definendo una DLL che definisce una classe con funzioni virtuali e le funzioni è possibile chiamare per creare un'istanza e l'eliminazione di oggetti del tipo.  Quindi è possibile chiamare solo funzioni virtuali al tipo.  
  
 Per ulteriori informazioni sull'esportazione di modelli, vedere [http://support.microsoft.com/default.aspx?scid=KB; EN-US;&16895;8](http://support.microsoft.com/default.aspx?scid=KB;EN-US;168958).  
  
 In Visual C++ è possibile ignorare l'avviso C4275 se si esegue la derivazione da un tipo nella libreria Standard C++, la compilazione di una versione di debug (**/MTd**) e se il messaggio di errore del compilatore fa riferimento a Container_base.  
  
```  
// C4275.cpp  
// compile with: /EHsc /MTd /W2 /c  
#include <vector>  
using namespace std;  
class Node;  
class __declspec(dllimport) VecWrapper : vector<Node *> {};   // C4275  
```
