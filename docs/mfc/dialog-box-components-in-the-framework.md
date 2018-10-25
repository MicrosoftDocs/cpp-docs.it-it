---
title: Componenti della finestra di dialogo nel Framework | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- MFC dialog boxes [MFC], creating
- dialog classes [MFC], dialog box components
- MFC dialog boxes [MFC], about MFC dialog boxes
- dialog templates [MFC], MFC framework
- MFC dialog boxes [MFC], dialog resource
ms.assetid: 592db160-0a8a-49be-ac72-ead278aca53f
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 6936a48d1a3e1845d56c73524c84800d9d605155
ms.sourcegitcommit: a9dcbcc85b4c28eed280d8e451c494a00d8c4c25
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/25/2018
ms.locfileid: "50065511"
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

