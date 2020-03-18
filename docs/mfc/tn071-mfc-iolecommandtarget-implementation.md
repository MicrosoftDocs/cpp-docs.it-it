---
title: 'TN071: implementazione di IOleCommandTarget MFC'
ms.date: 06/28/2018
helpviewer_keywords:
- TN071 [MFC]
- IOleCommandTarget interface [MFC]
ms.assetid: 3eef571e-6357-444d-adbb-6f734a0c3161
ms.openlocfilehash: 56745e7985c8af97b0b628d148586ccef346d95a
ms.sourcegitcommit: 63784729604aaf526de21f6c6b62813882af930a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/17/2020
ms.locfileid: "79442079"
---
# <a name="tn071-mfc-iolecommandtarget-implementation"></a>TN071: implementazione di IOleCommandTarget MFC

> [!NOTE]
> La seguente nota tecnica non è stata aggiornata da quando è stata inclusa per la prima volta nella documentazione online. Di conseguenza, alcune procedure e argomenti potrebbero essere non aggiornati o errati. Per le informazioni più recenti, è consigliabile cercare l'argomento di interesse nell'indice della documentazione online.

L'interfaccia `IOleCommandTarget` consente agli oggetti e ai relativi contenitori di inviare comandi tra loro. Ad esempio, le barre degli strumenti di un oggetto possono contenere pulsanti per i comandi, ad esempio `Print`, `Print Preview`, `Save`, `New`e `Zoom`. Se un oggetto di questo tipo è incorporato in un contenitore che supporta `IOleCommandTarget`, l'oggetto potrebbe abilitare i pulsanti e inviare i comandi al contenitore per l'elaborazione quando l'utente ha fatto clic su di essi. Se un contenitore voleva che l'oggetto incorporato stampasse se stesso, potrebbe effettuare questa richiesta inviando un comando tramite l'interfaccia `IOleCommandTarget` dell'oggetto incorporato.

`IOleCommandTarget` è un'interfaccia di tipo automazione in quanto viene utilizzata da un client per richiamare i metodi in un server. Tuttavia, l'uso di `IOleCommandTarget` Salva il sovraccarico dovuto all'esecuzione di chiamate tramite interfacce di automazione, perché i programmatori non devono usare il `Invoke` metodo di `IDispatch`generalmente costoso.

In MFC, l'interfaccia `IOleCommandTarget` viene utilizzata dai server dei documenti attivi per consentire ai contenitori di documenti attivi di inviare comandi al server. La classe del server documenti attivi, `CDocObjectServerItem`, USA le mappe dell'interfaccia MFC (vedere [TN038: implementazione IUnknown MFC/OLE](../mfc/tn038-mfc-ole-iunknown-implementation.md)) per implementare l'interfaccia `IOleCommandTarget`.

`IOleCommandTarget` viene inoltre implementato nella classe `COleFrameHook`. `COleFrameHook` è una classe MFC non documentata che implementa la funzionalità della finestra cornice dei contenitori di modifica sul posto. `COleFrameHook` usa anche le mappe dell'interfaccia MFC per implementare l'interfaccia `IOleCommandTarget`. l'implementazione di `COleFrameHook`di `IOleCommandTarget` consente di inviare comandi OLE a contenitori di documenti attivi derivati da `COleDocObjectItem`. Ciò consente a qualsiasi contenitore di documenti attivi MFC di ricevere messaggi da server di documenti attivi contenuti.

## <a name="mfc-ole-command-maps"></a>Mappe comandi OLE MFC

Gli sviluppatori MFC possono sfruttare i vantaggi di `IOleCommandTarget` usando le mappe dei comandi OLE MFC. Le mappe dei comandi OLE sono come le mappe messaggi perché possono essere utilizzate per eseguire il mapping dei comandi OLE alle funzioni membro della classe che contiene la mappa dei comandi. Per eseguire questa operazione, inserire le macro nella mappa dei comandi per specificare il gruppo di comandi OLE del comando che si desidera gestire, il comando OLE e l'ID del [WM_COMMAND](/windows/win32/menurc/wm-command) messaggio che verrà inviato quando viene ricevuto il comando OLE. MFC fornisce inoltre diverse macro predefinite per i comandi OLE standard. Per un elenco dei comandi OLE standard originariamente progettati per l'uso con Microsoft Office applicazioni, vedere l'enumerazione OLECMDID, definita in docobj. h.

Quando un comando OLE viene ricevuto da un'applicazione MFC che contiene una mappa dei comandi OLE, MFC tenta di trovare l'ID di comando e il gruppo di comandi per il comando richiesto nella mappa dei comandi OLE dell'applicazione. Se viene trovata una corrispondenza, viene inviato un messaggio WM_COMMAND all'applicazione contenente il mapping dei comandi con l'ID del comando richiesto. (Vedere la descrizione `ON_OLECMD` riportata di seguito). In questo modo, i comandi OLE inviati a un'applicazione vengono trasformati in WM_COMMAND messaggi da MFC. I messaggi di WM_COMMAND vengono quindi instradati tramite le mappe messaggi dell'applicazione utilizzando l'architettura di [routing dei comandi](../mfc/command-routing.md) standard MFC.

Diversamente dalle mappe messaggi, le mappe dei comandi OLE MFC non sono supportate da ClassWizard. Gli sviluppatori MFC devono aggiungere manualmente le voci di supporto della mappa dei comandi OLE e OLE. È possibile aggiungere mappe dei comandi OLE a server di documenti attivi MFC in qualsiasi classe presente nella catena di routing dei messaggi WM_COMMAND nel momento in cui il documento attivo è attivo sul posto in un contenitore. Queste classi includono le classi dell'applicazione derivate da [CWinApp](../mfc/reference/cwinapp-class.md), [CView](../mfc/reference/cview-class.md), [CDocument](../mfc/reference/cdocument-class.md)e [COleIPFrameWnd](../mfc/reference/coleipframewnd-class.md). Nei contenitori di documenti attivi, le mappe dei comandi OLE possono essere aggiunte solo alla classe derivata da [COleDocObjectItem](../mfc/reference/coledocobjectitem-class.md). Inoltre, nei contenitori di documenti attivi, i messaggi di WM_COMMAND verranno inviati solo alla mappa messaggi della classe derivata da `COleDocObjectItem`.

## <a name="ole-command-map-macros"></a>Macro della mappa comandi OLE

Usare le macro seguenti per aggiungere la funzionalità di mapping dei comandi alla classe:

```cpp
DECLARE_OLECMD_MAP ()
```

Questa macro viene inserita nella dichiarazione di classe, in genere nel file di intestazione, della classe che contiene la mappa dei comandi.

```cpp
BEGIN_OLECMD_MAP(theClass, baseClass)
```

*theClass*<br/>
Nome della classe che contiene la mappa dei comandi.

*baseClass*<br/>
Nome della classe di base della classe che contiene la mappa dei comandi.

Questa macro contrassegna l'inizio della mappa dei comandi. Usare questa macro nel file di implementazione per la classe che contiene la mappa dei comandi.

```
END_OLECMD_MAP()
```

Questa macro contrassegna la fine della mappa dei comandi. Usare questa macro nel file di implementazione per la classe che contiene la mappa dei comandi. Questa macro deve sempre seguire la BEGIN_OLECMD_MAP macro.

```
ON_OLECMD(pguid, olecmdid, id)
```

*pguid*<br/>
Puntatore al GUID del gruppo di comandi del comando OLE. Questo parametro è **null** per il gruppo di comandi OLE standard.

*OLECMDID*<br/>
ID comando OLE del comando da richiamare.

*id*<br/>
ID del messaggio di WM_COMMAND da inviare all'applicazione contenente il mapping dei comandi quando viene richiamato questo comando OLE.

Usare la macro ON_OLECMD nella mappa dei comandi per aggiungere voci per i comandi OLE che si vuole gestire. Quando vengono ricevuti, i comandi OLE verranno convertiti nel messaggio di WM_COMMAND specificato e instradati tramite la mappa messaggi dell'applicazione utilizzando l'architettura standard di routing dei comandi MFC.

## <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato come aggiungere la funzionalità di gestione dei comandi OLE a un server di documenti attivi MFC per gestire il [OLECMDID_PRINT](/windows/win32/api/docobj/ne-docobj-olecmdid) comando OLE. In questo esempio si presuppone che sia stato utilizzato Creazione guidata applicazioni per generare un'applicazione MFC che è un server di documenti attivo.

1. Nel file di intestazione della classe derivata da `CView`aggiungere la macro DECLARE_OLECMD_MAP alla dichiarazione della classe.

    > [!NOTE]
    > Utilizzare la classe derivata da `CView`perché è una delle classi nel server di documenti attivi presente nella catena di routing dei messaggi WM_COMMAND.

    ```cpp
    class CMyServerView : public CView
    {
    protected: // create from serialization only
        CMyServerView();
        DECLARE_DYNCREATE(CMyServerView)
        DECLARE_OLECMD_MAP()
        // . . .
    };
    ```

2. Nel file di implementazione per la classe derivata da `CView`aggiungere le macro BEGIN_OLECMD_MAP e END_OLECMD_MAP:

    ```cpp
    BEGIN_OLECMD_MAP(CMyServerView, CView)

    END_OLECMD_MAP()
    ```

3. Per gestire il comando standard di stampa OLE, aggiungere una macro [ON_OLECMD](reference/message-map-macros-mfc.md#on_olecmd) alla mappa dei comandi specificando l'ID di comando OLE per il comando Print standard e **ID_FILE_PRINT** per l'ID WM_COMMAND. **ID_FILE_PRINT** è l'ID di comando di stampa standard usato dalle applicazioni MFC generate da Creazione guidata applicazioni:

    ```
    BEGIN_OLECMD_MAP(CMyServerView, CView)
        ON_OLECMD(NULL, OLECMDID_PRINT, ID_FILE_PRINT)
    END_OLECMD_MAP()
    ```

Si noti che è possibile utilizzare una delle macro del comando OLE standard, definite in afxdocob. h, al posto della macro ON_OLECMD perché **OLECMDID_PRINT** è un ID di comando OLE standard. La macro ON_OLECMD_PRINT eseguirà la stessa attività della macro ON_OLECMD illustrata in precedenza.

Quando un'applicazione contenitore Invia questo server a **OLECMDID_PRINT** comando tramite l'interfaccia `IOleCommandTarget` del server, il gestore del comando di stampa MFC verrà richiamato nel server, causando la stampa dell'applicazione da parte del server. Il codice del contenitore di documenti attivo per richiamare il comando Print aggiunto nei passaggi precedenti avrà un aspetto simile al seguente:

```cpp
void CContainerCntrItem::DoOleCmd()
{
    IOleCommandTarget *pCmd = NULL;
    HRESULT hr = E_FAIL;
    OLECMD ocm={OLECMDID_PRINT, 0};

    hr = m_lpObject->QueryInterface(
        IID_IOleCommandTarget,reinterpret_cast<void**>(&pCmd));

    if (FAILED(hr))
        return;

    hr = pCmd->QueryStatus(NULL, 1, &ocm, NULL);

    if (SUCCEEDED(hr) && (ocm.cmdf& OLECMDF_ENABLED))
    {
        //Command is available and enabled so call it
        COleVariant vIn;
        COleVariant vOut;
        hr = pCmd->Exec(NULL, OLECMDID_PRINT,
            OLECMDEXECOPT_DODEFAULT, &vIn, &vOut);
        ASSERT(SUCCEEDED(hr));
    }
    pCmd->Release();
}
```

## <a name="see-also"></a>Vedere anche

[Note tecniche per numero](../mfc/technical-notes-by-number.md)<br/>
[Note tecniche per categoria](../mfc/technical-notes-by-category.md)
