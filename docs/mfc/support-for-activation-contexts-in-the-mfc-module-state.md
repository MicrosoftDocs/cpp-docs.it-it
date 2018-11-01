---
title: Supporto per contesti di attivazione nello stato del modulo MFC
ms.date: 11/04/2016
helpviewer_keywords:
- activation contexts [MFC]
- activation contexts [MFC], MFC support
ms.assetid: 1e49eea9-3620-46dd-bc5f-d664749567c7
ms.openlocfilehash: c5e3d5c9195f18c54de63ec7ecd38b165feca5df
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50619023"
---
# <a name="support-for-activation-contexts-in-the-mfc-module-state"></a>Supporto per contesti di attivazione nello stato del modulo MFC

MFC crea un contesto di attivazione utilizzando una risorsa manifesto fornita dal modulo dell'utente. Per ulteriori informazioni sulla modalità di creazione dei contesti di attivazione, vedere i seguenti argomenti:

- [Contesti di attivazione](/windows/desktop/SbsCs/activation-contexts)

- [Manifesti dell'applicazione](/windows/desktop/SbsCs/application-manifests)

- [Manifesti dell'assembly](/windows/desktop/SbsCs/assembly-manifests)

## <a name="remarks"></a>Note

Durante la lettura di questi argomenti di Windows SDK, si noti che il meccanismo di contesto di attivazione MFC è simile al contesto di attivazione di Windows SDK ad eccezione del fatto che MFC non utilizza l'API di contesto di attivazione di Windows SDK.

Contesto di attivazione funziona in applicazioni MFC, le DLL dell'utente e le DLL estensione MFC nei modi seguenti:

- Le applicazioni MFC utilizzano gli ID di risorsa 1 per la propria risorsa manifesto. In questo caso, MFC non crea il proprio contesto di attivazione, ma utilizza il contesto di applicazione predefinito.

- Le DLL dell'utente MFC utilizzano gli ID di risorsa 2 per la propria risorsa manifesto. In questo caso, MFC crea un contesto di attivazione per ogni DLL dell'utente, pertanto differenti DLL dell'utente possono utilizzare versioni diverse delle stesse librerie (come ad esempio, la libreria dei controlli comuni).

- Le DLL di estensione MFC si basano sulle applicazioni host o sulle DLL dell'utente per determinare il proprio contesto di attivazione.

Anche se lo stato del contesto di attivazione può essere modificato utilizzando i processi descritti in [usando l'API di contesto di attivazione](/windows/desktop/SbsCs/using-the-activation-context-api), utilizzando il meccanismo di contesto di attivazione MFC può essere utile durante lo sviluppo di architetture di plug-in basate sulle DLL in cui non è facile (o non è possibile) commutare manualmente lo stato di attivazione prima e dopo le chiamate individuali a plug-in esterni.

Il contesto di attivazione viene creato nel [AfxWinInit](../mfc/reference/application-information-and-management.md#afxwininit). Viene eliminato definitivamente nel distruttore `AFX_MODULE_STATE`. L'handle del contesto di attivazione viene conservato in `AFX_MODULE_STATE`. (`AFX_MODULE_STATE` descritto nella [AfxGetStaticModuleState](reference/extension-dll-macros.md#afxgetstaticmodulestate).)

Il [AFX_MANAGE_STATE](reference/extension-dll-macros.md#afx_manage_state) macro attiva e disattiva il contesto di attivazione. `AFX_MANAGE_STATE` è abilitata per le librerie MFC statiche, nonché per le DLL MFC, per consentire al codice MFC di operare nel proprio contesto di attivazione selezionato dalla DLL dell'utente.

## <a name="see-also"></a>Vedere anche

[Contesti di attivazione](/windows/desktop/SbsCs/activation-contexts)<br/>
[Manifesti dell'applicazione](/windows/desktop/SbsCs/application-manifests)<br/>
[Manifesti dell'assembly](/windows/desktop/SbsCs/assembly-manifests)<br/>
[AfxWinInit](../mfc/reference/application-information-and-management.md#afxwininit)<br/>
[AfxGetStaticModuleState](reference/extension-dll-macros.md#afxgetstaticmodulestate)<br/>
[AFX_MANAGE_STATE](reference/extension-dll-macros.md#afx_manage_state)

