---
title: Compilatore avviso (livello 1) C4251 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C4251
dev_langs: C++
helpviewer_keywords: C4251
ms.assetid: a9992038-f0c2-4fc4-a9be-4509442cbc1e
caps.latest.revision: "16"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: 7c05983547cb6efb1d569d95c9154db67b76aba4
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="compiler-warning-level-1-c4251"></a>Avviso del compilatore (livello 1) C4251
'identifier': classe 'type' deve avere un'interfaccia dll per essere utilizzato dai client della classe 'type2'  
  
 Per ridurre al minimo la possibilità di danneggiamento dei dati durante l'esportazione di una classe con [dllexport](../../cpp/dllexport-dllimport.md), assicurarsi che:  
  
-   Tutti i dati statici è l'accesso tramite le funzioni esportate dalla DLL.  
  
-   Nessun metodo inline della classe è possibile modificare i dati statici.  
  
-   Nessun metodo inline della classe utilizza funzioni CRT o altre funzioni di libreria utilizzano dati statici (vedere [potenziali errori di passaggio CRT oggetti attraverso i limiti DLL](../../c-runtime-library/potential-errors-passing-crt-objects-across-dll-boundaries.md) per altre informazioni).  
  
-   Nessun metodo della classe (indipendentemente dall'incorporamento) può utilizzare tipi in cui la creazione di istanze nel file EXE e DLL presentano differenze di dati statici.  
  
 È possibile evitare l'esportazione di classi definendo una DLL che definisce una classe con funzioni virtuali e funzioni che è possibile chiamare per creare un'istanza ed eliminare oggetti del tipo.  Quindi è possibile chiamare solo funzioni virtuali al tipo.  
  
 Per ulteriori informazioni sull'esportazione di modelli, vedere [http://support.microsoft.com/default.aspx?scid=KB; EN-US; 168958](http://support.microsoft.com/default.aspx?scid=KB;EN-US;168958).  
  
 C4251 può essere ignorato se si deriva da un tipo nella libreria Standard C++, la compilazione di una versione di debug (**/MTd**) e se il messaggio di errore del compilatore fa riferimento a Container_base.  
  
```  
// C4251.cpp  
// compile with: /EHsc /MTd /W2 /c  
#include <vector>  
using namespace std;  
class Node;  
class __declspec(dllimport) VecWrapper : vector<Node *> {};   // C4251  
```