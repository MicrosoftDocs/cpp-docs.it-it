---
title: 'Procedura: personalizzare la barra di accesso rapido | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- quick access toolbar [MFC], customization
ms.assetid: 2554099b-0c89-4605-9249-31bf9cbcefe0
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: f67d46640a1a4fadc6750ca34b05910902679440
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="how-to-customize-the-quick-access-toolbar"></a>Procedura: personalizzare la barra di accesso rapido
La barra di accesso rapido (QAT) è una barra degli strumenti personalizzabile che contiene un set di controlli che sono visualizzati accanto al pulsante Applicazione o nelle schede di categoria. Nella figura seguente viene illustrata una barra di accesso rapido tradizionale.  
  
 ![Barra di accesso rapido della barra multifunzione MFC](../mfc/media/quick_access_toolbar.png "quick_access_toolbar")  
  
 Per personalizzare la barra di accesso rapido, aprirlo nel **proprietà** finestra, modificare i relativi comandi e quindi visualizzare in anteprima il controllo della barra multifunzione.  
  
### <a name="to-open-the-quick-access-toolbar-in-the-properties-window"></a>Per aprire la barra di accesso rapido nella finestra Proprietà  
  
1.  In Visual Studio, sul **vista** menu, fare clic su **visualizzazione risorse**.  
  
2.  In **visualizzazione risorse**, fare doppio clic sulla risorsa barra multifunzione per visualizzarla nell'area di progettazione.  
  
3.  Nell'area di progettazione, la barra di accesso rapido menu di scelta rapida e quindi fare clic su **proprietà**.  
  
## <a name="quick-access-toolbar-properties"></a>Proprietà della barra di accesso rapido  
 Nella tabella riportata di seguito vengono definite le proprietà della barra di accesso rapido.  
  
|Proprietà|Definizione|  
|--------------|----------------|  
|QAT Position|Specifica la posizione della barra di accesso rapido all'avvio dell'applicazione. La posizione può essere **sopra** o **seguito** il controllo della barra multifunzione.|  
|QAT Items|Specifica i comandi disponibili per la barra di accesso rapido.|  
  
#### <a name="to-add-or-remove-commands-on-the-quick-access-toolbar"></a>Per aggiungere o rimuovere comandi dalla barra di accesso rapido  
  
1.  Nel **proprietà** finestra, fare clic su **QAT Items**, quindi fare clic sul pulsante con puntini di sospensione **(...)** .  
  
2.  Nel **Editor elementi QAT** la finestra di dialogo, utilizzare il **Aggiungi** e **rimuovere** pulsanti per modificare l'elenco di comandi sulla barra di accesso rapido.  
  
3.  Se si desidera che un comando venga visualizzato sia nella barra di accesso rapido che nel menu della barra di accesso rapido, selezionare la casella accanto al comando. Se si desidera che il comando venga visualizzato solo nel menu, deselezionare la casella.  
  
## <a name="previewing-the-ribbon"></a>Visualizzare un'anteprima della barra multifunzione  
 I comandi della barra di accesso rapido non vengono visualizzati nell'area di progettazione. Per visualizzarli, è necessario visualizzare un'anteprima della barra multifunzione o eseguire l'applicazione.  
  
#### <a name="to-preview-the-ribbon-control"></a>Per visualizzare in anteprima il controllo Ribbon  
  
-   Nel **barra degli strumenti Editor Ribbon**, fare clic su **Test Ribbon**.  
  
## <a name="see-also"></a>Vedere anche  
 [Finestra di progettazione della barra multifunzione (MFC)](../mfc/ribbon-designer-mfc.md)

