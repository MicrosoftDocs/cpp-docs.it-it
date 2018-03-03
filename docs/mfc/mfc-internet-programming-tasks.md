---
title: "Attività di programmazione Internet MFC | Documenti Microsoft"
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- Internet applications [MFC], getting started
- Internet applications [MFC], first steps
ms.assetid: 6377e9b8-07c4-4380-b63b-05f5a9061313
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: cd726860e181eb352d7368f31a31d2cbd7489000
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="mfc-internet-programming-tasks"></a>Attività di programmazione Internet MFC
In questa sezione contiene i passaggi dettagliati per aggiungere il supporto Internet per le applicazioni. Gli argomenti trattati includono come utilizzare le classi MFC per abilitare Internet per le applicazioni esistenti e come aggiungere il supporto di documenti attivi per il componente COM esistente. Si desidera creare un documento con quotazioni azionarie aggiornate, i punteggi di football del Pittsburgh, e le temperature Antartide Microsoft fornisce una serie di tecnologie che consentono di eseguire questa operazione tramite Internet.  
  
 Le tecnologie Active includono controlli ActiveX (precedentemente controlli OLE) e documenti attivi; WinInet per facilmente il recupero e salvataggio di file su Internet. e moniker asincroni per il download dei dati efficiente. Visual C++ include procedure guidate che consentono di iniziare rapidamente con un'applicazione iniziale. Per informazioni introduttive su queste tecnologie, vedere [nozioni di programmazione Internet MFC](../mfc/mfc-internet-programming-basics.md) e [MFC COM](../mfc/mfc-com.md).  
  
 È sempre a un file FTP, ma non sono state apprese WinSock e programmazione WinInet (classi) i protocolli di rete incapsulare questi protocolli, offrendo una semplice serie di funzioni è possibile utilizzare per scrivere un'applicazione client su Internet per scaricare i file utilizzo di HTTP, FTP e gopher. È possibile utilizzare WinInet per la ricerca nelle directory sul disco rigido o tutto il mondo. In modo trasparente è possibile raccogliere i dati di diversi tipi e presentarle all'utente in un'interfaccia integrata.  
  
 Si dispone di grandi quantità di dati per il download asincrono moniker forniscono una soluzione di COM (Component Object Model) per il rendering progressivo di oggetti di grandi dimensioni. WinInet può anche essere utilizzato in modo asincrono.  
  
 Nella tabella seguente vengono descritte alcune delle operazioni che è possibile eseguire con queste tecnologie.  
  
|Hai|Si desidera|È necessario|  
|--------------|-----------------|----------------|  
|Un server Web.|Monitorare gli accessi e informazioni dettagliate sulle richieste di URL.|Scrivere un filtro, di richiedere notifiche per gli eventi di accesso e il mapping di URL.|  
|Un Web browser.|Fornire contenuto dinamico.|Creare controlli ActiveX e documenti attivi.|  
|Un'applicazione basata sul documento.|Aggiungere il supporto per un file FTP.|Utilizzare WinInet o moniker asincroni.|  
  
 Vedere gli argomenti seguenti per informazioni dettagliate iniziare:  
  
-   [Scelte di progettazione delle applicazioni](../mfc/application-design-choices.md)  
  
-   [Scrittura di applicazioni MFC](../mfc/writing-mfc-applications.md)  
  
-   [Controlli ActiveX in Internet](../mfc/activex-controls-on-the-internet.md)  
  
-   [Aggiornamento di un controllo ActiveX esistente](../mfc/upgrading-an-existing-activex-control.md)  
  
-   [Documenti attivi su Internet](../mfc/active-documents-on-the-internet.md)  
  
-   [Moniker asincroni in Internet](../mfc/asynchronous-monikers-on-the-internet.md)  
  
-   [Test delle applicazioni Internet](../mfc/testing-internet-applications.md)  
  
-   [Sicurezza Internet](../mfc/internet-security-cpp.md)  
  
## <a name="see-also"></a>Vedere anche  
 [Nozioni fondamentali di programmazione Internet MFC](../mfc/mfc-internet-programming-basics.md)   
 [Informazioni Internet per attività](../mfc/internet-information-by-task.md)

