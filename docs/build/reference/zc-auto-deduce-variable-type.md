---
title: "/Zc:auto (deduzione del tipo di variabile) | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "/Zc:auto"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/Zc (opzioni del compilatore) (C++)"
  - "Deduzione del tipo di variabile (C++)"
  - "Zc (opzioni del compilatore) (C++)"
  - "-Zc (opzioni del compilatore) (C++)"
ms.assetid: 5f5bc102-44c3-4688-bbe1-080594dcee5c
caps.latest.revision: 9
caps.handback.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# /Zc:auto (deduzione del tipo di variabile)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

L'opzione del compilatore **\/Zc:auto\[\-\]** comunica al compilatore come usare la [parola chiave Auto](../../cpp/auto-keyword.md) per dichiarare le variabili.  Se si specifica l'opzione predefinita, **\/Zc:auto**, il compilatore deduce il tipo di variabile dichiarata dalla relativa espressione di inizializzazione.  Se si specifica  **\/Zc:auto\-**, il compilatore alloca la variabile alla classe di archiviazione automatica.  
  
## Sintassi  
  
```  
/Zc:auto[-]  
```  
  
## Note  
 Lo standard C\+\+ definisce un significato originale e uno rivisto per la parola chiave `auto`.  Prima di [!INCLUDE[cpp_dev10_long](../../build/includes/cpp_dev10_long_md.md)], la parola chiave dichiara una variabile nella classe di archiviazione automatica, ovvero una variabile di durata locale.  A partire da [!INCLUDE[cpp_dev10_long](../../build/includes/cpp_dev10_long_md.md)], la parola chiave deduce il tipo di variabile dall'espressione di inizializzazione della dichiarazione. Usare l'opzione del compilatore **\/Zc:auto\[\-\]** per comunicare al compilatore di usare il significato originale o rivisto della parola chiave `auto`.  
  
 Il compilatore emette un messaggio di diagnostica appropriato se l'uso della parola chiave `auto` contraddice l'opzione del compilatore corrente.  Per altre informazioni, vedere [Parola chiave auto](../../cpp/auto-keyword.md).  Per altre informazioni sui problemi di conformità con Visual C\+\+, vedere [Comportamento non standard](../../cpp/nonstandard-behavior.md).  
  
### Per impostare questa opzione del compilatore in Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto.  Per informazioni dettagliate, vedere [Utilizzo di proprietà di progetto](../../ide/working-with-project-properties.md).  
  
2.  Fare clic sul nodo **Proprietà di configurazione**.  
  
3.  Fare clic sul nodo **C\/C\+\+**.  
  
4.  Fare clic sul nodo **Riga di comando**.  
  
5.  Aggiungere **\/Zc:auto** o **\/Zc:auto\-** al riquadro **Opzioni aggiuntive:**.  
  
## Vedere anche  
 [\/Zc \(Conformità\)](../../build/reference/zc-conformance.md)   
 [Parola chiave auto](../../cpp/auto-keyword.md)