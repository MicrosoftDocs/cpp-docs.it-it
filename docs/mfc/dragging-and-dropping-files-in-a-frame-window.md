---
title: Trascinare e rilasciare file in una finestra cornice | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- drag and drop [MFC], files
- drag and drop [MFC], File Manager
- Windows Explorer [MFC]
- File Manager drag and drop support [MFC]
- files [MFC], drag and drop
- frame windows [MFC], dragging and dropping files in
- drag and drop [MFC], Windows Explorer
ms.assetid: 85560fe9-121b-4105-bd7b-216b966e19fa
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 6fc68923de531240a2d59336c79e54f6562b369c
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46380529"
---
# <a name="dragging-and-dropping-files-in-a-frame-window"></a>Trascinamento di file in una finestra cornice

La finestra cornice gestisce sia una relazione con Esplora File o File Manager.

Da aggiunta di inizializzazione di alcuni chiama nell'override della `CWinApp` funzione membro `InitInstance`, come descritto in [CWinApp: la classe Application](../mfc/cwinapp-the-application-class.md), è possibile avere la finestra cornice indirettamente aprire i file trascinati da File Esplora risorse o File Manager ed eliminato nella finestra cornice. Visualizzare [gestione File trascinamento della selezione](../mfc/special-cwinapp-services.md).

## <a name="see-also"></a>Vedere anche

[Uso di finestre cornice](../mfc/using-frame-windows.md)

