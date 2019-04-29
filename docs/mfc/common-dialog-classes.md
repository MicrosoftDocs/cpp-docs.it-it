---
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
ms.openlocfilehash: 5efd885421d8c73c191e2a5603f37d1df85a5168
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62388527"
---
# <a name="common-dialog-classes"></a>Classi di finestre di dialogo comuni

Oltre alla classe [CDialog](../mfc/reference/cdialog-class.md), MFC fornisce diverse classi derivate da `CDialog` che incapsulano le finestre di dialogo di uso comune, come illustrato nella tabella seguente. Le finestre di dialogo incapsulate sono denominate "finestre di dialogo comuni" e fanno parte della libreria di finestra di dialogo comune Windows (COMMDLG. DLL). Le risorse del modello di finestra di dialogo e codice per queste classi sono incluse in di Windows comuni finestre di dialogo che fanno parte di Windows 3.1 e versioni successive.

### <a name="common-dialog-classes"></a>Classi di finestre di dialogo comuni

|Classe di finestre derivate|Scopo|
|--------------------------|-------------|
|[CColorDialog](../mfc/reference/ccolordialog-class.md)|Consente di selezionare i colori utente.|
|[CFileDialog](../mfc/reference/cfiledialog-class.md)|Consente a utenti di selezionare un nome di file per aprire o salvare.|
|[CFindReplaceDialog](../mfc/reference/cfindreplacedialog-class.md)|Consente utente di avviare una ricerca o sostituzione in un file di testo.|
|[CFontDialog](../mfc/reference/cfontdialog-class.md)|Consente a utenti di specificare un tipo di carattere.|
|[CPrintDialog](../mfc/reference/cprintdialog-class.md)|Consente a utenti di specificare le informazioni per un processo di stampa.|
|[CPrintDialogEx](../mfc/reference/cprintdialogex-class.md)|Finestra delle proprietà di stampa di Windows.|

Per altre informazioni sulle classi di finestra di dialogo comuni, vedere i nomi delle singole classi nel *riferimenti alla libreria MFC*. MFC fornisce anche una serie di classi di finestra di dialogo standard usato per OLE. Per informazioni su queste classi, vedere la classe di base [COleDialog](../mfc/reference/coledialog-class.md), nella *riferimento MFC*.

Altre tre classi in MFC presentano caratteristiche simili a finestra di dialogo. Per informazioni sulle classi [CFormView](../mfc/reference/cformview-class.md), [CRecordView](../mfc/reference/crecordview-class.md), e [CDaoRecordView](../mfc/reference/cdaorecordview-class.md), vedere le classi nel *riferimenti alla libreria MFC*. Per informazioni sulla classe [CDialogBar](../mfc/reference/cdialogbar-class.md), vedere [barre di finestra di dialogo](../mfc/dialog-bars.md).

## <a name="see-also"></a>Vedere anche

[Finestre di dialogo](../mfc/dialog-boxes.md)<br/>
[Ciclo di vita di una finestra di dialogo](../mfc/life-cycle-of-a-dialog-box.md)<br/>
[Finestre di dialogo in OLE](../mfc/dialog-boxes-in-ole.md)
