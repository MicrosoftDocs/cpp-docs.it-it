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
ms.openlocfilehash: 15d01924be811a9c9ec8ea333870f444bf9aa61a
ms.sourcegitcommit: 1e6386be9084f70def7b3b8b4bab319a117102b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/30/2019
ms.locfileid: "71685826"
---
# <a name="dialog-box-components-in-the-framework"></a>Componenti della finestra di dialogo nel framework

Nel framework MFC una finestra di dialogo include due componenti:

- Una risorsa modello di finestra di dialogo che specifica i controlli della finestra di dialogo e la relativa posizione.

   La risorsa finestra di dialogo Archivia un modello di finestra di dialogo da cui Windows crea la finestra di dialogo e la Visualizza. Il modello specifica le caratteristiche della finestra di dialogo, incluse le dimensioni, la posizione, lo stile e i tipi e le posizioni dei controlli della finestra di dialogo. Si userà in genere un modello di finestra di dialogo archiviato come risorsa, ma è anche possibile creare un modello personalizzato in memoria.

- Una classe di finestre di dialogo, derivata da [CDialog](../mfc/reference/cdialog-class.md), per fornire un'interfaccia a livello di codice per la gestione della finestra di dialogo.

   Una finestra di dialogo è una finestra che verrà collegata a una finestra di Windows, se visibile. Quando viene creata la finestra di dialogo, la risorsa modello di finestra di dialogo viene utilizzata come modello per la creazione di controlli finestra figlio per la finestra di dialogo.

## <a name="see-also"></a>Vedere anche

[Finestre di dialogo](../mfc/dialog-boxes.md)<br/>
[Utilizzo delle finestre di dialogo in MFC](../mfc/life-cycle-of-a-dialog-box.md)
