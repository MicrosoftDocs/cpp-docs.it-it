---
title: "Errore del compilatore C2390 | Microsoft Docs"
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
  - "C2390"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2390"
ms.assetid: 06b749ee-d072-4db1-b229-715f2c0728b5
caps.latest.revision: 9
caps.handback.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C2390
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'identificatore': classe di archiviazione 'identificatore' errata  
  
 La classe di archiviazione non è valida per l'identificatore in ambito globale.  In sostituzione viene utilizzata la classe di archiviazione predefinita.  
  
 Possibili soluzioni:  
  
-   Se l'identificatore è una funzione, dichiararlo con l'archiviazione `extern`.  
  
-   Se l'identificatore è un parametro formale o una variabile locale, dichiararlo con l'archiviazione automatica.  
  
-   Se l'identificatore è una variabile globale, dichiararlo non utilizzando alcuna classe di archiviazione \(archiviazione automatica\).  
  
## Esempio  
  
-   Il seguente codice di esempio genera l'errore C2390:  
  
```  
// C2390.cpp  
register int i;   // C2390  
  
int main() {  
   register int j;   // OK  
}  
```