---
title: Compilatore (livello 1) Avviso C4010 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C4010
dev_langs:
- C++
helpviewer_keywords:
- C4010
ms.assetid: d607a9ff-8f8f-45c0-b07b-3b2f439e5485
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 1a56adb54c4a4b7123bde706a2b6b8bdcb184775
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-warning-level-1-c4010"></a>Compilatore (livello 1) Avviso C4010
commento a riga singola contiene il carattere di continuazione di riga  
  
 Un commento a riga singola, che è stato introdotto da / /, contiene una barra rovesciata (\\) che funge da un carattere di continuazione di riga. Il compilatore considera la riga successiva a una continuazione e lo considera come un commento.  
  
 Alcune sintassi indirizzati editor non indicano la riga che segue il carattere di continuazione come commento. Ignorare in tutte le righe che causano l'avviso di colorazione della sintassi.  
  
 L'esempio seguente genera l'errore C4010:  
  
```  
// C4010.cpp  
// compile with: /WX  
int main() {  
   // the next line is also a comment because of the backslash \  
   int a = 3; // C4010  
   a++;  
}  
```