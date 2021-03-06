---
description: 'Altre informazioni su: funzione membro InitInstance'
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
ms.openlocfilehash: b55c5dbd665b45c74e5990b7d40a63fcd9098a9b
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97220617"
---
# <a name="initinstance-member-function"></a>Funzione membro InitInstance

Il sistema operativo Windows consente di eseguire più di una copia, o "istanza", della stessa applicazione. `WinMain` chiama [InitInstance](reference/cwinapp-class.md#initinstance) ogni volta che viene avviata una nuova istanza dell'applicazione.

L' `InitInstance` implementazione standard creata mediante la creazione guidata applicazione MFC esegue le attività seguenti:

- Come azione centrale, crea i modelli di documento che a loro volta creano documenti, visualizzazioni e finestre cornice. Per una descrizione di questo processo, vedere [creazione di modelli di documento](document-template-creation.md).

- Carica le opzioni del file standard da un file ini o dal registro di sistema di Windows, inclusi i nomi dei file utilizzati più di recente.

- Registra uno o più modelli di documento.

- Per un'applicazione MDI, crea una finestra cornice principale.

- Elabora la riga di comando per aprire un documento specificato nella riga di comando o per aprire un nuovo documento vuoto.

È possibile aggiungere codice di inizializzazione personalizzato o modificare il codice scritto dalla procedura guidata.

> [!NOTE]
> Le applicazioni MFC devono essere inizializzate come Apartment a thread singolo (STA). Se si chiama [CoInitializeEx](/windows/win32/api/combaseapi/nf-combaseapi-coinitializeex) nell' `InitInstance` override, specificare COINIT_APARTMENTTHREADED (anziché COINIT_MULTITHREADED).

## <a name="see-also"></a>Vedi anche

[CWinApp: classe Application](cwinapp-the-application-class.md)
