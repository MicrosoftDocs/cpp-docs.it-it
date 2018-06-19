---
title: Supporto per contesti di attivazione nello stato del modulo MFC | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- activation contexts [MFC]
- activation contexts [MFC], MFC support
ms.assetid: 1e49eea9-3620-46dd-bc5f-d664749567c7
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 2713e0025c0587a4ab76813d4d07eed0825db447
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33380709"
---
# <a name="support-for-activation-contexts-in-the-mfc-module-state"></a>Supporto per contesti di attivazione nello stato del modulo MFC
MFC crea un contesto di attivazione utilizzando una risorsa manifesto fornita dal modulo dell'utente. Per ulteriori informazioni sulla modalità di creazione dei contesti di attivazione, vedere i seguenti argomenti:  
  
-   [Contesti di attivazione](http://msdn.microsoft.com/library/aa374153)  
  
-   [Manifesti dell'applicazione](http://msdn.microsoft.com/library/aa374191)  
  
-   [Manifesti dell'assembly](http://msdn.microsoft.com/library/aa374219)  
  
## <a name="remarks"></a>Note  
 Durante la lettura di questi argomenti di Windows SDK, si noti che il meccanismo di contesto di attivazione MFC il contesto di attivazione di Windows SDK è simile ad eccezione del fatto che MFC non utilizza l'API di contesto di attivazione di Windows SDK.  
  
 Contesto di attivazione funziona nella DLL di estensione MFC, le applicazioni MFC e DLL dell'utente nei modi seguenti:  
  
-   Le applicazioni MFC utilizzano gli ID di risorsa 1 per la propria risorsa manifesto. In questo caso, MFC non crea il proprio contesto di attivazione, ma utilizza il contesto di applicazione predefinito.  
  
-   Le DLL dell'utente MFC utilizzano gli ID di risorsa 2 per la propria risorsa manifesto. In questo caso, MFC crea un contesto di attivazione per ogni DLL dell'utente, pertanto differenti DLL dell'utente possono utilizzare versioni diverse delle stesse librerie (come ad esempio, la libreria dei controlli comuni).  
  
-   Le DLL di estensione MFC si basano sulle applicazioni host o sulle DLL dell'utente per determinare il proprio contesto di attivazione.  
  
 Anche se lo stato del contesto di attivazione può essere modificato tramite i processi descritti in [tramite l'API di contesto di attivazione](http://msdn.microsoft.com/library/aa376620), utilizzando il meccanismo di contesto di attivazione MFC può essere utile quando si sviluppano basati su DLL plug-in architetture in cui non è facile (o non è possibile) per passare manualmente lo stato di attivazione prima e dopo singole chiamate a plug-in esterni.  
  
 Il contesto di attivazione viene creato in [AfxWinInit](../mfc/reference/application-information-and-management.md#afxwininit). Viene eliminato nel distruttore `AFX_MODULE_STATE`. L'handle del contesto di attivazione viene conservato in `AFX_MODULE_STATE`. (`AFX_MODULE_STATE` è descritta in [AfxGetStaticModuleState](reference/extension-dll-macros.md#afxgetstaticmodulestate).)  
  
 Il [AFX_MANAGE_STATE](reference/extension-dll-macros.md#afx_manage_state) macro attiva e disattiva il contesto di attivazione. `AFX_MANAGE_STATE` è abilitata per le librerie MFC statiche, nonché per le DLL MFC, per consentire al codice MFC di operare nel proprio contesto di attivazione selezionato dalla DLL dell'utente.  
  
## <a name="see-also"></a>Vedere anche  
 [Contesti di attivazione](http://msdn.microsoft.com/library/aa374153)   
 [Manifesti dell'applicazione](http://msdn.microsoft.com/library/aa374191)   
 [Manifesti dell'assembly](http://msdn.microsoft.com/library/aa374219)   
 [AfxWinInit](../mfc/reference/application-information-and-management.md#afxwininit)   
 [AfxGetStaticModuleState](reference/extension-dll-macros.md#afxgetstaticmodulestate)   
 [AFX_MANAGE_STATE](reference/extension-dll-macros.md#afx_manage_state)

