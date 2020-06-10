---
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
ms.openlocfilehash: 42f21e2441f8ba3d2c6a13503c928880fe100f04
ms.sourcegitcommit: c21b05042debc97d14875e019ee9d698691ffc0b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/09/2020
ms.locfileid: "84623163"
---
# <a name="dragging-and-dropping-files-in-a-frame-window"></a>Trascinamento di file in una finestra cornice

La finestra cornice gestisce una relazione con Esplora file o file Manager.

Aggiungendo alcune chiamate di inizializzazione nell'override della `CWinApp` funzione membro `InitInstance` , come descritto in [CWinApp: la classe dell'applicazione](cwinapp-the-application-class.md), è possibile fare in modo che la finestra cornice apra indirettamente i file trascinati da Esplora file o file Manager ed eliminati nella finestra cornice. Vedere [trascinare e rilasciare file Manager](special-cwinapp-services.md).

## <a name="see-also"></a>Vedere anche

[Utilizzo di finestre cornice](using-frame-windows.md)
