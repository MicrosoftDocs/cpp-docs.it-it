---
description: 'Altre informazioni su: procedura: personalizzare la barra di accesso rapido'
title: 'Procedura: personalizzare la barra di accesso rapido'
ms.date: 09/07/2019
helpviewer_keywords:
- quick access toolbar [MFC], customization
ms.assetid: 2554099b-0c89-4605-9249-31bf9cbcefe0
ms.openlocfilehash: cb7935f9e340734f8af0e7ec9197e139c30af894
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97330239"
---
# <a name="how-to-customize-the-quick-access-toolbar"></a>Procedura: personalizzare la barra di accesso rapido

La barra di accesso rapido (QAT) è una barra degli strumenti personalizzabile che contiene un set di controlli che sono visualizzati accanto al pulsante Applicazione o nelle schede di categoria. Nella figura seguente viene illustrata una barra di accesso rapido tradizionale.

![Barra di accesso rapido con barra multifunzione MFC](../mfc/media/quick_access_toolbar.png "Barra di accesso rapido con barra multifunzione MFC")

Per personalizzare la barra di accesso rapido, aprirla nella finestra **Proprietà** , modificarne i comandi e quindi visualizzare l'anteprima del controllo Ribbon.

### <a name="to-open-the-quick-access-toolbar-in-the-properties-window"></a>Per aprire la barra di accesso rapido nella finestra Proprietà

1. In Visual Studio scegliere **visualizzazione risorse** dal menu **Visualizza** .

1. In **visualizzazione risorse** fare doppio clic sulla risorsa barra multifunzione per visualizzarla nell'area di progettazione.

1. Nell'area di progettazione fare clic con il pulsante destro del mouse sul menu della barra di accesso rapido, quindi scegliere **Proprietà**.

## <a name="quick-access-toolbar-properties"></a>Proprietà della barra di accesso rapido

Nella tabella riportata di seguito vengono definite le proprietà della barra di accesso rapido.

|Proprietà|Definizione|
|--------------|----------------|
|QAT Position|Specifica la posizione della barra di accesso rapido all'avvio dell'applicazione. La posizione può essere **sopra** o **sotto** il controllo della barra multifunzione.|
|QAT Items|Specifica i comandi disponibili per la barra di accesso rapido.|

#### <a name="to-add-or-remove-commands-on-the-quick-access-toolbar"></a>Per aggiungere o rimuovere comandi dalla barra di accesso rapido

1. Nella finestra **Proprietà** fare clic su **qat Items**, quindi fare clic sul pulsante con i puntini di sospensione **(...)**.

1. Nella finestra di dialogo **Editor elementi QAT** usare i pulsanti **Aggiungi** e **Rimuovi** per modificare l'elenco dei comandi sulla barra di accesso rapido.

1. Se si desidera che un comando venga visualizzato sia nella barra di accesso rapido che nel menu della barra di accesso rapido, selezionare la casella accanto al comando. Se si desidera che il comando venga visualizzato solo nel menu, deselezionare la casella.

## <a name="previewing-the-ribbon"></a>Visualizzare un'anteprima della barra multifunzione

I comandi della barra di accesso rapido non vengono visualizzati nell'area di progettazione. Per visualizzarli, è necessario visualizzare un'anteprima della barra multifunzione o eseguire l'applicazione.

#### <a name="to-preview-the-ribbon-control"></a>Per visualizzare in anteprima il controllo Ribbon

- Sulla **barra degli strumenti Editor della barra multifunzione** fare clic su **test barra multifunzione**.

## <a name="see-also"></a>Vedi anche

[Finestra di progettazione della barra multifunzione (MFC)](ribbon-designer-mfc.md)
