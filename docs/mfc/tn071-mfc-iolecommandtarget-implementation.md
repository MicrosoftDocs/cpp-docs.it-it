---
title: 'TN071: Implementazione di IOleCommandTarget MFC | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
f1_keywords:
- IOleCommandTarget
dev_langs:
- C++
helpviewer_keywords:
- TN071 [MFC]
- IOleCommandTarget interface [MFC]
ms.assetid: 3eef571e-6357-444d-adbb-6f734a0c3161
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 21745762fb6f6eb1eb324013db12207c4b3b81d0
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33385018"
---
# <a name="tn071-mfc-iolecommandtarget-implementation"></a>TN071: implementazione di IOleCommandTarget MFC
> [!NOTE]
>  La seguente nota tecnica non è stata aggiornata da quando è stata inclusa per la prima volta nella documentazione online. Di conseguenza, alcune procedure e argomenti potrebbero essere non aggiornati o errati. Per le informazioni più recenti, è consigliabile cercare l'argomento di interesse nell'indice della documentazione online.  
  
 Il `IOleCommandTarget` interfaccia consente a oggetti e i relativi contenitori per inviare comandi tra loro. Ad esempio, le barre degli strumenti di un oggetto può contenere come pulsanti per i comandi **stampa**, **anteprima di stampa**, **salvare**, `New`, e **Zoom**. Se un oggetto di questo tipo sono stati incorporati in un contenitore che supporta `IOleCommandTarget`, l'oggetto può abilitare i pulsanti e inoltrare i comandi per il contenitore per l'elaborazione quando l'utente fa clic su essi. Un contenitore di inserire l'oggetto incorporato di stampa, è possibile effettuare questa richiesta inviando un comando tramite il `IOleCommandTarget` interfaccia dell'oggetto incorporato.  
  
 `IOleCommandTarget` è un'interfaccia simile a quello di automazione in quanto è utilizzato da un client per richiamare metodi su un server. Se tuttavia si utilizza `IOleCommandTarget` Salva l'overhead di eseguire chiamate tramite le interfacce di automazione, in quanto i programmatori non devono essere utilizzato in genere onere `Invoke` metodo `IDispatch`.  
  
 In MFC, la `IOleCommandTarget` interfaccia viene utilizzata dal server di documenti attivi per consentire di contenitori documenti attivi inviare comandi al server. La classe server documenti attivi, `CDocObjectServerItem`, utilizza le mappe dell'interfaccia MFC (vedere [TN038: implementazione di IUnknown MFC/OLE](../mfc/tn038-mfc-ole-iunknown-implementation.md)) per implementare il `IOleCommandTarget` interfaccia.  
  
 `IOleCommandTarget` viene inoltre implementata nel **COleFrameHook** classe. **COleFrameHook** è una classe MFC non documentata che implementa la funzionalità di finestra cornice di posto la modifica dei contenitori. **COleFrameHook** utilizza inoltre le mappe dell'interfaccia MFC per implementare il `IOleCommandTarget` interfaccia. **COleFrameHook**dell'implementazione di `IOleCommandTarget` inoltra i comandi OLE alle `COleDocObjectItem`-derivato contenitori documenti attivi. In questo modo qualsiasi contenitore di documenti attivi MFC ricevere messaggi da server di contenuti di documenti attivi.  
  
## <a name="mfc-ole-command-maps"></a>Mappe di comandi OLE MFC  
 Gli sviluppatori MFC possono usufruire di `IOleCommandTarget` mediante OLE MFC comando esegue il mapping. Mappe comandi OLE sono simili poiché possono essere utilizzati per eseguire il mapping di comandi OLE a funzioni membro della classe che contiene la mappa di comando esegue il mapping di messaggi. Per ottenere questo risultato, inserire le macro della mappa di comando per specificare il gruppo di comandi OLE di ID di comando, il comando OLE e il comando che si desidera gestire il [WM_COMMAND](http://msdn.microsoft.com/library/windows/desktop/ms647591) messaggio inviato quando viene ricevuto il comando OLE. MFC fornisce anche un numero di macro predefinite per i comandi OLE standard. Per un elenco di OLE standard i comandi che erano originariamente concepiti per utilizzo con applicazioni di Microsoft Office, vedere l'enumerazione OLECMDID, che è definito in docobj.h.  
  
 Quando viene ricevuto un comando OLE da un'applicazione MFC che contiene una mappa di comando OLE, MFC tenta di trovare l'ID di comando e il gruppo di comando per il comando richiesto nella mappa del comando OLE dell'applicazione. Se viene trovata una corrispondenza, una **WM_COMMAND** messaggio viene inviato all'applicazione contenente la mappa di comando con l'ID di comando richiesto. (Vedere la descrizione di `ON_OLECMD` sotto.) In questo modo, i comandi OLE inviati a un'applicazione vengono convertiti in **WM_COMMAND** messaggi da MFC. Il **WM_COMMAND** i messaggi vengono indirizzati quindi attraverso le mappe messaggi dell'applicazione utilizzando lo standard MFC [comandi (routing)](../mfc/command-routing.md) architettura.  
  
 A differenza delle mappe messaggi, mappe di comandi OLE MFC non sono supportate da ClassWizard. Gli sviluppatori MFC necessario aggiungere manualmente il supporto mappe comando OLE e le voci della mappa comando OLE. OLE mappe comandi possono essere aggiunti a server di documenti attivi di MFC in qualsiasi classe che è il **WM_COMMAND** catena routing dei messaggi al momento il documento attivo è attivo sul posto in un contenitore. Tali classi includono le classi dell'applicazione derivate da [CWinApp](../mfc/reference/cwinapp-class.md), [CView](../mfc/reference/cview-class.md), [CDocument](../mfc/reference/cdocument-class.md), e [COleIPFrameWnd](../mfc/reference/coleipframewnd-class.md). Contenitori documenti attivi, mappe comandi OLE possono essere aggiunti solo per il [COleDocObjectItem](../mfc/reference/coledocobjectitem-class.md)-classe derivata. Inoltre, in contenitori documenti attivi, il **WM_COMMAND** solo i messaggi verranno inviati alla mappa messaggi il `COleDocObjectItem`-classe derivata.  
  
## <a name="ole-command-map-macros"></a>Macro di mappa comandi OLE  
 Per aggiungere funzionalità di mapping di comandi alla classe, utilizzare le seguenti macro:  
  
```  
 
DECLARE_OLECMD_MAP ()  
 
```  
  
 Questa macro va inserito nella dichiarazione di classe (in genere nel file di intestazione) della classe che contiene la mappa di comando.  
  
```  
 
BEGIN_OLECMD_MAP(
theClass  ,   baseClass)  
 
```  
  
 `theClass`  
 Nome della classe che contiene la mappa di comando.  
  
 `baseClass`  
 Nome della classe di base della classe che contiene la mappa di comando.  
  
 Questa macro contrassegna l'inizio della mappa del comando. Utilizzare questa macro nel file di implementazione per la classe che contiene la mappa di comando.  
  
```  
 
END_OLECMD_MAP()  
 
```  
  
 Questa macro contrassegna la fine della mappa del comando. Utilizzare questa macro nel file di implementazione per la classe che contiene la mappa di comando. Questa macro deve seguire sempre il **BEGIN_OLECMD_MAP** (macro).  
  
```  
 
ON_OLECMD(
pguid  ,   
olecmdid  ,
    id)  
 
```  
  
 `pguid`  
 Puntatore al GUID del gruppo di comando del comando OLE. Questo parametro è **NULL** per il gruppo di comandi OLE standard.  
  
 *olecmdid*  
 ID di comando OLE del comando da richiamare.  
  
 `id`  
 ID di **WM_COMMAND** messaggio da inviare all'applicazione contenente la mappa di comando quando viene richiamato il comando OLE.  
  
 Utilizzare il `ON_OLECMD` macro della mappa di comando per aggiungere le voci per OLE comandi che si desidera gestire. Quando vengono ricevuti i comandi OLE, saranno convertiti specificata **WM_COMMAND** dei messaggi e indirizzato tramite la mappa dei messaggi dell'applicazione tramite l'architettura di routing di comandi MFC standard.  
  
## <a name="example"></a>Esempio  
 Nell'esempio seguente viene illustrato come aggiungere funzionalità di gestione dei comandi OLE a un server di documenti attivi MFC per gestire il [OLECMDID_PRINT](http://msdn.microsoft.com/library/windows/desktop/ms691264) comando OLE. Questo esempio si presuppone che la creazione guidata applicazione usato per generare un'applicazione MFC che è un server di documenti attivi.  
  
1.  Nel `CView`-intestazione della classe derivata di file, aggiungere il `DECLARE_OLECMD_MAP` macro alla dichiarazione di classe.  
  
    > [!NOTE]
    >  Utilizzare il `CView`-classe derivata, perché è una delle classi nel server di documenti attivi nel **WM_COMMAND** catena routing dei messaggi.  
  
 ```  
    class CMyServerView : public CView  
 {  
    protected: // create from serialization only  
    CMyServerView();
DECLARE_DYNCREATE(CMyServerView)  
    DECLARE_OLECMD_MAP() 
 . . .  
 };  
 ```  
  
2.  Nel file di implementazione per il `CView`-derivata, aggiungere il `BEGIN_OLECMD_MAP` e `END_OLECMD_MAP` macro:  
  
 ```  
    BEGIN_OLECMD_MAP(CMyServerView, CView)  
 
    END_OLECMD_MAP() 
 ```  
  
3.  Per gestire il comando di stampa standard OLE, aggiungere un [ON_OLECMD](reference/message-map-macros-mfc.md#on_olecmd) macro per la mappa di comando specificando l'ID di comando per il comando di stampato standard OLE e **ID_FILE_PRINT** per il **WM_COMMAND**  ID. **ID_FILE_PRINT** è lo standard di ID di comando di stampa utilizzato dalle applicazioni generato dalla creazione guidata applicazioni MFC:  
  
 ```  
    BEGIN_OLECMD_MAP(CMyServerView,
    CView)  
    ON_OLECMD(NULL,
    OLECMDID_PRINT,
    ID_FILE_PRINT) 
    END_OLECMD_MAP() 
 ```  
  
 Si noti che una delle macro di comando OLE standard, definite in AfxDocOb. h, possa essere utilizzata al posto di `ON_OLECMD` macro perché **OLECMDID_PRINT** è un ID di comando OLE standard. Il `ON_OLECMD_PRINT` macro completerà la stessa attività come il `ON_OLECMD` macro illustrato in precedenza.  
  
 Quando un'applicazione contenitore invia questo server un **OLECMDID_PRINT** comando tramite il server `IOleCommandTarget` nel server, rendendo il server per l'applicazione di stampa verrà richiamata interfaccia, il gestore del comando di stampa di MFC. Il codice del contenitore documenti attivi per richiamare il comando stampato aggiunto nei passaggi precedenti sarebbe simile al seguente:  
  
```  
void CContainerCntrItem::DoOleCmd()  
{  
    IOleCommandTarget *pCmd = NULL;  
    HRESULT hr = E_FAIL;  
    OLECMD ocm={OLECMDID_PRINT, 0};  
 
    hr = m_lpObject->QueryInterface(IID_IOleCommandTarget,reinterpret_cast<void**>(&pCmd));

    if(FAILED(hr)) 
    return; 
 
    hr = pCmd->QueryStatus(NULL, 1, &ocm, NULL);

    if(SUCCEEDED(hr)&& (ocm.cmdf& OLECMDF_ENABLED))  
 { *//Command is available and enabled so call it  
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
 [Note tecniche per numero](../mfc/technical-notes-by-number.md)   
 [Note tecniche per categoria](../mfc/technical-notes-by-category.md)

