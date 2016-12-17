---
title: "Avviso del compilatore (livello 1) C4042 | Microsoft Docs"
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
  - "C4042"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4042"
ms.assetid: e4bd861b-1194-426b-bf79-68c5b021eb0a
caps.latest.revision: 6
caps.handback.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso del compilatore (livello 1) C4042
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'identificatore': classe di archiviazione errata  
  
 La classe di archiviazione specificata non può essere utilizzata con questo identificatore in questo contesto.  Viene invece utilizzata la classe di archiviazione predefinita:  
  
-   `extern`, se *identificatore* è una funzione  
  
-   **auto**, se *identificatore* è un parametro formale o una variabile locale.  
  
-   Nessuna classe di archiviazione, se *identificatore* è una variabile globale.  
  
 Questo avviso può essere visualizzato se si specifica una classe di archiviazione diversa da **register** in una dichiarazione di parametro.  
  
 Nell'esempio seguente viene generato l'errore C4042:  
  
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