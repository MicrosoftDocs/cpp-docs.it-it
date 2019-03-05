---
title: 'Procedura: Personalizzare la barra di accesso rapido'
ms.date: 11/19/2018
helpviewer_keywords:
- quick access toolbar [MFC], customization
ms.assetid: 2554099b-0c89-4605-9249-31bf9cbcefe0
ms.openlocfilehash: c53e405eafe310c0bfc03a916ab85181ae67a34b
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57300717"
---
# <a name="how-to-customize-the-quick-access-toolbar"></a>Procedura: Personalizzare la barra di accesso rapido

La barra di accesso rapido (QAT) è una barra degli strumenti personalizzabile che contiene un set di controlli che sono visualizzati accanto al pulsante Applicazione o nelle schede di categoria. Nella figura seguente viene illustrata una barra di accesso rapido tradizionale.

![Barra di accesso rapido della barra multifunzione MFC](../mfc/media/quick_access_toolbar.png "barra di accesso rapido della barra multifunzione MFC")

Per personalizzare la barra di accesso rapido, aprirla nella **proprietà** finestra, modificare i relativi comandi e quindi visualizzare in anteprima il controllo della barra multifunzione.

### <a name="to-open-the-quick-access-toolbar-in-the-properties-window"></a>Per aprire la barra di accesso rapido nella finestra Proprietà

1. In Visual Studio sul **View** menu, fare clic su **visualizzazione risorse**.

1. Nelle **visualizzazione risorse**, fare doppio clic sulla risorsa barra multifunzione per visualizzarla nell'area di progettazione.

1. Nell'area di progettazione, la barra di accesso rapido menu di scelta rapida e quindi fare clic su **proprietà**.

## <a name="quick-access-toolbar-properties"></a>Proprietà della barra di accesso rapido

Nella tabella riportata di seguito vengono definite le proprietà della barra di accesso rapido.

|Proprietà|Definizione|
|--------------|----------------|
|QAT Position|Specifica la posizione della barra di accesso rapido all'avvio dell'applicazione. La posizione può essere **sopra** oppure **seguito** il controllo della barra multifunzione.|
|QAT Items|Specifica i comandi disponibili per la barra di accesso rapido.|

#### <a name="to-add-or-remove-commands-on-the-quick-access-toolbar"></a>Per aggiungere o rimuovere comandi dalla barra di accesso rapido

1. Nel **delle proprietà** finestra, fare clic su **QAT Items**e quindi fare clic sul pulsante con puntini di sospensione **(...)** .

1. Nel **Editor elementi QAT** finestra di dialogo, utilizzare il **Add** e **Rimuovi** pulsanti per modificare l'elenco dei comandi sulla barra di accesso rapido.

1. Se si desidera che un comando venga visualizzato sia nella barra di accesso rapido che nel menu della barra di accesso rapido, selezionare la casella accanto al comando. Se si desidera che il comando venga visualizzato solo nel menu, deselezionare la casella.

## <a name="previewing-the-ribbon"></a>Visualizzare un'anteprima della barra multifunzione

I comandi della barra di accesso rapido non vengono visualizzati nell'area di progettazione. Per visualizzarli, è necessario visualizzare un'anteprima della barra multifunzione o eseguire l'applicazione.

#### <a name="to-preview-the-ribbon-control"></a>Per visualizzare in anteprima il controllo Ribbon

- Nel **sulla barra degli strumenti Editor Ribbon**, fare clic su **Test Ribbon**.

## <a name="see-also"></a>Vedere anche

[Finestra di progettazione della barra multifunzione (MFC)](../mfc/ribbon-designer-mfc.md)
