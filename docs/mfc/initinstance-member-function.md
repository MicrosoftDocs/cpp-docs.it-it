---
title: Funzione membro InitInstance | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: InitInstance
dev_langs: C++
helpviewer_keywords:
- InitInstance method [MFC]
- applications [MFC], initializing
- MFC, initializing
- initializing MFC applications
ms.assetid: 4ef09267-ff7f-4c39-91a0-57454a264f83
caps.latest.revision: "10"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 96042b4d2931fb3709f992f6e43e408c919fe014
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="initinstance-member-function"></a>Funzione membro InitInstance
Il sistema operativo Windows consente di eseguire più copie, o "istanza" della stessa applicazione. `WinMain`chiamate [InitInstance](../mfc/reference/cwinapp-class.md#initinstance) ogni volta che viene avviata una nuova istanza dell'applicazione.  
  
 Lo standard `InitInstance` implementazione creato dalla creazione guidata applicazione MFC vengono eseguite le attività seguenti:  
  
-   Come l'azione centrale, crea i modelli che consentono di creare documenti, visualizzazioni e finestre cornice di documento. Per una descrizione di questo processo, vedere [creazione del modello di documento](../mfc/document-template-creation.md).  
  
-   Caricamento di opzioni di file standard da un file ini o del Registro di sistema, inclusi i nomi dei file utilizzati di recente.  
  
-   Consente di registrare uno o più modelli di documento.  
  
-   Per un'applicazione MDI, crea una finestra cornice principale.  
  
-   Elabora la riga di comando per aprire un documento specificato nella riga di comando o per aprire un nuovo documento vuoto.  
  
 È possibile aggiungere il codice di inizializzazione o modificare il codice scritto dalla procedura guidata.  
  
> [!NOTE]
>  MFC (applicazioni) devono essere inizializzate come apartment a thread singolo (STA). Se si chiama [CoInitializeEx](http://msdn.microsoft.com/library/windows/desktop/ms695279) nel `InitInstance` eseguire l'override, specificare `COINIT_APARTMENTTHREADED` (anziché `COINIT_MULTITHREADED`). Per ulteriori informazioni, vedere PRB: applicazione MFC si blocca quando si inizializza l'applicazione come a thread multipli Apartment (828643) in [http://support.microsoft.com/default.aspxscid=kb;en-us;828643](http://support.microsoft.com/default.aspxscid=kb;en-us;828643).  
  
## <a name="see-also"></a>Vedere anche  
 [CWinApp: classe Application](../mfc/cwinapp-the-application-class.md)
