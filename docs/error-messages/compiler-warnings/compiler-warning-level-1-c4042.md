---
title: Compilatore (livello 1) Avviso C4042 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4042
dev_langs:
- C++
helpviewer_keywords:
- C4042
ms.assetid: e4bd861b-1194-426b-bf79-68c5b021eb0a
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: bcc4123c18eb9765841a5f6b54446cd064407700
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
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