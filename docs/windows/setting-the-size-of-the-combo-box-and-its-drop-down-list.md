---
title: Impostazione della dimensione di casella combinata e dell'elenco di riepilogo a discesa | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: conceptual
f1_keywords:
- vc.editors.dialog.combo
dev_langs:
- C++
helpviewer_keywords:
- combo boxes, sizing
- controls [C++], sizing
ms.assetid: 51fb53cf-9ddf-4a20-962e-8553938e55ee
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 8bd2a81c10855dfe1d409b34612956616018dab7
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46413457"
---
# <a name="setting-the-size-of-the-combo-box-and-its-drop-down-list"></a>Impostazione della dimensione di una casella combinata e dell'elenco a discesa

È possibile ridimensionare una casella combinata quando viene aggiunta alla finestra di dialogo. È anche possibile specificare le dimensioni della casella di riepilogo a discesa.

### <a name="to-size-a-combo-box"></a>Impostare le dimensioni di una casella combinata

1. Selezionare il controllo casella combinata nella finestra di dialogo.

   Inizialmente, solo i quadratini di ridimensionamento di sinistra e destra sono attivi.

2. Usare i quadratini di ridimensionamento per impostare la larghezza della casella combinata.

È anche possibile impostare la dimensione verticale della porzione elenco a discesa della casella combinata.

#### <a name="to-set-the-size-of-the-combo-box-drop-down-list"></a>Per impostare le dimensioni della casella combinata elenco della casella di riepilogo

1. Fare clic sul pulsante freccia in giù a destra della casella combinata.

   ![Freccia su una casella combinata in un progetto MFC](../mfc/media/vccomboboxarrow.gif "vcComboBoxArrow")

   La struttura del controllo cambia per mostrare le dimensioni della casella combinata con l'area di riepilogo a discesa elenco esteso.

2. Utilizzare il quadratino di ridimensionamento inferiore per modificare le dimensioni iniziali dell'area di riepilogo.

   ![Casella combinata&#45;ridimensionamento di casella in un progetto MFC](../mfc/media/vccomboboxsizing.gif "vcComboBoxSizing")

3. Fare clic sulla freccia giù per chiudere la parte dell'elenco a discesa della casella combinata.

Per informazioni sull'aggiunta di risorse a progetti gestiti, vedi [risorse nelle App Desktop](/dotnet/framework/resources/index) nel *manuale dello sviluppatore di .NET Framework*. Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [creazione di file di risorse per le app Desktop](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). Per informazioni sulla globalizzazione e localizzazione delle risorse nelle App gestite, vedere [globalizzazione e localizzazione di applicazioni .NET Framework](/dotnet/standard/globalization-localization/index).

## <a name="requirements"></a>Requisiti

Win32

## <a name="see-also"></a>Vedere anche

[Aggiunta di valori a un controllo casella combinata](../windows/adding-values-to-a-combo-box-control.md)<br/>
[Controlli delle finestre di dialogo](../windows/controls-in-dialog-boxes.md)<br/>
[Controlli](../mfc/controls-mfc.md)