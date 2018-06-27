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
ms.openlocfilehash: c3e2a4fa51525417be8ab6ae2ef1f4f2f5470185
ms.sourcegitcommit: c6b095c5f3de7533fd535d679bfee0503e5a1d91
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/26/2018
ms.locfileid: "36957133"
---
# <a name="tn071-mfc-iolecommandtarget-implementation"></a>TN071: implementazione di IOleCommandTarget MFC
> [!NOTE]
>  La seguente nota tecnica non è stata aggiornata da quando è stata inclusa per la prima volta nella documentazione online. Di conseguenza, alcune procedure e argomenti potrebbero essere non aggiornati o errati. Per le informazioni più recenti, è consigliabile cercare l'argomento di interesse nell'indice della documentazione online.  
  
 Il `IOleCommandTarget` interfaccia consente a oggetti e i relativi contenitori per inviare comandi tra loro. Ad esempio, le barre degli strumenti dell'oggetto può contenere, ad esempio i pulsanti per i comandi `Print`, `Print Preview`, `Save`, `New`, e `Zoom`. Se un oggetto di questo tipo sono stati incorporati in un contenitore che supporta `IOleCommandTarget`, l'oggetto è stato possibile abilitare i pulsanti e inoltrare i comandi per il contenitore per l'elaborazione quando l'utente fa clic su essi. Se un contenitore di inserire l'oggetto incorporato venga stampato, è possibile apportare questa richiesta mediante l'invio di un comando tramite il `IOleCommandTarget` interfaccia dell'oggetto incorporato.  
  
 `IOleCommandTarget` è un'interfaccia simile a quello di automazione in quanto è utilizzato da un client per richiamare metodi su un server. Se tuttavia si utilizza `IOleCommandTarget` Salva l'overhead di eseguire chiamate tramite le interfacce di automazione, in quanto i programmatori non dovranno essere utilizzato in genere onere `Invoke` metodo `IDispatch`.  
  
 In MFC, la `IOleCommandTarget` interfaccia viene utilizzata dal server di documenti attivi per consentire a contenitori documenti attivi inviare comandi al server. La classe di server di documenti attivi `CDocObjectServerItem`, utilizza le mappe dell'interfaccia MFC (vedere [TN038: implementazione di IUnknown MFC/OLE](../mfc/tn038-mfc-ole-iunknown-implementation.md)) per implementare il `IOleCommandTarget` interfaccia.  
  
 `IOleCommandTarget` viene inoltre implementata nel `COleFrameHook` classe. `COleFrameHook` è una classe MFC non documentata che implementa la funzionalità di finestra cornice di contenitori di modifica sul posto. `COleFrameHook` Usa inoltre le mappe dell'interfaccia MFC per implementare il `IOleCommandTarget` interfaccia. `COleFrameHook`dell'implementazione di `IOleCommandTarget` inoltra i comandi OLE alle `COleDocObjectItem`-derivato contenitori documenti attivi. In questo modo qualsiasi contenitore di documenti attivi MFC ricevere messaggi dal server di contenuti documenti attivi.  
  
## <a name="mfc-ole-command-maps"></a>Mappe comandi OLE MFC  
 MFC gli sviluppatori possono sfruttare `IOleCommandTarget` mediante OLE MFC comando esegue il mapping. Mappe comandi OLE sono, ad esempio mappe messaggi perché possono essere usati per eseguire il mapping di comandi OLE a funzioni membro della classe che contiene la mappa di comando. Per utilizzare questo esempio, inserire le macro della mappa di comando per specificare il gruppo di comandi OLE del comando che si desidera gestire, il comando OLE e l'ID di comando del [WM_COMMAND](http://msdn.microsoft.com/library/windows/desktop/ms647591) messaggio inviato quando viene ricevuto il comando OLE. MFC fornisce anche un numero di macro predefinite per i comandi OLE standard. Per un elenco di OLE standard i comandi che erano originariamente concepiti per utilizzo con applicazioni di Microsoft Office, vedere l'enumerazione OLECMDID, che è definito in docobj.h.  
  
 Quando viene ricevuto un comando OLE da un'applicazione MFC che contiene un mapping di comandi OLE, MFC tenta di trovare l'ID di comando e il gruppo di comando per il comando richiesto nella mappa comandi OLE dell'applicazione. Se viene trovata una corrispondenza, viene inviato un messaggio WM_COMMAND all'applicazione contenente la mappa di comando con l'ID di comando richiesto. (Vedere la descrizione del `ON_OLECMD` sotto.) In questo modo, i comandi OLE inviati a un'applicazione vengono convertiti in messaggi WM_COMMAND da MFC. WM_COMMAND (messaggi) vengono quindi indirizzati attraverso le mappe messaggi dell'applicazione utilizzando lo standard MFC [comandi (routing)](../mfc/command-routing.md) architettura.  
  
 A differenza delle mappe messaggi, mappe di comandi OLE MFC non sono supportate da ClassWizard. Gli sviluppatori MFC necessario aggiungere manualmente il supporto mappe comandi OLE e le voci della mappa di comandi OLE. Comando OLE mappe possono essere aggiunti a server documenti attivi MFC in qualsiasi classe che fa parte della catena di routing di messaggi WM_COMMAND al momento il documento attivo è attivo sul posto in un contenitore. Tali classi includono le classi dell'applicazione derivate da [CWinApp](../mfc/reference/cwinapp-class.md), [CView](../mfc/reference/cview-class.md), [CDocument](../mfc/reference/cdocument-class.md), e [COleIPFrameWnd](../mfc/reference/coleipframewnd-class.md). I contenitori di documenti attivi, mappe comandi OLE possono essere aggiunti solo per il [COleDocObjectItem](../mfc/reference/coledocobjectitem-class.md)-classe derivata. Inoltre, in contenitori documenti attivi, i messaggi WM_COMMAND verranno solo inviati alla mappa messaggi di `COleDocObjectItem`-classe derivata.  
  
## <a name="ole-command-map-macros"></a>Macro della mappa di comandi OLE  
 Utilizzare le macro seguenti per aggiungere funzionalità di mapping di comandi alla classe:  
  
```  
 
DECLARE_OLECMD_MAP ()  
 
```  
  
 Questa macro va inserito nella dichiarazione di classe (in genere nel file di intestazione) della classe che contiene la mappa di comando.  
  
```  
 
BEGIN_OLECMD_MAP(
theClass  ,   baseClass)  
 
```  
  
 *theClass*  
 Nome della classe che contiene la mappa di comando.  
  
 *baseClass*  
 Nome della classe di base della classe che contiene la mappa di comando.  
  
 Questa macro contrassegna l'inizio della mappa del comando. Utilizzare questa macro nel file di implementazione per la classe che contiene la mappa di comando.  
  
```  
 
END_OLECMD_MAP()  
 
```  
  
 Questa macro contrassegna la fine della mappa del comando. Utilizzare questa macro nel file di implementazione per la classe che contiene la mappa di comando. Questa macro deve far seguire sempre la macro BEGIN_OLECMD_MAP.  
  
```  
 
ON_OLECMD(
pguid  ,   
olecmdid  ,
    id)  
 
```  
  
 *pguid*  
 Puntatore al GUID del gruppo di comando del comando OLE. Questo parametro è **NULL** per il gruppo di comandi OLE standard.  
  
 *olecmdid*  
 ID di comando OLE del comando da richiamare.  
  
 *ID*  
 ID del messaggio WM_COMMAND da inviare all'applicazione contenente la mappa di comando quando viene richiamato il comando OLE.  
  
 Usare la macro ON_OLECMD nella mappa del comando per aggiungere voci per i comandi OLE che si desidera gestire. Quando vengono ricevuti i comandi OLE, verranno convertiti in messaggio WM_COMMAND specificato e instradati attraverso la mappa dei messaggi dell'applicazione tramite l'architettura di routing di comandi MFC standard.  
  
## <a name="example"></a>Esempio  
 Nell'esempio seguente viene illustrato come aggiungere la funzionalità di gestione dei comandi OLE a un server di documenti attivi MFC per gestire il [OLECMDID_PRINT](http://msdn.microsoft.com/library/windows/desktop/ms691264) comando OLE. Questo esempio si presuppone che la creazione guidata applicazione è utilizzata per generare un'applicazione MFC che è un server di documenti attivi.  
  
1.  Nel `CView`-intestazione della classe derivata di file, aggiungere la macro DECLARE_OLECMD_MAP alla dichiarazione di classe.  
  
    > [!NOTE]
    >  Utilizzare il `CView`-classe derivata, perché è una delle classi nel server che fa parte della catena di routing di messaggi WM_COMMAND documento attivo.  
  
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
  
2.  Nel file di implementazione per il `CView`-derivata, aggiungere le macro BEGIN_OLECMD_MAP ed END_OLECMD_MAP:  
  
 ```  
    BEGIN_OLECMD_MAP(CMyServerView, CView)  
 
    END_OLECMD_MAP() 
 ```  
  
3.  Per gestire il comando stampato OLE standard, aggiungere un [ON_OLECMD](reference/message-map-macros-mfc.md#on_olecmd) macro per la mappa di comando specificando l'ID di comando OLE per il comando di stampato standard e **ID_FILE_PRINT** il WM_COMMAND ID. **ID_FILE_PRINT** è lo standard di ID di comando di stampa utilizzato dalle applicazioni generato dalla creazione guidata applicazioni MFC:  
  
 ```  
    BEGIN_OLECMD_MAP(CMyServerView,
    CView)  
    ON_OLECMD(NULL,
    OLECMDID_PRINT,
    ID_FILE_PRINT) 
    END_OLECMD_MAP() 
 ```  
  
 Si noti che una delle macro di comando OLE standard, definite in AfxDocOb. h, potrebbe essere utilizzata al posto di ON_OLECMD (macro) perché **OLECMDID_PRINT** è un ID di comando OLE standard. ON_OLECMD_PRINT (macro) completerà la stessa attività come il ON_OLECMD (macro), illustrato in precedenza.  
  
 Quando un'applicazione contenitore invia questo server un **OLECMDID_PRINT** comando tramite il server `IOleCommandTarget` interfaccia, MFC gestore del comando di stampa verrà richiamata nel server, rendendo il server per l'applicazione di stampa. Codice del contenitore documenti attivi per richiamare il comando stampato aggiunto nei passaggi precedenti sarebbe simile al seguente:  
  
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

