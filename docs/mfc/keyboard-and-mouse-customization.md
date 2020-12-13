---
description: 'Altre informazioni su: personalizzazione della tastiera e del mouse'
title: Personalizzazione di tastiera e mouse
ms.date: 11/19/2018
helpviewer_keywords:
- customizations [MFC], keyboard and mouse (MFC Extensions)
- keyboard and mouse customizations (MFC Extensions)
ms.assetid: 1f789f1b-5f2e-4b11-b974-e3e2a2e49d82
ms.openlocfilehash: 2ff54b2092bb6db52d5b780f4e64e51e05d8b402
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97336825"
---
# <a name="keyboard-and-mouse-customization"></a>Personalizzazione di tastiera e mouse

MFC consente all'utente dell'applicazione di personalizzare la gestione dell'input della tastiera e del mouse. L'utente può personalizzare l'input della tastiera assegnando dei tasti di scelta rapida ai comandi. L'utente può personalizzare anche l'input del mouse selezionando il comando da eseguire quando fa doppio clic nelle finestre specifiche dell'applicazione. In questo argomento viene illustrato come personalizzare l'input per l'applicazione.

Nella finestra di dialogo **personalizzazione** , l'utente può modificare i controlli personalizzati per il mouse e la tastiera. Per visualizzare questa finestra di dialogo, l'utente fa clic su **Personalizza** nel menu **Visualizza** , quindi su **barre degli strumenti e ancoraggio**. Nella finestra di dialogo l'utente fa clic sulla scheda della **tastiera** o sulla scheda **del mouse** .

## <a name="keyboard-customization"></a>Personalizzazione della tastiera

Nella figura seguente viene mostrata la scheda **tastiera** della finestra di dialogo **personalizzazione** .

![Scheda Tastiera nella finestra di dialogo Personalizza](../mfc/media/mfcnextkeyboardtab.png "Scheda Tastiera nella finestra di dialogo Personalizza") <br/>
Scheda di personalizzazione della tastiera

L'utente interagisce con la scheda della tastiera per assegnare uno o più tasti di scelta rapida a un comando. I comandi disponibili sono elencati sul lato sinistro della scheda. L'utente può selezionare qualsiasi comando disponibile dal menu. Solo i comandi di menu possono essere associati a un tasto di scelta rapida. Quando l'utente immette un nuovo collegamento, viene abilitato il pulsante **assegna** . Quando l'utente fa clic su questo pulsante, il comando selezionato viene automaticamente associato al tasto di scelta rapida.

Tutte le scelte rapide da tastiera correntemente assegnate sono elencate nella casella di riepilogo nella colonna di destra. L'utente può inoltre selezionare singoli tasti di scelta rapida e rimuoverli o reimpostare tutti i mapping per l'applicazione.

Se si desidera supportare questa personalizzazione nell'applicazione, è necessario creare un oggetto [CKeyboardManager](reference/ckeyboardmanager-class.md) . Per creare un `CKeyboardManager` oggetto, chiamare la funzione [CWinAppEx:: InitKeyboardManager](reference/cwinappex-class.md#initkeyboardmanager). Questo metodo crea e inizializza un gestore della tastiera. Se si crea un gestore della tastiera manualmente, è comunque necessario chiamare `CWinAppEx::InitKeyboardManager` per inizializzarlo.

Se si utilizza la procedura guidata per creare l'applicazione, il gestore della tastiera verrà inizializzato dalla procedura guidata. Dopo che l'applicazione ha inizializzato il gestore della tastiera, il Framework aggiunge una scheda della **tastiera** alla finestra di dialogo di **personalizzazione** .

## <a name="mouse-customization"></a>Personalizzazione del mouse

Nella figura seguente viene illustrata la scheda **mouse** della finestra di dialogo **personalizzazione** .

![Scheda Mouse nella finestra di dialogo Personalizza](../mfc/media/mfcnextmousetab.png "Scheda Mouse nella finestra di dialogo Personalizza") <br/>
Scheda di personalizzazione del mouse

L'utente interagisce con questa scheda per assegnare un comando di menu all'azione di doppio clic del mouse. L'utente seleziona una visualizzazione dalla parte sinistra della finestra e utilizza i controlli sulla parte destra per associare un comando all'azione di doppio clic. Quando l'utente fa clic su **Chiudi**, l'applicazione esegue il comando associato ogni volta che l'utente fa doppio clic in un punto qualsiasi della visualizzazione.

Per impostazione predefinita, la personalizzazione del mouse non è abilitata quando si crea un'applicazione tramite la procedura guidata.

#### <a name="to-enable-mouse-customization"></a>Per abilitare la personalizzazione del mouse

1. Inizializzare un oggetto [CMouseManager](reference/cmousemanager-class.md) chiamando [CWinAppEx:: InitMouseManager](reference/cwinappex-class.md#initmousemanager).

1. Ottenere un puntatore al gestore del mouse utilizzando [CWinAppEx:: GetMouseManager](reference/cwinappex-class.md#getmousemanager).

1. Aggiungere visualizzazioni al gestore del mouse utilizzando il metodo [CMouseManager:: AddView](reference/cmousemanager-class.md#addview) . Eseguire questa operazione per ogni visualizzazione che si desidera aggiungere al gestore del mouse.

Dopo che l'applicazione ha inizializzato il gestore del mouse, il Framework aggiunge la scheda **del mouse** alla finestra di dialogo **Personalizza** . Se non si aggiungono visualizzazioni, il tentativo di accedere alla scheda genererà un'eccezione non gestita. Dopo aver creato un elenco di visualizzazioni, la scheda del **mouse** è disponibile per l'utente.

Quando si aggiunge una nuova visualizzazione al gestore del mouse, le viene assegnato un ID univoco. Se si desidera supportare la personalizzazione del mouse per una finestra, è necessario elaborare il messaggio di WM_LBUTTONDBLCLICK e chiamare la funzione [CWinAppEx:: OnViewDoubleClick](reference/cwinappex-class.md#onviewdoubleclick) . Quando si chiama questa funzione, uno dei parametri è l'ID per tale finestra. È responsabilità del programmatore tenere traccia dei numeri ID e degli oggetti ad essi associati.

## <a name="security-concerns"></a>Problemi di sicurezza

Come descritto in [strumenti definiti dall'](user-defined-tools.md)utente, l'utente può associare un ID strumento definito dall'utente all'evento di doppio clic. Quando l'utente fa doppio clic su una visualizzazione, nell'applicazione viene eseguita la ricerca di uno strumento dell'utente che corrisponda all'ID associato. Se viene individuato uno strumento corrispondente, tale strumento sarà avviato. Se nell'applicazione non viene trovato uno strumento corrispondente, viene inviato un messaggio WM_COMMAND con l'ID alla visualizzazione nella quale è stato fatto doppio clic.

Le impostazioni personalizzate vengono archiviate nel Registro di sistema. Modificando il Registro di sistema, un utente malintenzionato può sostituire un ID strumento dell'utente valido con un comando arbitrario. Quando l'utente fa doppio clic su una visualizzazione, nella visualizzazione viene elaborato il comando selezionato dall'utente malintenzionato. Ciò potrebbe causare un comportamento imprevisto e potenzialmente pericoloso.

Inoltre, questo tipo di attacco può superare le misure di sicurezza dell'interfaccia utente. Ad esempio, si supponga che la funzione di stampa in un'applicazione sia disabilitata. Ovvero, nella relativa interfaccia utente, il menu **stampa** e il pulsante non sono disponibili. In genere ciò impedisce all'applicazione di eseguire la stampa. Ma se un utente malintenzionato modifica il Registro di sistema, un utente può inviare il comando di stampa direttamente facendo doppio clic sulla visualizzazione, ignorando gli elementi dell'interfaccia utente che non sono disponibili.

Per proteggere il sistema da questo tipo di attacco, aggiungere del codice al gestore del comando dell'applicazione per verificare la validità di un comando prima dell'esecuzione. Non dipendere dall'interfaccia utente per impedire a un comando di essere inviato all'applicazione.

## <a name="see-also"></a>Vedi anche

[Personalizzazione per MFC](customization-for-mfc.md)<br/>
[Classe CKeyboardManager](reference/ckeyboardmanager-class.md)<br/>
[Classe CMouseManager](reference/cmousemanager-class.md)<br/>
[Implicazioni relative alla sicurezza della personalizzazione](security-implications-of-customization.md)
