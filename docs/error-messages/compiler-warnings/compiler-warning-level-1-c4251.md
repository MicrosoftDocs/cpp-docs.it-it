---
title: Compilatore (livello 1) avviso C4251 | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C4251
dev_langs:
- C++
helpviewer_keywords:
- C4251
ms.assetid: a9992038-f0c2-4fc4-a9be-4509442cbc1e
caps.latest.revision: 16
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
ms.openlocfilehash: b75c3e6c93c0963a692b210b158339ea5e9eacac
ms.lasthandoff: 02/24/2017

---
# <a name="compiler-warning-level-1-c4251"></a>Avviso del compilatore (livello 1) C4251
'identificatore': classe 'type' deve avere un'interfaccia dll per essere utilizzata dai client della classe 'tipo2'  
  
 Per ridurre al minimo la possibilità di danneggiamento dei dati durante l'esportazione di una classe con [dllexport](../../cpp/dllexport-dllimport.md), assicurarsi che:  
  
-   Tutti i dati statici è l'accesso tramite le funzioni esportate dalla DLL.  
  
-   Nessun metodo inline della classe è possibile modificare i dati statici.  
  
-   Nessun metodo inline della classe utilizza funzioni CRT né altre funzioni di libreria utilizzano dati statici (vedere [potenziali errori di passaggio CRT oggetti attraverso i limiti DLL](../../c-runtime-library/potential-errors-passing-crt-objects-across-dll-boundaries.md) per ulteriori informazioni).  
  
-   Nessun metodo della classe (indipendentemente dall'inline) può utilizzare tipi delle differenze dei dati statici che prevedono la creazione di istanze nel file EXE e DLL.  
  
 È possibile evitare l'esportazione di classi definendo una DLL che definisce una classe con funzioni virtuali e le funzioni è possibile chiamare per creare un'istanza e l'eliminazione di oggetti del tipo.  Quindi è possibile chiamare solo funzioni virtuali al tipo.  
  
 Per ulteriori informazioni sull'esportazione di modelli, vedere [http://support.microsoft.com/default.aspx?scid=KB; EN-US;&16895;8](http://support.microsoft.com/default.aspx?scid=KB;EN-US;168958).  
  
 C4251 può essere ignorato se si esegue la derivazione da un tipo nella libreria Standard C++, la compilazione di una versione di debug (**/MTd**) e se il messaggio di errore del compilatore fa riferimento a Container_base.  
  
```  
// C4251.cpp  
// compile with: /EHsc /MTd /W2 /c  
#include <vector>  
using namespace std;  
class Node;  
class __declspec(dllimport) VecWrapper : vector<Node *> {};   // C4251  
```
