---
description: 'Ulteriori informazioni su: impostazioni applicazione, creazione guidata progetto ATL'
title: Impostazioni applicazione, Creazione guidata progetto ATL
ms.date: 11/04/2016
f1_keywords:
- vc.appwiz.atl.com.appset
helpviewer_keywords:
- ATL Project Wizard, application settings
ms.assetid: d48c9fc5-f439-49fd-884c-8bcfa7d52991
ms.openlocfilehash: 7805fcb8760035ac232a36a42a1cf34273ee42a4
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97158945"
---
# <a name="application-settings-atl-project-wizard"></a>Impostazioni applicazione, Creazione guidata progetto ATL

Utilizzare la pagina **Impostazioni applicazione** della creazione guidata progetto ATL per progettare e aggiungere funzionalità di base a un nuovo progetto ATL.

## <a name="server-type"></a>Tipo di server

Scegliere uno dei tre tipi di server:

- **Libreria a collegamento dinamico (DLL)**

   Selezionare per creare un server in-process.

- **Eseguibile (EXE)**

   Selezionare questa impostazione per creare un server locale out-of-process. Questa opzione non consente il supporto per MFC o COM+ 1,0. Non consente l'Unione di codice proxy/stub.

- **Servizio (EXE)**

   Selezionare questa funzione per creare un'applicazione Windows che viene eseguita in background all'avvio di Windows. Questa opzione non consente il supporto per MFC o COM+ 1,0 o non consente l'Unione di codice proxy/stub.

## <a name="additional-options"></a>Opzioni aggiuntive

> [!NOTE]
> Tutte le opzioni aggiuntive sono disponibili solo per i progetti DLL.

- **Consenti unione di codice proxy/stub**

   Selezionare la casella **di controllo Consenti unione del codice proxy/stub** per praticità quando è necessario effettuare il marshalling delle interfacce. Questa opzione inserisce il proxy e il codice stub generati da MIDL nello stesso eseguibile del server.

- **Supporto per MFC**

   Selezionare questa impostazione per specificare che l'oggetto include il supporto MFC. Questa opzione consente di collegare il progetto alle librerie MFC in modo da poter accedere alle classi e funzioni che contengono.

- **Supporto di COM+ 1,0**

   Selezionare questa impostazione per modificare le impostazioni di compilazione del progetto in modo da supportare i componenti COM+ 1,0. Oltre all'elenco standard di librerie, la procedura guidata aggiunge la libreria specifica del componente COM+ 1,0 comsvcs. lib.

   Inoltre, il mtxex.dll viene caricato in ritardo sul sistema host quando viene avviata l'applicazione.

- **Registrar componente di supporto**

   Se il progetto ATL contiene il supporto per i componenti COM+ 1,0, è possibile impostare questa opzione. Il registrar di componenti consente all'oggetto COM+ 1,0 di ottenere un elenco di componenti, registrare i componenti o annullare la registrazione dei componenti (singolarmente o tutti contemporaneamente).

## <a name="see-also"></a>Vedi anche

[Creazione guidata progetto ATL](../../atl/reference/atl-project-wizard.md)<br/>
[Creazione di un progetto ATL](../../atl/reference/creating-an-atl-project.md)<br/>
[Configurazioni di progetto ATL predefinite](../../atl/reference/default-atl-project-configurations.md)
