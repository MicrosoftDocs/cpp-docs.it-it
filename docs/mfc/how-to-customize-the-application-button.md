---
title: "Procedura: Personalizzare il pulsante dell'applicazione"
ms.date: 09/07/2019
helpviewer_keywords:
- application button [MFC], customizing
ms.assetid: ebb11180-ab20-43df-a234-801feca9eb38
ms.openlocfilehash: 3a1d1625e80e6c6f4440864629a5123bed5744c7
ms.sourcegitcommit: 3caf5261b3ea80d9cf14038c116ba981d655cd13
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/11/2019
ms.locfileid: "70907795"
---
# <a name="how-to-customize-the-application-button"></a>Procedura: Personalizzare il pulsante dell'applicazione

Quando si fa clic sul pulsante applicazione, viene visualizzato un menu di comandi. In genere, il menu contiene comandi correlati ai file, ad esempio **apertura**, **salvataggio**, **stampa**e **uscita**.

![Pulsante applicazione della barra multifunzione MFC](../mfc/media/application_button.png "Pulsante applicazione della barra multifunzione MFC")

Per personalizzare il pulsante dell'applicazione, aprirlo nella finestra **Proprietà** (in **visualizzazione risorse**), modificarne le proprietà e quindi visualizzare l'anteprima del controllo Ribbon.

### <a name="to-open-the-application-button-in-the-properties-window"></a>Per aprire il pulsante dell'applicazione nella Finestra Proprietà

1. In Visual Studio scegliere **visualizzazione risorse**dal menu **Visualizza** .

1. In **visualizzazione risorse**fare doppio clic sulla risorsa barra multifunzione per visualizzarla nell'area di progettazione.

1. Nell'area di progettazione fare clic con il pulsante destro del mouse sul menu del pulsante applicazione, quindi scegliere **Proprietà**.

## <a name="application-button-properties"></a>Proprietà del pulsante dell'applicazione

La tabella seguente definisce le proprietà del pulsante applicazione.

|Proprietà|Definizione|
|--------------|----------------|
|**Pulsanti**|Contiene la raccolta di un massimo di tre pulsanti visualizzati nell'angolo in basso a destra del menu dell'applicazione.|
|**Caption**|Specifica il testo del controllo. A differenza di altri elementi della barra multifunzione, il pulsante dell'applicazione non Visualizza il testo della didascalia. Il testo viene invece usato per l'accessibilità.|
|**Immagine di HDPI**|Specifica l'identificatore dell'icona del pulsante dell'applicazione HDPI (punti per pollice). Quando l'applicazione viene eseguita in un monitor DPI elevato, viene utilizzata l' **immagine HDPI** anziché **Image**.|
|**HDPI immagini di grandi dimensioni**|Specifica l'identificatore delle immagini large con valori DPI alti. Quando l'applicazione viene eseguita in un monitor con valori DPI alti, vengono utilizzate **Immagini HDPI di grandi dimensioni** anziché **Immagini di grandi dimensioni**.|
|**HDPI piccole immagini**|Specifica l'identificatore delle immagini con valori DPI alti. Quando l'applicazione viene eseguita in un monitor con valori DPI alti, viene utilizzata la **HDPI di piccole dimensioni** anziché le **Immagini di piccole dimensioni**.|
|**ID**|Specifica l'identificatore del controllo.|
|**Immagine**|Specifica l'identificatore dell'icona del pulsante dell'applicazione. L'icona è una bitmap 26x26 a 32 bit con trasparenza alfa. Le parti trasparenti dell'icona vengono evidenziate quando si fa clic sul pulsante dell'applicazione o si passa il mouse su di esso.|
|**Chiavi**|Specifica la stringa visualizzata quando è abilitata la navigazione con la descrizione comando. La navigazione con suggerimento chiave è abilitata quando si preme ALT.|
|**Immagini di grandi dimensioni**|Specifica l'identificatore dell'immagine che contiene una serie di icone 32x32. Le icone vengono usate dai pulsanti nella raccolta Items principale.|
|**Elementi principali**|Contiene una raccolta di voci di menu visualizzate nel menu dell'applicazione.|
|**Didascalia MRU**|Specifica il testo visualizzato nel pannello elenco recente.|
|**Immagini piccole**|Specifica l'identificatore dell'immagine che contiene una serie di icone 16x16. Le icone vengono usate dai pulsanti nella raccolta Buttons.|
|**Uso**|Abilita o Disabilita il pannello elenco recente. Il pannello elenco recente viene visualizzato nel menu dell'applicazione.|
|**Width**|Specifica la larghezza in pixel del pannello elenco recente.|

Il menu applicazione non viene visualizzato nell'area di progettazione. Per visualizzarlo, è necessario visualizzare in anteprima la barra multifunzione o eseguire l'applicazione.

#### <a name="to-preview-the-ribbon-control"></a>Per visualizzare in anteprima il controllo Ribbon

- Sulla **barra degli strumenti Editor della barra multifunzione**fare clic su **test barra multifunzione**.

## <a name="see-also"></a>Vedere anche

[Finestra di progettazione della barra multifunzione (MFC)](../mfc/ribbon-designer-mfc.md)
