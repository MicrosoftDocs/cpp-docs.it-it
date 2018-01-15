---
title: Classe CWordArray | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
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
dev_langs: C++
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
caps.latest.revision: "26"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 5804df97c54a111a02b79dc849c20c91ba8176b7
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="cwordarray-class"></a>Classe CWordArray
Supporta matrici di parole a 16 bit.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CWordArray : public CObject  
```  
  
## <a name="members"></a>Membri  
 Le funzioni membro di `CWordArray` sono simili alle funzioni membro della classe [CObArray](../../mfc/reference/cobarray-class.md). Grazie a questa somiglianza, per le specifiche delle funzioni membro è possibile usare la documentazione di riferimento di `CObArray`. Ogni volta che un [CObject](../../mfc/reference/cobject-class.md) puntatore come parametro della funzione o valore restituito, sostituire con un **WORD**.  
  
 `CObject* CObArray::GetAt( int <nIndex> ) const;`  
  
 ad esempio, si converte in  
  
 `WORD CWordArray::GetAt( int <nIndex> ) const;`  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CObArray::CObArray](../../mfc/reference/cobarray-class.md#cobarray)|Costruisce una matrice vuota.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CObArray::Add](../../mfc/reference/cobarray-class.md#add)|Aggiunge un elemento alla fine della matrice; se necessario, aumenta le dimensioni della matrice.|  
|[CObArray::Append](../../mfc/reference/cobarray-class.md#append)|Accoda alla matrice un'altra matrice; se necessario, aumenta le dimensioni della matrice.|  
|[CObArray::Copy](../../mfc/reference/cobarray-class.md#copy)|Copia nella matrice un'altra matrice; se necessario, aumenta le dimensioni della matrice.|  
|[CObArray::ElementAt](../../mfc/reference/cobarray-class.md#elementat)|Restituisce un riferimento temporaneo al puntatore dell'elemento nella matrice.|  
|[CObArray::FreeExtra](../../mfc/reference/cobarray-class.md#freeextra)|Libera tutta la memoria non utilizzata oltre limite il superiore corrente.|  
|[CObArray::GetAt](../../mfc/reference/cobarray-class.md#getat)|Restituisce il valore in corrispondenza di un indice specificato.|  
|[CObArray::GetCount](../../mfc/reference/cobarray-class.md#getcount)|Ottiene il numero di elementi nella matrice.|  
|[CObArray::GetData](../../mfc/reference/cobarray-class.md#getdata)|Consente l'accesso a tutti gli elementi nella matrice. Può essere **NULL**.|  
|[CObArray::GetSize](../../mfc/reference/cobarray-class.md#getsize)|Ottiene il numero di elementi nella matrice.|  
|[CObArray::GetUpperBound](../../mfc/reference/cobarray-class.md#getupperbound)|Restituisce il massimo indice valido.|  
|[CObArray::InsertAt](../../mfc/reference/cobarray-class.md#insertat)|Inserisce un elemento (o tutti gli elementi di un'altra matrice) in corrispondenza di un indice specificato.|  
|[CObArray::IsEmpty](../../mfc/reference/cobarray-class.md#isempty)|Determina se la matrice è vuota.|  
|[CObArray::RemoveAll](../../mfc/reference/cobarray-class.md#removeall)|Rimuove tutti gli elementi dalla matrice.|  
|[CObArray::RemoveAt](../../mfc/reference/cobarray-class.md#removeat)|Rimuove un elemento in corrispondenza di un indice specificato.|  
|[CObArray::SetAt](../../mfc/reference/cobarray-class.md#setat)|Imposta il valore per un indice specificato; l'aumento di dimensioni della matrice non è consentito.|  
|[CObArray::SetAtGrow](../../mfc/reference/cobarray-class.md#setatgrow)|Imposta il valore per un indice specificato; se necessario, aumenta le dimensioni della matrice.|  
|[CObArray::SetSize](../../mfc/reference/cobarray-class.md#setsize)|Imposta il numero di elementi che la matrice deve contenere.|  
  
### <a name="public-operators"></a>Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CObArray::operator &#91; &#93;](../../mfc/reference/cobarray-class.md#operator_at)|Imposta o ottiene l'elemento in corrispondenza dell'indice specificato.|  
  
## <a name="remarks"></a>Note  
 `CWordArray`incorpora il [IMPLEMENT_SERIAL](run-time-object-model-services.md#implement_serial) (macro) per supportare la serializzazione e il dump dei relativi elementi. Se una matrice di parole è archiviata in un archivio, con un operatore di inserimento in overload o con il [CObject:: Serialize](../../mfc/reference/cobject-class.md#serialize) funzione membro, ogni elemento è, a sua volta, serializzato.  
  
> [!NOTE]
>  Prima di usare una matrice, usare `SetSize` per determinarne le dimensioni e allocare la necessaria memoria. Se non si usa `SetSize`, l'aggiunta di elementi alla matrice ne causa la riallocazione e la copia frequente. Le operazioni di riallocazione e copia frequenti sono inefficienti e possono frammentare la memoria.  
  
 Se è necessario un dump di singoli elementi nella matrice, è necessario impostare la profondità del contesto di dump a 1 o superiore.  
  
 Per ulteriori informazioni sull'utilizzo `CWordArray`, vedere l'articolo [raccolte](../../mfc/collections.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 `CWordArray`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxcoll. h  
  
##  <a name="icommandsource_interface"></a>Interfaccia ICommandSource  
 Gestisce i comandi inviati da un oggetto di origine del comando a un controllo utente.  
  
```  
interface class ICommandSource  
```  
  
### <a name="remarks"></a>Note  
 Quando si ospita un controllo utente in una visualizzazione di MFC, [classe CWinFormsView](../../mfc/reference/cwinformsview-class.md) invia comandi e aggiornamento comando messaggi dell'interfaccia utente per il controllo utente per consentire la gestione dei comandi MFC (ad esempio, le voci di menu frame e i pulsanti della barra degli strumenti). Mediante l'implementazione, assegnare il controllo utente un riferimento di `ICommandSource` oggetto.  
  
 Vedere [procedura: aggiungere comandi (Routing) per il controllo Windows Form](../../dotnet/how-to-add-command-routing-to-the-windows-forms-control.md) per un esempio di come utilizzare `ICommandTarget`.  
  
 Per ulteriori informazioni sull'utilizzo di Windows Form, vedere [utilizzando un controllo utente Windows Form in MFC](../../dotnet/using-a-windows-form-user-control-in-mfc.md).  
  
##  <a name="addcommandhandler"></a>ICommandSource::AddCommandHandler  
 Aggiunge un gestore del comando a un oggetto di origine del comando.  
  
```  
void AddCommandHandler(
    unsigned int cmdID,  
    CommandHandler^ cmdHandler);
```  
  
### <a name="parameters"></a>Parametri  
 `cmdID`  
 ID di comando.  
  
 `cmdHandler`  
 Handle per il metodo di gestore del comando.  
  
### <a name="remarks"></a>Note  
 Questo metodo aggiunge il gestore del comando `cmdHandler` all'oggetto di origine del comando e viene eseguito il mapping al gestore di `cmdID`.  
  
 Vedere [procedura: aggiungere comandi (Routing) per il controllo Windows Form](../../dotnet/how-to-add-command-routing-to-the-windows-forms-control.md) per un esempio di come utilizzare `AddCommandHandler`.  
  
##  <a name="addcommandrangehandler"></a>ICommandSource::AddCommandRangeHandler  
 Aggiunge un gruppo di gestori di comandi su un oggetto di origine del comando.  
  
```  
void AddCommandRangeHandler(
    unsigned int cmdIDMin,  
    unsigned int cmdIDMax,  
    CommandHandler^ cmdHandler);
```  
  
### <a name="parameters"></a>Parametri  
 `cmdIDMin`  
 L'indice di inizio dell'intervallo di ID di comando.  
  
 `cmdIDMax`  
 Indice finale dell'intervallo di ID di comando.  
  
 `cmdHandler`  
 Handle per il metodo del gestore messaggi a cui vengono eseguito il mapping di comandi.  
  
### <a name="remarks"></a>Note  
 Questo metodo esegue il mapping di un intervallo contiguo di ID di comando a un singolo gestore di messaggi e lo aggiunge all'oggetto di origine del comando. Viene utilizzato per la gestione di un gruppo di pulsanti correlati con un metodo.  
  
##  <a name="addcommandrangeuihandler"></a>ICommandSource::AddCommandRangeUIHandler  
 Aggiunge un gruppo di gestori di messaggi di comando dell'interfaccia utente a un oggetto di origine del comando.  
  
```  
void AddCommandRangeUIHandler(
    unsigned int cmdIDMin,   
    unsigned int cmdIDMax,   
    CommandUIHandler^ cmdUIHandler);
```  
  
### <a name="parameters"></a>Parametri  
 `cmdIDMin`  
 L'indice di inizio dell'intervallo di ID di comando.  
  
 `cmdIDMax`  
 Indice finale dell'intervallo di ID di comando.  
  
 `cmdHandler`  
 Handle per il metodo del gestore messaggi a cui vengono eseguito il mapping di comandi.  
  
### <a name="remarks"></a>Note  
 Questo metodo esegue il mapping di un intervallo contiguo di ID di comando a un gestore di messaggi comando dell'interfaccia utente singolo e lo aggiunge all'oggetto di origine del comando. Viene utilizzato per la gestione di un gruppo di pulsanti correlati con un metodo.  
  
##  <a name="addcommanduihandler"></a>ICommandSource::AddCommandUIHandler  
 Aggiunge un gestore di messaggi comando dell'interfaccia utente a un oggetto di origine del comando.  
  
```  
void AddCommandUIHandler(
    unsigned int cmdID,   
    CommandUIHandler^ cmdUIHandler);
```  
  
### <a name="parameters"></a>Parametri  
 `cmdID`  
 ID di comando.  
  
 `cmdUIHandler`  
 Handle per il metodo del gestore messaggio comando dell'interfaccia utente.  
  
### <a name="remarks"></a>Note  
 Questo metodo aggiunge il gestore di messaggi comando dell'interfaccia utente `cmdHandler` all'oggetto di origine del comando e viene eseguito il mapping al gestore di `cmdID`.  
  
##  <a name="postcommand"></a>ICommandSource::PostCommand  
 Invia un messaggio senza attendere che venga elaborato.  
  
```  
void PostCommand(unsigned int command);
```  
  
### <a name="parameters"></a>Parametri  
 `command`  
 L'ID di comando del messaggio da registrare.  
  
### <a name="remarks"></a>Note  
 Questo metodo invia in modo asincrono il messaggio mappato all'ID specificato da `command`. Chiama [CWnd::PostMessage](../../mfc/reference/cwnd-class.md#postmessage) per inserire il messaggio nella coda di messaggi e quindi restituisce la finestra senza attendere che la finestra corrispondente elaborare il messaggio.  
  
##  <a name="removecommandhandler"></a>ICommandSource::RemoveCommandHandler  
 Rimuove un gestore del comando da un oggetto di origine del comando.  
  
```  
void RemoveCommandHandler(unsigned int cmdID);
```  
  
### <a name="parameters"></a>Parametri  
 `cmdID`  
 ID di comando.  
  
### <a name="remarks"></a>Note  
 Questo metodo rimuove il gestore del comando eseguito il mapping a `cmdID` dall'oggetto di origine di comando.  
  
##  <a name="removecommandrangehandler"></a>ICommandSource::RemoveCommandRangeHandler  
 Rimuove un gruppo di gestori di comando da un oggetto di origine del comando.  
  
```  
void RemoveCommandRangeUIHandler(
    unsigned int cmdIDMin,  
    unsigned int cmdIDMax);
```  
  
### <a name="parameters"></a>Parametri  
 `cmdIDMin`  
 L'indice di inizio dell'intervallo di ID di comando.  
  
 `cmdIDMax`  
 Indice finale dell'intervallo di ID di comando.  
  
### <a name="remarks"></a>Note  
 Questo metodo rimuove un gruppo di gestori di messaggi, il mapping per lo specificato ID di comando da `cmdIDMin` e `cmdIDMax`, dall'oggetto di origine di comando.  
  
##  <a name="removecommandrangeuihandler"></a>ICommandSource::RemoveCommandRangeUIHandler  
 Rimuove un gruppo di gestori di messaggi di comando dell'interfaccia utente da un oggetto di origine del comando.  
  
```  
void RemoveCommandRangeUIHandler(
    unsigned int cmdIDMin,  
    unsigned int cmdIDMax);
```  
  
### <a name="parameters"></a>Parametri  
 `cmdIDMin`  
 L'indice di inizio dell'intervallo di ID di comando.  
  
 `cmdIDMax`  
 Indice finale dell'intervallo di ID di comando.  
  
### <a name="remarks"></a>Note  
 Questo metodo rimuove un gruppo di utenti interfaccia comando gestori di messaggi, il mapping per lo specificato ID di comando da `cmdIDMin` e `cmdIDMax`, dall'oggetto di origine di comando.  
  
##  <a name="removecommanduihandler"></a>ICommandSource::RemoveCommandUIHandler  
 Rimuove un gestore di messaggi comando dell'interfaccia utente da un oggetto di origine del comando.  
  
```  
void RemoveCommandUIHandler(unsigned int cmdID);
```  
  
### <a name="parameters"></a>Parametri  
 `cmdID`  
 ID di comando.  
  
### <a name="remarks"></a>Note  
 Questo metodo rimuove il gestore di messaggi del comando dell'interfaccia utente mappato a `cmdID` dall'oggetto di origine di comando.  
  
##  <a name="sendcommand"></a>ICommandSource::SendCommand  
 Invia un messaggio e attende che venga elaborato prima della restituzione.  
  
```  
void SendCommand(unsigned int command);
```  
  
### <a name="parameters"></a>Parametri  
 `command`  
 L'ID di comando del messaggio da inviare.  
  
### <a name="remarks"></a>Note  
 Questo metodo invia in modo sincrono il messaggio mappato all'ID specificato da `command`. Chiama [CWnd:: SendMessage](../../mfc/reference/cwnd-class.md#sendmessage) per inserire il messaggio nella coda di messaggi della finestra e attende fino a quando tale routine della finestra ha elaborato il messaggio prima della restituzione.  
  
##  <a name="icommandtarget_interface"></a>Interfaccia ICommandTarget  
 Fornisce un controllo utente con un'interfaccia per ricevere comandi da un oggetto di origine del comando.  
  
```  
interface class ICommandTarget  
```  
  
### <a name="remarks"></a>Note  
 Quando si ospita un controllo utente in una visualizzazione di MFC, [CWinFormsView](../../mfc/reference/cwinformsview-class.md) invia comandi e aggiornamento comando messaggi dell'interfaccia utente per il controllo utente per consentire la gestione dei comandi MFC (ad esempio, le voci di menu frame e i pulsanti della barra degli strumenti). Implementando `ICommandTarget`, assegnare il controllo utente un riferimento all'oggetto.  
  
 Vedere [procedura: aggiungere comandi (Routing) per il controllo Windows Form](../../dotnet/how-to-add-command-routing-to-the-windows-forms-control.md) per un esempio di come utilizzare `ICommandTarget`.  
  
 Per ulteriori informazioni sull'utilizzo di Windows Form, vedere [utilizzando un controllo utente Windows Form in MFC](../../dotnet/using-a-windows-form-user-control-in-mfc.md).  
  
##  <a name="initialize"></a>ICommandTarget:: Initialize  
 Inizializza l'oggetto di destinazione del comando.  
  
```  
void Initialize(ICommandSource^ cmdSource);
```  
  
### <a name="parameters"></a>Parametri  
 `cmdSource`  
 Un handle all'oggetto di origine del comando.  
  
### <a name="remarks"></a>Note  
 Quando si ospita un controllo utente in una visualizzazione di MFC, [CWinFormsView](../../mfc/reference/cwinformsview-class.md) invia comandi e aggiornamento comando messaggi dell'interfaccia utente per il controllo utente per consentire la gestione dei comandi MFC.  
  
 Questo metodo inizializza l'oggetto di destinazione di comando e associa l'oggetto di origine del comando specificato `cmdSource`. Deve essere chiamato nell'implementazione della classe del controllo utente. In fase di inizializzazione, è necessario registrare i gestori di comando con l'oggetto di origine del comando chiamando [ICommandSource::AddCommandHandler](../../mfc/reference/icommandsource-interface.md) nel `Initialize` implementazione. Vedere [procedura: aggiungere comandi (Routing) per il controllo Windows Form](../../dotnet/how-to-add-command-routing-to-the-windows-forms-control.md) per un esempio di come utilizzare `Initialize` per eseguire questa operazione.  
  
##  <a name="icommandui_interface"></a>Interfaccia ICommandUI  
 Gestisce i comandi dell'interfaccia utente.  
  
```  
interface class ICommandUI  
```  
  
### <a name="remarks"></a>Note  
 Questa interfaccia fornisce metodi e proprietà che gestiscono i comandi dell'interfaccia utente. `ICommandUI`è simile a [CCmdUI (classe)](../../mfc/reference/ccmdui-class.md), ad eccezione del fatto che `ICommandUI` viene utilizzato per le applicazioni MFC che interagiscono con i componenti .NET.  
  
 `ICommandUI`viene utilizzato all'interno di un `ON_UPDATE_COMMAND_UI` gestore in una classe derivata. Quando un utente di un'applicazione attiva (Seleziona o fa clic su) un menu, ogni voce di menu viene visualizzato come abilitato o disabilitato. La destinazione di ogni comando di menu fornisce queste informazioni mediante l'implementazione di un `ON_UPDATE_COMMAND_UI` gestore. Per ognuno degli oggetti dell'interfaccia utente comando nell'applicazione, utilizzare la finestra proprietà per creare una voce nella mappa messaggi e un prototipo di funzione per ogni gestore.  
  
 Per ulteriori informazioni su come l'oggetto `ICommandUI` interfaccia viene utilizzata per il routing dei comandi, vedere [procedura: aggiungere comandi (Routing) per il controllo Windows Form](../../dotnet/how-to-add-command-routing-to-the-windows-forms-control.md).  
  
 Per ulteriori informazioni sull'utilizzo di Windows Form, vedere [utilizzando un controllo utente Windows Form in MFC](../../dotnet/using-a-windows-form-user-control-in-mfc.md).  
  
 Per ulteriori informazioni su come vengono gestiti i comandi dell'interfaccia utente in MFC, vedere [CCmdUI (classe)](../../mfc/reference/ccmdui-class.md).  
  
##  <a name="check"></a>ICommandUI::Check  
 Imposta l'elemento dell'interfaccia utente per questo comando lo stato di controllo appropriate.  
  
```  
property UICheckState Check;  
```  
  
### <a name="remarks"></a>Note  
 Questa proprietà imposta l'elemento dell'interfaccia utente per questo comando per lo stato di controllo appropriate. Impostare `Check` per i valori seguenti:  
  
|Termine|Definizione|  
|----------|----------------|  
|0|Deselezionare l'opzione|  
|1|Controllo|  
|2|Impostare indeterminato|  
  
##  <a name="continuerouting"></a>ICommandUI::ContinueRouting  
 Indica il meccanismo di instradamento continuare routing del messaggio corrente lungo la catena di gestori di comando.  
  
```  
void ContinueRouting();
```  
  
### <a name="remarks"></a>Note  
 Si tratta di una funzione membro avanzata che deve essere utilizzata in combinazione con un [ON_COMMAND_EX](message-map-macros-mfc.md#on_command_ex) gestore che restituisce `FALSE`. Per ulteriori informazioni, vedere la nota tecnica [TN006: mappe messaggi](../../mfc/tn006-message-maps.md).  
  
##  <a name="enabled"></a>ICommandUI::Enabled  
 Abilita o disabilita l'elemento dell'interfaccia utente per questo comando.  
  
```  
property bool Enabled;  
```  
  
### <a name="remarks"></a>Note  
 Questa proprietà Abilita o disabilita l'elemento dell'interfaccia utente per questo comando. Impostare `Enabled` a `TRUE` per abilitare l'elemento, `FALSE` per disabilitarlo.  
  
##  <a name="id"></a>ICommandUI::ID  
 Ottiene l'ID dell'oggetto di interfaccia utente rappresentato dal `ICommandUI` oggetto.  
  
```  
property unsigned int ID;  
```  
  
### <a name="remarks"></a>Note  
 Questa proprietà ottiene l'ID (handle) della voce di menu, il pulsante della barra degli strumenti, o l'altro oggetto dell'interfaccia utente rappresentato dal `ICommandUI` oggetto.  
  
##  <a name="index"></a>ICommandUI::Index  
 Ottiene l'indice dell'oggetto di interfaccia utente rappresentato dal `ICommandUI` oggetto.  
  
```  
property unsigned int Index;  
```  
  
### <a name="remarks"></a>Note  
 Questa proprietà ottiene l'indice (handle) della voce di menu, il pulsante della barra degli strumenti, o l'altro oggetto dell'interfaccia utente rappresentato dal `ICommandUI` oggetto.  
  
##  <a name="radio"></a>ICommandUI::Radio  
 Imposta l'elemento dell'interfaccia utente per questo comando lo stato di controllo appropriate.  
  
```  
property bool Radio;  
```  
  
### <a name="remarks"></a>Note  
 Questa proprietà imposta l'elemento dell'interfaccia utente per questo comando per lo stato di controllo appropriate. Impostare `Radio` a `TRUE` per abilitare l'elemento; in caso contrario `FALSE`.  
  
##  <a name="text"></a>ICommandUI::Text  
 Imposta il testo dell'elemento dell'interfaccia utente per questo comando.  
  
```  
property String^ Text;  
```  
  
### <a name="remarks"></a>Note  
 Questa proprietà imposta il testo dell'elemento dell'interfaccia utente per questo comando. Impostare `Text` a un handle di stringa di testo.  
  
##  <a name="iview_interface"></a>Interfaccia IView  
 Implementa diversi metodi che [CWinFormsView](../../mfc/reference/cwinformsview-class.md) utilizza per inviare notifiche di visualizzazione per un controllo gestito.  
  
```  
interface class IView  
```  
  
### <a name="remarks"></a>Note  
 `IView`implementa diversi metodi che `CWinFormsView` Usa per inoltrare le notifiche di visualizzazione comuni a un controllo gestito ospitato. Si tratta di [OnInitialUpdate](../../mfc/reference/iview-interface.md), [OnUpdate](../../mfc/reference/iview-interface.md) e [OnActivateView](../../mfc/reference/iview-interface.md).  
  
 `IView`è simile a [CView](../../mfc/reference/cview-class.md), ma viene usato solo con le visualizzazioni gestite e controlli.  
  
 Per ulteriori informazioni sull'utilizzo di Windows Form, vedere [utilizzando un controllo utente Windows Form in MFC](../../dotnet/using-a-windows-form-user-control-in-mfc.md).  
  
##  <a name="onactivateview"></a>IView::OnActivateView  
 Chiamato da MFC quando una vista viene attivata o disattivata.  
  
```  
void OnActivateView(bool activate);
```  
  
### <a name="parameters"></a>Parametri  
 `activate`  
 Indica se la visualizzazione viene attivata o disattivata.  
  
##  <a name="oninitialupdate"></a>IView::OnInitialUpdate  
 Chiamato dal framework dopo la visualizzazione prima di tutto è collegata al documento, ma prima che la visualizzazione iniziale.  
  
```  
void OnInitialUpdate();
```  
  
##  <a name="onupdate"></a>IView::OnUpdate  
 Chiamato da MFC dopo che il documento della vista è stato modificato.  
  
```  
void OnUpdate();
```  
  
### <a name="remarks"></a>Note  
 Questa funzione consente di aggiornare la visualizzazione in modo da riflettere le modifiche.  
  
## <a name="see-also"></a>Vedere anche  
 [Esempio MFC COLLECT](../../visual-cpp-samples.md)   
 [CObject (classe)](../../mfc/reference/cobject-class.md)   
 [Grafico della gerarchia](../../mfc/hierarchy-chart.md)



