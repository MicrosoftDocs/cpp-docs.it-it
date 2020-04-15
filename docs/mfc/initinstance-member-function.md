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
ms.openlocfilehash: 2cf5b266348e299fe761ba40bd2cfb849f02b9ab
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81377190"
---
# <a name="initinstance-member-function"></a>Funzione membro InitInstance

Il sistema operativo Windows consente di eseguire più di una copia, o "istanza", della stessa applicazione. `WinMain`chiama [InitInstance](../mfc/reference/cwinapp-class.md#initinstance) ogni volta che viene avviata una nuova istanza dell'applicazione.

L'implementazione standard `InitInstance` creata dalla Creazione guidata applicazione MFC esegue le attività seguenti:

- Come azione centrale, crea i modelli di documento che a loro volta creano documenti, visualizzazioni e finestre cornice. Per una descrizione di questo processo, vedere [Creazione di modelli](../mfc/document-template-creation.md)di documento .

- Carica le opzioni di file standard da un file ini o dal Registro di sistema di Windows, inclusi i nomi dei file utilizzati più di recente.

- Registra uno o più modelli di documento.

- Per un'applicazione MDI, crea una finestra cornice principale.

- Elabora la riga di comando per aprire un documento specificato nella riga di comando o per aprire un nuovo documento vuoto.

È possibile aggiungere il proprio codice di inizializzazione o modificare il codice scritto dalla procedura guidata.

> [!NOTE]
> Le applicazioni MFC devono essere inizializzate come apartment a thread singolo (STA). Se si chiama [CoInitializeEx](/windows/win32/api/combaseapi/nf-combaseapi-coinitializeex) nell'override, `InitInstance` specificare COINIT_APARTMENTTHREADED (anziché COINIT_MULTITHREADED).

## <a name="see-also"></a>Vedere anche

[CWinApp: classe Application](../mfc/cwinapp-the-application-class.md)
