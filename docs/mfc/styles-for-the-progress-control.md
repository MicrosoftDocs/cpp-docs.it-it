---
description: 'Altre informazioni su: stili per il controllo progress'
title: Stili per il controllo Progress
ms.date: 11/19/2018
helpviewer_keywords:
- PBS_SMOOTH style
- progress controls [MFC], styles
- PBS_VERTICAL style
- CProgressCtrl class [MFC], styles
ms.assetid: 39eb8081-bc20-4552-91b9-e7cdd1b7d8ae
ms.openlocfilehash: cd6ce1093f8bd2e3271a386e894d1e8dcd1a4fd7
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97216496"
---
# <a name="styles-for-the-progress-control"></a>Stili per il controllo Progress

Quando si crea inizialmente il controllo dello stato di avanzamento ([CProgressCtrl:: create](../mfc/reference/cprogressctrl-class.md#create)), usare il parametro *dwStyle* per specificare gli stili della finestra desiderata per il controllo dello stato di avanzamento. Nell'elenco seguente sono illustrati in maniera dettagliata gli stili applicabili alla finestra. Il controllo ignora qualsiasi stile della finestra diverso da quelli elencati di seguito. Si consiglia di creare sempre il controllo come finestra figlio, in genere di una finestra di dialogo padre.

|Stile di finestra|Effetto|
|------------------|------------|
|WS_BORDER|Crea un bordo intorno alla finestra.|
|WS_CHILD|Crea una finestra figlio (deve sempre essere utilizzato per `CProgressCtrl`).|
|WS_CLIPCHILDREN|Esclude l'area occupata dalle finestre figlio quando si disegna nella finestra padre. Utilizzato quando si crea la finestra padre.|
|WS_CLIPSIBLINGS|Taglia le finestre figlio le une rispetto alle altre.|
|WS_DISABLED|Crea una finestra che inizialmente è disabilitata.|
|WS_VISIBLE|Crea una finestra che inizialmente è visibile.|
|WS_TABSTOP|Specifica che il controllo può ricevere lo stato attivo quando l'utente preme il tasto TAB per passare ad esso.|

Inoltre, è possibile specificare due stili che si applicano solo al controllo dello stato di avanzamento, PBS_VERTICAL e PBS_SMOOTH.

Utilizzare PBS_VERTICAL per orientare il controllo verticalmente anziché orizzontalmente. Usare PBS_SMOOTH per riempire il controllo completamente, anziché visualizzare quadratini delimitati che riempiono il controllo in modo incrementale.

Senza PBS_SMOOTH stile:

![Stile della barra di stato standard](../mfc/media/vc4ruw1.gif "Stile della barra di stato standard")

Con gli stili PBS_SMOOTH e PBS_VERTICAL:

![Stile della barra di stato, uniforme e verticale](../mfc/media/vc4ruw2.gif "Stile della barra di stato, uniforme e verticale")

Per ulteriori informazioni, vedere [stili di finestra](../mfc/reference/styles-used-by-mfc.md#frame-window-styles-mfc) in *riferimenti a MFC*.

## <a name="see-also"></a>Vedi anche

[Utilizzo di CProgressCtrl](../mfc/using-cprogressctrl.md)
