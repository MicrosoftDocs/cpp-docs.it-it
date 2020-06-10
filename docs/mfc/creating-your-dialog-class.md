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
ms.openlocfilehash: fab75268e39d75b67db435ebb8d0af6c0b8371fd
ms.sourcegitcommit: c21b05042debc97d14875e019ee9d698691ffc0b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/09/2020
ms.locfileid: "84620509"
---
# <a name="creating-your-dialog-class"></a>Creazione della classe di finestre di dialogo

Per ogni finestra di dialogo del programma, creare una nuova classe di finestre di dialogo da utilizzare con la risorsa finestra di dialogo.

[L'aggiunta di una classe](../ide/adding-a-class-visual-cpp.md) illustra come creare una nuova classe di finestre di dialogo. Quando si crea una classe di finestra di dialogo con la [creazione guidata classe](reference/mfc-class-wizard.md), vengono scritti gli elementi seguenti nei file con estensione h e cpp specificati:

Nel file con estensione h:

- Dichiarazione di classe per la classe della finestra di dialogo. La classe è derivata da [CDialog](reference/cdialog-class.md).

Nel file con estensione cpp:

- Mappa messaggi per la classe.

- Costruttore standard per la finestra di dialogo.

- Override della funzione membro [DoDataExchange](reference/cwnd-class.md#dodataexchange) . Modificare questa funzione. Viene utilizzato per le funzionalità di convalida e scambio di dati del dialogo, come descritto più avanti in [convalida e scambio di dati della finestra di dialogo](dialog-data-exchange-and-validation.md).

## <a name="see-also"></a>Vedere anche

[Creazione di una classe di finestre di dialogo con creazioni guidate codice](creating-a-dialog-class-with-code-wizards.md)<br/>
[Utilizzo delle finestre di dialogo in MFC](life-cycle-of-a-dialog-box.md)
