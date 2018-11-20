---
title: "Procedura: personalizzare il pulsante dell'applicazione"
ms.date: 11/19/2018
helpviewer_keywords:
- application button [MFC], customizing
ms.assetid: ebb11180-ab20-43df-a234-801feca9eb38
ms.openlocfilehash: ba29e9ad65e0bb1d2163e4051c7c7b53664d8817
ms.sourcegitcommit: 9e891eb17b73d98f9086d9d4bfe9ca50415d9a37
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/20/2018
ms.locfileid: "52175327"
---
# <a name="how-to-customize-the-application-button"></a>Procedura: personalizzare il pulsante dell'applicazione

Quando si fa clic sul pulsante dell'applicazione, viene visualizzato un menu dei comandi. In genere, il menu contiene i comandi correlati al file, ad esempio **aperto**, **salvare**, **stampa**, e **uscita**.

![Pulsante di applicazione della barra multifunzione MFC](../mfc/media/application_button.png "pulsante applicazione della barra multifunzione MFC")

Per personalizzare il pulsante dell'applicazione, aprire il file nei **proprietà** finestra, modificarne le proprietà e quindi visualizzare in anteprima il controllo della barra multifunzione.

### <a name="to-open-the-application-button-in-the-properties-window"></a>Per aprire il pulsante dell'applicazione nella finestra proprietà

1. In Visual Studio sul **View** menu, fare clic su **visualizzazione risorse**.

1. Nelle **visualizzazione risorse**, fare doppio clic sulla risorsa barra multifunzione per visualizzarla nell'area di progettazione.

1. Nell'area di progettazione, fare clic sul menu del pulsante dell'applicazione e quindi fare clic su **proprietà**.

## <a name="application-button-properties"></a>Proprietà dei pulsanti dell'applicazione

Nella tabella seguente definisce le proprietà del pulsante dell'applicazione.

|Proprietà|Definizione|
|--------------|----------------|
|**Pulsanti**|Contiene la raccolta di fino a tre pulsanti visualizzati nell'angolo in basso a destra del menu dell'applicazione.|
|**Caption**|Specifica il testo del controllo. A differenza di altri elementi della barra multifunzione, il pulsante dell'applicazione non viene visualizzato il testo della didascalia. Al contrario, il testo viene utilizzato per l'accessibilità.|
|**HDPI Image**|Specifica l'identificatore di elevata punti per pollice icona del pulsante dell'applicazione (HDPI). Quando viene eseguita su un monitor DPI elevato, l'applicazione **HDPI Image** viene usato al posto di **immagine**.|
|**HDPI Large Images**|Specifica l'identificatore delle immagini di grandi dimensioni DPI elevate. Quando viene eseguita su un monitor DPI elevato, l'applicazione **HDPI Large Images** viene usato al posto di **Large Images**.|
|**HDPI Small Images**|Specifica l'identificatore delle immagini piccole DPI elevate. Quando viene eseguita su un monitor DPI elevato, l'applicazione **HDPI Small Images** viene usato al posto di **Small Images**.|
|**ID**|Specifica l'identificatore del controllo.|
|**Immagine**|Specifica l'identificatore dell'icona del pulsante dell'applicazione. L'icona è una bitmap di 26, 26 32 bit con trasparenza alfa. Quando viene selezionato o vi passa sopra il pulsante dell'applicazione, vengono evidenziate le parti trasparenti dell'icona.|
|**Chiavi**|Specifica la stringa che viene visualizzata quando è abilitato lo spostamento di suggerimento di chiave. Suggerimento di chiave di navigazione è abilitata quando si preme ALT.|
|**Immagini di grandi dimensioni**|Specifica l'identificatore dell'immagine che contiene una serie di icone di 32 x 32. Le icone vengono usate per i pulsanti nella raccolta elementi principali.|
|**Elementi principali**|Contiene una raccolta di voci di menu visualizzati nel menu dell'applicazione.|
|**MRU Caption**|Specifica il testo visualizzato nel pannello dell'elenco dei recenti.|
|**Immagini di piccole dimensioni**|Specifica l'identificatore dell'immagine che contiene una serie di 16x16 icone. Le icone vengono usate per i pulsanti nella raccolta di pulsanti.|
|**Usare**|Abilita o disabilita Pannello di elenco dei recenti. Viene visualizzato il pannello di elenco recente nel menu dell'applicazione.|
|**Larghezza**|Specifica la larghezza in pixel del Pannello di elenco dei recenti.|

Il menu di applicazione non viene visualizzato nell'area di progettazione. Per visualizzare questo report, è necessario visualizzare l'anteprima della barra multifunzione o eseguire l'applicazione.

#### <a name="to-preview-the-ribbon-control"></a>Per visualizzare in anteprima il controllo Ribbon

- Nel **sulla barra degli strumenti Editor Ribbon**, fare clic su **Test Ribbon**.

## <a name="see-also"></a>Vedere anche

[Finestra di progettazione della barra multifunzione (MFC)](../mfc/ribbon-designer-mfc.md)
