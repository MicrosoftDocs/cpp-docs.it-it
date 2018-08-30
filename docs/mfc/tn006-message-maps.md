---
title: 'TN006: Mappe messaggi | Microsoft Docs'
ms.custom: ''
ms.date: 06/25/2018
ms.technology:
- cpp-mfc
ms.topic: conceptual
f1_keywords:
- vc.messages.maps
dev_langs:
- C++
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 6faa29858e94c7d80d6039e35278b6a7ae263a85
ms.sourcegitcommit: 9a0905c03a73c904014ec9fd3d6e59e4fa7813cd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/29/2018
ms.locfileid: "43213977"
---
# <a name="tn006-message-maps"></a>TN006: mappe messaggi

In questa nota descrive le funzionalità di mappa dei messaggi MFC.

## <a name="the-problem"></a>Il problema

Microsoft Windows implementa funzioni virtuali nelle classi di finestre che usano la funzionalità di messaggistica. A causa dell'elevato numero dei messaggi coinvolti, fornendo una funzione virtuale separata per ogni messaggio Windows creerebbe un oggetto vtable estremamente grande.

Poiché il numero di messaggi definiti dal sistema di Windows cambia nel corso del tempo, e poiché le applicazioni possono definire i propri messaggi di Windows, esegue il mapping di messaggio forniscono un livello di riferimento indiretto che impedisce modifiche all'interfaccia di danneggiare il codice esistente.

## <a name="overview"></a>Panoramica

MFC offre un'alternativa all'istruzione switch che è stato usato per gestire i messaggi inviati a una finestra nei programmi tradizionali basati su Windows. È possibile definire un mapping dai messaggi ai metodi in modo che quando viene ricevuto un messaggio da una finestra, il metodo appropriato viene chiamato automaticamente. Questa funzionalità della mappa messaggi è progettata per essere simile a funzioni virtuali ma presenta vantaggi aggiuntivi non sono disponibili con funzioni virtuali C++.

## <a name="defining-a-message-map"></a>La definizione di una mappa messaggi

Il [DECLARE_MESSAGE_MAP](reference/message-map-macros-mfc.md#declare_message_map) macro dichiara tre membri per una classe.

- Chiamata di una matrice privata di voci AFX_MSGMAP_ENTRY *_messageEntries*.

- Chiamata di una struttura AFX_MSGMAP protetta *messageMap* che punta al *_messageEntries* matrice.

- Una funzione virtuale protetta chiamata `GetMessageMap` che restituisce l'indirizzo del *messageMap*.

Questa macro deve essere inserita nella dichiarazione di una classe con le mappe messaggi. Per convenzione, è alla fine della dichiarazione di classe. Ad esempio:

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

Si tratta del formato generato da AppWizard e ClassWizard durante la creazione di nuove classi. Il / / {{e / o}} parentesi quadre sono necessari per la creazione guidata classe.

Nella tabella della mappa messaggi viene definita mediante un set di macro che si espandono in voci della mappa messaggi. Inizia una tabella con una [BEGIN_MESSAGE_MAP](reference/message-map-macros-mfc.md#begin_message_map) chiamata di macro, che definisce la classe che viene gestita da questa mappa dei messaggi e la classe padre a cui vengono passati messaggi non gestiti. La tabella termina con il [END_MESSAGE_MAP](reference/message-map-macros-mfc.md#end_message_map) chiamata della macro.

Tra queste due macro chiamate è una voce per ogni messaggio gestite da questa mappa messaggi. Tutti i messaggi Windows standard sono una macro del form on_wm*MESSAGE_NAME* che genera una voce per il messaggio.

Una firma della funzione standard è stata definita per la decompressione dei parametri di ogni messaggio di Windows e fornire l'indipendenza dai tipi. Queste firme possono trovarsi nel file AFXWIN. h nella dichiarazione di [CWnd](../mfc/reference/cwnd-class.md). Ognuno di essi è contrassegnato con la parola chiave **afx_msg** per facilitare l'identificazione.

> [!NOTE]
> ClassWizard richiede l'uso di **afx_msg** parola chiave nelle dichiarazioni del gestore mappa messaggi.

 Queste firme di funzione sono state derivate mediante una convenzione di semplice. Il nome della funzione inizia sempre con `"On`". Questa è seguita dal nome del messaggio di Windows con il rimosso "WM _" e la prima lettera di ogni parola in maiuscolo. L'ordine dei parametri viene *wParam* aggiungendo `LOWORD`(*lParam*) quindi `HIWORD`(*lParam*). Non vengono passati i parametri inutilizzati. Tutti gli handle sono a wrapping da classi MFC vengono convertiti in puntatori agli oggetti appropriati di MFC. Nell'esempio seguente viene illustrato come gestire il messaggio WM_PAINT e causare la `CMyWnd::OnPaint` funzione da chiamare:

```cpp
BEGIN_MESSAGE_MAP(CMyWnd, CMyParentWndClass)
    //{{AFX_MSG_MAP(CMyWnd)
    ON_WM_PAINT()
    //}}AFX_MSG_MAP
END_MESSAGE_MAP()
```

 La tabella di mappa del messaggio deve essere definita all'esterno dell'ambito di qualsiasi definizione di funzione o classe. Non devono essere inserita in un blocco di extern "C".

> [!NOTE]
> ClassWizard modificherà le voci della mappa messaggi che si verificano tra il / / {{e / o}} parentesi quadra di commento.

## <a name="user-defined-windows-messages"></a>Messaggi di Windows definiti dall'utente

Messaggi definiti dall'utente possono essere inclusi in una mappa messaggi usando la [ON_MESSAGE](reference/message-map-macros-mfc.md#on_message) macro. Questa macro accetta un numero di messaggio e un metodo del form:

```cpp
    // inside the class declaration
    afx_msg LRESULT OnMyMessage(WPARAM wParam, LPARAM lParam);

    #define WM_MYMESSAGE (WM_USER + 100)

BEGIN_MESSAGE_MAP(CMyWnd, CMyParentWndClass)
    ON_MESSAGE(WM_MYMESSAGE, OnMyMessage)
END_MESSAGE_MAP()
```

In questo esempio è stabilire un gestore per un messaggio personalizzato che ha un ID di messaggio Windows derivato dalla base WM_USER standard per i messaggi definiti dall'utente. Nell'esempio seguente viene illustrato come chiamare questo gestore:

```cpp
CWnd* pWnd = ...;
pWnd->SendMessage(WM_MYMESSAGE);
```

L'intervallo di messaggi definiti dall'utente che usano questo approccio deve essere compreso nell'intervallo WM_USER a 0x7fff.

> [!NOTE]
> ClassWizard non supporta le routine del gestore immettendo ON_MESSAGE dall'interfaccia utente ClassWizard. È necessario immetterli manualmente nell'editor di Visual C++. ClassWizard analizzerà queste voci e consentono di esplorarle esattamente come qualsiasi altra voce della mappa messaggi.

## <a name="registered-windows-messages"></a>Messaggi Windows registrati

Il [RegisterWindowMessage](https://msdn.microsoft.com/library/windows/desktop/ms644947) funzione viene utilizzata per definire un nuovo messaggio della finestra che viene garantito l'univocità in tutto il sistema. La macro ON_REGISTERED_MESSAGE viene utilizzata per gestire questi messaggi. Questa macro accetta un nome di un *UINT quasi* variabile che contiene l'ID di messaggio windows registrati. Esempio:

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

La variabile (WM_FIND in questo esempio) ID messaggio registrata di Windows deve essere un *NEAR* variabili a causa della modalità ON_REGISTERED_MESSAGE viene implementato.

L'intervallo di messaggi definiti dall'utente che usano questo approccio sarà compreso nell'intervallo 0xC000 e 0xFFFF.

> [!NOTE]
> ClassWizard non supporta le routine del gestore immettendo ON_REGISTERED_MESSAGE dall'interfaccia utente ClassWizard. È necessario immetterli manualmente dall'editor di testo. ClassWizard analizzerà queste voci e consentono di esplorarle esattamente come qualsiasi altra voce della mappa messaggi.

## <a name="command-messages"></a>Messaggi di comando

In mappe messaggi con ON_COMMAND (macro), vengono gestiti i messaggi di comando di menu e tasti di scelta rapida. Questa macro accetta un ID di comando e un metodo. Solo il messaggio WM_COMMAND specifico che ha un *wParam* uguale al comando specificato ID viene gestito dal metodo specificato nella voce della mappa messaggi. Funzioni membro non accettano parametri e restituire **void**. La macro ha il formato seguente:

```cpp
ON_COMMAND(id, memberFxn)
```

Comando update messaggi vengono indirizzati attraverso lo stesso meccanismo, ma in alternativa, usare la macro ON_UPDATE_COMMAND_UI. Funzioni membro di gestore aggiornamento comandi accettano un solo parametro, un puntatore a un [CCmdUI](../mfc/reference/ccmdui-class.md) dell'oggetto e restituire **void**. La macro ha il formato

```cpp
ON_UPDATE_COMMAND_UI(id, memberFxn)
```

Gli utenti avanzati possono usare l'ON_COMMAND_EX (macro), che è una forma estesa di gestori di messaggi di comando. La macro fornisce un superset della funzionalità ON_COMMAND. Funzioni membro esteso di gestori di comandi accettano un solo parametro, un **UINT** che contiene l'ID di comando e restituire una **BOOL**. Il valore restituito deve essere **TRUE** per indicare che il comando è stato gestito. In caso contrario, il routing continuerà ad altri oggetti destinazione comando.

Esempi di questi moduli:

- Inside Resource. h (in genere generato da Visual C++)

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

 Gli utenti avanzati possono gestire una gamma di comandi usando un gestore comando singolo: [ON_COMMAND_RANGE](reference/message-map-macros-mfc.md#on_command_range) o ON_COMMAND_RANGE_EX. Vedere la documentazione del prodotto per altre informazioni su queste macro.

> [!NOTE]
> ClassWizard supporta la creazione di gestori ON_COMMAND e ON_UPDATE_COMMAND_UI, ma non supporta la creazione ON_COMMAND_EX o ON_COMMAND_RANGE gestori. Tuttavia, creazione guidata classe analizzerà e permettono di esplorare tutte le varianti di gestore comando quattro.

## <a name="control-notification-messages"></a>Messaggi di notifica di controllo

I messaggi inviati dai controlli figlio a una finestra di avrà un ulteriore di bit delle informazioni nel messaggio, ma eseguire il mapping voce: ID. del controllo Il gestore di messaggi specificato in una voce della mappa messaggi viene chiamato solo se vengono soddisfatte le condizioni seguenti:

- Il codice di notifica del controllo (Word più significativa della *lParam*), ad esempio BN_CLICKED, corrisponde al codice di notifica specificato nella voce della mappa messaggi.

- L'ID di controllo (*wParam*) corrisponde all'ID di controllo specificato nella voce della mappa messaggi.

I messaggi di notifica di controllo personalizzato è possono usare la [ON_CONTROL](reference/message-map-macros-mfc.md#on_control) macro per definire una voce della mappa messaggi con un codice di notifica personalizzata. Questa macro ha il formato

```cpp
ON_CONTROL(wNotificationCode, id, memberFxn)
```

Per l'utilizzo avanzato [ON_CONTROL_RANGE](reference/message-map-macros-mfc.md#on_control_range) possono essere utilizzate per gestire una notifica di controllo specifico da una gamma di controlli con lo stesso gestore.

> [!NOTE]
> ClassWizard non supporta la creazione di un gestore ON_CONTROL o ON_CONTROL_RANGE nell'interfaccia utente. È necessario immetterli manualmente con l'editor di testo. ClassWizard analizzerà queste voci e consentono di esplorarle esattamente come qualsiasi altro voci della mappa messaggi.

I controlli comuni di Windows usare il più potente [WM_NOTIFY](https://msdn.microsoft.com/library/windows/desktop/bb775583) per le notifiche di controllo complessa. Questa versione di MFC con supporto diretto per questo nuovo messaggio usando le macro messaggi ON_NOTIFY e ON_NOTIFY_RANGE. Vedere la documentazione del prodotto per altre informazioni su queste macro.

## <a name="see-also"></a>Vedere anche

[Note tecniche per numero](../mfc/technical-notes-by-number.md)  
[Note tecniche per categoria](../mfc/technical-notes-by-category.md)  
