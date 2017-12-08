---
title: Classi di finestre di dialogo comuni | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
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
caps.latest.revision: "9"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 50adbc6faa802802c36e18c614992341def06331
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="common-dialog-classes"></a>Classi di finestre di dialogo comuni
Oltre alla classe [CDialog](../mfc/reference/cdialog-class.md), MFC fornisce diverse classi derivate da `CDialog` che incapsulano le finestre di dialogo di uso comune, come illustrato nella tabella seguente. Le finestre di dialogo incapsulate vengono chiamate "finestre di dialogo comuni" e fanno parte della libreria di finestra di dialogo comune Windows (COMMDLG. DLL). Le risorse modello di finestra di dialogo e codice di queste classi sono incluse nelle finestre delle finestre di dialogo comuni che fanno parte di Windows 3.1 e versioni successive.  
  
### <a name="common-dialog-classes"></a>Classi di finestre di dialogo comuni  
  
|Classe di finestre derivate|Scopo|  
|--------------------------|-------------|  
|[CColorDialog](../mfc/reference/ccolordialog-class.md)|Consente di selezionare i colori utente.|  
|[CFileDialog](../mfc/reference/cfiledialog-class.md)|Consente di selezionare un nome di file per aprire o salvare utente.|  
|[CFindReplaceDialog.](../mfc/reference/cfindreplacedialog-class.md)|Consente di avviare una ricerca o sostituzione in un file di testo utente.|  
|[CFontDialog](../mfc/reference/cfontdialog-class.md)|Consente di specificare un tipo di carattere utente.|  
|[CPrintDialog](../mfc/reference/cprintdialog-class.md)|Consente di specificare le informazioni per un processo di stampa utente.|  
|[CPrintDialogEx](../mfc/reference/cprintdialogex-class.md)|Finestra delle proprietà di stampa di Windows 2000.|  
  
 Per ulteriori informazioni sulle classi di finestra di dialogo comuni, vedere i singoli nomi delle classi nel *riferimenti alla libreria MFC*. MFC fornisce inoltre una serie di classi di finestra di dialogo standard utilizzate per OLE. Per informazioni su queste classi, vedere la classe base, [COleDialog](../mfc/reference/coledialog-class.md)nella *riferimenti alla libreria MFC*.  
  
 Tre altre classi MFC hanno caratteristiche della finestra di dialogo. Per informazioni sulle classi [CFormView](../mfc/reference/cformview-class.md), [CRecordView](../mfc/reference/crecordview-class.md), e [CDaoRecordView](../mfc/reference/cdaorecordview-class.md), vedere le classi di *riferimenti alla libreria MFC*. Per informazioni sulla classe [CDialogBar](../mfc/reference/cdialogbar-class.md), vedere [le barre di finestra di dialogo](../mfc/dialog-bars.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Finestre di dialogo](../mfc/dialog-boxes.md)   
 [Ciclo di vita di una finestra di dialogo](../mfc/life-cycle-of-a-dialog-box.md)   
 [Finestre di dialogo in OLE](../mfc/dialog-boxes-in-ole.md)
