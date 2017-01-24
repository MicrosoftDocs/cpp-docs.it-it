---
title: "Changing the Font of Text on an Image (Image Editor for Icons) | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
  - "C++"
helpviewer_keywords: 
  - "fonts, changing on an image"
ms.assetid: b8849d40-d401-4e06-808f-e615cb2bee3b
caps.latest.revision: 8
caps.handback.revision: 4
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Changing the Font of Text on an Image (Image Editor for Icons)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Di seguito è riportato un esempio di come:  
  
-   Aggiungere testo a un'icona in un'applicazione Windows  
  
-   Modificare il tipo di carattere del testo  
  
### Per modificare il carattere del testo in un'immagine  
  
1.  Creare un'applicazione Windows Forms C\#.  Per informazioni dettagliate, vedere [Creazione di un progetto applicazione Windows](http://msdn.microsoft.com/it-it/b2f93fed-c635-4705-8d0e-cf079a264efa).  Per impostazione predefinita il [modello Applicazione Windows Forms](http://msdn.microsoft.com/it-it/1babdebf-ab3f-4a64-a608-98499a5b9cea) aggiunge un file chiamato app.ico al progetto.  
  
2.  In Esplora soluzioni fare doppio clic sul file app.ico.  Verrà visualizzato l'[editor immagini](../mfc/image-editor-for-icons.md).  
  
3.  Selezionare **Strumenti** dal menu **Immagine**, quindi selezionare **Strumento Testo**.  Verrà visualizzata la [finestra di dialogo Strumento testo](../mfc/text-tool-dialog-box-image-editor-for-icons.md).  
  
4.  Nella finestra di dialogo Strumento testo, digitare `C++` nell'area vuota di testo  Questo testo verrà visualizzato in una finestra ridimensionabile situata nell'angolo superiore sinistro di app.icom, nell'Editor di immagini.  
  
5.  Nell'Editor di immagini, trascinare la finestra ridimensionabile al centro di app.ico, per migliorare la leggibilità del testo.  
  
6.  Nella finestra di dialogo Strumento Testo, scegliere il pulsante **Tipo di carattere**.  Verrà visualizzata la [finestra di dialogo Carattere strumento Testo](../mfc/text-tool-font-dialog-box-image-editor-for-icons.md).  
  
7.  Nella finestra di dialogo Carattere strumento testo, selezionare **Times New Roman** dall'elenco dei caratteri disponibili elencato nella casella di riepilogo **Tipo di carattere**.  
  
8.  Selezionare **Grassetto** dall'elenco degli stili di carattere disponibili nella casella di riepilogo **Stile di carattere**.  
  
9. Selezionare **10** dall'elenco di dimensioni in punti disponibili nella casella di riepilogo **Dimensioni**.  
  
10. Scegliere **OK**.  Verrà chiusa la finestra di dialogo Carattere strumento Testo e al testo verranno applicate le nuove impostazioni del tipo di carattere.  
  
11. Nella finestra di dialogo Strumento Testo, scegliere il pulsante **Chiudi**.  La finestra ridimensionabile che si trova intorno al testo scomparirà dall'Editor di immagini.  
  
## Vedere anche  
 [Editing Graphical Resources](../mfc/editing-graphical-resources-image-editor-for-icons.md)   
 [Toolbar](../mfc/toolbar-image-editor-for-icons.md)