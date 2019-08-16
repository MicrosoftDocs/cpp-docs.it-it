---
title: Macro della mappa messaggi (MFC)
ms.date: 03/27/2019
f1_keywords:
- AFXWIN/DECLARE_MESSAGE_MAP
- AFXWIN/BEGIN_MESSAGE_MAP
- AFXWIN/BEGIN_TEMPLATE_MESSAGE_MAP
- AFXWIN/END_MESSAGE_MAP
- AFXWIN/ON_COMMAND
- AFXWIN/ON_COMMAND_EX
- AFXWIN/ON_CONTROL
- AFXWIN/ON_MESSAGE
- AFXWIN/ON_OLECMD
- AFXWIN/ON_REGISTERED_MESSAGE
- AFXWIN/ON_REGISTERED_THREAD_MESSAGE
- AFXWIN/ON_THREAD_MESSAGE
- AFXWIN/ON_UPDATE_COMMAND_UI
- AFXWIN/ON_COMMAND_RANGE
- AFXWIN/ON_UPDATE_COMMAND_UI_RANGE
- AFXWIN/ON_CONTROL_RANGE
helpviewer_keywords:
- message map macros
- Windows messages [MFC], declaration
- demarcating Windows messages
- message maps [MFC], macros
- message maps [MFC], declaration and demarcation
- message mapping macros
- ranges, message map
- message map ranges
ms.assetid: 531b15ce-32b5-4ca0-a849-bb519616c731
ms.openlocfilehash: b88b745e3b70cf030f77f247ab03cd69d910109f
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69502091"
---
# <a name="message-map-macros-mfc"></a>Macro della mappa messaggi (MFC)

Per supportare le mappe messaggi, MFC fornisce le macro seguenti:

### <a name="message-map-declaration-and-demarcation-macros"></a>Dichiarazione della mappa messaggi e macro di delimitazione

|||
|-|-|
|[DECLARE_MESSAGE_MAP](#declare_message_map)|Dichiara che una mappa messaggi verrà utilizzata in una classe per eseguire il mapping dei messaggi alle funzioni (deve essere utilizzato nella dichiarazione di classe).|
|[BEGIN_MESSAGE_MAP](#begin_message_map)|Inizia la definizione di una mappa messaggi (deve essere utilizzata nell'implementazione della classe).|
|[BEGIN_TEMPLATE_MESSAGE_MAP](#begin_template_message_map)|Inizia la definizione di una mappa messaggi in un tipo di classe contenente un singolo argomento di modello. |
|[END_MESSAGE_MAP](#end_message_map)|Termina la definizione di una mappa messaggi (deve essere utilizzata nell'implementazione della classe).|

### <a name="message-mapping-macros"></a>Macro di mapping dei messaggi

|||
|-|-|
|[ON_COMMAND](#on_command)|Indica la funzione che gestirà un messaggio di comando specificato.|
|[ON_COMMAND_EX](#on_command_ex)|Indica la funzione che gestirà un messaggio di comando specificato.|
|[ON_CONTROL](#on_control)|Indica la funzione che gestirà un messaggio di notifica di controllo specificato.|
|[ON_MESSAGE](#on_message)|Indica la funzione che gestirà un messaggio definito dall'utente.|
|[ON_OLECMD](#on_olecmd)|Indica quale funzione gestirà un comando di menu da un DocObject o dal relativo contenitore.|
|[ON_REGISTERED_MESSAGE](#on_registered_message)|Indica la funzione che gestirà un messaggio registrato definito dall'utente.|
|[ON_REGISTERED_THREAD_MESSAGE](#on_registered_thread_message)|Indica quale funzione gestirà un messaggio definito dall'utente registrato quando si dispone di `CWinThread` una classe.|
|[ON_THREAD_MESSAGE](#on_thread_message)|Indica la funzione che gestirà un messaggio definito dall'utente quando si dispone `CWinThread` di una classe.|
|[ON_UPDATE_COMMAND_UI](#on_update_command_ui)|Indica la funzione che gestirà un messaggio di comando di aggiornamento dell'interfaccia utente specificato.|

### <a name="message-map-range-macros"></a>Macro intervallo mappa messaggi

|||
|-|-|
|[ON_COMMAND_RANGE](#on_command_range)|Indica quale funzione gestirà l'intervallo di ID di comando specificato nei primi due parametri della macro.|
|[ON_UPDATE_COMMAND_UI_RANGE](#on_update_command_ui_range)|Indica quale gestore di aggiornamento gestirà l'intervallo di ID di comando specificato nei primi due parametri della macro.|
|[ON_CONTROL_RANGE](#on_control_range)|Indica la funzione che gestirà le notifiche dall'intervallo di ID di controllo specificato nel secondo e terzo parametro alla macro. Il primo parametro è un messaggio di notifica del controllo, ad esempio BN_CLICKED.|

Per ulteriori informazioni sulle mappe messaggi, sulla dichiarazione della mappa messaggi e sulle macro di delimitazione e sulle macro di mapping dei messaggi, vedere la pagina relativa agli argomenti sulle [mappe messaggi](../../mfc/reference/message-maps-mfc.md) e sulla [gestione dei messaggi e sul mapping](../../mfc/message-handling-and-mapping.md). Per ulteriori informazioni sugli intervalli della mappa messaggi, vedere [gestori per gli intervalli della mappa messaggi](../../mfc/handlers-for-message-map-ranges.md).

## <a name="begin_message_map"></a>BEGIN_MESSAGE_MAP

Inizia la definizione della mappa messaggi.

### <a name="syntax"></a>Sintassi

```
BEGIN_MESSAGE_MAP( theClass, baseClass )
```

### <a name="parameters"></a>Parametri

*theClass*<br/>
Specifica il nome della classe la cui mappa messaggi è.

*baseClass*<br/>
Specifica il nome della classe di base di *theClass*.

### <a name="remarks"></a>Note

Nel file di implementazione (. cpp) che definisce le funzioni membro per la classe, avviare la mappa messaggi con la macro BEGIN_MESSAGE_MAP, quindi aggiungere le voci della macro per ogni funzione del gestore di messaggi e completare la mappa messaggi con il END_MESSAGE_MAP macro.

Per ulteriori informazioni sulle mappe messaggi, vedere [mappe messaggi](message-maps-mfc.md) .

### <a name="example"></a>Esempio

```cpp
BEGIN_MESSAGE_MAP(CMainFrame, CMDIFrameWnd)
   ON_WM_CREATE()
END_MESSAGE_MAP()
```

### <a name="requirements"></a>Requisiti

**Intestazione:** afxwin.h

## <a name="begin_template_message_map"></a> BEGIN_TEMPLATE_MESSAGE_MAP

Inizia la definizione di una mappa messaggi in un tipo di classe contenente un singolo argomento di modello.

### <a name="syntax"></a>Sintassi

```
BEGIN_TEMPLATE_MESSAGE_MAP( theClass, type_name, baseClass )
```

### <a name="parameters"></a>Parametri

*theClass*<br/>
Specifica il nome della classe la cui mappa messaggi è.

*type_name*<br/>
Nome del parametro di modello specificato per la classe.

*baseClass*<br/>
Specifica il nome della classe di base di *theClass*.

### <a name="remarks"></a>Note

Questa macro è simile alla macro [BEGIN_MESSAGE_MAP](message-map-macros-mfc.md#begin_message_map) . Tuttavia, questa macro è destinata alle classi che contengono un solo argomento di modello.

Nella sezione implementazione del metodo della classe, avviare la mappa messaggi con la macro BEGIN_TEMPLATE_MESSAGE_MAP. Aggiungere quindi le voci della macro per ogni metodo del gestore di messaggi come per una mappa messaggi standard. Come per la macro BEGIN_MESSAGE_MAP, completare la mappa dei messaggi del modello con la macro [END_MESSAGE_MAP](message-map-macros-mfc.md#end_message_map) .

Per ulteriori informazioni sull'implementazione delle mappe messaggi per le classi modello, [vedere Procedura: Creare una mappa messaggi per una classe](../how-to-create-a-message-map-for-a-template-class.md)modello.

### <a name="requirements"></a>Requisiti

**Intestazione:** afxwin.h

## <a name="declare_message_map"></a>  DECLARE_MESSAGE_MAP

Dichiara che la classe definisce una mappa messaggi. Ogni `CCmdTarget`classe derivata da nel programma deve fornire una mappa messaggi per la gestione dei messaggi.

### <a name="syntax"></a>Sintassi

```
DECLARE_MESSAGE_MAP( )
```

### <a name="remarks"></a>Note

Usare la macro DECLARE_MESSAGE_MAP alla fine della dichiarazione di classe. Quindi, nel file cpp che definisce le funzioni membro per la classe, usare la macro BEGIN_MESSAGE_MAP, le voci di macro per ciascuna delle funzioni del gestore di messaggi e la macro END_MESSAGE_MAP.

> [!NOTE]
>  Se si dichiara un membro dopo DECLARE_MESSAGE_MAP, è necessario specificare un nuovo tipo di accesso (**pubblico**, **privato**o **protetto**).

Per ulteriori informazioni sulle mappe messaggi e sulla macro DECLARE_MESSAGE_MAP, vedere gli [argomenti relativi alla gestione dei messaggi e al mapping](../../mfc/message-handling-and-mapping.md).

### <a name="example"></a>Esempio

```cpp
class CMainFrame : public CMDIFrameWnd
{
   DECLARE_MESSAGE_MAP()

   // Remainder of class declaration omitted.
```

### <a name="requirements"></a>Requisiti

**Intestazione:** afxwin.h

## <a name="end_message_map"></a>  END_MESSAGE_MAP

Termina la definizione della mappa messaggi.

### <a name="syntax"></a>Sintassi

```
END_MESSAGE_MAP( )
```

### <a name="remarks"></a>Note

Per ulteriori informazioni sulle mappe messaggi e sulla macro END_MESSAGE_MAP, vedere gli [argomenti relativi alla gestione dei messaggi e al mapping](../../mfc/message-handling-and-mapping.md).

### <a name="requirements"></a>Requisiti

**Intestazione:** afxwin.h

## <a name="on_command"></a>ON_COMMAND

Questa macro esegue il mapping di un messaggio di comando a una funzione membro.

### <a name="syntax"></a>Sintassi

```
ON_COMMAND( commandId, memberFxn )
```

### <a name="parameters"></a>Parametri

*commandId*<br/>
ID di comando.

*memberFxn*<br/>
Nome della funzione del gestore messaggi a cui viene eseguito il mapping del comando.

### <a name="remarks"></a>Note

Indica quale funzione gestirà un messaggio di comando da un oggetto dell'interfaccia utente del comando, ad esempio una voce di menu o un pulsante della barra degli strumenti.

Quando un oggetto di destinazione comando riceve un messaggio Windows WM_COMMAND con l'ID specificato, ON_COMMAND chiamerà la funzione `memberFxn` membro per gestire il messaggio.

Usare ON_COMMAND per eseguire il mapping di un singolo comando a una funzione membro. Usare [ON_COMMAND_RANGE](#on_command_range) per eseguire il mapping di un intervallo di ID di comando a una funzione membro. Solo una voce della mappa messaggi può corrispondere a un ID di comando specificato. Ovvero, non è possibile eseguire il mapping di un comando a più di un gestore. Per ulteriori informazioni ed esempi, vedere la pagina relativa agli [argomenti relativi alla gestione dei messaggi e al mapping](../../mfc/message-handling-and-mapping.md).

### <a name="example"></a>Esempio

```cpp
BEGIN_MESSAGE_MAP(CMFCListViewDoc, CDocument)
   ON_COMMAND(ID_MYCOMMAND, &CMFCListViewDoc::OnMycommand)
END_MESSAGE_MAP()
```

### <a name="requirements"></a>Requisiti

**Intestazione:** afxmsg_. h

## <a name="on_command_ex"></a>ON_COMMAND_EX

Funzione membro del gestore di comandi esteso.

### <a name="syntax"></a>Sintassi

```
ON_COMMAND_EX(commandId, memberFxn);
```

### <a name="parameters"></a>Parametri

*commandId*<br/>
ID di comando.

*memberFxn*<br/>
Nome della funzione del gestore messaggi a cui viene eseguito il mapping del comando.

### <a name="remarks"></a>Note

Un modulo esteso di gestori di messaggi di comando è disponibile per gli utilizzi avanzati. La macro ON_COMMAND_EX viene utilizzata per tali gestori di messaggi e fornisce un superset della funzionalità [ON_COMMAND](message-map-macros-mfc.md#on_command) . Le funzioni membro del gestore dei comandi estese accettano un solo parametro, un UINT contenente l'ID di comando e restituisce un BOOL. Il valore restituito deve essere TRUE per indicare che il comando è stato gestito; in caso contrario, il routing continuerà ad altri oggetti di destinazione del comando.

Per ulteriori informazioni, vedere la nota tecnica [TN006: Mappe messaggi] TM006-Message-maps.md).

### <a name="requirements"></a>Requisiti

File di intestazione: afxmsg_. h

## <a name="on_control"></a>  ON_CONTROL

Indica la funzione che gestirà un messaggio di notifica del controllo personalizzato.

### <a name="syntax"></a>Sintassi

```
ON_CONTROL( wNotifyCode, commandId, memberFxn )
```

### <a name="parameters"></a>Parametri

*wNotifyCode*<br/>
Codice di notifica del controllo.

*commandId*<br/>
ID di comando.

*memberFxn*<br/>
Nome della funzione del gestore messaggi a cui viene eseguito il mapping del comando.

### <a name="remarks"></a>Note

I messaggi di notifica del controllo sono quelli inviati da un controllo alla relativa finestra padre.

Nella mappa messaggi deve essere presente esattamente un'istruzione macro ON_CONTROL per ogni messaggio di notifica del controllo di cui è necessario eseguire il mapping a una funzione di gestione messaggi.

Per ulteriori informazioni ed esempi, vedere la pagina relativa agli [argomenti relativi alla gestione dei messaggi e al mapping](../../mfc/message-handling-and-mapping.md).

### <a name="requirements"></a>Requisiti

**Intestazione:** afxmsg_. h

## <a name="on_message"></a>  ON_MESSAGE

Indica la funzione che gestirà un messaggio definito dall'utente.

### <a name="syntax"></a>Sintassi

```
ON_MESSAGE( message, memberFxn )
```

### <a name="parameters"></a>Parametri

*message*<br/>
ID del messaggio.

*memberFxn*<br/>
Nome della funzione del gestore di messaggi a cui è stato eseguito il mapping del messaggio.

Il tipo della funzione deve essere `afx_msg LRESULT (CWnd::*)(WPARAM, LPARAM)`.

### <a name="remarks"></a>Note

I messaggi definiti dall'utente sono messaggi che non sono messaggi WM_MESSAGE Windows standard. Quando si seleziona un ID messaggio, è necessario utilizzare i valori compresi nell'intervallo tra WM_USER (0x0400) e 0x7FFF o WM_APP (0x8000) e 0xBFFF. Per ulteriori informazioni sugli ID messaggio, vedere [WM_APP](/windows/win32/winmsg/wm-app).

Nella mappa messaggi deve essere presente esattamente un'istruzione macro ON_MESSAGE per ogni messaggio definito dall'utente di cui deve essere eseguito il mapping a una funzione di gestione messaggi.

> [!NOTE]
>  Oltre ai messaggi definiti dall'utente, ON_MESSAGE gestisce i messaggi di Windows meno comuni. Per altre informazioni, vedere [mappe messaggi](../../mfc/tn006-message-maps.md).

Per altre informazioni ed esempi, vedere [argomenti relativi alla gestione dei messaggi e al mapping](../../mfc/message-handling-and-mapping.md) e [gestori definiti dall'utente](user-defined-handlers.md)

### <a name="example"></a>Esempio

```cpp
#define WM_MYMESSAGE (WM_USER + 100)

BEGIN_MESSAGE_MAP(CMyWnd2, CWnd)
   ON_MESSAGE(WM_MYMESSAGE, OnMyMessage)
END_MESSAGE_MAP()

// inside the class declaration
afx_msg LRESULT OnMyMessage(WPARAM wParam, LPARAM lParam);

LRESULT CMyWnd2::OnMyMessage(WPARAM wParam, LPARAM lParam)
{
   UNREFERENCED_PARAMETER(wParam);
   UNREFERENCED_PARAMETER(lParam);

   // Handle message here.

   return 0;
}
```

### <a name="requirements"></a>Requisiti

**Intestazione:** afxmsg_. h

## <a name="on_olecmd"></a>ON_OLECMD

Instrada i comandi tramite l'interfaccia `IOleCommandTarget`di invio dei comandi.

### <a name="syntax"></a>Sintassi

```
ON_OLECMD( pguid, olecmdid, commandId )
```

### <a name="parameters"></a>Parametri

*pguid*<br/>
Identificatore del gruppo di comandi a cui appartiene il comando. Utilizzare NULL per il gruppo standard.

*olecmdid*<br/>
Identificatore del comando OLE.

*commandId*<br/>
ID del menu, ID della barra degli strumenti, ID del pulsante o altro ID della risorsa o dell'oggetto che ha emesso il comando.

### <a name="remarks"></a>Note

`IOleCommandTarget`consente a un contenitore di ricevere comandi che provengono da un'interfaccia utente di DocObject e consente al contenitore di inviare gli stessi comandi, ad esempio nuovo, Apri, SaveAs e stampa, dal menu file, quindi copia, incolla, Annulla e così via, dal menu modifica, a un DocObject.

`IOleCommandTarget`è più semplice dell'automazione `IDispatch`OLE. `IOleCommandTarget`si basa interamente su un set standard di comandi che raramente presentano argomenti e non sono incluse informazioni sul tipo (l'indipendenza dai tipi è ridotta anche per gli argomenti del comando). Se è necessario inviare comandi con argomenti, utilizzare [COleServerDoc:: OnExecOleCmd](coleserverdoc-class.md#onexecolecmd).

I `IOleCommandTarget` comandi di menu standard sono stati implementati da MFC nelle macro seguenti:

**ON_OLECMD_CLEARSELECTION( )**

Invia il comando modifica cancellazione. Implementato come:

`ON_OLECMD(NULL, OLECMDID_CLEARSELECTION, ID_EDIT_CLEAR)`

**ON_OLECMD_COPY( )**

Invia il comando Edit Copy. Implementato come:

`ON_OLECMD(NULL, OLECMDID_COPY, ID_EDIT_COPY)`

**ON_OLECMD_CUT( )**

Invia il comando di modifica taglia. Implementato come:

`ON_OLECMD(NULL, OLECMDID_CUT, ID_EDIT_CUT)`

**ON_OLECMD_NEW( )**

Invia il comando file nuovo. Implementato come:

`ON_OLECMD(NULL, OLECMDID_NEW, ID_FILE_NEW)`

**ON_OLECMD_OPEN( )**

Invia il comando Apri file. Implementato come:

`ON_OLECMD(NULL, OLECMDID_OPEN, ID_FILE_OPEN)`

**ON_OLECMD_PAGESETUP( )**

Invia il comando di impostazione della pagina di file. Implementato come:

`ON_OLECMD(NULL, OLECMDID_PAGESETUP, ID_FILE_PAGE_SETUP)`

**ON_OLECMD_PASTE( )**

Invia il comando modifica incolla. Implementato come:

`ON_OLECMD(NULL, OLECMDID_PASTE, ID_EDIT_PASTE)`

**ON_OLECMD_PASTESPECIAL( )**

Invia il comando di modifica incolla speciale. Implementato come:

`ON_OLECMD(NULL, OLECMDID_PASTESPECIAL, ID_EDIT_PASTE_SPECIAL)`

**ON_OLECMD_PRINT( )**

Invia il comando di stampa del file. Implementato come:

`ON_OLECMD(NULL, OLECMDID_PRINT, ID_FILE_PRINT)`

**ON_OLECMD_PRINTPREVIEW( )**

Invia il comando di anteprima di stampa del file. Implementato come:

`ON_OLECMD(NULL, OLECMDID_PRINTPREVIEW, ID_FILE_PRINT_PREVIEW)`

**ON_OLECMD_REDO( )**

Invia il comando di rollforward di modifica. Implementato come:

`ON_OLECMD(NULL, OLECMDID_REDO, ID_EDIT_REDO)`

**ON_OLECMD_SAVE( )**

Invia il comando Salva file. Implementato come:

`ON_OLECMD(NULL, OLECMDID_SAVE, ID_FILE_SAVE)`

**ON_OLECMD_SAVE_AS( )**

Invia il comando Salva con nome file. Implementato come:

`ON_OLECMD(NULL, OLECMDID_SAVEAS, ID_FILE_SAVE_AS)`

**ON_OLECMD_SAVE_COPY_AS( )**

Invia il comando Salva copia con nome. Implementato come:

`ON_OLECMD(NULL, OLECMDID_SAVECOPYAS, ID_FILE_SAVE_COPY_AS)`

**ON_OLECMD_SELECTALL( )**

Invia il comando Edit Select All. Implementato come:

`ON_OLECMD(NULL, OLECMDID_SELECTALL, ID_EDIT_SELECT_ALL)`

**ON_OLECMD_UNDO( )**

Invia il comando di annullamento della modifica. Implementato come:

`ON_OLECMD(NULL, OLECMDID_UNDO, ID_EDIT_UNDO)`

### <a name="requirements"></a>Requisiti

**Intestazione:** afxdocob. h

## <a name="on_registered_message"></a>ON_REGISTERED_MESSAGE

La funzione `RegisterWindowMessage` di Windows viene utilizzata per definire un nuovo messaggio di finestra che è sicuramente univoco nel sistema.

### <a name="syntax"></a>Sintassi

```
ON_REGISTERED_MESSAGE( nMessageVariable, memberFxn )
```

### <a name="parameters"></a>Parametri

*nMessageVariable*<br/>
Variabile registrata della finestra-ID del messaggio.

*memberFxn*<br/>
Nome della funzione del gestore di messaggi a cui è stato eseguito il mapping del messaggio.

### <a name="remarks"></a>Note

Questa macro indica quale funzione gestirà il messaggio registrato.

Per ulteriori informazioni ed esempi, vedere la pagina relativa agli [argomenti relativi alla gestione dei messaggi e al mapping](../../mfc/message-handling-and-mapping.md).

### <a name="example"></a>Esempio

```cpp
static UINT NEAR WM_FIND = RegisterWindowMessage(_T("COMMDLG_FIND"));

BEGIN_MESSAGE_MAP(CMyWnd3, CWnd)
   ON_REGISTERED_MESSAGE(WM_FIND, OnFind)
END_MESSAGE_MAP()
```

### <a name="requirements"></a>Requisiti

**Intestazione:** afxmsg_. h

## <a name="on_registered_thread_message"></a>  ON_REGISTERED_THREAD_MESSAGE

Indica quale funzione gestirà il messaggio registrato dalla funzione RegisterWindowMessage di Windows.

### <a name="syntax"></a>Sintassi

```
ON_REGISTERED_THREAD_MESSAGE(nMessageVariable, memberFxn )
```

### <a name="parameters"></a>Parametri

*nMessageVariable*<br/>
Variabile registrata della finestra-ID del messaggio.

*memberFxn*<br/>
Nome della funzione del gestore di messaggi CWinThread a cui viene eseguito il mapping del messaggio.

### <a name="remarks"></a>Note

RegisterWindowMessage viene usato per definire un nuovo messaggio di finestra che è sicuramente univoco nel sistema. Quando si dispone di una classe CWinThread, è necessario usare ON_REGISTERED_THREAD_MESSAGE anziché ON_REGISTERED_MESSAGE.

### <a name="requirements"></a>Requisiti

**Intestazione:** afxmsg_. h

## <a name="on_thread_message"></a>  ON_THREAD_MESSAGE

Indica la funzione che gestirà un messaggio definito dall'utente.

### <a name="syntax"></a>Sintassi

```
ON_THREAD_MESSAGE( message, memberFxn )
```

### <a name="parameters"></a>Parametri

*message*<br/>
ID del messaggio.

*memberFxn*<br/>
Nome della `CWinThread`funzione del gestore del messaggio a cui è stato eseguito il mapping del messaggio.

### <a name="remarks"></a>Note

Quando si dispone di una `CWinThread` classe, è necessario usare ON_THREAD_MESSAGE anziché ON_MESSAGE. I messaggi definiti dall'utente sono messaggi che non sono messaggi WM_MESSAGE Windows standard. Nella mappa messaggi deve essere presente esattamente un'istruzione macro ON_THREAD_MESSAGE per ogni messaggio definito dall'utente di cui deve essere eseguito il mapping a una funzione di gestione messaggi.

### <a name="requirements"></a>Requisiti

**Intestazione:** AFXOLE. h

## <a name="on_update_command_ui"></a>ON_UPDATE_COMMAND_UI

Questa macro indica quale funzione gestirà un messaggio di comando di aggiornamento dell'interfaccia utente.

### <a name="syntax"></a>Sintassi

```
ON_UPDATE_COMMAND_UI( messageId, memberFxn )
```

### <a name="parameters"></a>Parametri

*messageId*<br/>
ID del messaggio.

*memberFxn*<br/>
Nome della funzione del gestore di messaggi a cui è stato eseguito il mapping del messaggio.

### <a name="remarks"></a>Note

Nella mappa messaggi deve essere presente esattamente un'istruzione macro ON_UPDATE_COMMAND_UI per ogni comando di aggiornamento dell'interfaccia utente che deve essere mappato a una funzione di gestione messaggi.

Per ulteriori informazioni ed esempi, vedere la pagina relativa agli [argomenti relativi alla gestione dei messaggi e al mapping](../../mfc/message-handling-and-mapping.md).

### <a name="requirements"></a>Requisiti

**Intestazione:** AFXOLE. h

## <a name="on_command_range"></a>ON_COMMAND_RANGE

Utilizzare questa macro per eseguire il mapping di un intervallo contiguo di ID comando a una singola funzione del gestore di messaggi.

### <a name="syntax"></a>Sintassi

```
ON_COMMAND_RANGE( id1, id2, memberFxn )
```

### <a name="parameters"></a>Parametri

*id1*<br/>
ID di comando all'inizio di un intervallo contiguo di ID di comando.

*id2*<br/>
ID di comando alla fine di un intervallo contiguo di ID di comando.

*memberFxn*<br/>
Nome della funzione del gestore di messaggi a cui viene eseguito il mapping dei comandi.

### <a name="remarks"></a>Note

L'intervallo di ID inizia con *ID1* e termina con *ID2*.

Usare ON_COMMAND_RANGE per eseguire il mapping di un intervallo di ID di comando a una funzione membro. Usare [ON_COMMAND](#on_command) per eseguire il mapping di un singolo comando a una funzione membro. Solo una voce della mappa messaggi può corrispondere a un ID di comando specificato. Ovvero, non è possibile eseguire il mapping di un comando a più di un gestore. Per ulteriori informazioni sul mapping degli intervalli di messaggi, vedere [gestori per gli intervalli della mappa messaggi](../../mfc/handlers-for-message-map-ranges.md).

Non è disponibile alcun supporto automatico per gli intervalli della mappa messaggi, pertanto è necessario inserire la macro manualmente.

### <a name="example"></a>Esempio

```cpp
// The code fragment below shows how to use ON_COMMAND_RANGE macro
// to map a contiguous range of command IDs to a single message
// handler function (i.e. OnRangeCmds() in the sample below). In
// addition, it also shows how to use CheckMenuRadioItem() to check a
// selected menu item and makes it a radio item.

BEGIN_MESSAGE_MAP(CChildFrame, CMDIChildWnd)
   ON_COMMAND_RANGE(ID_COMMAND_RANGECMD1, ID_COMMAND_RANGECMD3, &CChildFrame::OnRangeCmds)
END_MESSAGE_MAP()

void CChildFrame::OnRangeCmds(UINT nID)
{
   CMenu* mmenu = AfxGetMainWnd()->GetMenu();
   CMenu* submenu = mmenu->GetSubMenu(5);
   submenu->CheckMenuRadioItem(ID_COMMAND_RANGECMD1, ID_COMMAND_RANGECMD3,
      nID, MF_BYCOMMAND);
}
```

### <a name="requirements"></a>Requisiti

**Intestazione:** afxmsg_. h

## <a name="on_update_command_ui_range"></a>ON_UPDATE_COMMAND_UI_RANGE

Esegue il mapping di un intervallo contiguo di ID comando a una singola funzione di gestione dei messaggi di aggiornamento.

### <a name="syntax"></a>Sintassi

```
ON_UPDATE_COMMAND_UI_RANGE( id1, id2, memberFxn )
```

### <a name="parameters"></a>Parametri

*id1*<br/>
ID di comando all'inizio di un intervallo contiguo di ID di comando.

*id2*<br/>
ID di comando alla fine di un intervallo contiguo di ID di comando.

*memberFxn*<br/>
Nome della funzione di gestione dei messaggi di aggiornamento a cui viene eseguito il mapping dei comandi.

### <a name="remarks"></a>Note

I gestori di messaggi di aggiornamento aggiornano lo stato delle voci di menu e dei pulsanti della barra degli strumenti associati al comando. L'intervallo di ID inizia con *ID1* e termina con *ID2*.

Non è disponibile alcun supporto automatico per gli intervalli della mappa messaggi, pertanto è necessario inserire la macro manualmente.

### <a name="requirements"></a>Requisiti

**Intestazione:** afxmsg_. h

## <a name="on_control_range"></a>  ON_CONTROL_RANGE

Utilizzare questa macro per eseguire il mapping di un intervallo contiguo di ID di controllo a una singola funzione del gestore di messaggi per un messaggio di notifica di Windows specificato, ad esempio BN_CLICKED.

### <a name="syntax"></a>Sintassi

```
ON_CONTROL_RANGE( wNotifyCode, id1, id2, memberFxn )
```

### <a name="parameters"></a>Parametri

*wNotifyCode*<br/>
Il codice di notifica a cui il gestore risponde.

*id1*<br/>
ID di comando all'inizio di un intervallo contiguo di ID del controllo.

*id2*<br/>
ID di comando alla fine di un intervallo contiguo di ID controllo.

*memberFxn*<br/>
Nome della funzione del gestore di messaggi a cui vengono mappati i controlli.

### <a name="remarks"></a>Note

L'intervallo di ID inizia con *ID1* e termina con *ID2*. Il gestore viene chiamato per la notifica specificata proveniente da uno dei controlli di cui è stato eseguito il mapping.

Non è disponibile alcun supporto automatico per gli intervalli della mappa messaggi, pertanto è necessario inserire la macro manualmente.

Per ulteriori informazioni sull'implementazione delle funzioni del gestore per un intervallo di ID di controllo, fare riferimento ai [gestori per gli intervalli della mappa messaggi](../../mfc/handlers-for-message-map-ranges.md).

### <a name="requirements"></a>Requisiti

**Intestazione:** afxmsg_. h

## <a name="see-also"></a>Vedere anche

[ON_COMMAND](message-map-macros-mfc.md#on_command)<br/>
[TN006: Mappe messaggi](../tn006-message-maps.md)<br/>
[Classe COleCmdUI](colecmdui-class.md)<br/>
[COleServerDoc:: OnExecOleCmd](coleserverdoc-class.md#onexecolecmd)<br/>
[RegisterWindowMessage](/windows/win32/api/winuser/nf-winuser-registerwindowmessagew)<br/>
[Gestori definiti dall'utente](user-defined-handlers.md)<br/>
[Classe CCmdUI](ccmdui-class.md)
