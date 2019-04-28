---
title: Impostazioni applicazione, Creazione guidata progetto ATL
ms.date: 11/04/2016
f1_keywords:
- vc.appwiz.atl.com.appset
helpviewer_keywords:
- ATL Project Wizard, application settings
ms.assetid: d48c9fc5-f439-49fd-884c-8bcfa7d52991
ms.openlocfilehash: bd9d5c6ef1ccb86f2968b1e2d2706092b6db45e9
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62249000"
---
# <a name="application-settings-atl-project-wizard"></a>Impostazioni applicazione, Creazione guidata progetto ATL

Usare la **le impostazioni dell'applicazione** pagina della procedura guidata progetto ATL per progettare e aggiungere funzionalità di base a un nuovo progetto ATL.

## <a name="server-type"></a>Tipo di server

Scegliere uno dei tre tipi di server:

- **Libreria di collegamento dinamico (DLL)**

   Selezionare questa opzione per creare un server in-process.

- **Executable (EXE)**

   Selezionare questa opzione per creare un locale server out-of-process. Questa opzione non consente il supporto per MFC o COM+ 1.0. Non consente l'unione di codice proxy/stub.

- **Servizio (con estensione EXE)**

   Selezionare questa opzione per creare un'applicazione Windows che viene eseguita in background all'avvio di Windows. Questa opzione non consentire il supporto di MFC o COM+ 1.0 o non consente l'unione di codice proxy/stub.

## <a name="additional-options"></a>Opzioni aggiuntive

> [!NOTE]
> Tutte le opzioni aggiuntive sono disponibili per i progetti DLL solo.

- **Consenti merge del codice proxy/stub**

   Selezionare il **Consenti merge del codice proxy/stub** casella di controllo per maggiore praticità durante il marshalling delle interfacce è obbligatorio. Questa opzione inserisce il codice proxy e stub generati da MIDL nello stesso file eseguibile del server.

- **Supporto MFC**

   Selezionare questa opzione per specificare che l'oggetto include il supporto di MFC. Questa opzione Collega il progetto per le librerie MFC in modo che è possibile accedere a una delle classi e funzioni che contengono.

- **Supporto COM+ 1.0**

   Selezionare questa opzione per modificare le impostazioni di compilazione progetto per supportare i componenti COM+ 1.0. Oltre all'elenco standard di librerie, la procedura guidata aggiunge i comsvcs.lib di libreria specifico del componente COM+ 1.0

   Inoltre, il MTXEX è ritardo caricato nel sistema host quando l'applicazione viene avviata.

- **Registrazione di componenti di supporto**

   Se il progetto ATL contiene supporto per i componenti COM+ 1.0, è possibile impostare questa opzione. La registrazione del componente consente all'oggetto COM+ 1.0 ottenere un elenco dei componenti, registrare i componenti o annullare la registrazione di componenti (singolarmente o in una sola volta).

## <a name="see-also"></a>Vedere anche

[Creazione guidata progetto ATL](../../atl/reference/atl-project-wizard.md)<br/>
[Creazione di un progetto ATL](../../atl/reference/creating-an-atl-project.md)<br/>
[Configurazioni progetto ATL predefinite](../../atl/reference/default-atl-project-configurations.md)
