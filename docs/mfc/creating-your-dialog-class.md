---
title: Creazione della classe di finestre di dialogo
ms.date: 11/04/2016
helpviewer_keywords:
- dialog boxes [MFC], creating
- MFC dialog boxes [MFC], creating
- files [MFC], creating
- dialog classes [MFC], Add Class Wizard
- dialog classes [MFC], creating
ms.assetid: d5321741-da41-47a8-bb1c-6a0e8b28c4c1
ms.openlocfilehash: 924cf2d79056d958aad775f92a6d0df2d45c8a70
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50536579"
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

