---
title: Creazione della classe di finestra di dialogo | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- dialog boxes [MFC], creating
- MFC dialog boxes [MFC], creating
- files [MFC], creating
- dialog classes [MFC], Add Class Wizard
- dialog classes [MFC], creating
ms.assetid: d5321741-da41-47a8-bb1c-6a0e8b28c4c1
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 9cec6ac40834e8cd3ccc9e0eadb18630ee507b92
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46442045"
---
# <a name="creating-your-dialog-class"></a>Creazione della classe di finestre di dialogo

Per ogni finestra di dialogo del programma, creare una nuova classe di finestra di dialogo per lavorare con la risorsa finestra di dialogo.

[Aggiunta di una classe](../ide/adding-a-class-visual-cpp.md) spiega come creare una nuova classe di finestra di dialogo. Quando si crea una classe di finestra di dialogo con l'aggiunta guidata classe, scrive gli elementi seguenti. H e. File CPP specificati:

Nel. File H:

- Una dichiarazione di classe per la classe di finestra di dialogo. La classe è derivata da [CDialog](../mfc/reference/cdialog-class.md).

Nel. File CPP:

- Una mappa messaggi per la classe.

- Un costruttore standard per la finestra di dialogo.

- Un override del [DoDataExchange](../mfc/reference/cwnd-class.md#dodataexchange) funzione membro. Modificare questa funzione. Viene usato per la funzionalità di exchange e la convalida dei dati della finestra come descritto più avanti nel [convalida e DDX](../mfc/dialog-data-exchange-and-validation.md).

## <a name="see-also"></a>Vedere anche

[Creazione di una classe di finestre di dialogo con creazioni guidate codice](../mfc/creating-a-dialog-class-with-code-wizards.md)<br/>
[Ciclo di vita di una finestra di dialogo](../mfc/life-cycle-of-a-dialog-box.md)

