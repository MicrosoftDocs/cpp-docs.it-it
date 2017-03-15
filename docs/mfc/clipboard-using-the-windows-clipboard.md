---
title: "Appunti: utilizzo degli Appunti di Windows | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Appunti [C++], comandi"
  - "Appunti [C++], API Appunti di Windows"
  - "comandi degli Appunti"
  - "comandi degli Appunti, implementazione"
  - "comandi [C++], implementazione di modifiche"
  - "funzioni gestore comandi Taglia/Copia e Incolla"
  - "funzioni di gestione, comandi Taglia/Copia e Incolla"
  - "Appunti di Windows [C++]"
ms.assetid: 24415b42-9301-4a70-b69a-44c97918319f
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 6
---
# Appunti: utilizzo degli Appunti di Windows
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

In questo argomento viene descritto come utilizzare lo standard Windows Clipboard API in un'applicazione MFC.  
  
 La maggior parte delle applicazioni per Windows supporta le operazioni di taglia o copia di dati negli Appunti di Windows e l'operazione di incolla dati dagli Appunti.  I formati di dati degli Appunti variano tra le applicazioni.  Il framework supporta solo un numero limitato di formati degli Appunti per un numero limitato di classi.  In genere si implementeranno i comandi correlati agli Appunti — Taglia, Copia e Incolla — nel menu Modifica per la vista.  La libreria di classi definisce gli ID di comando per questi comandi: **ID\_EDIT\_CUT**, **ID\_EDIT\_COPY** e **ID\_EDIT\_PASTE**.  Vengono anche definiti i suggerimenti della linea dei messaggi.  
  
 [Messaggi e controlli in Framework](../mfc/messages-and-commands-in-the-framework.md) viene illustrato come gestire i comandi di menu nell'applicazione eseguendo il mapping del comando di menu a una funzione di gestione.  Finché l'applicazione non definisce le funzioni di gestione degli Appunti nel menu Modifica, restano disattivate.  Per scrivere funzioni di gestione per i comandi Taglia e Copia, implementare la selezione nell'applicazione.  Per scrivere una funzione di gestione per il comando Incolla, eseguire una query agli Appunti per verificare se contengono dati in un formato che l'applicazione può accettare.  Ad esempio, per attivare il comando Copia, è possibile scrivere un gestore simile al seguente:  
  
 [!code-cpp[NVC_MFCListView#2](../mfc/codesnippet/CPP/clipboard-using-the-windows-clipboard_1.cpp)]  
  
 I comandi Taglia, Copia e Incolla sono significativi solo in determinati contesti.  I comandi Taglia e Copia dovrebbero essere abilitati solo quando viene selezionato un elemento, mentre il comando Incolla solo quando è presente qualcosa negli Appunti.  È possibile fornire questo comportamento definendo le funzioni del gestore aggiornamento che abilitano o disabilitano questi controlli in base al contesto.  Per ulteriori informazioni, vedere [Come aggiornare gli oggetti dell'interfaccia utente](../mfc/how-to-update-user-interface-objects.md).  
  
 La libreria MFC fornisce supporto per gli Appunti per modifica di testo con le classi `CEditView` e `CEdit`.  Le classi OLE semplificano inoltre l'implementazione delle operazioni degli Appunti che includono elementi OLE.  Per ulteriori informazioni sulle classi OLE, vedere [Appunti: Utilizzare il meccanismo di Appunti OLE](../mfc/clipboard-using-the-ole-clipboard-mechanism.md).  
  
 Implementare altri comandi del menu Modifica, ad esempio Annulla \(**ID\_EDIT\_UNDO**\) e Ripristina \(**ID\_EDIT\_REDO**\), viene lasciato allo sviluppatore.  Se l'applicazione non supporta questi controlli, è possibile eliminarli dal file di risorse utilizzando gli editor di risorse di Visual C\+\+.  
  
## Scegliere l'argomento su cui visualizzare maggiori informazioni  
  
-   [Copia e Incolla di dati](../mfc/clipboard-copying-and-pasting-data.md)  
  
-   [Utilizzare il meccanismo di Appunti OLE](../mfc/clipboard-using-the-ole-clipboard-mechanism.md)  
  
## Vedere anche  
 [Appunti](../mfc/clipboard.md)