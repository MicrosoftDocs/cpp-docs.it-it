---
title: "Procedura: definire parole chiave in Visual C++ | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "parole chiave utente"
  - "parole riservate, parole chiave definite dall'utente"
  - "parole chiave definite dall'utente"
  - "parole chiave riservate, definite dall'utente"
  - "usertype.dat"
  - "parole chiave [C++], definite dall'utente"
ms.assetid: 2dfcf343-e861-4bde-b5a4-7deb6773d9c8
caps.latest.revision: 14
caps.handback.revision: 14
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# Procedura: definire parole chiave in Visual C++
Le parole chiave sono identificatori riservati predefiniti che hanno un significato particolare. Non è possibile usarle come identificatori in un programma. È però possibile definire le proprie parole chiave da usare in Visual C\+ e assegnarvi una colorazione della sintassi personalizzata. La colorazione della sintassi segnala visivamente la struttura e lo stato del codice.  
  
### Per definire le parole chiave in C\+\+  
  
1.  Usare l'[editor di codice e di testo](http://msdn.microsoft.com/it-it/508e1f18-99d5-48ad-b5ad-d011b21c6ab1) di Visual Studio o Notepad.exe per creare un file di solo testo denominato `usertype.dat`.  
  
2.  Nel file `usertype.dat` digitare ogni parola chiave definita dall'utente su una riga separata.  
  
3.  Salvare `usertype.dat` nella directory che contiene devenv.exe. Per impostazione predefinita, il percorso della directory è *\<unità\>*:\\Programmi\\[!INCLUDE[TLA#tla_visualstu](../misc/includes/tlasharptla_visualstu_md.md)] *\<numero di versione principale.secondario\>*\\Common7\\[!INCLUDE[TLA2#tla_ide](../build/includes/tla2sharptla_ide_md.md)]. Poiché per impostazione predefinita la directory è di sola lettura, per salvare `usertype.dat` sono necessarie credenziali amministrative.  
  
4.  Chiudere e riavviare Visual Studio.  
  
    > [!NOTE]
    >  Non è possibile rinominare o ricaricare il file `usertype.dat` durante una sessione di modifica, perché viene letto al momento dell'inizializzazione. Tutte le impostazioni di colore definite precedentemente hanno la precedenza, perché il meccanismo di colorazione della sintassi controlla il file `usertype.dat` per ultimo.  
  
5.  Scegliere **Opzioni** dal menu **Strumenti**. Nella finestra di dialogo **Opzioni** fare clic su **Ambiente**, quindi su **Tipi di carattere e colori**, quindi nell'elenco **Elementi visualizzati:** fare clic su **Parole chiave utente C\/C\+\+**.  
  
6.  Impostare le proprietà relative a tipi di carattere e colori per le parole chiave definite dall'utente come descritto in [Tipi di carattere e colori, Ambiente, finestra di dialogo Opzioni](../Topic/Fonts%20and%20Colors,%20Environment,%20Options%20Dialog%20Box.md).  
  
 Per altre informazioni, vedere [Parole chiave C\+\+](../cpp/keywords-cpp.md).  
  
## Vedere anche  
 [Esecuzione come membro del gruppo Users](../top/running-as-a-member-of-the-users-group.md)   
 [Tasti di scelta rapida predefiniti](../Topic/Default%20Keyboard%20Shortcuts%20in%20Visual%20Studio.md)