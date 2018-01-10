---
title: Trascinamento della selezione di file in una finestra cornice | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- drag and drop [MFC], files
- drag and drop [MFC], File Manager
- Windows Explorer [MFC]
- File Manager drag and drop support [MFC]
- files [MFC], drag and drop
- frame windows [MFC], dragging and dropping files in
- drag and drop [MFC], Windows Explorer
ms.assetid: 85560fe9-121b-4105-bd7b-216b966e19fa
caps.latest.revision: "11"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 938640ed85e51d2b94b292bfe78a8d912b095188
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="dragging-and-dropping-files-in-a-frame-window"></a>Trascinamento di file in una finestra cornice
La finestra cornice gestisce una relazione con Esplora File o File Manager.  
  
 Da aggiunta durante l'inizializzazione di qualche chiama l'override del `CWinApp` funzione membro `InitInstance`, come descritto in [CWinApp: classe Application](../mfc/cwinapp-the-application-class.md), è possibile avere la finestra cornice indirettamente aprire i file trascinati dal File Esplora risorse o File Manager ed eliminati nella finestra cornice. Vedere [trascinamento della selezione di gestione File](../mfc/special-cwinapp-services.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Uso di finestre cornice](../mfc/using-frame-windows.md)

