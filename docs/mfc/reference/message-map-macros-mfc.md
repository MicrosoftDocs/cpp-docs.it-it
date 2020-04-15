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
ms.openlocfilehash: 6e9291f0f39057403bc27c7fe4ff5ca5a82dfe3a
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81356594"
---
# <a name="message-map-macros-mfc"></a>Macro della mappa messaggi (MFC)

Per supportare le mappe messaggi, MFC fornisce le macro seguenti:

### <a name="message-map-declaration-and-demarcation-macros"></a>Macro di dichiarazione e demarcazione della mappa dei messaggiMessage-Map Declaration and Demarcation Macros

|||
|-|-|
|[DECLARE_MESSAGE_MAP](#declare_message_map)|Dichiara che una mappa messaggi verrà utilizzata in una classe per eseguire il mapping dei messaggi alle funzioni (deve essere utilizzata nella dichiarazione di classe).|
|[BEGIN_MESSAGE_MAP](#begin_message_map)|Avvia la definizione di una mappa messaggi (deve essere utilizzata nell'implementazione della classe).|
|[BEGIN_TEMPLATE_MESSAGE_MAP](#begin_template_message_map)|Avvia la definizione di una mappa messaggi su un tipo di classe contenente un singolo argomento di modello. |
|[END_MESSAGE_MAP](#end_message_map)|Termina la definizione di una mappa messaggi (deve essere utilizzata nell'implementazione della classe).|

### <a name="message-mapping-macros"></a>Macro di mapping dei messaggi

|||
|-|-|
|[ON_COMMAND](#on_command)|Indica quale funzione gestirà un messaggio di comando specificato.|
|[ON_COMMAND_EX](#on_command_ex)|Indica quale funzione gestirà un messaggio di comando specificato.|
|[ON_CONTROL](#on_control)|Indica quale funzione gestirà un messaggio di notifica del controllo specificato.|
|[ON_MESSAGE](#on_message)|Indica quale funzione gestirà un messaggio definito dall'utente.|
|[ON_OLECMD](#on_olecmd)|Indica quale funzione gestirà un comando di menu da un oggetto DocObject o dal relativo contenitore.|
|[ON_REGISTERED_MESSAGE](#on_registered_message)|Indica quale funzione gestirà un messaggio registrato definito dall'utente.|
|[ON_REGISTERED_THREAD_MESSAGE](#on_registered_thread_message)|Indica quale funzione gestirà un messaggio registrato definito `CWinThread` dall'utente quando si dispone di una classe.|
|[ON_THREAD_MESSAGE](#on_thread_message)|Indica quale funzione gestirà un messaggio definito `CWinThread` dall'utente quando si dispone di una classe.|
|[ON_UPDATE_COMMAND_UI](#on_update_command_ui)|Indica quale funzione gestirà un messaggio di comando di aggiornamento dell'interfaccia utente specificato.|

### <a name="message-map-range-macros"></a>Macro dell'intervallo della mappa messaggiMessage-Map Range Macros

|||
|-|-|
|[ON_COMMAND_RANGE](#on_command_range)|Indica quale funzione gestirà l'intervallo di ID di comando specificato nei primi due parametri della macro.|
|[ON_UPDATE_COMMAND_UI_RANGE](#on_update_command_ui_range)|Indica quale gestore di aggiornamento gestirà l'intervallo di ID di comando specificato nei primi due parametri della macro.|
|[ON_CONTROL_RANGE](#on_control_range)|Indica quale funzione gestirà le notifiche dall'intervallo di ID di controllo specificato nel secondo e nel terzo parametro alla macro. Il primo parametro è un messaggio di notifica del controllo, ad esempio BN_CLICKED.|

Per ulteriori informazioni sulle mappe messaggi, sulla dichiarazione della mappa messaggi e sulle macro di demarcazione e sulle macro di mapping dei messaggi, vedere [Mappe messaggi](../../mfc/reference/message-maps-mfc.md) e argomenti relativi alla gestione e al [mapping dei](../../mfc/message-handling-and-mapping.md)messaggi . Per ulteriori informazioni sugli intervalli della mappa messaggi, vedere [Gestori per gli intervalli](../../mfc/handlers-for-message-map-ranges.md)di mappa messaggi .

## <a name="begin_message_map"></a><a name="begin_message_map"></a>BEGIN_MESSAGE_MAP

Avvia la definizione della mappa messaggi.

### <a name="syntax"></a>Sintassi

```cpp
BEGIN_MESSAGE_MAP( theClass, baseClass )
```

### <a name="parameters"></a>Parametri

*classe theClass*<br/>
Specifica il nome della classe di cui si trova la mappa messaggi.

*Baseclass*<br/>
Specifica il nome della classe base di *theClass*.

### <a name="remarks"></a>Osservazioni

Nel file di implementazione (cpp) che definisce le funzioni membro per la classe, avviare la mappa messaggi con la macro BEGIN_MESSAGE_MAP, quindi aggiungere voci di macro per ciascuna delle funzioni del gestore messaggi e completare la mappa messaggi con la macro END_MESSAGE_MAP.

Per ulteriori informazioni sulle mappe messaggi, vedere [Mappe messaggi](message-maps-mfc.md)

### <a name="example"></a>Esempio

```cpp
BEGIN_MESSAGE_MAP(CMainFrame, CMDIFrameWnd)
   ON_WM_CREATE()
END_MESSAGE_MAP()
```

### <a name="requirements"></a>Requisiti

**Intestazione:** afxwin.h

## <a name="begin_template_message_map"></a><a name="begin_template_message_map"></a>BEGIN_TEMPLATE_MESSAGE_MAP

Avvia la definizione di una mappa messaggi su un tipo di classe contenente un singolo argomento di modello.

### <a name="syntax"></a>Sintassi

```cpp
BEGIN_TEMPLATE_MESSAGE_MAP( theClass, type_name, baseClass )
```

### <a name="parameters"></a>Parametri

*classe theClass*<br/>
Specifica il nome della classe di cui si trova la mappa messaggi.

*Type_name*<br/>
Nome del parametro di modello specificato per la classe.

*Baseclass*<br/>
Specifica il nome della classe base di *theClass*.

### <a name="remarks"></a>Osservazioni

Questa macro è simile alla macro [BEGIN_MESSAGE_MAP;](message-map-macros-mfc.md#begin_message_map) tuttavia, questa macro è destinata alle classi contenenti un singolo argomento di modello.

Nella sezione di implementazione del metodo della classe, avviare la mappa messaggi con la macro BEGIN_TEMPLATE_MESSAGE_MAP; quindi aggiungere le voci di macro per ciascuno dei metodi del gestore di messaggi come si farebbe per una mappa messaggi standard. Come con la macro BEGIN_MESSAGE_MAP, completare la mappa messaggi del modello con la macro [END_MESSAGE_MAP.](message-map-macros-mfc.md#end_message_map)

Per ulteriori informazioni sull'implementazione delle mappe messaggi per le classi modello, vedere [Procedura: creare una mappa messaggi per una classe modello](../how-to-create-a-message-map-for-a-template-class.md).

### <a name="requirements"></a>Requisiti

**Intestazione:** afxwin.h

## <a name="declare_message_map"></a><a name="declare_message_map"></a>DECLARE_MESSAGE_MAP

Dichiara che la classe definisce una mappa messaggi. Ogni `CCmdTarget`classe derivata nel programma deve fornire una mappa messaggi per gestire i messaggi.

### <a name="syntax"></a>Sintassi

```cpp
DECLARE_MESSAGE_MAP( )
```

### <a name="remarks"></a>Osservazioni

Utilizzare la macro DECLARE_MESSAGE_MAP alla fine della dichiarazione di classe. Quindi, nel file cpp che definisce le funzioni membro per la classe, utilizzare la macro BEGIN_MESSAGE_MAP, le voci di macro per ciascuna delle funzioni di gestione dei messaggi e la macro END_MESSAGE_MAP.

> [!NOTE]
> Se si dichiara un membro dopo DECLARE_MESSAGE_MAP, è necessario specificare un nuovo tipo di accesso (**public**, **private**o **protected**).

Per ulteriori informazioni sulle mappe messaggi e sulla macro DECLARE_MESSAGE_MAP, vedere Argomenti relativi alla gestione e al [mapping dei messaggi](../../mfc/message-handling-and-mapping.md).

### <a name="example"></a>Esempio

```cpp
class CMainFrame : public CMDIFrameWnd
{
   DECLARE_MESSAGE_MAP()

   // Remainder of class declaration omitted.
```

### <a name="requirements"></a>Requisiti

**Intestazione:** afxwin.h

## <a name="end_message_map"></a><a name="end_message_map"></a>END_MESSAGE_MAP

Termina la definizione della mappa messaggi.

### <a name="syntax"></a>Sintassi

```cpp
END_MESSAGE_MAP( )
```

### <a name="remarks"></a>Osservazioni

Per ulteriori informazioni sulle mappe messaggi e sulla macro END_MESSAGE_MAP, vedere Argomenti relativi alla gestione e al [mapping dei messaggi](../../mfc/message-handling-and-mapping.md).

### <a name="requirements"></a>Requisiti

**Intestazione:** afxwin.h

## <a name="on_command"></a><a name="on_command"></a>On_command

Questa macro esegue il mapping di un messaggio di comando a una funzione membro.

### <a name="syntax"></a>Sintassi

```cpp
ON_COMMAND( commandId, memberFxn )
```

### <a name="parameters"></a>Parametri

*Commandid*<br/>
ID di comando.

*memberFxn (parte utente)*<br/>
Nome della funzione del gestore messaggi a cui viene eseguito il mapping del comando.

### <a name="remarks"></a>Osservazioni

Indica quale funzione gestirà un messaggio di comando da un oggetto dell'interfaccia utente di comando, ad esempio una voce di menu o un pulsante della barra degli strumenti.

Quando un oggetto di destinazione del comando riceve un messaggio di Windows `memberFxn` WM_COMMAND con l'ID specificato, ON_COMMAND chiamerà la funzione membro per gestire il messaggio.

Utilizzare ON_COMMAND per eseguire il mapping di un singolo comando a una funzione membro. Utilizzare [ON_COMMAND_RANGE](#on_command_range) per eseguire il mapping di un intervallo di ID di comando a una funzione membro. Solo una voce della mappa messaggi può corrispondere a un determinato ID di comando. Ovvero, non è possibile eseguire il mapping di un comando a più di un gestore. Per ulteriori informazioni ed esempi, vedere Argomenti relativi alla gestione e al [mapping dei messaggi](../../mfc/message-handling-and-mapping.md).

### <a name="example"></a>Esempio

```cpp
BEGIN_MESSAGE_MAP(CMFCListViewDoc, CDocument)
   ON_COMMAND(ID_MYCOMMAND, &CMFCListViewDoc::OnMycommand)
END_MESSAGE_MAP()
```

### <a name="requirements"></a>Requisiti

**Intestazione:** afxmsg_.h

## <a name="on_command_ex"></a><a name="on_command_ex"></a>ON_COMMAND_EX

Funzione membro del gestore comandi estesa.

### <a name="syntax"></a>Sintassi

```cpp
ON_COMMAND_EX(commandId, memberFxn);
```

### <a name="parameters"></a>Parametri

*Commandid*<br/>
ID di comando.

*memberFxn (parte utente)*<br/>
Nome della funzione del gestore messaggi a cui viene eseguito il mapping del comando.

### <a name="remarks"></a>Osservazioni

Una forma estesa di gestori di messaggi di comando è disponibile per usi avanzati. La macro ON_COMMAND_EX viene utilizzata per tali gestori di messaggi e fornisce un superset della [funzionalità ON_COMMAND.](message-map-macros-mfc.md#on_command) Le funzioni membro estese del gestore dei comandi accettano un singolo parametro, un UINT contenente l'ID del comando, e restituiscono un BOOL. Il valore restituito deve essere TRUE per indicare che il comando è stato gestito; in caso contrario, il routing continuerà ad altri oggetti di destinazione del comando.

Per ulteriori informazioni, vedere nota tecnica [TN006: mappe messaggi]tm006-message-maps.md).

### <a name="requirements"></a>Requisiti

File di intestazione: afxmsg_.h

## <a name="on_control"></a><a name="on_control"></a>ON_CONTROL

Indica quale funzione gestirà un messaggio di notifica di controllo personalizzato.

### <a name="syntax"></a>Sintassi

```cpp
ON_CONTROL( wNotifyCode, commandId, memberFxn )
```

### <a name="parameters"></a>Parametri

*wNotifyCode (codice wNotifyCode)*<br/>
Codice di notifica del controllo.

*Commandid*<br/>
ID di comando.

*memberFxn (parte utente)*<br/>
Nome della funzione del gestore messaggi a cui viene eseguito il mapping del comando.

### <a name="remarks"></a>Osservazioni

I messaggi di notifica del controllo sono quelli inviati da un controllo alla relativa finestra padre.

Nella mappa messaggi deve essere presente esattamente un'istruzione macro ON_CONTROL per ogni messaggio di notifica del controllo di cui è necessario eseguire il mapping a una funzione del gestore messaggi.

Per ulteriori informazioni ed esempi, vedere Argomenti relativi alla gestione e al [mapping dei messaggi](../../mfc/message-handling-and-mapping.md).

### <a name="requirements"></a>Requisiti

**Intestazione:** afxmsg_.h

## <a name="on_message"></a><a name="on_message"></a>ON_MESSAGE

Indica quale funzione gestirà un messaggio definito dall'utente.

### <a name="syntax"></a>Sintassi

```cpp
ON_MESSAGE( message, memberFxn )
```

### <a name="parameters"></a>Parametri

*Messaggio*<br/>
ID del messaggio.

*memberFxn (parte utente)*<br/>
Nome della funzione di gestione dei messaggi a cui è mappato il messaggio.

Il tipo della funzione `afx_msg LRESULT (CWnd::*)(WPARAM, LPARAM)`deve essere .

### <a name="remarks"></a>Osservazioni

I messaggi definiti dall'utente sono tutti i messaggi che non sono messaggi standard di Windows WM_MESSAGE. Quando si seleziona un ID messaggio, è necessario utilizzare valori compresi nell'intervallo tra WM_USER (0x0400) e 0x7FFF o WM_APP (0x8000) e 0xBFFF. Per ulteriori informazioni sugli ID messaggio, vedere [WM_APP](/windows/win32/winmsg/wm-app).

Nella mappa messaggi deve essere presente esattamente un'istruzione macro ON_MESSAGE per ogni messaggio definito dall'utente di cui è necessario eseguire il mapping a una funzione del gestore messaggi.

> [!NOTE]
> Oltre ai messaggi definiti dall'utente, ON_MESSAGE gestisce i messaggi di Windows meno comuni. Per ulteriori informazioni, vedere [Mappe messaggi](../../mfc/tn006-message-maps.md).

Per altre informazioni ed esempi, vedere Argomenti relativi [alla gestione e mapping dei](../../mfc/message-handling-and-mapping.md) messaggi e [Gestori definiti dall'utenteFor more](user-defined-handlers.md) information and examples, see Message Handling and Mapping Topics and User-Defined Handlers

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

**Intestazione:** afxmsg_.h

## <a name="on_olecmd"></a><a name="on_olecmd"></a>ON_OLECMD

Indirizza i comandi tramite l'interfaccia `IOleCommandTarget`di invio dei comandi.

### <a name="syntax"></a>Sintassi

```cpp
ON_OLECMD( pguid, olecmdid, commandId )
```

### <a name="parameters"></a>Parametri

*pguid*<br/>
Identificatore del gruppo di comandi a cui appartiene il comando. Utilizzare NULL per il gruppo standard.

*olecmdid*<br/>
Identificatore del comando OLE.

*Commandid*<br/>
ID di menu, ID barra degli strumenti, ID pulsante o altro ID della risorsa o dell'oggetto che esegue il comando.

### <a name="remarks"></a>Osservazioni

`IOleCommandTarget`consente a un contenitore di ricevere i comandi che hanno origine nell'interfaccia utente di un oggetto DocObject e consente al contenitore di inviare gli stessi comandi (ad esempio Nuovo, Apri, Salva con nome e Stampa nel menu File; e Copia, Incolla, Annulla e così via nel menu Modifica) a un DocObject.

`IOleCommandTarget`è più semplice di `IDispatch`OLE Automation. `IOleCommandTarget`si basa interamente su un set standard di comandi che raramente dispongono di argomenti e non sono coinvolte informazioni sul tipo (l'indipendenza dai tipi è diminuita anche per gli argomenti del comando). Se è necessario inviare comandi con argomenti, utilizzare [COleServerDoc::OnExecOleCmd](coleserverdoc-class.md#onexecolecmd).

I `IOleCommandTarget` comandi di menu standard sono stati implementati da MFC nelle macro seguenti:

**ON_OLECMD_CLEARSELECTION( )**

Invia il comando Modifica Cancella. Implementato come:

`ON_OLECMD(NULL, OLECMDID_CLEARSELECTION, ID_EDIT_CLEAR)`

**ON_OLECMD_COPY( )**

Invia il comando Modifica copia. Implementato come:

`ON_OLECMD(NULL, OLECMDID_COPY, ID_EDIT_COPY)`

**ON_OLECMD_CUT( )**

Invia il comando Modifica taglio. Implementato come:

`ON_OLECMD(NULL, OLECMDID_CUT, ID_EDIT_CUT)`

**ON_OLECMD_NEW( )**

Invia il comando File Nuovo. Implementato come:

`ON_OLECMD(NULL, OLECMDID_NEW, ID_FILE_NEW)`

**ON_OLECMD_OPEN( )**

Invia il comando Apri file. Implementato come:

`ON_OLECMD(NULL, OLECMDID_OPEN, ID_FILE_OPEN)`

**ON_OLECMD_PAGESETUP( )**

Invia il comando Imposta pagina file. Implementato come:

`ON_OLECMD(NULL, OLECMDID_PAGESETUP, ID_FILE_PAGE_SETUP)`

**ON_OLECMD_PASTE( )**

Invia il comando Modifica Incolla. Implementato come:

`ON_OLECMD(NULL, OLECMDID_PASTE, ID_EDIT_PASTE)`

**ON_OLECMD_PASTESPECIAL( )**

Invia il comando Modifica Incolla speciale. Implementato come:

`ON_OLECMD(NULL, OLECMDID_PASTESPECIAL, ID_EDIT_PASTE_SPECIAL)`

**ON_OLECMD_PRINT( )**

Invia il comando Stampa file. Implementato come:

`ON_OLECMD(NULL, OLECMDID_PRINT, ID_FILE_PRINT)`

**ON_OLECMD_PRINTPREVIEW( )**

Invia il comando Anteprima di stampa file. Implementato come:

`ON_OLECMD(NULL, OLECMDID_PRINTPREVIEW, ID_FILE_PRINT_PREVIEW)`

**ON_OLECMD_REDO( )**

Invia il comando Modifica Ripeti. Implementato come:

`ON_OLECMD(NULL, OLECMDID_REDO, ID_EDIT_REDO)`

**ON_OLECMD_SAVE( )**

Invia il comando File Save. Implementato come:

`ON_OLECMD(NULL, OLECMDID_SAVE, ID_FILE_SAVE)`

**ON_OLECMD_SAVE_AS( )**

Invia il comando Salva con nome. Implementato come:

`ON_OLECMD(NULL, OLECMDID_SAVEAS, ID_FILE_SAVE_AS)`

**ON_OLECMD_SAVE_COPY_AS( )**

Invia il comando Salva file Copia con nome. Implementato come:

`ON_OLECMD(NULL, OLECMDID_SAVECOPYAS, ID_FILE_SAVE_COPY_AS)`

**ON_OLECMD_SELECTALL( )**

Invia il comando Modifica Seleziona tutto. Implementato come:

`ON_OLECMD(NULL, OLECMDID_SELECTALL, ID_EDIT_SELECT_ALL)`

**ON_OLECMD_UNDO( )**

Invia il comando Modifica annullamento. Implementato come:

`ON_OLECMD(NULL, OLECMDID_UNDO, ID_EDIT_UNDO)`

### <a name="requirements"></a>Requisiti

**Intestazione:** afxdocob.h

## <a name="on_registered_message"></a><a name="on_registered_message"></a>ON_REGISTERED_MESSAGE

La `RegisterWindowMessage` funzione di Windows viene utilizzata per definire un nuovo messaggio di finestra che è garantito per essere univoco in tutto il sistema.

### <a name="syntax"></a>Sintassi

```cpp
ON_REGISTERED_MESSAGE( nMessageVariable, memberFxn )
```

### <a name="parameters"></a>Parametri

*nMessageVariable*<br/>
Variabile ID messaggio finestra registrata.

*memberFxn (parte utente)*<br/>
Nome della funzione di gestione dei messaggi a cui è mappato il messaggio.

### <a name="remarks"></a>Osservazioni

Questa macro indica quale funzione gestirà il messaggio registrato.

Per ulteriori informazioni ed esempi, vedere Argomenti relativi alla gestione e al [mapping dei messaggi](../../mfc/message-handling-and-mapping.md).

### <a name="example"></a>Esempio

```cpp
static UINT NEAR WM_FIND = RegisterWindowMessage(_T("COMMDLG_FIND"));

BEGIN_MESSAGE_MAP(CMyWnd3, CWnd)
   ON_REGISTERED_MESSAGE(WM_FIND, OnFind)
END_MESSAGE_MAP()
```

### <a name="requirements"></a>Requisiti

**Intestazione:** afxmsg_.h

## <a name="on_registered_thread_message"></a><a name="on_registered_thread_message"></a>ON_REGISTERED_THREAD_MESSAGE

Indica quale funzione gestirà il messaggio registrato dalla funzione Windows RegisterWindowMessage.

### <a name="syntax"></a>Sintassi

```cpp
ON_REGISTERED_THREAD_MESSAGE(nMessageVariable, memberFxn )
```

### <a name="parameters"></a>Parametri

*nMessageVariable*<br/>
Variabile ID messaggio finestra registrata.

*memberFxn (parte utente)*<br/>
Nome della funzione CWinThread-message-handler a cui è mappato il messaggio.

### <a name="remarks"></a>Osservazioni

RegisterWindowMessage viene utilizzato per definire un nuovo messaggio di finestra che è garantito per essere univoco in tutto il sistema. ON_REGISTERED_THREAD_MESSAGE deve essere utilizzato al posto di ON_REGISTERED_MESSAGE quando si dispone di una classe CWinThread.

### <a name="requirements"></a>Requisiti

**Intestazione:** afxmsg_.h

## <a name="on_thread_message"></a><a name="on_thread_message"></a>ON_THREAD_MESSAGE

Indica quale funzione gestirà un messaggio definito dall'utente.

### <a name="syntax"></a>Sintassi

```cpp
ON_THREAD_MESSAGE( message, memberFxn )
```

### <a name="parameters"></a>Parametri

*Messaggio*<br/>
ID del messaggio.

*memberFxn (parte utente)*<br/>
Nome della `CWinThread`funzione -message-handler a cui è mappato il messaggio.

### <a name="remarks"></a>Osservazioni

ON_THREAD_MESSAGE deve essere utilizzato al posto `CWinThread` di ON_MESSAGE quando si dispone di una classe. I messaggi definiti dall'utente sono tutti i messaggi che non sono messaggi standard di Windows WM_MESSAGE. Nella mappa messaggi deve essere presente esattamente un'istruzione macro ON_THREAD_MESSAGE per ogni messaggio definito dall'utente di cui è necessario eseguire il mapping a una funzione del gestore messaggi.

### <a name="requirements"></a>Requisiti

**Intestazione:** afxole.h

## <a name="on_update_command_ui"></a><a name="on_update_command_ui"></a>On_update_command_ui

Questa macro indica quale funzione gestirà un messaggio di comando di aggiornamento dell'interfaccia utente.

### <a name="syntax"></a>Sintassi

```cpp
ON_UPDATE_COMMAND_UI( messageId, memberFxn )
```

### <a name="parameters"></a>Parametri

*Messageid*<br/>
ID del messaggio.

*memberFxn (parte utente)*<br/>
Nome della funzione di gestione dei messaggi a cui è mappato il messaggio.

### <a name="remarks"></a>Osservazioni

Nella mappa messaggi deve essere presente esattamente un'istruzione macro ON_UPDATE_COMMAND_UI per ogni comando di aggiornamento dell'interfaccia utente di cui è necessario eseguire il mapping a una funzione di gestione dei messaggi.

Per ulteriori informazioni ed esempi, vedere Argomenti relativi alla gestione e al [mapping dei messaggi](../../mfc/message-handling-and-mapping.md).

### <a name="requirements"></a>Requisiti

**Intestazione:** afxole.h

## <a name="on_command_range"></a><a name="on_command_range"></a>ON_COMMAND_RANGE

Utilizzare questa macro per eseguire il mapping di un intervallo contiguo di ID di comando a una singola funzione del gestore messaggi.

### <a name="syntax"></a>Sintassi

```cpp
ON_COMMAND_RANGE( id1, id2, memberFxn )
```

### <a name="parameters"></a>Parametri

*id1*<br/>
ID di comando all'inizio di un intervallo contiguo di ID di comando.

*id2*<br/>
ID di comando alla fine di un intervallo contiguo di ID di comando.

*memberFxn (parte utente)*<br/>
Nome della funzione di gestione dei messaggi a cui sono mappati i comandi.

### <a name="remarks"></a>Osservazioni

L'intervallo di ID inizia con *id1* e termina con *id2*.

Utilizzare ON_COMMAND_RANGE per eseguire il mapping di un intervallo di ID di comando a una funzione membro. Utilizzare [ON_COMMAND](#on_command) per eseguire il mapping di un singolo comando a una funzione membro. Solo una voce della mappa messaggi può corrispondere a un determinato ID di comando. Ovvero, non è possibile eseguire il mapping di un comando a più di un gestore. Per ulteriori informazioni sul mapping degli intervalli di messaggi, vedere [Gestori per gli intervalli di mappa messaggi](../../mfc/handlers-for-message-map-ranges.md).

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

**Intestazione:** afxmsg_.h

## <a name="on_update_command_ui_range"></a><a name="on_update_command_ui_range"></a>ON_UPDATE_COMMAND_UI_RANGE

Esegue il mapping di un intervallo contiguo di ID di comando a una singola funzione del gestore messaggi di aggiornamento.

### <a name="syntax"></a>Sintassi

```cpp
ON_UPDATE_COMMAND_UI_RANGE( id1, id2, memberFxn )
```

### <a name="parameters"></a>Parametri

*id1*<br/>
ID di comando all'inizio di un intervallo contiguo di ID di comando.

*id2*<br/>
ID di comando alla fine di un intervallo contiguo di ID di comando.

*memberFxn (parte utente)*<br/>
Nome della funzione di gestione dei messaggi di aggiornamento a cui sono mappati i comandi.

### <a name="remarks"></a>Osservazioni

I gestori di messaggi di aggiornamento aggiornano lo stato delle voci di menu e dei pulsanti della barra degli strumenti associati al comando. L'intervallo di ID inizia con *id1* e termina con *id2*.

Non è disponibile alcun supporto automatico per gli intervalli della mappa messaggi, pertanto è necessario inserire la macro manualmente.

### <a name="requirements"></a>Requisiti

**Intestazione:** afxmsg_.h

## <a name="on_control_range"></a><a name="on_control_range"></a>ON_CONTROL_RANGE

Utilizzare questa macro per eseguire il mapping di un intervallo contiguo di ID di controllo a una singola funzione del gestore messaggi per un messaggio di notifica di Windows specificato, ad esempio BN_CLICKED.

### <a name="syntax"></a>Sintassi

```cpp
ON_CONTROL_RANGE( wNotifyCode, id1, id2, memberFxn )
```

### <a name="parameters"></a>Parametri

*wNotifyCode (codice wNotifyCode)*<br/>
Il codice di notifica a cui il gestore risponde.

*id1*<br/>
ID di comando all'inizio di un intervallo contiguo di ID di controllo.

*id2*<br/>
ID di comando alla fine di un intervallo contiguo di ID di controllo.

*memberFxn (parte utente)*<br/>
Nome della funzione di gestione dei messaggi a cui sono mappati i controlli.

### <a name="remarks"></a>Osservazioni

L'intervallo di ID inizia con *id1* e termina con *id2*. Il gestore viene chiamato per la notifica specificata proveniente da uno dei controlli mappati.

Non è disponibile alcun supporto automatico per gli intervalli della mappa messaggi, pertanto è necessario inserire la macro manualmente.

Per ulteriori informazioni sull'implementazione di funzioni di gestione per un intervallo di ID di controllo, vedere [Gestori per gli intervalli di mappa messaggi](../../mfc/handlers-for-message-map-ranges.md).

### <a name="requirements"></a>Requisiti

**Intestazione:** afxmsg_.h

## <a name="see-also"></a>Vedere anche

[ON_COMMAND](message-map-macros-mfc.md#on_command)<br/>
[TN006: mappe messaggi](../tn006-message-maps.md)<br/>
[Classe COleCmdUI](colecmdui-class.md)<br/>
[COleServerDoc::OnExecOleCmd](coleserverdoc-class.md#onexecolecmd)<br/>
[RegistraMessaggio](/windows/win32/api/winuser/nf-winuser-registerwindowmessagew)<br/>
[Gestori definiti dall'utenteUser-Defined Handlers](user-defined-handlers.md)<br/>
[Classe CCmdUI](ccmdui-class.md)
