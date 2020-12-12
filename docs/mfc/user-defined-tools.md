---
description: "Altre informazioni su: strumenti definiti dall'utente"
title: Strumenti definiti dall'utente
ms.date: 11/19/2018
helpviewer_keywords:
- user-defined tools (MFC Extensions)
ms.assetid: cb887421-78ce-4652-bc67-96a53984ccaa
ms.openlocfilehash: 4cccd0a68751a2f196c8c2e652088e8939e3f162
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97263634"
---
# <a name="user-defined-tools"></a>Strumenti definiti dall'utente

MFC supporta gli strumenti definiti dall'utente. Uno strumento definito dall'utente è un comando speciale che esegue un programma esterno specificato dall'utente. È possibile utilizzare il processo di personalizzazione per gestire gli strumenti definiti dall'utente. Tuttavia, non è possibile usare questo processo se l'oggetto applicazione non è derivato dalla [classe CWinAppEx](../mfc/reference/cwinappex-class.md). Per ulteriori informazioni sulla personalizzazione, vedere [personalizzazione per MFC](../mfc/customization-for-mfc.md).

Se è stato abilitato il supporto per gli strumenti definiti dall'utente, nella finestra di dialogo personalizzazione sarà inclusa automaticamente la scheda **strumenti** . Nella figura seguente è illustrata la pagina **strumenti** .

![Scheda Strumenti nella finestra di dialogo Personalizza](../mfc/media/custdialogboxtoolstab.png "Scheda Strumenti nella finestra di dialogo Personalizza") <br/>
Scheda strumenti della finestra di dialogo personalizzazione

## <a name="enabling-user-defined-tools-support"></a>Abilitazione del supporto degli strumenti definiti dall'utente

Per abilitare gli strumenti definiti dall'utente in un'applicazione, chiamare [CWinAppEx:: EnableUserTools](../mfc/reference/cwinappex-class.md#enableusertools). Tuttavia, è necessario innanzitutto definire più costanti nei file di risorse dell'applicazione da usare come parametri per questa chiamata.

Nell'editor di risorse creare un comando fittizio che usa un ID comando appropriato. Nell'esempio seguente viene usato `ID_TOOLS_ENTRY` come ID di comando. Questo ID comando contrassegna un percorso in uno o più menu in cui il Framework inserirà gli strumenti definiti dall'utente.

È necessario riservare alcuni ID consecutivi nella tabella di stringhe per rappresentare gli strumenti definiti dall'utente. Il numero di stringhe riservate è uguale al numero massimo di strumenti utente che gli utenti possono definire. Nell'esempio seguente, questi vengono denominati `ID_USER_TOOL1` tramite `ID_USER_TOOL10` .

È possibile fornire suggerimenti agli utenti per consentire loro di selezionare le directory e gli argomenti per i programmi esterni che verranno chiamati strumenti. A tale scopo, creare due menu popup nell'editor risorse. Nell'esempio seguente vengono denominati `IDR_MENU_ARGS` e `IDR_MENU_DIRS` . Per ogni comando in questi menu, definire una stringa nella tabella delle stringhe dell'applicazione. L'ID risorsa della stringa deve essere uguale all'ID di comando.

È anche possibile creare una classe derivata dalla [Classe CUserTool](../mfc/reference/cusertool-class.md) per sostituire l'implementazione predefinita. A tale scopo, passare le informazioni di runtime per la classe derivata come quarto parametro in CWinAppEx:: EnableUserTools, anziché RUNTIME_CLASS ([Classe CUserTool](../mfc/reference/cusertool-class.md)).

Dopo aver definito le costanti appropriate, chiamare [CWinAppEx:: EnableUserTools](../mfc/reference/cwinappex-class.md#enableusertools) per abilitare gli strumenti definiti dall'utente.

La chiamata al metodo seguente mostra come usare queste costanti:

[!code-cpp[NVC_MFC_VisualStudioDemo#1](../mfc/codesnippet/cpp/user-defined-tools_1.cpp)]

In questo esempio la scheda strumenti verrà inclusa nella finestra di dialogo **personalizzazione** . Il Framework sostituisce qualsiasi comando che corrisponde all'ID di comando `ID_TOOLS_ENTRY` in qualsiasi menu con il set di strumenti utente attualmente definiti ogni volta che un utente apre tale menu. Gli ID di comando `ID_USER_TOOL1` tramite `ID_USER_TOOL10` sono riservati per l'utilizzo con gli strumenti definiti dall'utente. La classe [CUserTool](../mfc/reference/cusertool-class.md) gestisce le chiamate agli strumenti utente. Nella scheda strumento della finestra di dialogo **personalizzazione** sono disponibili i pulsanti a destra dei campi argomento e immissione directory per accedere ai menu **IDR_MENU_ARGS** e **IDR_MENU_DIRS**. Quando un utente seleziona un comando da uno di questi menu, il Framework aggiunge alla casella di testo appropriata la stringa con ID risorsa uguale all'ID di comando.

### <a name="including-predefined-tools"></a>Inclusione di strumenti predefiniti

Se si desidera predefinire alcuni strumenti all'avvio dell'applicazione, è necessario eseguire l'override del metodo [CFrameWnd:: LoadFrame](../mfc/reference/cframewnd-class.md#loadframe) della finestra principale dell'applicazione. In questo metodo, è necessario eseguire i passaggi seguenti.

##### <a name="to-add-new-tools-in-loadframe"></a>Per aggiungere nuovi strumenti in LoadFrame

1. Ottenere un puntatore all'oggetto della [classe CUserToolsManager](../mfc/reference/cusertoolsmanager-class.md) chiamando [CWinAppEx:: GetUserToolsManager](../mfc/reference/cwinappex-class.md#getusertoolsmanager).

1. Per ogni strumento che si desidera creare, chiamare [CUserToolsManager:: CreateNewTool](../mfc/reference/cusertoolsmanager-class.md#createnewtool). Questo metodo restituisce un puntatore a un oggetto della [Classe CUserTool](../mfc/reference/cusertool-class.md) e aggiunge lo strumento utente appena creato alla raccolta interna di strumenti. Se sono state fornite le informazioni di runtime per una classe derivata della [Classe CUserTool](../mfc/reference/cusertool-class.md) come quarto parametro di [CWinAppEx:: EnableUserTools](../mfc/reference/cwinappex-class.md#enableusertools), [CUserToolsManager:: CreateNewTool](../mfc/reference/cusertoolsmanager-class.md#createnewtool) creerà un'istanza di e restituirà invece un'istanza di tale classe.

1. Per ogni strumento, impostare la relativa etichetta di testo impostando `CUserTool::m_strLabel` e impostando il relativo comando chiamando `CUserTool::SetCommand` . L'implementazione predefinita della [Classe CUserTool](../mfc/reference/cusertool-class.md) recupera automaticamente le icone disponibili dal programma specificato nella chiamata a `SetCommand` .

## <a name="see-also"></a>Vedi anche

[Personalizzazione per MFC](../mfc/customization-for-mfc.md)<br/>
[Classe CUserTool](../mfc/reference/cusertool-class.md)<br/>
[Classe CUserToolsManager](../mfc/reference/cusertoolsmanager-class.md)<br/>
[Classe CWinAppEx](../mfc/reference/cwinappex-class.md)
