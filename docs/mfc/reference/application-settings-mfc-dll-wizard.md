---
title: Impostazioni dell'applicazione, creazione guidata DLL MFC | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- vc.appwiz.mfc.dll.appset
dev_langs:
- C++
helpviewer_keywords:
- MFC DLL Wizard, application settings
ms.assetid: 0a96b94f-ae36-4975-951b-c9ffb3def21c
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 04fcf796c7d08cc2733edbf23b66c591e07ec71a
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45704977"
---
# <a name="application-settings-mfc-dll-wizard"></a>Impostazioni applicazione, Creazione guidata DLL MFC
Utilizzare questa pagina della procedura guidata DLL MFC per progettare e aggiungere funzionalità di base a un nuovo progetto di DLL MFC.  
  
## <a name="dll-type"></a>Tipo di DLL  
 Selezionare il tipo di DLL che si desidera creare.  
  
- **DLL MFC regolari con la DLL MFC condivisa**

   Selezionare questa opzione per collegare la libreria MFC per il programma come una DLL condivisa. Con questa opzione, è possibile condividere oggetti MFC tra la DLL e l'applicazione chiamante. Il programma effettua chiamate alla libreria MFC in fase di esecuzione. Questa opzione consente di ridurre i requisiti del disco e memoria del programma se è composto da più file eseguibili che usano la libreria MFC. Programmi di Win32 e di MFC possono chiamare le funzioni nella DLL. È necessario ridistribuire le DLL MFC con questo tipo di progetto.  
  
- **DLL MFC regolari con MFC collegato in modo statico**

   Selezionare questa opzione per collegare il programma in modo statico per la libreria MFC in fase di compilazione. Programmi di Win32 e di MFC possono chiamare le funzioni nella DLL. Anche se questa opzione aumenta la dimensione del programma, non occorre ridistribuire le DLL MFC con questo tipo di progetto. È possibile condividere oggetti MFC tra la DLL e l'applicazione chiamante.  
  
- **DLL di estensione MFC**

   Selezionare questa opzione se si desidera che il programma per effettuare chiamate alla libreria MFC in fase di esecuzione e se si desidera condividere oggetti MFC tra la DLL e l'applicazione chiamante. Questa opzione consente di ridurre i requisiti del disco e memoria del programma, se è composto da più file eseguibili che utilizzano la libreria MFC. Solo i programmi MFC possono chiamare funzioni della DLL. È necessario ridistribuire le DLL MFC con questo tipo di progetto.  
  
## <a name="additional-features"></a>Funzionalità aggiuntive  

Selezionare se la DLL MFC deve supportare l'automazione e se è opportuno che il socket di Windows.  
  
- **Automazione**

   Selezionare **automazione** per consentire al programma di modificare oggetti implementati in un altro programma. Selezionando **automazione** espone anche il programma agli altri client di automazione. Visualizzare [automazione](../../mfc/automation.md) per altre informazioni.  
  
- **Socket di Windows**

   Selezionare questa opzione per indicare che il programma supporta Windows sockets. Socket di Windows consentono di scrivere programmi in grado di comunicare su reti TCP/IP.  
  
   Quando la DLL MFC con Windows sockets supporto viene creato [CWinApp:: InitInstance](../../mfc/reference/cwinapp-class.md#initinstance) Inizializza il supporto per i socket e il file di intestazione stdafx. H MFC include AfxSock.  
  
## <a name="see-also"></a>Vedere anche  
 [Creazione guidata DLL MFC](../../mfc/reference/mfc-dll-wizard.md)   
 [Creazione di un progetto DLL MFC](../../mfc/reference/creating-an-mfc-dll-project.md)

