---
title: Creazione guidata progetto di impostazioni applicazione, ATL | Documenti Microsoft
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
ms.openlocfilehash: 47fbf95451834e5f8c41e8b6d7e5af7a9746bb85
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32357405"
---
# <a name="application-settings-atl-project-wizard"></a>Impostazioni applicazione, Creazione guidata progetto ATL
Utilizzare il **le impostazioni dell'applicazione** pagina della creazione guidata progetto ATL per progettare e aggiungere funzionalità di base a un nuovo progetto ATL.  
  
## <a name="server-type"></a>Tipo di server  
 Scegliere uno dei tre tipi di server:  
  
 **libreria di collegamento dinamico (DLL)**  
 Selezionare questa opzione per creare un server in-process.  
  
 **File eseguibile (EXE)**  
 Selezionare questa opzione per creare un server out-of-process locale. Questa opzione non consente il supporto per MFC o COM+ 1.0. Non consente l'unione di codice proxy/stub.  
  
 **Servizio (con estensione EXE)**  
 Selezionare questa opzione per creare un'applicazione Windows che viene eseguito in background all'avvio di Windows. Questa opzione non consente il supporto per COM+ 1.0 o MFC o non consente l'unione di codice proxy/stub.  
  
## <a name="additional-options"></a>Opzioni aggiuntive  
  
> [!NOTE]
>  Tutte le opzioni aggiuntive sono disponibili per i progetti DLL solo.  
  
 **Consenti merge di codice proxy/stub**  
 Selezionare il **Consenti merge di codice proxy/stub** casella di controllo è utile quando è necessario il marshalling di interfacce. Questa opzione viene inserito il codice proxy e stub generato da MIDL nello stesso eseguibile del server.  
  
 **Supporto MFC**  
 Selezionare questa opzione per specificare che l'oggetto include il supporto MFC. Questa opzione i collegamenti del progetto per le librerie MFC in modo che è possibile accedere alle classi e funzioni che contengono.  
  
 **Supporto COM+ 1.0**  
 Selezionare questa opzione per modificare le impostazioni di compilazione progetto per supportare i componenti COM+ 1.0. Oltre all'elenco standard di librerie, la procedura guidata aggiunge il comsvcs.lib di libreria specifico del componente COM+ 1.0  
  
 Inoltre, il MTXEX è caricata nel sistema host quando viene avviata l'applicazione di ritardo.  
  
-   **Supporta la registrazione dei componenti** se il progetto ATL contiene supporto per i componenti COM+ 1.0, è possibile impostare questa opzione. La registrazione del componente consente all'oggetto di COM+ 1.0 ottenere un elenco dei componenti, componenti di registrare o annullare la registrazione di componenti (singolarmente o in una sola volta).  
  
## <a name="see-also"></a>Vedere anche  
 [Creazione guidata progetto ATL](../../atl/reference/atl-project-wizard.md)   
 [Creazione di un progetto ATL](../../atl/reference/creating-an-atl-project.md)   
 [Configurazioni progetto ATL predefinite](../../atl/reference/default-atl-project-configurations.md)

