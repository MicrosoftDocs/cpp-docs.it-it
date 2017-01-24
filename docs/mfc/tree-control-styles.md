---
title: "Stili del controllo Tree | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "TVS_SINGLEEXPAND"
  - "TVS_LINESATROOT"
  - "TVS_HASBUTTONS"
  - "TVS_NOTOOLTIPS"
  - "TVS_HASLINES"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CTreeCtrl (classe), stili"
  - "stili, CTreeCtrl"
  - "stili, struttura ad albero (controllo)"
  - "struttura ad albero (controlli), stili"
  - "TVS_EDITLABELS"
  - "TVS_HASBUTTONS"
  - "TVS_HASLINES"
  - "TVS_LINESATROOT"
  - "TVS_NOTOOLTIPS"
  - "TVS_SINGLEEXPAND"
ms.assetid: f43faebd-a355-479e-888a-bf0673d5e1b4
caps.latest.revision: 11
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Stili del controllo Tree
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Gli stili del controllo struttura ad albero \([Problemi](../mfc/reference/ctreectrl-class.md)\) determinano gli aspetti di un controllo struttura ad albero.  Impostare gli stili di iniziale quando si crea il controllo struttura ad albero.  È possibile recuperare e modificare gli stili dopo aver creato il controllo struttura ad albero tramite le funzioni di Windows [SetWindowLong](http://msdn.microsoft.com/library/windows/desktop/ms633591) e di [GetWindowLong](http://msdn.microsoft.com/library/windows/desktop/ms633584), specificare **GWL\_STYLE** per il parametro di `nIndex`.  Per un elenco completo degli stili, vedere [Stili finestra di controllo di visualizzazione ad albero](http://msdn.microsoft.com/library/windows/desktop/bb760013) in [!INCLUDE[winSDK](../atl/includes/winsdk_md.md)].  
  
 Lo stile di **TVS\_HASLINES** migliora la rappresentazione grafica della gerarchia di un controllo struttura ad albero trascinando le linee che collegano elementi figlio all'elemento padre corrispondente.  Questo stile non collega gli elementi nella radice della gerarchia.  A tale scopo, è necessario combinare gli stili di **TVS\_LINESATROOT** e di **TVS\_HASLINES**.  
  
 L'utente può espandere o comprimere l'elenco di un elemento padre degli elementi figlio facendo doppio clic sull'elemento padre.  Un controllo struttura ad albero che presenta lo stile di **TVS\_SINGLEEXPAND** causa l'elemento selezionati per espandersi e l'elemento che venga deselezionata per comprimere.  Se si utilizza il mouse a un singolo clic sull'elemento selezionato e l'elemento verrà chiuso, verrà espanso.  Se l'elemento selezionato singolo viene fatto clic su quando è aperto, sarà compressa.  
  
 Un controllo struttura ad albero che presenta lo stile di **TVS\_HASBUTTONS** aggiunge un lato del pulsante a sinistra di ciascun elemento padre.  L'utente può fare clic per espandere o comprimere gli elementi figlio come alternativa a fare doppio clic sull'elemento padre.  **TVS\_HASBUTTONS** non aggiungere pulsanti a elementi alla radice della gerarchia.  A tale scopo, è necessario combinare **TVS\_HASLINES**, **TVS\_LINESATROOT** e **TVS\_HASBUTTONS**.  
  
 Lo stile di **TVS\_EDITLABELS** consente all'utente di modificare le etichette degli elementi del controllo struttura ad albero.  Per ulteriori informazioni sulle etichette di modifica, vedere più avanti [Modifica dell'etichetta del controllo struttura ad albero](../mfc/tree-control-label-editing.md) in questo argomento.  
  
 Lo stile di **TVS\_NOTOOLTIPS** disabilita la funzionalità automatica della descrizione controlli di visualizzazione ad albero.  Questa funzionalità viene automaticamente visualizzata una descrizione comandi, contenente il titolo dell'elemento sotto il cursore del mouse, se l'intero titolo non è attualmente visibile.  
  
## Vedere anche  
 [Utilizzo di CTreeCtrl](../mfc/using-ctreectrl.md)   
 [Controlli](../mfc/controls-mfc.md)