---
title: 'TN071: Implementazione di IOleCommandTarget MFC'
ms.date: 06/28/2018
f1_keywords:
- IOleCommandTarget
helpviewer_keywords:
- TN071 [MFC]
- IOleCommandTarget interface [MFC]
ms.assetid: 3eef571e-6357-444d-adbb-6f734a0c3161
ms.openlocfilehash: dca1183a17fe8f3022f517d1ad0c3932ea272417
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62167998"
---
# <a name="tn071-mfc-iolecommandtarget-implementation"></a>TN071: Implementazione di IOleCommandTarget MFC

> [!NOTE]
> La seguente nota tecnica non è stata aggiornata da quando è stata inclusa per la prima volta nella documentazione online. Di conseguenza, alcune procedure e argomenti potrebbero essere non aggiornati o errati. Per le informazioni più recenti, è consigliabile cercare l'argomento di interesse nell'indice della documentazione online.

Il `IOleCommandTarget` interfaccia consente a oggetti e i relativi contenitori per inviare comandi a altra. Ad esempio, le barre degli strumenti di un oggetto può contenere, ad esempio i pulsanti per i comandi `Print`, `Print Preview`, `Save`, `New`, e `Zoom`. Se tale tipo di oggetto sono stati incorporati in un contenitore che supporta `IOleCommandTarget`, l'oggetto è stato possibile abilitare i pulsanti e inoltrare i comandi per il contenitore per l'elaborazione quando l'utente fa clic su loro. Un contenitore di inserire l'oggetto incorporato venga stampato, è stato possibile effettuare questa richiesta, inviare un comando tramite il `IOleCommandTarget` interfaccia dell'oggetto incorporato.

`IOleCommandTarget` è un'interfaccia simile a automazione, ovvero viene utilizzato da un client per richiamare metodi su un server. Se tuttavia si utilizza `IOleCommandTarget` Salva il sovraccarico di chiamate tramite interfacce di automazione in quanto i programmatori non devono essere utilizzato in genere costoso `Invoke` metodo `IDispatch`.

In MFC, la `IOleCommandTarget` interfaccia viene utilizzata dal server documenti attivi per consentire di contenitori documenti attivi inviare comandi al server. La classe, server documenti attivi `CDocObjectServerItem`, Usa mappe dell'interfaccia MFC (vedere [TN038: Implementazione di IUnknown MFC/OLE](../mfc/tn038-mfc-ole-iunknown-implementation.md)) per implementare il `IOleCommandTarget` interfaccia.

`IOleCommandTarget` viene inoltre implementata nel `COleFrameHook` classe. `COleFrameHook` è una classe MFC non documentata che implementa la funzionalità di finestra cornice di contenitori di modifica sul posto. `COleFrameHook` Usa inoltre mappe dell'interfaccia MFC per implementare il `IOleCommandTarget` interfaccia. `COleFrameHook`dell'implementazione di `IOleCommandTarget` inoltra i comandi OLE a `COleDocObjectItem`-derivato contenitori documenti attivi. In questo modo qualsiasi contenitore documenti attivi MFC ricevere messaggi da server documenti attivi indipendente.

## <a name="mfc-ole-command-maps"></a>Mappe comandi OLE MFC

Gli sviluppatori MFC possono sfruttare `IOleCommandTarget` mediante OLE MFC comando esegue il mapping. Mappe comandi OLE sono simili perché possono essere usati per eseguire il mapping di comandi OLE alle funzioni membro della classe che contiene la mappa di comando esegue il mapping di messaggi. Per eseguire questa operazione, inserire le macro della mappa di comando per specificare il gruppo di comandi OLE del comando che si desidera gestire, il comando OLE e l'ID del comando il [WM_COMMAND](/windows/desktop/menurc/wm-command) messaggio che verrà inviata quando viene ricevuto il comando OLE. MFC fornisce anche un numero di macro predefinite per i comandi OLE standard. Per un elenco di OLE standard comandi sono stati originariamente progettati per usare con applicazioni di Microsoft Office, vedere l'enumerazione OLECMDID, definito nel docobj.h.

Quando un comando OLE viene ricevuto da un'applicazione MFC che contiene un mapping di comandi OLE, MFC prova a trovare l'ID di comando e il gruppo di comandi per il comando richiesto nella mappa del comando OLE dell'applicazione. Se viene trovata una corrispondenza, un messaggio WM_COMMAND viene inviato all'applicazione contenente la mappa di comando con l'ID del comando richiesto. (Vedere la descrizione della `ON_OLECMD` sotto.) In questo modo, i comandi OLE inviati a un'applicazione vengono convertiti in messaggi WM_COMMAND da MFC. I messaggi WM_COMMAND vengono quindi instradati attraverso le mappe messaggi dell'applicazione usando lo standard MFC [routing dei comandi](../mfc/command-routing.md) architettura.

A differenza delle mappe messaggi, mappe di comandi OLE MFC non sono supportate da ClassWizard. Gli sviluppatori MFC devono aggiungere manualmente il supporto mappe comandi OLE e le voci della mappa di comando OLE. Comando OLE maps può essere aggiunto a server documenti attivi di MFC in qualsiasi classe che fa parte della catena di routing del messaggio WM_COMMAND al momento il documento attivo è attivo sul posto in un contenitore. Queste classi includono le classi dell'applicazione derivate da [CWinApp](../mfc/reference/cwinapp-class.md), [CView](../mfc/reference/cview-class.md), [CDocument](../mfc/reference/cdocument-class.md), e [COleIPFrameWnd](../mfc/reference/coleipframewnd-class.md). Nei contenitori documenti attivi, mappe comandi OLE possono essere aggiunti solo per i [COleDocObjectItem](../mfc/reference/coledocobjectitem-class.md)-classe derivata. Inoltre, nei contenitori documenti attivi, i messaggi WM_COMMAND verranno solo inviati alla mappa messaggi di `COleDocObjectItem`-classe derivata.

## <a name="ole-command-map-macros"></a>Macro della mappa comandi OLE

Usare le macro seguenti per aggiungere funzionalità di mapping dei comandi alla classe:

```cpp
DECLARE_OLECMD_MAP ()
```

Questa macro va nella dichiarazione di classe (in genere nel file di intestazione) della classe che contiene la mappa di comando.

```cpp
BEGIN_OLECMD_MAP(theClass, baseClass)
```

*theClass*<br/>
Nome della classe che contiene la mappa di comando.

*baseClass*<br/>
Nome della classe di base della classe che contiene la mappa di comando.

Questa macro contrassegna l'inizio della mappa del comando. Usare questa macro nel file di implementazione per la classe che contiene la mappa di comando.

```
END_OLECMD_MAP()
```

Questa macro contrassegna la fine della mappa del comando. Usare questa macro nel file di implementazione per la classe che contiene la mappa di comando. Questa macro deve seguire sempre la macro BEGIN_OLECMD_MAP.

```
ON_OLECMD(pguid, olecmdid, id)
```

*pguid*<br/>
Puntatore al GUID del gruppo di comando del comando OLE. Questo parametro è **NULL** per il gruppo di comandi OLE standard.

*olecmdid*<br/>
ID comando OLE del comando da richiamare.

*ID*<br/>
ID del messaggio WM_COMMAND da inviare all'applicazione contenente la mappa di comando quando viene richiamato il comando OLE.

Usare on_olecmd (macro) nella mappa del comando per aggiungere voci per i comandi OLE che si desidera gestire. Quando vengono ricevuti i comandi OLE, verranno convertiti in messaggio WM_COMMAND specificato e instradati tramite la mappa dei messaggi dell'applicazione usando l'architettura di routing di comandi MFC standard.

## <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato come aggiungere funzionalità di gestione dei comandi OLE a un server di documenti attivi di MFC per gestire il [OLECMDID_PRINT](/windows/desktop/api/docobj/ne-docobj-olecmdid) comando OLE. Questo esempio si presuppone che sia usato AppWizard per generare un'applicazione MFC che è un server documenti attivi.

1. Nel `CView`-intestazione della classe derivata, aggiungere la macro DECLARE_OLECMD_MAP alla dichiarazione di classe.

    > [!NOTE]
    > Usare il `CView`-classe derivata, perché è una delle classi nel server documenti attivi che fa parte della catena di routing del messaggio WM_COMMAND.

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

2. Nel file di implementazione per il `CView`-derivato (classe), aggiungere le macro BEGIN_OLECMD_MAP ed END_OLECMD_MAP:

    ```cpp
    BEGIN_OLECMD_MAP(CMyServerView, CView)

    END_OLECMD_MAP()
    ```

3. Per gestire il comando Stampa OLE standard, aggiungere un' [ON_OLECMD](reference/message-map-macros-mfc.md#on_olecmd) macro alla mappa del comando che specifica l'ID di comando OLE per il comando di stampa standard e **ID_FILE_PRINT** il WM_COMMAND ID. **ID_FILE_PRINT** è lo standard di ID di comando di stampa utilizzato dalle applicazioni generate dalla creazione guidata applicazioni MFC:

    ```
    BEGIN_OLECMD_MAP(CMyServerView, CView)
        ON_OLECMD(NULL, OLECMDID_PRINT, ID_FILE_PRINT)
    END_OLECMD_MAP()
    ```

Si noti che una delle macro di comandi OLE standard, definite in AfxDocOb. h, può essere usata al posto di on_olecmd (macro) poiché **OLECMDID_PRINT** è un ID del comando OLE standard. On_olecmd_print (macro) completerà la stessa attività come l'on_olecmd (macro) illustrato in precedenza.

Quando un'applicazione contenitore invia questo server un' **OLECMDID_PRINT** comando tramite il server `IOleCommandTarget` interfaccia, MFC gestore comando stampa verrà richiamata nel server, che ha causato la stampa all'applicazione. Codice del contenitore documenti attivi per richiamare il comando di stampa aggiunto nei passaggi precedenti sarebbe simile al seguente:

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
