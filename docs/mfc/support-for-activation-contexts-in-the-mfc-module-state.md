---
title: Supporto per contesti di attivazione nello stato del modulo MFC
ms.date: 11/04/2016
helpviewer_keywords:
- activation contexts [MFC]
- activation contexts [MFC], MFC support
ms.assetid: 1e49eea9-3620-46dd-bc5f-d664749567c7
ms.openlocfilehash: 296df3d2ecec74c5c9a7deef1617298d40243724
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69511437"
---
# <a name="support-for-activation-contexts-in-the-mfc-module-state"></a>Supporto per contesti di attivazione nello stato del modulo MFC

MFC crea un contesto di attivazione utilizzando una risorsa manifesto fornita dal modulo dell'utente. Per ulteriori informazioni sulla modalità di creazione dei contesti di attivazione, vedere i seguenti argomenti:

- [Contesti di attivazione](/windows/win32/SbsCs/activation-contexts)

- [Manifesti dell'applicazione](/windows/win32/SbsCs/application-manifests)

- [Manifesti dell'assembly](/windows/win32/SbsCs/assembly-manifests)

## <a name="remarks"></a>Note

Quando si leggono questi Windows SDK argomenti, si noti che il meccanismo del contesto di attivazione MFC è simile al contesto di attivazione di Windows SDK ad eccezione del fatto che MFC non utilizza l'API del contesto di attivazione di Windows SDK.

Il contesto di attivazione funziona in applicazioni MFC, dll utente e dll di estensione MFC nei modi seguenti:

- Le applicazioni MFC utilizzano gli ID di risorsa 1 per la propria risorsa manifesto. In questo caso, MFC non crea il proprio contesto di attivazione, ma utilizza il contesto di applicazione predefinito.

- Le DLL dell'utente MFC utilizzano gli ID di risorsa 2 per la propria risorsa manifesto. In questo caso, MFC crea un contesto di attivazione per ogni DLL dell'utente, pertanto differenti DLL dell'utente possono utilizzare versioni diverse delle stesse librerie (come ad esempio, la libreria dei controlli comuni).

- Le DLL di estensione MFC si basano sulle applicazioni host o sulle DLL dell'utente per determinare il proprio contesto di attivazione.

Sebbene lo stato del contesto di attivazione possa essere modificato utilizzando i processi descritti in [utilizzo dell'API del contesto di attivazione](/windows/win32/SbsCs/using-the-activation-context-api), l'utilizzo del meccanismo del contesto di attivazione MFC può essere utile quando si sviluppano architetture plug-in basate su dll in cui non è facile (o non possibile) per cambiare manualmente lo stato di attivazione prima e dopo le singole chiamate a plug-in esterni.

Il contesto di attivazione viene creato in [AfxWinInit](../mfc/reference/application-information-and-management.md#afxwininit). Viene eliminato definitivamente nel distruttore `AFX_MODULE_STATE`. L'handle del contesto di attivazione viene conservato in `AFX_MODULE_STATE`. (`AFX_MODULE_STATE` è descritto in [AfxGetStaticModuleState](reference/extension-dll-macros.md#afxgetstaticmodulestate)).

La macro [AFX_MANAGE_STATE](reference/extension-dll-macros.md#afx_manage_state) attiva e disattiva il contesto di attivazione. `AFX_MANAGE_STATE` è abilitata per le librerie MFC statiche, nonché per le DLL MFC, per consentire al codice MFC di operare nel proprio contesto di attivazione selezionato dalla DLL dell'utente.

## <a name="see-also"></a>Vedere anche

[Contesti di attivazione](/windows/win32/SbsCs/activation-contexts)<br/>
[Manifesti dell'applicazione](/windows/win32/SbsCs/application-manifests)<br/>
[Manifesti dell'assembly](/windows/win32/SbsCs/assembly-manifests)<br/>
[AfxWinInit](../mfc/reference/application-information-and-management.md#afxwininit)<br/>
[AfxGetStaticModuleState](reference/extension-dll-macros.md#afxgetstaticmodulestate)<br/>
[AFX_MANAGE_STATE](reference/extension-dll-macros.md#afx_manage_state)
