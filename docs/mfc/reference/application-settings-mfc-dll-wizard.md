---
title: Impostazioni dell&quot;applicazione, creazione guidata DLL MFC | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- vc.appwiz.mfc.dll.appset
dev_langs:
- C++
helpviewer_keywords:
- MFC DLL Wizard, application settings
ms.assetid: 0a96b94f-ae36-4975-951b-c9ffb3def21c
caps.latest.revision: 9
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
ms.translationtype: Machine Translation
ms.sourcegitcommit: 040985df34f2613b4e4fae29498721aef15d50cb
ms.openlocfilehash: df1e3de3e1548fe4c4c340a30127d9916998ba64
ms.contentlocale: it-it
ms.lasthandoff: 02/24/2017

---
# <a name="application-settings-mfc-dll-wizard"></a>Impostazioni applicazione, Creazione guidata DLL MFC
Utilizzare questa pagina della procedura guidata DLL MFC per progettare e aggiungere funzionalità di base a un nuovo progetto DLL MFC.  
  
## <a name="dll-type"></a>Tipo di DLL  
 Selezionare il tipo di DLL che si desidera creare.  
  
 **DLL regolari utilizzando DLL MFC condivisa**  
 Selezionare questa opzione per collegare la libreria MFC al programma come DLL condivisa. Tramite questa opzione, è possibile condividere oggetti MFC tra la DLL e l'applicazione chiamante. Il programma effettua chiamate alla libreria MFC in fase di esecuzione. Questa opzione consente di ridurre i requisiti di memoria e disco del programma se è costituita da più file eseguibili che utilizzano la libreria MFC. Applicazioni Win32 sia MFC è possono chiamare funzioni nella DLL. È necessario ridistribuire le DLL MFC con questo tipo di progetto.  
  
 **DLL regolari con collegata statico MFC**  
 Selezionare questa opzione per collegare il programma in modo statico alla libreria MFC in fase di compilazione. Applicazioni Win32 sia MFC è possono chiamare funzioni nella DLL. Anche se questa opzione aumenta le dimensioni del programma, non è necessario ridistribuire le DLL MFC con questo tipo di progetto. È possibile condividere oggetti MFC tra la DLL e l'applicazione chiamante.  
  
 **DLL di estensione MFC**  
 Selezionare questa opzione se si desidera che il programma per effettuare chiamate alla libreria MFC in fase di esecuzione e, se si desidera condividere oggetti MFC tra la DLL e l'applicazione chiamante. Questa opzione consente di ridurre i requisiti di memoria e disco del programma, se è costituita da più file eseguibili che utilizzano la libreria MFC. Solo i programmi MFC è possono chiamare funzioni nella DLL. È necessario ridistribuire le DLL MFC con questo tipo di progetto.  
  
## <a name="additional-features"></a>Funzionalità aggiuntive  
 Selezionare se la DLL MFC deve supportare l'automazione e se deve supportare Windows sockets.  
  
 **Automazione**  
 Selezionare **automazione** per consentire al programma di modificare oggetti implementati in un altro programma. Selezione di **automazione** espone anche un programma per altri client di automazione. Vedere [automazione](../../mfc/automation.md) per ulteriori informazioni.  
  
 **Socket di Windows**  
 Selezionare questa opzione per indicare che il programma supporta Windows sockets. Consente di scrivere programmi in grado di comunicare su reti TCP/IP.  
  
 Quando la DLL MFC con Windows sockets viene creato il supporto, [:: InitInstance](../../mfc/reference/cwinapp-class.md#initinstance) Inizializza il supporto per socket e il file di intestazione MFC StdAfx. H include AfxSock.  
  
## <a name="see-also"></a>Vedere anche  
 [Creazione guidata DLL MFC](../../mfc/reference/mfc-dll-wizard.md)   
 [Creazione di un progetto DLL MFC](../../mfc/reference/creating-an-mfc-dll-project.md)


