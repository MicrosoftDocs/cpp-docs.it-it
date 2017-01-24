---
title: "Errore del compilatore C2447 | Microsoft Docs"
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
  - "C2447"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2447"
ms.assetid: d1bd6e9a-ee42-4510-ae5e-6b0378f7b931
caps.latest.revision: 10
caps.handback.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C2447
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'{': intestazione di funzione mancante. Elenco formale di tipo obsoleto?  
  
 Il compilatore ha rilevato una parentesi graffa aperta imprevista nell'ambito globale.  Nella maggior parte dei casi, questo problema è dovuto a un'intestazione di funzione con formato errato, a una dichiarazione posizionata non correttamente o a un punto e virgola inutile.  Per risolvere questo problema, verificare che la parentesi graffa aperta segua un'intestazione di funzione con formato corretto e non sia preceduta da una dichiarazione o da un punto e virgola inutile.  
  
 Questo errore può anche essere causato da un elenco di argomenti formali del linguaggio C obsoleti.  Per risolvere questo problema, eseguire il refactoring dell'elenco di argomenti in base allo stile moderno, ovvero con l'utilizzo delle parentesi.  
  
 Nell'esempio seguente viene generato l'errore C2447:  
  
```  
// C2447.cpp  
int c;  
{}       // C2447  
```