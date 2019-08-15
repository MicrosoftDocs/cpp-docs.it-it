---
title: 'TN006: Mappe messaggi'
ms.date: 06/25/2018
f1_keywords:
- vc.messages.maps
helpviewer_keywords:
- ON_UPDATE_COMMAND_UI macro [MFC]
- ON_NOTIFY_RANGE macro [MFC]
- ON_COMMAND macro [MFC]
- ON_CONTROL_RANGE macro [MFC]
- ON_REGISTERED_MESSAGE macro [MFC]
- ON_NOTIFY message [MFC]
- ON_COMMAND_RANGE_EX macro [MFC]
- ON_MESSAGE macro [MFC]
- Windows messages [MFC], message maps
- ON_COMMAND_RANGE macro [MFC]
- TN006
- ON_CONTROL macro [MFC]
- ON_COMMAND_EX macro [MFC]
- message maps [MFC], Windows messaging
ms.assetid: af4b6794-4b40-4f1e-ad41-603c3b7409bb
ms.openlocfilehash: 489db046910cc4b44e381b3f9056cfe8f8b7ccfa
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69511111"
---
# <a name="tn006-message-maps"></a>TN006: Mappe messaggi

Questa nota descrive la funzionalità di mapping dei messaggi MFC.

## <a name="the-problem"></a>Il problema

Microsoft Windows implementa funzioni virtuali nelle classi finestra che usano la relativa funzionalità di messaggistica. A causa dell'elevato numero di messaggi correlati, la fornitura di una funzione virtuale separata per ogni messaggio di Windows creerebbe una vtable eccessivamente grande.

Poiché il numero di messaggi di Windows definiti dal sistema cambia nel tempo e poiché le applicazioni possono definire i propri messaggi di Windows, le mappe messaggi forniscono un livello di riferimento indiretto che impedisce alle modifiche dell'interfaccia di suddividere il codice esistente.

## <a name="overview"></a>Panoramica

MFC fornisce un'alternativa all'istruzione switch utilizzata nei programmi tradizionali basati su Windows per gestire i messaggi inviati a una finestra. Un mapping dai messaggi ai metodi può essere definito in modo che, quando un messaggio viene ricevuto da una finestra, il metodo appropriato venga chiamato automaticamente. Questa funzionalità per la mappa messaggi è progettata per assomigliare alle funzioni virtuali, ma offre vantaggi C++ aggiuntivi non possibili con le funzioni virtuali.

## <a name="defining-a-message-map"></a>Definizione di una mappa messaggi

La macro [DECLARE_MESSAGE_MAP](reference/message-map-macros-mfc.md#declare_message_map) dichiara tre membri per una classe.

- Matrice privata di voci AFX_MSGMAP_ENTRY chiamate *_messageEntries*.

- Struttura AFX_MSGMAP protetta denominata *MessageMap* che punta alla matrice *_messageEntries* .

- Funzione virtuale protetta denominata `GetMessageMap` che restituisce l'indirizzo di *MessageMap*.

Questa macro deve essere inserita nella dichiarazione di qualsiasi classe usando le mappe messaggi. Per convenzione, si trova alla fine della dichiarazione di classe. Ad esempio:

```cpp
class CMyWnd : public CMyParentWndClass
{
    // my stuff...

protected:
    //{{AFX_MSG(CMyWnd)
    afx_msg void OnPaint();
    //}}AFX_MSG

    DECLARE_MESSAGE_MAP()
};
```

Questo è il formato generato da Creazione guidata applicazioni e ClassWizard quando creano nuove classi. Per ClassWizard sono necessarie parentesi quadre//{{e//}}.

La tabella della mappa messaggi viene definita utilizzando un set di macro che si espandono in voci della mappa messaggi. Una tabella inizia con una chiamata di macro [BEGIN_MESSAGE_MAP](reference/message-map-macros-mfc.md#begin_message_map) , che definisce la classe gestita da questa mappa messaggi e la classe padre a cui vengono passati i messaggi non gestiti. La tabella termina con la chiamata della macro [END_MESSAGE_MAP](reference/message-map-macros-mfc.md#end_message_map) .

Tra queste due chiamate macro è presente una voce per ogni messaggio che deve essere gestito da questa mappa messaggi. Ogni messaggio standard di Windows ha una macro del formato ON_WM_*MESSAGE_NAME* che genera una voce per quel messaggio.

È stata definita una firma di funzione standard per decomprimere i parametri di ogni messaggio di Windows e garantire l'indipendenza dai tipi. Queste firme sono reperibili nel file AFXWIN. h nella dichiarazione di [CWnd](../mfc/reference/cwnd-class.md). Ognuna di esse è contrassegnata con la parola chiave **afx_msg** per facilitarne l'identificazione.

> [!NOTE]
> Per ClassWizard è necessario usare la parola chiave **afx_msg** nelle dichiarazioni del gestore della mappa messaggi.

Queste firme di funzione sono state derivate mediante una convenzione semplice. Il nome della funzione inizia sempre con `"On`". Questa operazione è seguita dal nome del messaggio di Windows con "WM_" rimosso e dalla prima lettera di ogni parola maiuscola. L'ordine dei parametri è *wParam* seguito `LOWORD`da (*lParam*), quindi `HIWORD`(*lParam*). I parametri inutilizzati non vengono passati. Gli handle di cui è stato eseguito il wrapper dalle classi MFC vengono convertiti in puntatori agli oggetti MFC appropriati. Nell'esempio seguente viene illustrato come gestire il messaggio WM_PAINT e causare la `CMyWnd::OnPaint` chiamata della funzione:

```cpp
BEGIN_MESSAGE_MAP(CMyWnd, CMyParentWndClass)
    //{{AFX_MSG_MAP(CMyWnd)
    ON_WM_PAINT()
    //}}AFX_MSG_MAP
END_MESSAGE_MAP()
```

La tabella della mappa messaggi deve essere definita al di fuori dell'ambito di una funzione o di una definizione di classe. Non deve essere inserito in un blocco extern "C".

> [!NOTE]
> ClassWizard modificherà le voci della mappa messaggi che si verificano tra la parentesi di commento//{{e//}}.

## <a name="user-defined-windows-messages"></a>Messaggi di Windows definiti dall'utente

I messaggi definiti dall'utente possono essere inclusi in una mappa messaggi utilizzando la macro [ON_MESSAGE](reference/message-map-macros-mfc.md#on_message) . Questa macro accetta un numero di messaggio e un metodo nel formato seguente:

```cpp
    // inside the class declaration
    afx_msg LRESULT OnMyMessage(WPARAM wParam, LPARAM lParam);

    #define WM_MYMESSAGE (WM_USER + 100)

BEGIN_MESSAGE_MAP(CMyWnd, CMyParentWndClass)
    ON_MESSAGE(WM_MYMESSAGE, OnMyMessage)
END_MESSAGE_MAP()
```

In questo esempio viene stabilito un gestore per un messaggio personalizzato con un ID messaggio di Windows derivato dalla base WM_USER standard per i messaggi definiti dall'utente. Nell'esempio seguente viene illustrato come chiamare questo gestore:

```cpp
CWnd* pWnd = ...;
pWnd->SendMessage(WM_MYMESSAGE);
```

L'intervallo di messaggi definiti dall'utente che usano questo approccio deve essere compreso tra WM_USER e 0x7FFF.

> [!NOTE]
> ClassWizard non supporta l'immissione di routine del gestore ON_MESSAGE dall'interfaccia utente di ClassWizard. È necessario immetterli manualmente dall'editor C++ visivo. ClassWizard analizzerà queste voci e le esplorerà esattamente come qualsiasi altra voce della mappa messaggi.

## <a name="registered-windows-messages"></a>Messaggi di Windows registrati

La funzione [RegisterWindowMessage](/windows/win32/api/winuser/nf-winuser-registerwindowmessagew) viene usata per definire un nuovo messaggio di finestra che è sicuramente univoco nel sistema. La macro ON_REGISTERED_MESSAGE viene utilizzata per gestire questi messaggi. Questa macro accetta un nome di una variabile *near uint* che contiene l'ID del messaggio di Windows registrato. Esempio:

```cpp
class CMyWnd : public CMyParentWndClass
{
public:
    CMyWnd();

    //{{AFX_MSG(CMyWnd)
    afx_msg LRESULT OnFind(WPARAM wParam, LPARAM lParam);
    //}}AFX_MSG

    DECLARE_MESSAGE_MAP()
};

static UINT NEAR WM_FIND = RegisterWindowMessage("COMMDLG_FIND");

BEGIN_MESSAGE_MAP(CMyWnd, CMyParentWndClass)
    //{{AFX_MSG_MAP(CMyWnd)
    ON_REGISTERED_MESSAGE(WM_FIND, OnFind)
    //}}AFX_MSG_MAP
END_MESSAGE_MAP()
```

La variabile registrata ID messaggio Windows (WM_FIND in questo esempio) deve essere una variabile *near* a causa della modalità di implementazione di ON_REGISTERED_MESSAGE.

L'intervallo di messaggi definiti dall'utente che usano questo approccio sarà compreso tra 0xC000 e 0xFFFF.

> [!NOTE]
> ClassWizard non supporta l'immissione di routine del gestore ON_REGISTERED_MESSAGE dall'interfaccia utente di ClassWizard. È necessario immetterli manualmente dall'editor di testo. ClassWizard analizzerà queste voci e le esplorerà esattamente come qualsiasi altra voce della mappa messaggi.

## <a name="command-messages"></a>Messaggi di comando

I messaggi di comando dei menu e dei tasti di scelta rapida vengono gestiti nelle mappe messaggi con la macro ON_COMMAND. Questa macro accetta un ID di comando e un metodo. Solo il messaggio WM_COMMAND specifico con un valore *wParam* uguale all'ID di comando specificato viene gestito dal metodo specificato nella voce della mappa messaggi. Le funzioni membro del gestore comandi non accettano parametri e restituiscono **void**. La macro ha il formato seguente:

```cpp
ON_COMMAND(id, memberFxn)
```

I messaggi di aggiornamento del comando vengono instradati tramite lo stesso meccanismo, ma usano invece la macro ON_UPDATE_COMMAND_UI. Le funzioni membro del gestore degli aggiornamenti del comando accettano un solo parametro, un puntatore a un oggetto [CCmdUI](../mfc/reference/ccmdui-class.md) e restituiscono **void**. Il form della macro è

```cpp
ON_UPDATE_COMMAND_UI(id, memberFxn)
```

Gli utenti avanzati possono usare la macro ON_COMMAND_EX, che è una forma estesa di gestori di messaggi di comando. La macro fornisce un superset della funzionalità ON_COMMAND. Le funzioni membro del gestore dei comandi estese accettano un solo parametro, un **uint** che contiene l'ID comando e restituisce un **bool**. Il valore restituito deve essere **true** per indicare che il comando è stato gestito. In caso contrario, il routing continuerà ad altri oggetti di destinazione del comando.

Esempi di questi formati:

- All'interno di Resource. h (in genere C++generato da Visual)

    ```cpp
    #define    ID_MYCMD      100
    #define    ID_COMPLEX    101
    ```

- All'interno della dichiarazione di classe

    ```cpp
    afx_msg void OnMyCommand();
    afx_msg void OnUpdateMyCommand(CCmdUI* pCmdUI);
    afx_msg BOOL OnComplexCommand(UINT nID);
    ```

- All'interno della definizione della mappa messaggi

    ```cpp
    ON_COMMAND(ID_MYCMD, OnMyCommand)
    ON_UPDATE_COMMAND_UI(ID_MYCMD, OnUpdateMyCommand)
    ON_COMMAND_EX(ID_MYCMD, OnComplexCommand)
    ```

- Nel file di implementazione

    ```cpp
    void CMyClass::OnMyCommand()
    {
        // handle the command
    }

    void CMyClass::OnUpdateMyCommand(CCmdUI* pCmdUI)
    {
        // set the UI state with pCmdUI
    }

    BOOL CMyClass::OnComplexCommand(UINT nID)
    {
        // handle the command
        return TRUE;
    }
    ```

Gli utenti avanzati possono gestire un intervallo di comandi utilizzando un singolo gestore comando: [ON_COMMAND_RANGE](reference/message-map-macros-mfc.md#on_command_range) o ON_COMMAND_RANGE_EX. Per ulteriori informazioni su queste macro, vedere la documentazione del prodotto.

> [!NOTE]
> ClassWizard supporta la creazione di gestori ON_COMMAND e ON_UPDATE_COMMAND_UI, ma non supporta la creazione di gestori ON_COMMAND_EX o ON_COMMAND_RANGE. Tuttavia, la creazione guidata classe analizzerà e consentirà di esplorare tutte e quattro le varianti del gestore comando.

## <a name="control-notification-messages"></a>Controllare i messaggi di notifica

I messaggi inviati dai controlli figlio a una finestra contengono informazioni aggiuntive nella voce della mappa messaggi, ovvero l'ID del controllo. Il gestore di messaggi specificato in una voce della mappa messaggi viene chiamato solo se vengono soddisfatte le condizioni seguenti:

- Il codice di notifica del controllo (High Word di *lParam*), ad esempio BN_CLICKED, corrisponde al codice di notifica specificato nella voce della mappa messaggi.

- L'ID di controllo (*wParam*) corrisponde all'ID di controllo specificato nella voce della mappa messaggi.

I messaggi di notifica del controllo personalizzato possono utilizzare la macro [ON_CONTROL](reference/message-map-macros-mfc.md#on_control) per definire una voce della mappa messaggi con un codice di notifica personalizzato. Questa macro ha il formato

```cpp
ON_CONTROL(wNotificationCode, id, memberFxn)
```

Per l'utilizzo avanzato [ON_CONTROL_RANGE](reference/message-map-macros-mfc.md#on_control_range) può essere utilizzato per gestire una notifica di controllo specifica da un intervallo di controlli con lo stesso gestore.

> [!NOTE]
> ClassWizard non supporta la creazione di un gestore ON_CONTROL o ON_CONTROL_RANGE nell'interfaccia utente. È necessario immetterli manualmente con l'editor di testo. ClassWizard analizzerà queste voci e le esplorerà esattamente come qualsiasi altra voce della mappa messaggi.

I controlli comuni di Windows usano [WM_NOTIFY](/windows/win32/controls/wm-notify) più potenti per le notifiche di controllo complesse. Questa versione di MFC dispone del supporto diretto per questo nuovo messaggio usando le macro ON_NOTIFY e ON_NOTIFY_RANGE. Per ulteriori informazioni su queste macro, vedere la documentazione del prodotto.

## <a name="see-also"></a>Vedere anche

[Note tecniche per numero](../mfc/technical-notes-by-number.md)<br/>
[Note tecniche per categoria](../mfc/technical-notes-by-category.md)
