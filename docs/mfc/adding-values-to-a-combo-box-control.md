---
title: "Adding Values to a Combo Box Control | Microsoft Docs"
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
  - "vc.editors.dialog.combo"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "combo boxes [C++], Data property"
  - "controls [Visual Studio], testing values in combo boxes"
  - "combo boxes [C++], adding values"
  - "combo boxes [C++], previewing values"
  - "controls [C++], testing values in combo boxes"
  - "Data property"
  - "combo boxes [C++], testing values"
ms.assetid: 22a78f98-fada-48b3-90d8-7fa0d8e4de51
caps.latest.revision: 9
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Adding Values to a Combo Box Control
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

È possibile aggiungere valori a un controllo casella combinata, a condizione che l'editor finestre sia aperto.  
  
> [!TIP]
>  Si consiglia di aggiungere tutti i valori alla casella combinata *prima* di ridimensionare la casella dell'Editor finestre. In caso contrario, il testo da visualizzare nel controllo casella combinata potrebbe risultare troncato.  
  
#### Per immettere valori in un controllo casella combinata  
  
1.  Fare clic sul controllo casella combinata.  
  
2.  Nella [finestra Proprietà](../Topic/Properties%20Window.md) scorrere verso il basso fino a visualizzare la proprietà **Data**.  
  
    > [!NOTE]
    >  Se le proprietà visualizzate sono raggruppate per tipo, la proprietà **Data** verrà visualizzata tra le proprietà **Varie**.  
  
3.  Fare clic nell'area del valore relativa alla proprietà **Data** e digitare i valori di dati, separati da punti e virgola.  
  
    > [!NOTE]
    >  Non inserire spazi tra i valori, poiché gli spazi interferiscono con l'ordinamento alfabetico nell'elenco a discesa.  
  
4.  Quando tutti i valori sono stati aggiunti, premere **Invio**.  
  
 Per ulteriori informazioni sull'ingrandimento dell'area a discesa di una casella combinata, vedere [Impostazione della dimensione di una casella combinata e dell'elenco a discesa](../mfc/setting-the-size-of-the-combo-box-and-its-drop-down-list.md).  
  
> [!NOTE]
>  Non è possibile aggiungere valori ai progetti Win32 mediante questa procedura, poiché la proprietà **Data** non è disponibile per i progetti Win32.  Poiché i progetti Win32 non dispongono di librerie che aggiungono questa funzionalità, in un progetto Win32 è necessario aggiungere valori a una casella combinata a livello di codice.  
  
#### Per verificare l'aspetto dei valori in una casella combinata  
  
1.  Dopo avere immesso i valori nella proprietà **Data**, scegliere il pulsante **Test** sulla [barra degli strumenti dell'editor finestre](../mfc/showing-or-hiding-the-dialog-editor-toolbar.md).  
  
     Scorrere verso il basso l'intero elenco di valori.  I valori vengono visualizzati esattamente come sono stati digitati nella proprietà **Data** della finestra Proprietà.  Non viene effettuato alcun controllo ortografico o delle lettere maiuscole e minuscole.  
  
     Premere ESC per tornare all'editor finestre.  
  
 Per informazioni sull'aggiunta di risorse a progetti gestiti, vedere [Risorse nelle applicazioni](../Topic/Resources%20in%20Desktop%20Apps.md) nella *Guida per gli sviluppatori di .NET Framework.* Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, sulla visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [Procedura dettagliata: localizzazione di Windows Form](http://msdn.microsoft.com/it-it/9a96220d-a19b-4de0-9f48-01e5d82679e5) e [Walkthrough: Using Resources for Localization with ASP.NET](../Topic/Walkthrough:%20Using%20Resources%20for%20Localization%20with%20ASP.NET.md).  
  
### Requisiti  
 Win32  
  
## Vedere anche  
 [Controls in Dialog Boxes](../mfc/controls-in-dialog-boxes.md)   
 [Controlli](../mfc/controls-mfc.md)