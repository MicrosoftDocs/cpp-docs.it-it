---
description: 'Altre informazioni su: classi finestra di dialogo comuni'
title: Classi di finestre di dialogo comuni
ms.date: 11/04/2016
helpviewer_keywords:
- dialog classes [MFC]
- dialog boxes [MFC], Windows common dialogs
- common dialog boxes [MFC], common dialog classes
- common dialog classes [MFC]
- MFC dialog boxes [MFC], Windows common dialogs
- Windows common dialogs [MFC]
- dialog classes [MFC], common
- common dialog boxes [MFC]
ms.assetid: 5c4f6443-896c-4b05-a7df-8169fdadc71d
ms.openlocfilehash: 8ab72407c9d709ef660976105d65901398ae5b5b
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97310681"
---
# <a name="common-dialog-classes"></a>Classi di finestre di dialogo comuni

Oltre alla classe [CDialog](reference/cdialog-class.md), MFC fornisce diverse classi derivate da `CDialog` che incapsulano le finestre di dialogo di uso comune, come illustrato nella tabella seguente. Le finestre di dialogo incapsulate sono denominate "finestre di dialogo comuni" e fanno parte della libreria della finestra di dialogo comune di Windows (COMMDLG.DLL). Le risorse del modello di finestra di dialogo e il codice per queste classi sono disponibili nelle finestre di dialogo comuni di Windows che fanno parte di Windows versioni 3,1 e successive.

### <a name="common-dialog-classes"></a>Classi di finestre di dialogo comuni

|Classe di finestre di dialogo derivate|Scopo|
|--------------------------|-------------|
|[CColorDialog](reference/ccolordialog-class.md)|Consente all'utente di selezionare i colori.|
|[CFileDialog](reference/cfiledialog-class.md)|Consente all'utente di selezionare un nome file da aprire o salvare.|
|[CFindReplaceDialog](reference/cfindreplacedialog-class.md)|Consente all'utente di avviare un'operazione di ricerca o sostituzione in un file di testo.|
|[CFontDialog](reference/cfontdialog-class.md)|Consente all'utente di specificare un tipo di carattere.|
|[CPrintDialog](reference/cprintdialog-class.md)|Consente all'utente di specificare le informazioni per un processo di stampa.|
|[CPrintDialogEx](reference/cprintdialogex-class.md)|Finestra delle proprietà di stampa di Windows.|

Per ulteriori informazioni sulle classi comuni della finestra di dialogo, vedere i singoli nomi di classe nelle informazioni di *riferimento su MFC*. MFC fornisce inoltre una serie di classi di finestre di dialogo standard utilizzate per OLE. Per informazioni su queste classi, vedere la classe di base, [COleDialog](reference/coledialog-class.md), nella Guida di *riferimento a MFC*.

Altre tre classi in MFC hanno caratteristiche simili a quelle della finestra di dialogo. Per informazioni sulle classi [CFormView](reference/cformview-class.md), [CRecordView](reference/crecordview-class.md)e [CDaoRecordView](reference/cdaorecordview-class.md), vedere le classi in riferimenti a *MFC*. Per informazioni sulla classe [CDialogBar](reference/cdialogbar-class.md), vedere [barre della finestra di dialogo](dialog-bars.md).

## <a name="see-also"></a>Vedi anche

[Finestre di dialogo](dialog-boxes.md)<br/>
[Utilizzo delle finestre di dialogo in MFC](life-cycle-of-a-dialog-box.md)<br/>
[Finestre di dialogo in OLE](dialog-boxes-in-ole.md)
