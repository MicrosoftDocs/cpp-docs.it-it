---
title: Impostazioni applicazione, creazione guidata DLL MFC | Documenti Microsoft
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
ms.openlocfilehash: 1a243b790881452a983c43fb92d8ebea18c26bcc
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="application-settings-mfc-dll-wizard"></a>Impostazioni applicazione, Creazione guidata DLL MFC
Utilizzare questa pagina della procedura guidata DLL MFC per progettare e aggiungere funzionalità di base a un nuovo progetto di DLL MFC.  
  
## <a name="dll-type"></a>Tipo di DLL  
 Selezionare il tipo di DLL che si desidera creare.  
  
 **DLL regolare MFC che utilizza la DLL MFC condivisa**  
 Selezionare questa opzione per collegare la libreria MFC per il programma come DLL condivisa. Con questa opzione, è possibile condividere oggetti MFC tra la DLL e l'applicazione chiamante. Il programma effettua chiamate alla libreria MFC in fase di esecuzione. Questa opzione riduce i requisiti di memoria e disco del programma è costituito da più file eseguibili che utilizzano la libreria MFC. Applicazioni Win32 sia MFC è possono chiamare funzioni nella DLL. È necessario ridistribuire le DLL MFC con questo tipo di progetto.  
  
 **DLL regolare MFC con MFC collegato in modo statico**  
 Selezionare questa opzione per collegare il programma in modo statico alla libreria MFC in fase di compilazione. Applicazioni Win32 sia MFC è possono chiamare funzioni nella DLL. Quando questa opzione aumenta le dimensioni del programma, non è necessario ridistribuire le DLL MFC con questo tipo di progetto. È possibile condividere oggetti MFC tra la DLL e l'applicazione chiamante.  
  
 **DLL di estensione MFC**  
 Selezionare questa opzione se si desidera che il programma per effettuare chiamate alla libreria MFC in fase di esecuzione e se si desidera condividere oggetti MFC tra la DLL e l'applicazione chiamante. Questa opzione consente di ridurre i requisiti di memoria e disco del programma, se è costituita da più file eseguibili che utilizzano la libreria MFC. Solo i programmi MFC è possono chiamare funzioni nella DLL. È necessario ridistribuire le DLL MFC con questo tipo di progetto.  
  
## <a name="additional-features"></a>Funzionalità aggiuntive  
 Selezionare se la DLL MFC deve supportare l'automazione e se deve supportare Windows sockets.  
  
 **Automazione**  
 Selezionare **automazione** per consentire al programma di modificare oggetti implementati in un altro programma. Selezione **automazione** espone inoltre il programma per altri client di automazione. Vedere [automazione](../../mfc/automation.md) per ulteriori informazioni.  
  
 **Socket di Windows**  
 Selezionare questa opzione per indicare che il programma supporta Windows sockets. Consente di scrivere programmi che comunicano su reti TCP/IP.  
  
 Quando la DLL MFC con Windows socket viene creato il supporto, [:: InitInstance](../../mfc/reference/cwinapp-class.md#initinstance) Inizializza il supporto per socket e il file di intestazione MFC StdAfx. H incluso AfxSock.  
  
## <a name="see-also"></a>Vedere anche  
 [Creazione guidata DLL MFC](../../mfc/reference/mfc-dll-wizard.md)   
 [Creazione di un progetto DLL MFC](../../mfc/reference/creating-an-mfc-dll-project.md)

