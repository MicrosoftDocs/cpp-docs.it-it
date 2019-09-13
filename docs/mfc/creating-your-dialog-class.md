---
title: Creazione della classe di finestre di dialogo
ms.date: 09/06/2019
helpviewer_keywords:
- dialog boxes [MFC], creating
- MFC dialog boxes [MFC], creating
- files [MFC], creating
- dialog classes [MFC], Add Class Wizard
- dialog classes [MFC], creating
ms.assetid: d5321741-da41-47a8-bb1c-6a0e8b28c4c1
ms.openlocfilehash: 424d18196063456245e2a4841b42e6e447bded17
ms.sourcegitcommit: 3caf5261b3ea80d9cf14038c116ba981d655cd13
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/11/2019
ms.locfileid: "70907333"
---
# <a name="creating-your-dialog-class"></a>Creazione della classe di finestre di dialogo

Per ogni finestra di dialogo del programma, creare una nuova classe di finestre di dialogo da utilizzare con la risorsa finestra di dialogo.

[L'aggiunta di una classe](../ide/adding-a-class-visual-cpp.md) illustra come creare una nuova classe di finestre di dialogo. Quando si crea una classe di finestra di dialogo con la [creazione guidata classe](reference/mfc-class-wizard.md), vengono scritti gli elementi seguenti nei file con estensione h e cpp specificati:

Nel file con estensione h:

- Dichiarazione di classe per la classe della finestra di dialogo. La classe è derivata da [CDialog](../mfc/reference/cdialog-class.md).

Nel file con estensione cpp:

- Mappa messaggi per la classe.

- Costruttore standard per la finestra di dialogo.

- Override della funzione membro [DoDataExchange](../mfc/reference/cwnd-class.md#dodataexchange) . Modificare questa funzione. Viene utilizzato per le funzionalità di convalida e scambio di dati del dialogo, come descritto più avanti in [convalida e scambio di dati della finestra di dialogo](../mfc/dialog-data-exchange-and-validation.md).

## <a name="see-also"></a>Vedere anche

[Creazione di una classe di finestre di dialogo con creazioni guidate codice](../mfc/creating-a-dialog-class-with-code-wizards.md)<br/>
[Ciclo di vita di una finestra di dialogo](../mfc/life-cycle-of-a-dialog-box.md)
