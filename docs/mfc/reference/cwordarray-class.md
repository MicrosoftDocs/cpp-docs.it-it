---
title: Classe CWordArray
ms.date: 09/07/2019
f1_keywords:
- CWordArray
- AFXCOLL/CWordArray
- AFXCOLL/CObArray::CObArray
- AFXCOLL/CObArray::Add
- AFXCOLL/CObArray::Append
- AFXCOLL/CObArray::Copy
- AFXCOLL/CObArray::ElementAt
- AFXCOLL/CObArray::FreeExtra
- AFXCOLL/CObArray::GetAt
- AFXCOLL/CObArray::GetCount
- AFXCOLL/CObArray::GetData
- AFXCOLL/CObArray::GetSize
- AFXCOLL/CObArray::GetUpperBound
- AFXCOLL/CObArray::InsertAt
- AFXCOLL/CObArray::IsEmpty
- AFXCOLL/CObArray::RemoveAll
- AFXCOLL/CObArray::RemoveAt
- AFXCOLL/CObArray::SetAt
- AFXCOLL/CObArray::SetAtGrow
- AFXCOLL/CObArray::SetSize
helpviewer_keywords:
- CObArray [MFC], CObArray
- CObArray [MFC], Add
- CObArray [MFC], Append
- CObArray [MFC], Copy
- CObArray [MFC], ElementAt
- CObArray [MFC], FreeExtra
- CObArray [MFC], GetAt
- CObArray [MFC], GetCount
- CObArray [MFC], GetData
- CObArray [MFC], GetSize
- CObArray [MFC], GetUpperBound
- CObArray [MFC], InsertAt
- CObArray [MFC], IsEmpty
- CObArray [MFC], RemoveAll
- CObArray [MFC], RemoveAt
- CObArray [MFC], SetAt
- CObArray [MFC], SetAtGrow
- CObArray [MFC], SetSize
ms.assetid: 2ba2c194-2c6c-40ff-9db4-e9dbe57e1f57
ms.openlocfilehash: c136bbb14e0d7cffc604813731b6f87ba18063cf
ms.sourcegitcommit: 3caf5261b3ea80d9cf14038c116ba981d655cd13
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/11/2019
ms.locfileid: "70907905"
---
# <a name="cwordarray-class"></a>Classe CWordArray

Supporta matrici di parole a 16 bit.

## <a name="syntax"></a>Sintassi

```
class CWordArray : public CObject
```

## <a name="members"></a>Members

Le funzioni membro di `CWordArray` sono simili alle funzioni membro della classe [CObArray](../../mfc/reference/cobarray-class.md). Grazie a questa somiglianza, per le specifiche delle funzioni membro è possibile usare la documentazione di riferimento di `CObArray`. Ogni volta che viene visualizzato un puntatore [CObject](../../mfc/reference/cobject-class.md) come parametro di funzione o valore restituito, sostituire una parola.

`CObject* CObArray::GetAt( int <nIndex> ) const;`

ad esempio, si converte in

`WORD CWordArray::GetAt( int <nIndex> ) const;`

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CObArray:: CObArray](../../mfc/reference/cobarray-class.md#cobarray)|Costruisce una matrice vuota.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CObArray:: Add](../../mfc/reference/cobarray-class.md#add)|Aggiunge un elemento alla fine della matrice; se necessario, aumenta le dimensioni della matrice.|
|[CObArray:: Append](../../mfc/reference/cobarray-class.md#append)|Accoda alla matrice un'altra matrice; se necessario, aumenta le dimensioni della matrice.|
|[CObArray::Copy](../../mfc/reference/cobarray-class.md#copy)|Copia nella matrice un'altra matrice; se necessario, aumenta le dimensioni della matrice.|
|[CObArray::ElementAt](../../mfc/reference/cobarray-class.md#elementat)|Restituisce un riferimento temporaneo al puntatore dell'elemento nella matrice.|
|[CObArray::FreeExtra](../../mfc/reference/cobarray-class.md#freeextra)|Libera tutta la memoria non utilizzata oltre limite il superiore corrente.|
|[CObArray::GetAt](../../mfc/reference/cobarray-class.md#getat)|Restituisce il valore in corrispondenza di un indice specificato.|
|[CObArray::GetCount](../../mfc/reference/cobarray-class.md#getcount)|Ottiene il numero di elementi nella matrice.|
|[CObArray::GetData](../../mfc/reference/cobarray-class.md#getdata)|Consente l'accesso a tutti gli elementi nella matrice. Può essere NULL.|
|[CObArray::GetSize](../../mfc/reference/cobarray-class.md#getsize)|Ottiene il numero di elementi nella matrice.|
|[CObArray::GetUpperBound](../../mfc/reference/cobarray-class.md#getupperbound)|Restituisce il massimo indice valido.|
|[CObArray::InsertAt](../../mfc/reference/cobarray-class.md#insertat)|Inserisce un elemento (o tutti gli elementi di un'altra matrice) in corrispondenza di un indice specificato.|
|[CObArray:: IsEmpty](../../mfc/reference/cobarray-class.md#isempty)|Determina se la matrice è vuota.|
|[CObArray::RemoveAll](../../mfc/reference/cobarray-class.md#removeall)|Rimuove tutti gli elementi dalla matrice.|
|[CObArray::RemoveAt](../../mfc/reference/cobarray-class.md#removeat)|Rimuove un elemento in corrispondenza di un indice specificato.|
|[CObArray::SetAt](../../mfc/reference/cobarray-class.md#setat)|Imposta il valore per un indice specificato; l'aumento di dimensioni della matrice non è consentito.|
|[CObArray::SetAtGrow](../../mfc/reference/cobarray-class.md#setatgrow)|Imposta il valore per un indice specificato; se necessario, aumenta le dimensioni della matrice.|
|[CObArray::SetSize](../../mfc/reference/cobarray-class.md#setsize)|Imposta il numero di elementi che la matrice deve contenere.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CObArray::operator &#91;&#93;](../../mfc/reference/cobarray-class.md#operator_at)|Imposta o ottiene l'elemento in corrispondenza dell'indice specificato.|

## <a name="remarks"></a>Note

`CWordArray`incorpora la macro [IMPLEMENT_SERIAL](run-time-object-model-services.md#implement_serial) per supportare la serializzazione e il dump dei relativi elementi. Se una matrice di parole viene archiviata in un archivio, con un operatore di inserimento di overload o con la funzione membro [CObject:: Serialize](../../mfc/reference/cobject-class.md#serialize) , ogni elemento viene serializzato a sua volta.

> [!NOTE]
>  Prima di usare una matrice, usare `SetSize` per determinarne le dimensioni e allocare la necessaria memoria. Se non si usa `SetSize`, l'aggiunta di elementi alla matrice ne causa la riallocazione e la copia frequente. Le operazioni di riallocazione e copia frequenti sono inefficienti e possono frammentare la memoria.

Se è necessario un dump di singoli elementi nella matrice, è necessario impostare la profondità del contesto di dump su un valore maggiore o uguale a 1.

Per ulteriori informazioni sull'utilizzo `CWordArray`di, vedere le [raccolte](../../mfc/collections.md)di articoli.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

`CWordArray`

## <a name="requirements"></a>Requisiti

**Intestazione:** AFXCOLL. h

##  <a name="icommandsource_interface"></a>Interfaccia ICommandSource

Gestisce i comandi inviati da un oggetto di origine del comando a un controllo utente.

```
interface class ICommandSource
```

### <a name="remarks"></a>Note

Quando si ospita un controllo utente in una vista MFC, la [classe CWinFormsView](../../mfc/reference/cwinformsview-class.md) instrada i comandi e aggiorna i messaggi dell'interfaccia utente del comando al controllo utente per consentire la gestione dei comandi MFC (ad esempio, le voci di menu frame e i pulsanti della barra degli strumenti). Implementando, si assegna all'utente il controllo di un riferimento `ICommandSource` all'oggetto.

Vedere [Procedura: Aggiungere il routing dei comandi al controllo](../../dotnet/how-to-add-command-routing-to-the-windows-forms-control.md) Windows Forms per un esempio di come usare `ICommandTarget`.

Per ulteriori informazioni sull'utilizzo di Windows Forms, vedere [utilizzo di un controllo utente Windows Form in MFC](../../dotnet/using-a-windows-form-user-control-in-mfc.md).

##  <a name="addcommandhandler"></a>ICommandSource:: AddCommandHandler

Aggiunge un gestore di comando a un oggetto di origine del comando.

```
void AddCommandHandler(
    unsigned int cmdID,
    CommandHandler^ cmdHandler);
```

### <a name="parameters"></a>Parametri

*cmdID*<br/>
ID di comando.

*cmdHandler*<br/>
Handle per il metodo del gestore del comando.

### <a name="remarks"></a>Note

Questo metodo aggiunge il gestore di comandi *cmdHandler* all'oggetto di origine del comando ed esegue il mapping del gestore a *CMDID*.

Vedere [Procedura: Aggiungere il routing dei comandi al controllo](../../dotnet/how-to-add-command-routing-to-the-windows-forms-control.md) Windows Forms per un esempio di come usare `AddCommandHandler`.

##  <a name="addcommandrangehandler"></a>  ICommandSource::AddCommandRangeHandler

Aggiunge un gruppo di gestori di comandi a un oggetto di origine del comando.

```
void AddCommandRangeHandler(
    unsigned int cmdIDMin,
    unsigned int cmdIDMax,
    CommandHandler^ cmdHandler);
```

### <a name="parameters"></a>Parametri

*cmdIDMin*<br/>
Indice iniziale dell'intervallo di ID di comando.

*cmdIDMax*<br/>
Indice finale dell'intervallo di ID di comando.

*cmdHandler*<br/>
Handle per il metodo del gestore di messaggi a cui vengono mappati i comandi.

### <a name="remarks"></a>Note

Questo metodo esegue il mapping di un intervallo contiguo di ID comando a un singolo gestore di messaggi e lo aggiunge all'oggetto di origine comando. Viene utilizzato per gestire un gruppo di pulsanti correlati con un solo metodo.

##  <a name="addcommandrangeuihandler"></a>  ICommandSource::AddCommandRangeUIHandler

Aggiunge un gruppo di gestori di messaggi del comando dell'interfaccia utente a un oggetto di origine del comando.

```
void AddCommandRangeUIHandler(
    unsigned int cmdIDMin,
    unsigned int cmdIDMax,
    CommandUIHandler^ cmdUIHandler);
```

### <a name="parameters"></a>Parametri

*cmdIDMin*<br/>
Indice iniziale dell'intervallo di ID di comando.

*cmdIDMax*<br/>
Indice finale dell'intervallo di ID di comando.

*cmdHandler*<br/>
Handle per il metodo del gestore di messaggi a cui vengono mappati i comandi.

### <a name="remarks"></a>Note

Questo metodo esegue il mapping di un intervallo contiguo di ID comando a un singolo gestore di messaggi di comando dell'interfaccia utente e lo aggiunge all'oggetto di origine del comando. Viene utilizzato per gestire un gruppo di pulsanti correlati con un solo metodo.

##  <a name="addcommanduihandler"></a>ICommandSource:: AddCommandUIHandler

Aggiunge un gestore di messaggi del comando dell'interfaccia utente a un oggetto di origine del comando.

```
void AddCommandUIHandler(
    unsigned int cmdID,
    CommandUIHandler^ cmdUIHandler);
```

### <a name="parameters"></a>Parametri

*cmdID*<br/>
ID di comando.

*cmdUIHandler*<br/>
Handle per il metodo del gestore del messaggio del comando dell'interfaccia utente.

### <a name="remarks"></a>Note

Questo metodo aggiunge il gestore del messaggio del comando dell'interfaccia utente *cmdHandler* all'oggetto di origine del comando ed esegue il mapping del gestore a *CMDID*.

##  <a name="postcommand"></a>ICommandSource::P ostCommand

Invia un messaggio senza attendere che venga elaborato.

```
void PostCommand(unsigned int command);
```

### <a name="parameters"></a>Parametri

*command*<br/>
ID del messaggio da inviare.

### <a name="remarks"></a>Note

Questo metodo invia in modo asincrono il messaggio mappato all'ID specificato dal *comando*. Chiama [CWnd::P ostmessage](../../mfc/reference/cwnd-class.md#postmessage) per inserire il messaggio nella coda di messaggi della finestra e quindi restituisce un risultato senza attendere che la finestra corrispondente elabori il messaggio.

##  <a name="removecommandhandler"></a>ICommandSource:: RemoveCommandHandler

Rimuove un gestore comandi da un oggetto di origine comando.

```
void RemoveCommandHandler(unsigned int cmdID);
```

### <a name="parameters"></a>Parametri

*cmdID*<br/>
ID di comando.

### <a name="remarks"></a>Note

Questo metodo rimuove il gestore di comandi mappato a *CMDID* dall'oggetto di origine comando.

##  <a name="removecommandrangehandler"></a>  ICommandSource::RemoveCommandRangeHandler

Rimuove un gruppo di gestori di comandi da un oggetto di origine comando.

```
void RemoveCommandRangeUIHandler(
    unsigned int cmdIDMin,
    unsigned int cmdIDMax);
```

### <a name="parameters"></a>Parametri

*cmdIDMin*<br/>
Indice iniziale dell'intervallo di ID di comando.

*cmdIDMax*<br/>
Indice finale dell'intervallo di ID di comando.

### <a name="remarks"></a>Note

Questo metodo rimuove un gruppo di gestori di messaggi, mappato agli ID di comando specificati da *cmdIDMin* e *da cmdIDMax*, dall'oggetto di origine comando.

##  <a name="removecommandrangeuihandler"></a>  ICommandSource::RemoveCommandRangeUIHandler

Rimuove un gruppo di gestori di messaggi del comando dell'interfaccia utente da un oggetto di origine comando.

```
void RemoveCommandRangeUIHandler(
    unsigned int cmdIDMin,
    unsigned int cmdIDMax);
```

### <a name="parameters"></a>Parametri

*cmdIDMin*<br/>
Indice iniziale dell'intervallo di ID di comando.

*cmdIDMax*<br/>
Indice finale dell'intervallo di ID di comando.

### <a name="remarks"></a>Note

Questo metodo rimuove un gruppo di gestori di messaggi del comando dell'interfaccia utente, mappato agli ID di comando specificati da *cmdIDMin* e *da cmdIDMax*, dall'oggetto di origine del comando.

##  <a name="removecommanduihandler"></a>ICommandSource:: RemoveCommandUIHandler

Rimuove un gestore di messaggi di comando dell'interfaccia utente da un oggetto di origine comando.

```
void RemoveCommandUIHandler(unsigned int cmdID);
```

### <a name="parameters"></a>Parametri

*cmdID*<br/>
ID di comando.

### <a name="remarks"></a>Note

Questo metodo rimuove il gestore di messaggi del comando dell'interfaccia utente mappato a *CMDID* dall'oggetto di origine comando.

##  <a name="sendcommand"></a>  ICommandSource::SendCommand

Invia un messaggio e attende che venga elaborato prima della restituzione.

```
void SendCommand(unsigned int command);
```

### <a name="parameters"></a>Parametri

*command*<br/>
ID del messaggio da inviare.

### <a name="remarks"></a>Note

Questo metodo invia in modo sincrono il messaggio mappato all'ID specificato dal *comando*. Chiama [CWnd:: SendMessage](../../mfc/reference/cwnd-class.md#sendmessage) per inserire il messaggio nella coda di messaggi della finestra e attende che la routine della finestra abbia elaborato il messaggio prima della restituzione.

##  <a name="icommandtarget_interface"></a>Interfaccia ICommandTarget

Fornisce un controllo utente con un'interfaccia per ricevere comandi da un oggetto di origine comando.

```
interface class ICommandTarget
```

### <a name="remarks"></a>Note

Quando si ospita un controllo utente in una vista MFC, [CWinFormsView](../../mfc/reference/cwinformsview-class.md) instrada i comandi e aggiorna i messaggi dell'interfaccia utente del comando al controllo utente per consentire la gestione dei comandi MFC (ad esempio, le voci di menu frame e i pulsanti della barra degli strumenti). Implementando `ICommandTarget`, si assegna all'utente il controllo di un riferimento all'oggetto.

Vedere [Procedura: Aggiungere il routing dei comandi al controllo](../../dotnet/how-to-add-command-routing-to-the-windows-forms-control.md) Windows Forms per un esempio di come usare `ICommandTarget`.

Per ulteriori informazioni sull'utilizzo di Windows Forms, vedere [utilizzo di un controllo utente Windows Form in MFC](../../dotnet/using-a-windows-form-user-control-in-mfc.md).

##  <a name="initialize"></a>  ICommandTarget::Initialize

Inizializza l'oggetto di destinazione del comando.

```
void Initialize(ICommandSource^ cmdSource);
```

### <a name="parameters"></a>Parametri

*cmdSource*<br/>
Handle per l'oggetto di origine del comando.

### <a name="remarks"></a>Note

Quando si ospita un controllo utente in una vista MFC, [CWinFormsView](../../mfc/reference/cwinformsview-class.md) instrada i comandi e aggiorna i messaggi dell'interfaccia utente del comando al controllo utente per consentire la gestione dei comandi MFC.

Questo metodo inizializza l'oggetto di destinazione del comando e lo associa all'oggetto di origine del comando specificato *cmdSource*. Deve essere chiamato nell'implementazione della classe del controllo utente. Al momento dell'inizializzazione, è necessario registrare i gestori di comandi con l'oggetto di origine del comando chiamando [ICommandSource:: AddCommandHandler](../../mfc/reference/icommandsource-interface.md) nell' `Initialize` implementazione. Vedere [Procedura: Aggiungere il routing dei comandi al controllo](../../dotnet/how-to-add-command-routing-to-the-windows-forms-control.md) Windows Forms per un esempio di come usare `Initialize` per eseguire questa operazione.

##  <a name="icommandui_interface"></a>Interfaccia ICommandUI

Gestisce i comandi dell'interfaccia utente.

```
interface class ICommandUI
```

### <a name="remarks"></a>Note

Questa interfaccia fornisce i metodi e le proprietà che gestiscono i comandi dell'interfaccia utente. `ICommandUI`è simile alla [classe CCmdUI](../../mfc/reference/ccmdui-class.md), ad eccezione `ICommandUI` del fatto che viene usato per le applicazioni MFC che interagiscono con i componenti .NET.

`ICommandUI`viene usato all'interno `ON_UPDATE_COMMAND_UI` di un gestore in una classe derivata da. Quando un utente di un'applicazione attiva (Seleziona o fa clic) un menu, ogni voce di menu viene visualizzata come abilitata o disabilitata. La destinazione di ogni comando di menu fornisce queste informazioni implementando `ON_UPDATE_COMMAND_UI` un gestore. Per ogni oggetto dell'interfaccia utente del comando nell'applicazione, usare la [creazione guidata classe](mfc-class-wizard.md) o la finestra **proprietà** (in **Visualizzazione classi**) per creare una voce della mappa messaggi e un prototipo di funzione per ogni gestore.

Per ulteriori informazioni sull'utilizzo dell' `ICommandUI` interfaccia nel routing dei comandi, vedere [procedura: Aggiungere il routing dei comandi al controllo](../../dotnet/how-to-add-command-routing-to-the-windows-forms-control.md)Windows Forms.

Per ulteriori informazioni sull'utilizzo di Windows Forms, vedere [utilizzo di un controllo utente Windows Form in MFC](../../dotnet/using-a-windows-form-user-control-in-mfc.md).

Per ulteriori informazioni sulla gestione dei comandi dell'interfaccia utente in MFC, vedere la [classe CCmdUI](../../mfc/reference/ccmdui-class.md).

##  <a name="check"></a>ICommandUI:: check

Imposta l'elemento dell'interfaccia utente per questo comando sullo stato di selezione appropriato.

```
property UICheckState Check;
```

### <a name="remarks"></a>Note

Questa proprietà imposta l'elemento dell'interfaccia utente per questo comando sullo stato di selezione appropriato. Impostare `Check` sui valori seguenti:

|Nome|Definizione|
|----------|----------------|
|0|Deselezionare|
|1|per CLI|
|2|Imposta indeterminato|

##  <a name="continuerouting"></a>ICommandUI:: ContinueRouting

Indica al meccanismo di routing dei comandi di continuare il routing del messaggio corrente alla catena di gestori.

```
void ContinueRouting();
```

### <a name="remarks"></a>Note

Si tratta di una funzione membro avanzata da usare insieme a un gestore [ON_COMMAND_EX](message-map-macros-mfc.md#on_command_ex) che restituisce false. Per ulteriori informazioni, vedere la Nota [tecnica TN006: Mappe](../../mfc/tn006-message-maps.md)messaggi.

##  <a name="enabled"></a>ICommandUI:: Enabled

Abilita o Disabilita l'elemento dell'interfaccia utente per questo comando.

```
property bool Enabled;
```

### <a name="remarks"></a>Note

Questa proprietà Abilita o Disabilita l'elemento dell'interfaccia utente per questo comando. Impostare `Enabled` su true per abilitare l'elemento, false per disabilitarlo.

##  <a name="id"></a>ICommandUI:: ID

Ottiene l'ID dell'oggetto interfaccia utente rappresentato dall' `ICommandUI` oggetto.

```
property unsigned int ID;
```

### <a name="remarks"></a>Note

Questa proprietà ottiene l'ID (un handle) della voce di menu, il pulsante della barra degli strumenti o un altro oggetto dell' `ICommandUI` interfaccia utente rappresentato dall'oggetto.

##  <a name="index"></a>ICommandUI:: index

Ottiene l'indice dell'oggetto dell'interfaccia utente rappresentato dall' `ICommandUI` oggetto.

```
property unsigned int Index;
```

### <a name="remarks"></a>Note

Questa proprietà ottiene l'indice (un handle) della voce di menu, il pulsante della barra degli strumenti o un altro oggetto dell' `ICommandUI` interfaccia utente rappresentato dall'oggetto.

##  <a name="radio"></a>ICommandUI:: Radio

Imposta l'elemento dell'interfaccia utente per questo comando sullo stato di selezione appropriato.

```
property bool Radio;
```

### <a name="remarks"></a>Note

Questa proprietà imposta l'elemento dell'interfaccia utente per questo comando sullo stato di selezione appropriato. Impostare `Radio` su true per abilitare l'elemento; in caso contrario, false.

##  <a name="text"></a>ICommandUI:: Text

Imposta il testo dell'elemento dell'interfaccia utente per questo comando.

```
property String^ Text;
```

### <a name="remarks"></a>Note

Questa proprietà imposta il testo dell'elemento dell'interfaccia utente per questo comando. Impostare `Text` su un handle di stringa di testo.

##  <a name="iview_interface"></a>Interfaccia IView

Implementa diversi metodi utilizzati da [CWinFormsView](../../mfc/reference/cwinformsview-class.md) per inviare notifiche di visualizzazione a un controllo gestito.

```
interface class IView
```

### <a name="remarks"></a>Note

`IView`implementa diversi metodi che `CWinFormsView` usano per inviare notifiche di visualizzazione comuni a un controllo gestito ospitato. Si tratta di [OnInitialUpdate](../../mfc/reference/iview-interface.md), [OnUpdate](../../mfc/reference/iview-interface.md) e [OnActivateView](../../mfc/reference/iview-interface.md).

`IView`è simile a [CView](../../mfc/reference/cview-class.md), ma viene usato solo con le viste e i controlli gestiti.

Per ulteriori informazioni sull'utilizzo di Windows Forms, vedere [utilizzo di un controllo utente Windows Form in MFC](../../dotnet/using-a-windows-form-user-control-in-mfc.md).

##  <a name="onactivateview"></a>  IView::OnActivateView

Chiamato da MFC quando una visualizzazione viene attivata o disattivata.

```
void OnActivateView(bool activate);
```

### <a name="parameters"></a>Parametri

*activate*<br/>
Indica se la visualizzazione viene attivata o disattivata.

##  <a name="oninitialupdate"></a>  IView::OnInitialUpdate

Chiamata eseguita dal Framework dopo che la vista è stata associata per la prima volta al documento, ma prima che venga visualizzata inizialmente la visualizzazione.

```
void OnInitialUpdate();
```

##  <a name="onupdate"></a>  IView::OnUpdate

Chiamato da MFC dopo che il documento della vista è stato modificato.

```
void OnUpdate();
```

### <a name="remarks"></a>Note

Questa funzione consente alla visualizzazione di aggiornare la relativa visualizzazione in modo da riflettere le modifiche.

## <a name="see-also"></a>Vedere anche

[Esempio di raccolta MFC](../../overview/visual-cpp-samples.md)<br/>
[Classe CObject](../../mfc/reference/cobject-class.md)<br/>
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)
