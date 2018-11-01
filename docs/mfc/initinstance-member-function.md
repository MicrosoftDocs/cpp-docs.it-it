---
title: Funzione membro InitInstance
ms.date: 11/04/2016
f1_keywords:
- InitInstance
helpviewer_keywords:
- InitInstance method [MFC]
- applications [MFC], initializing
- MFC, initializing
- initializing MFC applications
ms.assetid: 4ef09267-ff7f-4c39-91a0-57454a264f83
ms.openlocfilehash: 6e430d30dc62a14008fad9e41e3b2cde7ddffc8b
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50450596"
---
# <a name="initinstance-member-function"></a>Funzione membro InitInstance

Il sistema operativo Windows consente di eseguire più copie, o "istanza", della stessa applicazione. `WinMain` le chiamate [InitInstance](../mfc/reference/cwinapp-class.md#initinstance) ogni volta che viene avviata una nuova istanza dell'applicazione.

Lo standard `InitInstance` implementazione creato dalla creazione guidata applicazione MFC effettua le seguenti attività:

- Come l'azione centrale, vengono creati i modelli di documento che a sua volta creare documenti, visualizzazioni e finestre cornice. Per una descrizione di questo processo, vedere [creazione di modelli di documento](../mfc/document-template-creation.md).

- Carica le opzioni standard di file da un file. ini o del Registro di sistema Windows, inclusi i nomi dei file utilizzati di recente.

- Registra uno o più modelli di documento.

- Per un'applicazione MDI, crea una finestra cornice principale.

- Elabora la riga di comando per aprire un documento specificato nella riga di comando o per aprire un nuovo documento vuoto.

È possibile aggiungere il proprio codice di inizializzazione o modificare il codice scritto per la procedura guidata.

> [!NOTE]
>  Le applicazioni MFC devono essere inizializzate come apartment a thread singolo (STA). Se si chiama [CoInitializeEx](/windows/desktop/api/combaseapi/nf-combaseapi-coinitializeex) nel `InitInstance` eseguire l'override, specificare COINIT_APARTMENTTHREADED (anziché COINIT_MULTITHREADED).

## <a name="see-also"></a>Vedere anche

[CWinApp: classe Application](../mfc/cwinapp-the-application-class.md)
