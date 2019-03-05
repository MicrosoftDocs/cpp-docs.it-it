---
title: Punti di ingresso delle funzioni DLL esportate
ms.date: 11/04/2016
helpviewer_keywords:
- exporting DLLs [MFC], functions
- MFC, managing state data
- state management [MFC], exported DLLs
ms.assetid: 3268666e-d24b-44f2-80e8-7c80f73b93ca
ms.openlocfilehash: 129defe39a79fd38211a539a4a85d79d9a3c0998
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57279523"
---
# <a name="exported-dll-function-entry-points"></a>Punti di ingresso delle funzioni DLL esportate

Per le funzioni esportate di una DLL, usare il [AFX_MANAGE_STATE](reference/extension-dll-macros.md#afx_manage_state) macro per mantenere lo stato complessivo appropriato quando si passa dal modulo DLL alla DLL dell'applicazione chiamante.

Una volta chiamata, questa macro imposta `pModuleState`, un puntatore a una struttura `AFX_MODULE_STATE` contenente i dati globali del modulo, come lo stato effettivo del modulo per il resto dell'ambito contenitore della funzione. All'uscita dall'ambito contenente la macro, viene automaticamente ripristinato lo stato effettivo precedente del modulo.

La commutazione si ottiene creando un'istanza di un `AFX_MODULE_STATE` classe nello stack. Nel relativo costruttore, questa classe ottiene un puntatore allo stato del modulo corrente e lo archivia in una variabile membro, quindi imposta `pModuleState` come nuovo stato del modulo effettivo. Nel relativo distruttore, questa classe ripristina il puntatore archiviato nella variabile membro come lo stato del modulo effettivo.

Se si dispone di una funzione esportata, ad esempio una che attiva una finestra di dialogo nella DLL, è necessario aggiungere il seguente codice all'inizio della funzione:

[!code-cpp[NVC_MFCConnectionPoints#6](../mfc/codesnippet/cpp/exported-dll-function-entry-points_1.cpp)]

Ciò consente di scambiare lo stato corrente del modulo con lo stato restituito da [AfxGetStaticModuleState](reference/extension-dll-macros.md#afxgetstaticmodulestate) fino alla fine dell'ambito corrente.

I problemi con le risorse nelle DLL si verificheranno se non viene utilizzata la macro `AFX_MANAGE_STATE`. Per impostazione predefinita, MFC utilizza il gestore delle risorse dell'applicazione principale per caricare il modello di risorsa. Questo modello viene effettivamente archiviato nella DLL. La causa radice consiste nel fatto che l'informazione sullo stato del modulo di MFC non è stata scambiata dalla macro `AFX_MANAGE_STATE`. Il gestore delle risorse viene recuperato dallo stato del modulo di MFC. Non scambiare lo stato del modulo provoca l'utilizzo errato del gestore delle risorse.

`AFX_MANAGE_STATE` non deve essere necessariamente collocato in ogni funzione nella DLL. Ad esempio, `InitInstance` può essere chiamato dal codice MFC nell'applicazione senza `AFX_MANAGE_STATE` perché MFC scambia automaticamente lo stato del modulo prima di `InitInstance` e quindi lo cambia nuovamente dopo che `InitInstance` completa la sua esecuzione. Lo stesso vale per tutti i gestori della mappa messaggi. DLL MFC regolari sono effettivamente una routine della finestra principale speciali che cambia automaticamente lo stato del modulo prima di instradare qualsiasi messaggio.

## <a name="see-also"></a>Vedere anche

[Gestione dei dati dello stato dei moduli MFC](../mfc/managing-the-state-data-of-mfc-modules.md)
