---
title: "Errore del compilatore C2720 | Microsoft Docs"
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
  - "C2720"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2720"
ms.assetid: 9ee3aab7-711b-4f5a-b2f1-cb62b130f1ce
caps.latest.revision: 9
caps.handback.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C2720
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'identifier': identificatore classe di archiviazione 'specifier' non valido per i membri  
  
 La classe di archiviazione non può essere usata per i membri della classe esterni alla dichiarazione.  Per correggere l'errore, rimuovere l'[identificatore della classe di archiviazione](http://msdn.microsoft.com/it-it/10b3d22d-cb40-450b-994b-08cf9a211b6c) non necessario dalla definizione del membro esterno alla dichiarazione della classe.  
  
 L'esempio seguente genera l'errore C2720 e mostra come risolverlo:  
  
```  
// C2720.cpp  
struct S {  
   static int i;  
};  
static S::i;   // C2720 - remove the unneeded 'static' to fix it  
  
```