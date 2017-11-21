---
title: Compilatore (livello 1) Avviso C4042 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C4042
dev_langs: C++
helpviewer_keywords: C4042
ms.assetid: e4bd861b-1194-426b-bf79-68c5b021eb0a
caps.latest.revision: "6"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: 3369b2786c552e408e8eedf8e6ed8bf73f272ff6
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="compiler-warning-level-1-c4042"></a>Compilatore (livello 1) Avviso C4042
'identifier': classe di archiviazione non valida  
  
 La classe di archiviazione specificato non può essere utilizzata con l'identificatore in questo contesto. Il compilatore Usa invece la classe di archiviazione predefinita:  
  
-   `extern`, se *identificatore* è una funzione.  
  
-   **Auto**, se *identificatore* è un parametro formale o una variabile locale.  
  
-   Nessuna classe di archiviazione, se *identificatore* è una variabile globale.  
  
 Questo avviso può essere causato da specifica una classe di archiviazione diverso **registrare** in una dichiarazione di parametro.  
  
 L'esempio seguente genera l'errore C4042  
  
```  
// C4042.cpp  
// compile with: /W1 /LD  
int func2( __declspec( thread ) int tls_i )    // C4042  
// try the following line instead  
// int func2( int tls_i )  
{  
   return tls_i;  
}  
```