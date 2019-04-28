---
title: Componenti della finestra di dialogo nel framework
ms.date: 11/04/2016
helpviewer_keywords:
- MFC dialog boxes [MFC], creating
- dialog classes [MFC], dialog box components
- MFC dialog boxes [MFC], about MFC dialog boxes
- dialog templates [MFC], MFC framework
- MFC dialog boxes [MFC], dialog resource
ms.assetid: 592db160-0a8a-49be-ac72-ead278aca53f
ms.openlocfilehash: 88027df7433267925e91db2d368b744cee8a9e75
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62182293"
---
# <a name="dialog-box-components-in-the-framework"></a>Componenti della finestra di dialogo nel framework

Nel framework MFC, una finestra di dialogo presenta due componenti:

- Una risorsa modello di finestra di dialogo che specifica i controlli della finestra di dialogo e sulla relativa posizione.

   La risorsa finestra di dialogo Archivia un modello di finestra di dialogo da cui Windows crea la finestra di dialogo e lo visualizza. Il modello specifica le caratteristiche della finestra di dialogo, tra cui le dimensioni, posizione, lo stile e i tipi e le posizioni dei controlli della finestra di dialogo. Si userà in genere un modello di finestra di dialogo archiviato come una risorsa, ma è anche possibile creare il proprio modello in memoria.

- Una classe di finestra di dialogo, derivata da [CDialog](../mfc/reference/cdialog-class.md), per fornire un'interfaccia programmatica per gestire la finestra di dialogo.

   Una finestra di dialogo è una finestra e verrà collegata a una finestra di Windows quando visibile. Quando viene creata la finestra di dialogo, viene usata la risorsa modello di finestra di dialogo come modello per la creazione di controlli di finestra di dialogo figlio.

## <a name="see-also"></a>Vedere anche

[Finestre di dialogo](../mfc/dialog-boxes.md)<br/>
[Ciclo di vita di una finestra di dialogo](../mfc/life-cycle-of-a-dialog-box.md)
