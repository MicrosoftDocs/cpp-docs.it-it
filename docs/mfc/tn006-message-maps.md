---
title: 'TN006: Mappe messaggi | Documenti Microsoft'
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
ms.openlocfilehash: 2c4bc820c6b54e055235c1bd29bd55ccfc032c92
ms.sourcegitcommit: 208d445fd7ea202de1d372d3f468e784e77bd666
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/29/2018
ms.locfileid: "37121676"
---
# <a name="tn006-message-maps"></a>TN006: mappe messaggi

In questa nota descrive le funzionalità di mappa dei messaggi MFC.

## <a name="the-problem"></a>Il problema

Microsoft Windows implementa funzioni virtuali nelle classi di finestra che utilizzano la funzionalità di messaggistica. A causa dell'elevato numero di messaggi coinvolti, fornendo una funzione virtuale separata per ogni messaggio Windows creerebbe un oggetto vtable di dimensioni ridotte.

Poiché il numero di messaggi definiti dal sistema di Windows cambia nel tempo e poiché le applicazioni possono definire i propri messaggi di Windows, mappe messaggi forniscono un livello di riferimento indiretto che impedisce modifiche all'interfaccia di interruzione nel codice esistente.

## <a name="overview"></a>Panoramica

MFC fornisce un'alternativa all'istruzione switch utilizzati nei programmi tradizionali basati su Windows per gestire i messaggi inviati a una finestra. È possibile definire un mapping dai messaggi ai metodi in modo che quando viene ricevuto un messaggio da una finestra, il metodo appropriato viene chiamato automaticamente. Questa funzionalità della mappa messaggi è progettata per sono simili alle funzioni virtuali ma offre vantaggi aggiuntivi non disponibili con funzioni virtuali C++.

## <a name="defining-a-message-map"></a>Definizione di una mappa messaggi

Il [DECLARE_MESSAGE_MAP](reference/message-map-macros-mfc.md#declare_message_map) macro dichiara tre membri per una classe.

- Una matrice di voci AFX_MSGMAP_ENTRY privata denominata *_messageEntries*.

- Una struttura AFX_MSGMAP protetta chiamato *messageMap* che punta al *_messageEntries* matrice.

- Funzione virtuale chiamata protetta `GetMessageMap` che restituisce l'indirizzo del *messageMap*.

Questa macro deve inserire nella dichiarazione di una classe con le mappe messaggi. Per convenzione, è alla fine della dichiarazione di classe. Ad esempio:

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

Questo è il formato generato da AppWizard e ClassWizard durante la creazione di nuove classi. Il / / {{e / /}} parentesi quadre sono necessari per la creazione guidata classe.

Tabella della mappa messaggi viene definita mediante un set di macro che si espandono per le voci della mappa dei messaggi. Una tabella inizia con un [BEGIN_MESSAGE_MAP](reference/message-map-macros-mfc.md#begin_message_map) chiamata (macro), che definisce la classe che viene gestita da questa mappa messaggi e la classe padre a cui i messaggi non gestiti vengono passati. La tabella termina con il [END_MESSAGE_MAP](reference/message-map-macros-mfc.md#end_message_map) chiamata di macro.

Tra queste due macro chiamate è una voce per ogni messaggio deve essere gestito da questa mappa messaggi. Ogni messaggio standard di Windows è una macro del form ON_WM_*MESSAGE_NAME* che genera una voce per tale messaggio.

Per decomprimere i parametri di ogni messaggio di Windows e fornisce l'indipendenza dai tipi è stata definita una firma della funzione standard. Queste firme sono disponibili nel file AFXWIN. h nella dichiarazione di [CWnd](../mfc/reference/cwnd-class.md). Ciascuna di esse è contrassegnato con la parola chiave **afx_msg** per semplificarne l'identificazione.

> [!NOTE]
> ClassWizard richiede l'utilizzo di **afx_msg** parola chiave in dichiarazioni di gestore della mappa del messaggio.

 Queste firme di funzione sono state derivate utilizzando una convenzione semplice. Il nome della funzione inizia sempre con `"On`". È seguito dal nome del messaggio di Windows con "WM" rimosse e la prima lettera di ogni parola con iniziale maiuscola. L'ordine dei parametri è *wParam* aggiungendo `LOWORD`(*lParam*) quindi `HIWORD`(*lParam*). Non vengono passati i parametri inutilizzati. Tutti gli handle che sono incapsulati dalle classi MFC vengono convertiti in puntatori a oggetti MFC appropriati. Nell'esempio seguente viene illustrato come gestire il messaggio WM_PAINT e causare la `CMyWnd::OnPaint` funzione da chiamare:

```cpp
BEGIN_MESSAGE_MAP(CMyWnd, CMyParentWndClass)
    //{{AFX_MSG_MAP(CMyWnd)
    ON_WM_PAINT()
    //}}AFX_MSG_MAP
END_MESSAGE_MAP()
```

 La tabella di mappa dei messaggi deve essere definito all'esterno dell'ambito di qualsiasi definizione di funzione o classe. Non devono essere inserita in un blocco di extern "C".

> [!NOTE]
> ClassWizard modificherà le voci della mappa messaggi che si verificano tra il / / {{e / /}} parentesi quadra di commento.

## <a name="user-defined-windows-messages"></a>I messaggi di Windows definiti dall'utente

Messaggi definiti dall'utente possono essere inclusi in una mappa messaggi tramite il [ON_MESSAGE](reference/message-map-macros-mfc.md#on_message) macro. Questa macro accetta un numero di messaggio e un metodo nel formato:

```cpp
    // inside the class declaration
    afx_msg LRESULT OnMyMessage(WPARAM wParam, LPARAM lParam);

    #define WM_MYMESSAGE (WM_USER + 100)

BEGIN_MESSAGE_MAP(CMyWnd, CMyParentWndClass)
    ON_MESSAGE(WM_MYMESSAGE, OnMyMessage)
END_MESSAGE_MAP()
```

In questo esempio si stabilisce un gestore per un messaggio personalizzato a cui è presente un ID di messaggio Windows derivato dalla base WM_USER standard per i messaggi definiti dall'utente. Nell'esempio seguente viene illustrato come chiamare questo gestore:

```cpp
CWnd* pWnd = ...;
pWnd->SendMessage(WM_MYMESSAGE);
```

L'intervallo di messaggi definiti dall'utente che utilizzano questo approccio deve essere compresa nell'intervallo WM_USER a 0x7fff.

> [!NOTE]
> ClassWizard non supporta l'immissione routine del gestore ON_MESSAGE dall'interfaccia utente ClassWizard. È necessario immetterli manualmente dall'editor di Visual C++. ClassWizard analizzerà queste voci e consentono di esplorare tali esattamente come qualsiasi altra voce della mappa messaggi.

## <a name="registered-windows-messages"></a>Messaggi di Windows registrati

Il [RegisterWindowMessage](http://msdn.microsoft.com/library/windows/desktop/ms644947) funzione viene utilizzata per definire un nuovo messaggio della finestra che viene garantito che sia univoco in tutto il sistema. La macro ON_REGISTERED_MESSAGE viene utilizzata per gestire questi messaggi. Questa macro accetta un nome di un *UINT quasi* variabile che contiene l'ID di messaggio windows registrati. Esempio:

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

La variabile (WM_FIND in questo esempio) ID messaggio registrata di Windows deve essere un *NEAR* variabile a causa della modalità ON_REGISTERED_MESSAGE viene implementato.

L'intervallo di messaggi definiti dall'utente che utilizzano questo approccio sarà compreso nell'intervallo 0xC000 e 0xFFFF.

> [!NOTE]
> ClassWizard non supporta l'immissione routine del gestore ON_REGISTERED_MESSAGE dall'interfaccia utente ClassWizard. È necessario immetterli manualmente dall'editor di testo. ClassWizard analizzerà queste voci e consentono di esplorare tali esattamente come qualsiasi altra voce della mappa messaggi.

## <a name="command-messages"></a>Messaggi di comando

Nelle mappe messaggi con ON_COMMAND (macro) vengono gestiti i messaggi di comando di menu e tasti di scelta rapida. Questa macro accetta un ID di comando e un metodo. Solo il messaggio WM_COMMAND specifico con un *wParam* uguale al comando specificato ID viene gestito dal metodo specificato nella voce della mappa messaggi. Funzioni membro non accettano parametri e restituire **void**. La macro ha il formato seguente:

```cpp
ON_COMMAND(id, memberFxn)
```

Messaggi del comando di aggiornamento vengono indirizzati attraverso lo stesso meccanismo, ma in alternativa, usare la macro ON_UPDATE_COMMAND_UI. Comando update gestore membro accettano un solo parametro, un puntatore a un [CCmdUI](../mfc/reference/ccmdui-class.md) dell'oggetto e restituiscono **void**. La macro ha il formato

```cpp
ON_UPDATE_COMMAND_UI(id, memberFxn)
```

Gli utenti esperti possono utilizzare il ON_COMMAND_EX (macro), che è una forma estesa di gestori di messaggi di comando. La macro fornisce un superset della funzionalità ON_COMMAND. Funzioni membro di gestori di comandi estesa accettano un solo parametro, un **UINT** che contiene l'ID di comando e restituire una **BOOL**. Il valore restituito deve essere **TRUE** per indicare che il comando è stato gestito. Routing in caso contrario, continueranno ad altri oggetti destinazione comando.

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

 Gli utenti esperti in grado di gestire una gamma di comandi tramite un singolo comando gestore: [ON_COMMAND_RANGE](reference/message-map-macros-mfc.md#on_command_range) o ON_COMMAND_RANGE_EX. Vedere la documentazione del prodotto per ulteriori informazioni su queste macro.

> [!NOTE]
> ClassWizard supporta la creazione di gestori ON_COMMAND e ON_UPDATE_COMMAND_UI, ma non supporta la creazione di gestori ON_COMMAND_EX o ON_COMMAND_RANGE. Tuttavia, creazione guidata classe analizzerà e consentono di individuare tutte le varianti di gestore quattro comandi.

## <a name="control-notification-messages"></a>Messaggi di notifica di controllo

Voce della mappa messaggi inviati dai controlli figlio in una finestra have un'ulteriore di bit di informazioni in cui i messaggi: ID. del controllo Il gestore di messaggi specificato in una voce della mappa messaggi viene chiamato solo se vengono soddisfatte le condizioni seguenti:

- Il codice di notifica del controllo (word alto del *lParam*), ad esempio BN_CLICKED, corrisponde al codice di notifica specificato nella voce della mappa messaggi.

- L'ID di controllo (*wParam*) corrisponde all'ID di controllo specificato nella voce della mappa messaggi.

I messaggi di notifica di controllo personalizzati possono utilizzare il [ON_CONTROL](reference/message-map-macros-mfc.md#on_control) macro per definire una voce della mappa messaggi con un codice di notifica personalizzata. Questa macro ha il formato

```cpp
ON_CONTROL(wNotificationCode, id, memberFxn)
```

Per l'utilizzo avanzato [ON_CONTROL_RANGE](reference/message-map-macros-mfc.md#on_control_range) può essere utilizzata per gestire una notifica di controllo specifico da una gamma di controlli con lo stesso gestore.

> [!NOTE]
> ClassWizard non supporta la creazione di un gestore ON_CONTROL o ON_CONTROL_RANGE nell'interfaccia utente. È necessario immetterli manualmente con l'editor di testo. ClassWizard analizzerà queste voci e consentono di esplorare tali esattamente come qualsiasi altra voci della mappa dei messaggi.

Controlli comuni di Windows utilizza il più avanzato [WM_NOTIFY](http://msdn.microsoft.com/library/windows/desktop/bb775583) per le notifiche di controllo complessa. Questa versione di MFC offre supporto diretto per questo nuovo messaggio usando le macro messaggi ON_NOTIFY e ON_NOTIFY_RANGE. Vedere la documentazione del prodotto per ulteriori informazioni su queste macro.

## <a name="see-also"></a>Vedere anche

[Note tecniche per numero](../mfc/technical-notes-by-number.md)  
[Note tecniche per categoria](../mfc/technical-notes-by-category.md)  
