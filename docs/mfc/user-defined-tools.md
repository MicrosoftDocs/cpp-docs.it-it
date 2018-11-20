---
title: Strumenti definiti dall'utente
ms.date: 11/19/2018
helpviewer_keywords:
- user-defined tools (MFC Extensions)
ms.assetid: cb887421-78ce-4652-bc67-96a53984ccaa
ms.openlocfilehash: df8ba98fa1986052bae82b2afbdf40725298bef7
ms.sourcegitcommit: 9e891eb17b73d98f9086d9d4bfe9ca50415d9a37
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/20/2018
ms.locfileid: "52175730"
---
# <a name="user-defined-tools"></a>Strumenti definiti dall'utente

MFC supporta strumenti definiti dall'utente. Uno strumento definito dall'utente è un comando speciale che esegue un programma esterno, specificato dall'utente. È possibile usare il processo di personalizzazione per gestire gli strumenti definiti dall'utente. Tuttavia, è possibile usare questo processo se l'oggetto applicazione non è derivato da [classe CWinAppEx](../mfc/reference/cwinappex-class.md). Per altre informazioni sulla personalizzazione, vedere [personalizzazione per MFC](../mfc/customization-for-mfc.md).

Se è abilitato il supporto di strumenti definiti dall'utente, la finestra di dialogo di personalizzazione include automaticamente il **strumenti** scheda. La figura seguente mostra le **strumenti** pagina.

![Scheda strumenti nella finestra di dialogo Personalizza](../mfc/media/custdialogboxtoolstab.png "scheda strumenti nella finestra di dialogo Personalizza") <br/>
Scheda di personalizzazione della finestra Casella degli strumenti

## <a name="enabling-user-defined-tools-support"></a>Supporto di strumenti di attivazione definiti dall'utente

Per abilitare strumenti definiti dall'utente in un'applicazione, chiamare [CWinAppEx::EnableUserTools](../mfc/reference/cwinappex-class.md#enableusertools). Tuttavia, prima di tutto è necessario definire diverse costanti nei file di risorse dell'applicazione da usare come parametri per questa chiamata.

Nell'editor di risorse creare un comando fittizio che usa un ID di comando appropriati. Nell'esempio seguente, usiamo `ID_TOOLS_ENTRY` come ID di comando. Questo ID comando contrassegna un percorso in uno o più menu in cui il framework inserisce gli strumenti definiti dall'utente.

È necessario riservare alcuni ID consecutivi nella tabella di stringhe per rappresentare gli strumenti definiti dall'utente. Il numero di stringhe che sono stati riservati è uguale al numero massimo di strumenti di utente che è possono definire gli utenti. Nell'esempio seguente, questi sono denominati `ID_USER_TOOL1` tramite `ID_USER_TOOL10`.

È possibile offrire suggerimenti per gli utenti per aiutarli a selezionare le directory e gli argomenti per i programmi esterni che verranno chiamati come gli strumenti. A tale scopo, creare due menu popup nell'editor di risorse. Nell'esempio seguente queste opzioni sono rispettivamente `IDR_MENU_ARGS` e `IDR_MENU_DIRS`. Per ogni comando in questi menu, definire una stringa nella tabella di stringhe dell'applicazione. L'ID risorsa della stringa deve essere uguale all'ID di comando.

È anche possibile creare una classe derivata da [classe CUserTool](../mfc/reference/cusertool-class.md) per sostituire l'implementazione predefinita. A tale scopo, passare le informazioni di runtime per le classi derivate come quarto parametro in CWinAppEx::EnableUserTools, anziché RUNTIME_CLASS ([classe CUserTool](../mfc/reference/cusertool-class.md)).

Dopo aver definito le costanti appropriate, chiamare [CWinAppEx::EnableUserTools](../mfc/reference/cwinappex-class.md#enableusertools) per abilitare strumenti definiti dall'utente.

La chiamata al metodo seguente viene illustrato come utilizzare queste costanti:

[!code-cpp[NVC_MFC_VisualStudioDemo#1](../mfc/codesnippet/cpp/user-defined-tools_1.cpp)]

In questo esempio, verrà inclusa la scheda strumenti nella **personalizzazione** nella finestra di dialogo. Il framework sostituirà tutti i comandi che corrispondano all'ID di comando `ID_TOOLS_ENTRY` in alcun menu con il set di strumenti dell'utente correntemente definite ogni volta che un utente apre il menu corrispondente. Gli ID di comando `ID_USER_TOOL1` tramite `ID_USER_TOOL10` sono riservati per l'uso di strumenti definiti dall'utente. La classe [classe CUserTool](../mfc/reference/cusertool-class.md) gestisce le chiamate per gli strumenti dell'utente. La scheda degli strumenti della finestra di **personalizzazione** finestra di dialogo sono disponibili pulsanti a destra dei campi di immissione argomento e la directory per accedere ai menu **IDR_MENU_ARGS** e **IDR_MENU_DIRS**. Quando un utente seleziona un comando da uno di questi menu, il framework aggiunge alla casella di testo appropriati la stringa che contiene l'ID di risorsa uguale all'ID di comando.

### <a name="including-predefined-tools"></a>Inclusi gli strumenti predefiniti

Se si desidera predefinire alcuni strumenti sull'avvio dell'applicazione, è necessario eseguire l'override di [CFrameWnd::LoadFrame](../mfc/reference/cframewnd-class.md#loadframe) metodo della finestra principale dell'applicazione. In quel metodo, è necessario eseguire i passaggi seguenti.

##### <a name="to-add-new-tools-in-loadframe"></a>Per aggiungere nuovi strumenti in LoadFrame

1. Ottenere un puntatore per il [classe CUserToolsManager](../mfc/reference/cusertoolsmanager-class.md) oggetto chiamando [CWinAppEx::GetUserToolsManager](../mfc/reference/cwinappex-class.md#getusertoolsmanager).

1. Per ogni singolo strumento che si desidera creare, chiamare [CUserToolsManager::CreateNewTool](../mfc/reference/cusertoolsmanager-class.md#createnewtool). Questo metodo restituisce un puntatore a un [classe CUserTool](../mfc/reference/cusertool-class.md) dell'oggetto e viene aggiunto lo strumento utente appena creato per la raccolta interna di strumenti. Se è stato specificato le informazioni di runtime per una classe derivata di [classe CUserTool](../mfc/reference/cusertool-class.md) come quarto parametro del [CWinAppEx::EnableUserTools](../mfc/reference/cwinappex-class.md#enableusertools), [CUserToolsManager::CreateNewTool](../mfc/reference/cusertoolsmanager-class.md#createnewtool) verranno creare un'istanza e restituire un'istanza di quella classe invece.

1. Per ogni strumento, impostare la relativa etichetta di testo impostando `CUserTool::m_strLabel` e impostare il relativo comando chiamando `CUserTool::SetCommand`. L'implementazione predefinita di [classe CUserTool](../mfc/reference/cusertool-class.md) recupera automaticamente icone disponibili dal programma che viene specificato nella chiamata a `SetCommand`.

## <a name="see-also"></a>Vedere anche

[Personalizzazione per MFC](../mfc/customization-for-mfc.md)<br/>
[Classe CUserTool](../mfc/reference/cusertool-class.md)<br/>
[Classe CUserToolsManager](../mfc/reference/cusertoolsmanager-class.md)<br/>
[Classe CWinAppEx](../mfc/reference/cwinappex-class.md)
