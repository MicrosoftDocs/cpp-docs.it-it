---
title: Creazione documento / visualizzazione
ms.date: 11/04/2016
helpviewer_keywords:
- documents [MFC], creating
- views [MFC], and frame windows
- views [MFC], creating
- tables [MFC]
- MFC, views
- document/view architecture [MFC], creating document/view
- object creators
- MFC, documents
- tables [MFC], objects each MFC object creates
ms.assetid: bda14f41-ed50-439d-af9e-591174e7dd64
ms.openlocfilehash: b5f9b783e8e14744a816fd63b327ed95d9da8e8a
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62240787"
---
# <a name="documentview-creation"></a>Creazione di documenti/visualizzazioni

Il framework fornisce le implementazioni del **New** e **Open** comandi (tra gli altri) per il **File** menu. Creazione di un nuovo documento e relativa visualizzazione associata e finestra cornice è un'operazione cooperativa tra l'oggetto dell'applicazione, un modello di documento, il documento appena creato e la finestra cornice appena creato. La tabella seguente riepiloga gli oggetti creano in ciascun oggetto.

### <a name="object-creators"></a>Creatori di oggetti

|Creator|Crea|
|-------------|-------------|
|Oggetto Application|Modello di documento|
|Modello di documento|Document|
|Modello di documento|Finestra cornice|
|Finestra cornice|Visualizza|

## <a name="see-also"></a>Vedere anche

[I modelli di documento e il processo di creazione documento/visualizzazione](../mfc/document-templates-and-the-document-view-creation-process.md)<br/>
[Creazione di modelli di documento](../mfc/document-template-creation.md)<br/>
[Relazioni tra oggetti MFC](../mfc/relationships-among-mfc-objects.md)<br/>
[Creazione di nuovi documenti, finestre e visualizzazioni](../mfc/creating-new-documents-windows-and-views.md)
