---
title: "Procedura: personalizzare il pulsante dell'applicazione | Documenti Microsoft"
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- application button [MFC], customizing
ms.assetid: ebb11180-ab20-43df-a234-801feca9eb38
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 828886e6a5c4891e1fd7e1d820ee00542e052cc2
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="how-to-customize-the-application-button"></a>Procedura: personalizzare il pulsante dell'applicazione
Quando si fa clic sul pulsante di applicazione, viene visualizzato un menu dei comandi. In genere, il menu contiene i comandi relativi a file, ad esempio **aprire**, **salvare**, **stampa**, e **uscita**.  
  
 ![Pulsante applicazione della barra multifunzione MFC](../mfc/media/application_button.png "application_button")  
  
 Per personalizzare il pulsante dell'applicazione, aprirlo nel **proprietà** finestra, modificarne le proprietà e quindi visualizzare in anteprima il controllo della barra multifunzione.  
  
### <a name="to-open-the-application-button-in-the-properties-window"></a>Per aprire il pulsante dell'applicazione nella finestra proprietà  
  
1.  In Visual Studio, sul **vista** menu, fare clic su **visualizzazione risorse**.  
  
2.  In **visualizzazione risorse**, fare doppio clic sulla risorsa barra multifunzione per visualizzarla nell'area di progettazione.  
  
3.  Nell'area di progettazione, fare doppio clic sul menu pulsante applicazione e quindi fare clic su **proprietà**.  
  
## <a name="application-button-properties"></a>Proprietà pulsante dell'applicazione  
 Nella tabella seguente definisce le proprietà del pulsante di applicazione.  
  
|Proprietà|Definizione|  
|--------------|----------------|  
|**Pulsanti**|Contiene la raccolta di fino a tre pulsanti da visualizzare nell'angolo in basso a destra del menu dell'applicazione.|  
|**Caption**|Specifica il testo del controllo. A differenza di altri elementi della barra multifunzione, il pulsante dell'applicazione non viene visualizzato il testo della didascalia. Al contrario, il testo viene utilizzato per l'accessibilità.|  
|**HDPI Image**|Specifica l'identificatore di elevata punti per pollice icona del pulsante dell'applicazione (HDPI). Quando l'applicazione viene eseguita su un monitor DPI elevato, **HDPI Image** viene usata invece di **immagine**.|  
|**HDPI Large Images**|Specifica l'identificatore delle immagini di grandi dimensioni DPI elevate. Quando l'applicazione viene eseguita su un monitor DPI elevato, **HDPI Large Images** viene usata invece di **Large Images**.|  
|**HDPI Small Images**|Specifica l'identificatore delle immagini piccole DPI elevate. Quando l'applicazione viene eseguita su un monitor DPI elevato, **HDPI Small Images** viene usata invece di **Small Images**.|  
|**ID**|Specifica l'identificatore del controllo.|  
|**Immagine**|Specifica l'identificatore dell'icona del pulsante dell'applicazione. L'icona è una 26x26 bitmap 32 bit con trasparenza alfa. Le aree trasparenti dell'icona vengono evidenziate quando il pulsante dell'applicazione viene scelto al passaggio del mouse.|  
|**Chiavi**|Specifica la stringa che viene visualizzata quando è abilitato lo spostamento di suggerimento di chiave. Suggerimento di chiave di navigazione è abilitata quando si preme ALT.|  
|**Immagini di grandi dimensioni**|Specifica l'identificatore dell'immagine che contiene una serie di icone di 32 x 32. Le icone vengono utilizzate per i pulsanti nella raccolta di elementi principali.|  
|**Elementi principali**|Contiene una raccolta di voci di menu visualizzati nel menu dell'applicazione.|  
|**MRU Caption**|Specifica il testo visualizzato nel riquadro elenco recente.|  
|**Immagini di piccole dimensioni**|Specifica l'identificatore dell'immagine che contiene una serie di 16x16 icone. Le icone vengono utilizzate per i pulsanti nella raccolta di pulsanti.|  
|**Utilizzo**|Abilita o disabilita il pannello elenco recente. Viene visualizzato il pannello di elenco recente nel menu dell'applicazione.|  
|**Larghezza**|Specifica la larghezza in pixel, del riquadro elenco recente.|  
  
 Il menu di applicazione non viene visualizzato nell'area di progettazione. Per visualizzarlo, è necessario visualizzare in anteprima la barra multifunzione o eseguire l'applicazione.  
  
#### <a name="to-preview-the-ribbon-control"></a>Per visualizzare in anteprima il controllo Ribbon  
  
-   Nel **barra degli strumenti Editor Ribbon**, fare clic su **Test Ribbon**.  
  
## <a name="see-also"></a>Vedere anche  
 [Finestra di progettazione della barra multifunzione (MFC)](../mfc/ribbon-designer-mfc.md)

