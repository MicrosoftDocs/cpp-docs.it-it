---
description: 'Altre informazioni su: trascinamento e rilascio di file in una finestra cornice'
title: Trascinamento di file in una finestra cornice
ms.date: 11/04/2016
helpviewer_keywords:
- drag and drop [MFC], files
- drag and drop [MFC], File Manager
- Windows Explorer [MFC]
- File Manager drag and drop support [MFC]
- files [MFC], drag and drop
- frame windows [MFC], dragging and dropping files in
- drag and drop [MFC], Windows Explorer
ms.assetid: 85560fe9-121b-4105-bd7b-216b966e19fa
ms.openlocfilehash: dafbeca8b74ee07c80315c15ab93097977125d89
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97159947"
---
# <a name="dragging-and-dropping-files-in-a-frame-window"></a>Trascinamento di file in una finestra cornice

La finestra cornice gestisce una relazione con Esplora file o file Manager.

Aggiungendo alcune chiamate di inizializzazione nell'override della `CWinApp` funzione membro `InitInstance` , come descritto in [CWinApp: la classe dell'applicazione](cwinapp-the-application-class.md), è possibile fare in modo che la finestra cornice apra indirettamente i file trascinati da Esplora file o file Manager ed eliminati nella finestra cornice. Vedere [trascinare e rilasciare file Manager](special-cwinapp-services.md).

## <a name="see-also"></a>Vedi anche

[Uso di finestre cornice](using-frame-windows.md)
