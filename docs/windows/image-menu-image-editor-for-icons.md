---
title: "Menu Immagine (Editor di immagini per le icone) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.editors.bitmap"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Immagine (menu)"
ms.assetid: ac2b4d53-1919-4fd1-a0af-d3c085c45af2
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 4
---
# Menu Immagine (Editor di immagini per le icone)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Il menu Immagine, visualizzato solo quando l'editor di immagini è attivo, fornisce una serie di comandi per la modifica delle immagini, per la gestione delle tavolozze di colori e per l'impostazione delle opzioni della finestra dell'editor di immagini.  Quando si utilizzano icone e cursori, nel menu Immagine sono disponibili anche alcuni comandi per l'utilizzo di immagini per periferiche.  
  
 **Inverti colori**  
 Consente di invertire i colori.  Per ulteriori informazioni, vedere [Inversione dei colori in una selezione](../windows/inverting-the-colors-in-a-selection-image-editor-for-icons.md).  
  
 **Capovolgi orizzontalmente**  
 Consente di capovolgere orizzontalmente l'immagine o la selezione.  Per ulteriori informazioni, vedere [Capovolgimento di un'immagine](../mfc/flipping-an-image-image-editor-for-icons.md).  
  
 **Capovolgi verticalmente**  
 Consente di capovolgere verticalmente l'immagine o la selezione.  Per ulteriori informazioni, vedere [Capovolgimento di un'immagine](../mfc/flipping-an-image-image-editor-for-icons.md).  
  
 **Ruota di 90 gradi**  
 Consente di ruotare di 90 gradi l'immagine o la selezione.  Per ulteriori informazioni, vedere [Capovolgimento di un'immagine](../mfc/flipping-an-image-image-editor-for-icons.md).  
  
 **Visualizza finestra colori**  
 Consente di aprire la [finestra Colori](../windows/colors-window-image-editor-for-icons.md), in cui è possibile scegliere i colori da utilizzare per l'immagine.  Per ulteriori informazioni, vedere [Utilizzo dei colori](../mfc/working-with-color-image-editor-for-icons.md).  
  
 **Usa selezione come pennello**  
 Consente di creare un pennello personalizzato da un'area di un'immagine.  La selezione viene trasformata in un pennello personalizzato che distribuisce i colori della selezione in tutta l'immagine.  Lungo il percorso di trascinamento vengono infatti inserite copie della selezione,  il cui numero è inversamente proporzionale alla velocità del trascinamento.  Per ulteriori informazioni, vedere [Creazione di un pennello personalizzato](../mfc/creating-a-custom-brush-image-editor-for-icons.md).  
  
 **Copia e struttura selezione**  
 Consente di creare e strutturare una copia della selezione corrente.  Il colore di sfondo verrà escluso se è contenuto nella selezione corrente ed è stata selezionata l'opzione [Trasparente](../windows/choosing-a-transparent-or-opaque-background-image-editor-for-icons.md).  
  
 **Regola colori**  
 Consente di aprire la [finestra di dialogo Regola colori](../windows/custom-color-selector-dialog-box-image-editor-for-icons.md), in cui è possibile personalizzare i colori utilizzati per l'immagine.  Per ulteriori informazioni, vedere [Personalizzazione o modifica dei colori](../windows/customizing-or-changing-colors-image-editor-for-icons.md).  
  
 **Carica tavolozza**  
 Consente di aprire la [finestra di dialogo Carica tavolozza](../windows/load-palette-colors-dialog-box-image-editor-for-icons.md), in cui è possibile caricare i colori di una tavolozza precedentemente salvata in un file PAL.  
  
 **Salva tavolozza**  
 Consente di salvare i colori della tavolozza in un file PAL.  
  
 **Opaco**  
 Se selezionata, questa opzione consente di rendere opaca la selezione corrente.  Se deselezionata, consente di rendere la selezione corrente trasparente.  Per ulteriori informazioni, vedere [Selezione di uno sfondo opaco o trasparente](../windows/choosing-a-transparent-or-opaque-background-image-editor-for-icons.md).  
  
 **Editor barra degli strumenti**  
 Consente di aprire la [finestra di dialogo Nuova risorsa barra degli strumenti](../mfc/new-toolbar-resource-dialog-box.md).  
  
 **Impostazioni griglia**  
 Consente di aprire la [finestra di dialogo Impostazioni griglia](../mfc/grid-settings-dialog-box-image-editor-for-icons.md), in cui è possibile specificare le griglie per l'immagine.  
  
 **Nuovo tipo di immagine**  
 Consente di aprire la [finestra di dialogo Tipo nuova immagine \<periferica\>](../mfc/new-device-image-type-dialog-box-image-editor-for-icons.md).  Una singola risorsa icona può contenere più immagini di dimensioni diverse. Windows è in grado di utilizzare l'icona delle dimensioni appropriate a seconda di come verrà visualizzata.  Un nuovo tipo di periferica non modifica le dimensioni dell'icona, bensì crea una nuova immagine all'interno dell'icona.  Si applica soltanto a icone e cursori.  
  
 **Tipi di immagine icona\/cursore correnti**  
 Consente di aprire un sottomenu contenente le prime nove immagini icona o cursore disponibili.  L'ultimo comando del sottomenu **Altro...** consente di aprire la [finestra di dialogo Apri immagine \<periferica\>](../mfc/open-device-image-dialog-box-image-editor-for-icons.md).  
  
 **Elimina tipo di immagine**  
 Consente di eliminare l'immagine della periferica selezionata.  
  
 **Strumenti**  
 Consente di visualizzare un sottomenu contenente tutti gli strumenti disponibili sulla [barra degli strumenti dell'editor di immagini](../mfc/toolbar-image-editor-for-icons.md).  
  
## Requisiti  
 Nessuno  
  
## Vedere anche  
 [Accelerator Keys](../mfc/accelerator-keys-image-editor-for-icons.md)   
 [Image Editor for Icons](../mfc/image-editor-for-icons.md)