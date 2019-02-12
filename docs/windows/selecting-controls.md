---
title: Selezione di controlli
ms.date: 11/04/2016
helpviewer_keywords:
- Dialog Editor [C++], selecting controls
- dominant controls
- dialog box controls [C++], selecting in editor
- controls [C++], selecting
- size, controls
- controls [C++], dominant
- controls [C++], removing from groups
- Dialog Editor [C++], dominant control
ms.assetid: 27f05450-4550-4229-9f4c-2c9e06365596
ms.openlocfilehash: a0a21942f6e2c37b96a7a704fadbb9bacc4761c8
ms.sourcegitcommit: f4be868c0d1d78e550fba105d4d3c993743a1f4b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/12/2019
ms.locfileid: "56149674"
---
# <a name="selecting-controls"></a>Selezione di controlli

Selezionare i controlli alla dimensione, allineare, spostare, copiare, o eliminarli e quindi completare l'operazione desiderata. Nella maggior parte dei casi, è necessario selezionare più di un controllo per utilizzare gli strumenti di ridimensionamento e l'allineamento della [sulla barra degli strumenti dell'Editor finestre](../windows/showing-or-hiding-the-dialog-editor-toolbar.md).

Quando viene selezionato un controllo, ha un bordo intorno a esso ombreggiato pieni (attivi) o (inattivo) vuoto "quadratini di ridimensionamento," quadratini che vengono visualizzate sul bordo di selezione. Quando si selezionano più controlli, al controllo dominante dispone di quadratini di ridimensionamento a tinta unita e tutti gli altri comandi selezionati sono quadratini vuoti.

Quando si esegue il ridimensionamento o allineare più controlli, il **dialogo** editor viene utilizzato il "controllo dominante" per determinare come gli altri controlli vengono ridimensionati o allineati. Per impostazione predefinita, il controllo dominante è il primo controllo selezionato.

Per informazioni sull'aggiunta di risorse a progetti gestiti, vedere [risorse nelle App Desktop](/dotnet/framework/resources/index) nel *manuale dello sviluppatore di .NET Framework*. Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [creazione di file di risorse per le app Desktop](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). Per informazioni sulla globalizzazione e localizzazione delle risorse nelle App gestite, vedere [globalizzazione e localizzazione di applicazioni .NET Framework](/dotnet/standard/globalization-localization/index).

## <a name="to-select-multiple-controls"></a>Per selezionare più controlli

1. Nel [finestra Casella degli strumenti](/visualstudio/ide/reference/toolbox), selezionare la **puntatore** dello strumento.

1. Trascinare il puntatore del mouse per disegnare una casella di selezione intorno ai controlli che si desidera selezionare nella finestra di dialogo.

   Quando si rilascia il pulsante del mouse, tutti i controlli all'interno e che si intersecano vengono selezionati la casella di selezione.

   \- oppure -

   Tenere premuto il **MAIUSC** la chiave e selezionare i controlli che si desidera includere nella selezione.

   \- oppure -

   Tenere premuto il **Ctrl** la chiave e selezionare i controlli che si desidera includere nella selezione.

## <a name="to-remove-a-control-from-a-group-of-selected-controls-or-to-add-a-control-to-a-group-of-selected-controls"></a>Per rimuovere un controllo da un gruppo di controlli selezionati o per aggiungere un controllo a un gruppo di controlli selezionati

1. Con un gruppo di controlli selezionati, tenere premuto il **MAIUSC** , selezionare il controllo che si desidera rimuovere o aggiungere alla selezione esistente.

   > [!NOTE]
   > Tenendo premuto il **Ctrl** chiave e selezione di un controllo all'interno di una selezione renderà che controllano il controllo dominante della selezione.

## <a name="to-specify-the-dominant-control"></a>Per specificare il controllo dominante

1. Tenere premuto il **Ctrl** chiave e fare clic sul controllo da usare per determinare la dimensione o la posizione di altri controlli *primo*.

> [!NOTE]
> Quadratini di ridimensionamento del controllo dominante sono pieni, mentre gli handle dei controlli subordinati sono vuoti. Ulteriore operazione di ridimensionamento o l'allineamento è basato sul controllo dominante.

## <a name="to-change-the-dominant-control"></a>Per modificare il controllo dominante

1. Facendo clic all'esterno di tutti i controlli attualmente selezionati, deselezionare la selezione corrente.

1. Ripetere la procedura precedente, selezionare prima un altro controllo.

## <a name="requirements"></a>Requisiti

Win32

## <a name="see-also"></a>Vedere anche

[Controlli delle finestre di dialogo](../windows/controls-in-dialog-boxes.md)<br/>
[Controlli](../mfc/controls-mfc.md)