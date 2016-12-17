---
title: "Macro ON_UPDATE_COMMAND_UI | Microsoft Docs"
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
  - "ON_UPDATE_COMMAND_UI"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "macro di gestori di comandi"
  - "ON_UPDATE_COMMAND_UI (macro)"
  - "gestori aggiornamento"
  - "aggiornamento di oggetti dell'interfaccia utente"
ms.assetid: 3e72b50f-4119-4c82-81cf-6e09b132de05
caps.latest.revision: 10
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Macro ON_UPDATE_COMMAND_UI
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Utilizzare la finestra di **Proprietà** per connettere un oggetto dell'interfaccia utente a un gestore di comandi update di un oggetto di destinazione comando.  Connette automaticamente l'id dell'oggetto dell'interfaccia utente alla macro di `ON_UPDATE_COMMAND_UI` e viene creato un gestore dell'oggetto che gestisce l'aggiornamento.  Vedere [Vedere mapping di messaggi](../mfc/reference/mapping-messages-to-functions.md) per ulteriori informazioni.  
  
 Ad esempio, per aggiornare una cancella qualsiasi comando nel menu Modifica del programma, utilizzare la finestra di **Proprietà** per aggiungere una voce della mappa messaggi nella classe scelta, una dichiarazione di funzione per un gestore di comandi update chiamato `OnUpdateEditClearAll` nella dichiarazione di classe e un modello di funzione vuoto nel file di implementazione della classe.  Gli aspetti del prototipo di funzione l'aspetto seguente:  
  
 [!code-cpp[NVC_MFCDocView#2](../mfc/codesnippet/CPP/on-update-command-ui-macro_1.h)]  
  
 Come tutti i gestori, la funzione illustrata la parola chiave di **afx\_msg**.  Come tutti i gestori aggiornamenti, accetta un unico argomento, un puntatore a un oggetto di `CCmdUI`.  
  
## Vedere anche  
 [Procedura: aggiornare oggetti dell'interfaccia utente](../mfc/how-to-update-user-interface-objects.md)