---
title: Creazione guidata progetto di ATL, impostazioni applicazione | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: reference
f1_keywords:
- vc.appwiz.atl.com.appset
dev_langs:
- C++
helpviewer_keywords:
- ATL Project Wizard, application settings
ms.assetid: d48c9fc5-f439-49fd-884c-8bcfa7d52991
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 4cff60e5316202842b2ee22c5c6ba10813839b5d
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46035851"
---
# <a name="application-settings-atl-project-wizard"></a>Impostazioni applicazione, Creazione guidata progetto ATL

Usare la **le impostazioni dell'applicazione** pagina della procedura guidata progetto ATL per progettare e aggiungere funzionalità di base a un nuovo progetto ATL.

## <a name="server-type"></a>Tipo di server

Scegliere uno dei tre tipi di server:

- **Libreria di collegamento dinamico (DLL)**  

   Selezionare questa opzione per creare un server in-process.

- **File eseguibile (EXE)**  

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

