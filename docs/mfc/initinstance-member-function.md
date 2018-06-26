---
title: Funzione membro InitInstance | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
f1_keywords:
- InitInstance
dev_langs:
- C++
helpviewer_keywords:
- InitInstance method [MFC]
- applications [MFC], initializing
- MFC, initializing
- initializing MFC applications
ms.assetid: 4ef09267-ff7f-4c39-91a0-57454a264f83
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: a9379fef6a1d676d6a3bc757ee51d5d27acd5f6f
ms.sourcegitcommit: 060f381fe0807107ec26c18b46d3fcb859d8d2e7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/25/2018
ms.locfileid: "36930176"
---
# <a name="initinstance-member-function"></a>Funzione membro InitInstance
Il sistema operativo Windows consente di eseguire più copie, o "istanza" della stessa applicazione. `WinMain` le chiamate [InitInstance](../mfc/reference/cwinapp-class.md#initinstance) ogni volta che viene avviata una nuova istanza dell'applicazione.  
  
 Lo standard `InitInstance` implementazione creato dalla creazione guidata applicazione MFC vengono eseguite le attività seguenti:  
  
-   Come l'azione centrale, crea i modelli di documento che a sua volta creare documenti, visualizzazioni e finestre cornice. Per una descrizione di questo processo, vedere [creazione di modelli di documento](../mfc/document-template-creation.md).  
  
-   Carica le opzioni standard del file da un file. ini o del Registro di sistema Windows, inclusi i nomi dei file usati di recente.  
  
-   Consente di registrare uno o più modelli di documento.  
  
-   Per un'applicazione MDI, crea una finestra cornice principale.  
  
-   Elabora la riga di comando per aprire un documento specificato nella riga di comando o per aprire un nuovo documento vuoto.  
  
 È possibile aggiungere il codice di inizializzazione o modificare il codice scritto dalla procedura guidata.  
  
> [!NOTE]
>  MFC (applicazioni) devono essere inizializzate come apartment a thread singolo (STA). Se si chiama [CoInitializeEx](http://msdn.microsoft.com/library/windows/desktop/ms695279) nel `InitInstance` eseguire l'override, specificare COINIT_APARTMENTTHREADED (anziché COINIT_MULTITHREADED). Per altre informazioni, vedere PRB: applicazione MFC si blocca quando si inizializza l'applicazione come a multithreading Apartment (828643) nella [ http://support.microsoft.com/default.aspxscid=kb; en-us; 828643](http://support.microsoft.com/default.aspxscid=kb;en-us;828643).  
  
## <a name="see-also"></a>Vedere anche  
 [CWinApp: classe Application](../mfc/cwinapp-the-application-class.md)
