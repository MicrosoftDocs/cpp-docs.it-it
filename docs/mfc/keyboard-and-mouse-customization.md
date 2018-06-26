---
title: Personalizzazione di tastiera e Mouse | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- customizations [MFC], keyboard and mouse (MFC Extensions)
- keyboard and mouse customizations (MFC Extensions)
ms.assetid: 1f789f1b-5f2e-4b11-b974-e3e2a2e49d82
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 8fda670198dd9bd03a6d944ce4db70542926bf41
ms.sourcegitcommit: 060f381fe0807107ec26c18b46d3fcb859d8d2e7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/25/2018
ms.locfileid: "36931580"
---
# <a name="keyboard-and-mouse-customization"></a>Personalizzazione di tastiera e mouse
MFC consente all'utente dell'applicazione di personalizzare la gestione dell'input della tastiera e del mouse. L'utente può personalizzare l'input della tastiera assegnando dei tasti di scelta rapida ai comandi. L'utente può personalizzare anche l'input del mouse selezionando il comando da eseguire quando fa doppio clic nelle finestre specifiche dell'applicazione. In questo argomento viene illustrato come personalizzare l'input per l'applicazione.  
  
 Nel **personalizzazione** finestra di dialogo, l'utente può modificare i controlli personalizzati per il puntatore del mouse e tastiera. Per visualizzare questa finestra di dialogo, l'utente fa riferimento a **Personalizza** sul **vista** menu e quindi fa clic su **ancoraggio e barre degli strumenti**. Nella finestra di dialogo, l'utente sceglie il **tastiera** scheda o il **Mouse** scheda.  
  
## <a name="keyboard-customization"></a>Personalizzazione della tastiera  
 La figura seguente mostra la **tastiera** scheda della finestra il **personalizzazione** finestra di dialogo.  
  
 ![Scheda tastiera nella finestra di dialogo Personalizza](../mfc/media/mfcnextkeyboardtab.png "mfcnextkeyboardtab")  
Scheda di personalizzazione della tastiera  
  
 L'utente interagisce con la scheda della tastiera per assegnare uno o più tasti di scelta rapida a un comando. I comandi disponibili sono elencati sul lato sinistro della scheda. L'utente può selezionare qualsiasi comando disponibile dal menu. Solo i comandi di menu possono essere associati a un tasto di scelta rapida. Dopo che l'utente immette un nuovo collegamento, il **assegnare** pulsante risulta abilitato. Quando l'utente fa clic su questo pulsante, il comando selezionato viene automaticamente associato al tasto di scelta rapida.  
  
 Tutte le scelte rapide da tastiera correntemente assegnate sono elencate nella casella di riepilogo nella colonna di destra. L'utente può inoltre selezionare singoli tasti di scelta rapida e rimuoverli o reimpostare tutti i mapping per l'applicazione.  
  
 Se si desidera supportare questa personalizzazione nell'applicazione, è necessario creare una [CKeyboardManager](../mfc/reference/ckeyboardmanager-class.md) oggetto. Per creare una `CKeyboardManager` dell'oggetto, chiamare la funzione [CWinAppEx::InitKeyboardManager](../mfc/reference/cwinappex-class.md#initkeyboardmanager). Questo metodo crea e inizializza un gestore della tastiera. Se si crea un gestore della tastiera manualmente, è comunque necessario chiamare `CWinAppEx::InitKeyboardManager` per inizializzarlo.  
  
 Se si utilizza la procedura guidata per creare l'applicazione, il gestore della tastiera verrà inizializzato dalla procedura guidata. Dopo l'applicazione Inizializza il gestore della tastiera, il framework aggiunge un **tastiera** premere TAB per passare il **personalizzazione** finestra di dialogo.  
  
## <a name="mouse-customization"></a>Personalizzazione del mouse  
 La figura seguente mostra la **Mouse** scheda della finestra il **personalizzazione** finestra di dialogo.  
  
 ![Scheda mouse nella finestra di dialogo Personalizza](../mfc/media/mfcnextmousetab.png "mfcnextmousetab")  
Scheda di personalizzazione del mouse  
  
 L'utente interagisce con questa scheda per assegnare un comando di menu all'azione di doppio clic del mouse. L'utente seleziona una visualizzazione dalla parte sinistra della finestra e utilizza i controlli sulla parte destra per associare un comando all'azione di doppio clic. Dopo che l'utente fa clic su **Chiudi**, l'applicazione esegue il comando associato ogni volta che l'utente fa doppio clic in un punto qualsiasi nella vista.  
  
 Per impostazione predefinita, la personalizzazione del mouse non è abilitata quando si crea un'applicazione tramite la procedura guidata.  
  
#### <a name="to-enable-mouse-customization"></a>Per abilitare la personalizzazione del mouse  
  
1.  Inizializzare un [CMouseManager](../mfc/reference/cmousemanager-class.md) oggetto chiamando [CWinAppEx::InitMouseManager](../mfc/reference/cwinappex-class.md#initmousemanager).  
  
2.  Ottenere un puntatore al gestore del mouse utilizzando [CWinAppEx::GetMouseManager](../mfc/reference/cwinappex-class.md#getmousemanager).  
  
3.  Aggiungere le viste al gestore del mouse utilizzando il [CMouseManager::AddView](../mfc/reference/cmousemanager-class.md#addview) metodo. Eseguire questa operazione per ogni visualizzazione che si desidera aggiungere al gestore del mouse.  
  
 Dopo l'applicazione Inizializza il gestore del mouse, il framework aggiunge il **Mouse** premere TAB per passare il **Personalizza** finestra di dialogo. Se non si aggiungono visualizzazioni, il tentativo di accedere alla scheda genererà un'eccezione non gestita. Dopo aver creato un elenco delle visualizzazioni, il **Mouse** scheda è disponibile per l'utente.  
  
 Quando si aggiunge una nuova visualizzazione al gestore del mouse, le viene assegnato un ID univoco. Se si desidera supportare la personalizzazione del mouse per una finestra, è necessario elaborare il messaggio WM_LBUTTONDBLCLICK e chiamare il [CWinAppEx::OnViewDoubleClick](../mfc/reference/cwinappex-class.md#onviewdoubleclick) (funzione). Quando si chiama questa funzione, uno dei parametri è l'ID per tale finestra. È responsabilità del programmatore tenere traccia dei numeri ID e degli oggetti ad essi associati.  
  
## <a name="security-concerns"></a>Problemi di sicurezza  
 Come descritto in [strumenti definiti dall'utente](../mfc/user-defined-tools.md), l'utente può associare un ID strumento definito dall'utente associato all'evento di doppio clic. Quando l'utente fa doppio clic su una visualizzazione, nell'applicazione viene eseguita la ricerca di uno strumento dell'utente che corrisponda all'ID associato. Se viene individuato uno strumento corrispondente, tale strumento sarà avviato. Se nell'applicazione non viene trovato uno strumento corrispondente, viene inviato un messaggio WM_COMMAND con l'ID alla visualizzazione nella quale è stato fatto doppio clic.  
  
 Le impostazioni personalizzate vengono archiviate nel Registro di sistema. Modificando il Registro di sistema, un utente malintenzionato può sostituire un ID strumento dell'utente valido con un comando arbitrario. Quando l'utente fa doppio clic su una visualizzazione, nella visualizzazione viene elaborato il comando selezionato dall'utente malintenzionato. Ciò potrebbe causare un comportamento imprevisto e potenzialmente pericoloso.  
  
 Inoltre, questo tipo di attacco può superare le misure di sicurezza dell'interfaccia utente. Ad esempio, si supponga che la funzione di stampa in un'applicazione sia disabilitata. Vale a dire, nell'interfaccia utente, il **stampa** menu e pulsante non sono disponibili. In genere ciò impedisce all'applicazione di eseguire la stampa. Ma se un utente malintenzionato modifica il Registro di sistema, un utente può inviare il comando di stampa direttamente facendo doppio clic sulla visualizzazione, ignorando gli elementi dell'interfaccia utente che non sono disponibili.  
  
 Per proteggere il sistema da questo tipo di attacco, aggiungere del codice al gestore del comando dell'applicazione per verificare la validità di un comando prima dell'esecuzione. Non dipendere dall'interfaccia utente per impedire a un comando di essere inviato all'applicazione.  
  
## <a name="see-also"></a>Vedere anche  
 [Personalizzazione per MFC](../mfc/customization-for-mfc.md)   
 [Classe CKeyboardManager](../mfc/reference/ckeyboardmanager-class.md)   
 [Classe CMouseManager](../mfc/reference/cmousemanager-class.md)   
 [Implicazioni relative alla sicurezza della personalizzazione](../mfc/security-implications-of-customization.md)

