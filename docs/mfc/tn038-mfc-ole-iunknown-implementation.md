---
title: "TN038: implementazione di IUnknown MFC/OLE | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.mfc.ole"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "macro di aggregazione [C++]"
  - "BEGIN_INTERFACE_MAP (macro)"
  - "BEGIN_INTERFACE_PART (macro)"
  - "COM (interfacce), interfaccia base"
  - "DECLARE_INTERFACE_MAP (macro)"
  - "END_INTERFACE_MAP (macro)"
  - "END_INTERFACE_PART (macro)"
  - "INTERFACE_PART (macro)"
  - "IUnknown (interfaccia)"
  - "METHOD_PROLOGUE (macro)"
  - "OLE [C++], implementazione interfaccia IUnknown"
  - "STDMETHOD (macro)"
  - "TN038"
ms.assetid: 19d946ba-beaf-4881-85c6-0b598d7f6f11
caps.latest.revision: 12
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# TN038: implementazione di IUnknown MFC/OLE
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

> [!NOTE]
>  La seguente nota tecnica non è stata aggiornata da quando è stata inclusa per la prima volta nella documentazione online.  Di conseguenza, alcune procedure e argomenti potrebbero essere non aggiornati o errati.  Per le informazioni più recenti, è consigliabile cercare l'argomento di interesse nell'indice della documentazione online.  
  
 Alla base di OLE 2 vi è "Component Object Model OLE" \(COM OLE\).  COM definisce uno standard correlato al modo in cui comunicano tra loro gli oggetti che cooperano.  Lo standard include i dettagli sull'aspetto di un "oggetto", tra cui il modo in cui i metodi vengono inviati in un oggetto.  COM definisce anche una classe base, da cui vengono derivate tutte le classi compatibili con COM.  Questa classe base è [IUnknown](http://msdn.microsoft.com/library/windows/desktop/ms680509).  Benché l'interfaccia [IUnknown](http://msdn.microsoft.com/library/windows/desktop/ms680509) sia considerata una classe C\+\+, COM non è specifico di alcun linguaggio e può essere implementato in C, PASCAL o in qualsiasi altro linguaggio in grado di supportare il layout binario di un oggetto COM.  
  
 OLE definisce tutte le classi derivate da [IUnknown](http://msdn.microsoft.com/library/windows/desktop/ms680509) "interfacce". Si tratta di un'importante distinzione, perché un'"interfaccia" come [IUnknown](http://msdn.microsoft.com/library/windows/desktop/ms680509) non comporta alcuna implementazione,  ma definisce semplicemente il protocollo attraverso il quale comunicano gli oggetti e non i dettagli riguardo alle operazioni eseguite dalle implementazioni.  Si tratta di un comportamento ragionevole per un sistema che permette la massima flessibilità.  È compito di MFC implementare un comportamento predefinito per i programmi MFC\/C\+\+.  
  
 Per comprendere l'implementazione di [IUnknown](http://msdn.microsoft.com/library/windows/desktop/ms680509) da parte di MFC, è prima di tutto necessario sapere che cos'è questa interfaccia.  Una versione semplificata di [IUnknown](http://msdn.microsoft.com/library/windows/desktop/ms680509) viene definita di seguito:  
  
```  
class IUnknown  
{  
public:  
    virtual HRESULT QueryInterface(REFIID iid, void** ppvObj) = 0;  
    virtual ULONG AddRef() = 0;  
    virtual ULONG Release() = 0;  
};  
```  
  
> [!NOTE]
>  Nella figura sono stati esclusi determinati dettagli sulle convenzioni di chiamata necessarie, come `__stdcall`.  
  
 Le funzioni membro [AddRef](http://msdn.microsoft.com/library/windows/desktop/ms691379) e [Release](http://msdn.microsoft.com/library/windows/desktop/ms682317) controllano la gestione della memoria dell'oggetto.  COM usa uno schema di conteggio dei riferimenti per tenere traccia degli oggetti.  A un oggetto non viene mai fatto riferimento direttamente come avviene in C\+\+.  Invece, agli oggetti COM viene sempre fatto riferimento tramite un puntatore.  Per rilasciare l'oggetto quando il proprietario ha terminato di usarlo, viene chiamato il membro [Release](http://msdn.microsoft.com/library/windows/desktop/ms682317) dell'oggetto \(invece di usare l'operatore delete, come si farebbe per un oggetto C\+\+ tradizionale\).  Il meccanismo di conteggio dei riferimenti permette la gestione di più riferimenti a un singolo oggetto.  Un'implementazione di [AddRef](http://msdn.microsoft.com/library/windows/desktop/ms691379) e [Release](http://msdn.microsoft.com/library/windows/desktop/ms682317) mantiene un conteggio dei riferimenti nell'oggetto e l'oggetto non viene eliminato fino a quando il conteggio dei riferimenti non raggiunge zero.  
  
 [AddRef](http://msdn.microsoft.com/library/windows/desktop/ms691379) e [Release](http://msdn.microsoft.com/library/windows/desktop/ms682317) sono piuttosto semplici dal punto di vista dell'implementazione.  Ecco un'implementazione piuttosto banale:  
  
```  
ULONG CMyObj::AddRef()   
{   
    return ++m_dwRef;   
}  
  
ULONG CMyObj::Release()   
{   
    if (--m_dwRef == 0)   
    {  
        delete this;   
        return 0;  
    }  
    return m_dwRef;  
}  
```  
  
 La funzione membro [QueryInterface](http://msdn.microsoft.com/library/windows/desktop/ms682521) è leggermente più interessante.  Il caso di un oggetto le cui sole funzioni membro sono [AddRef](http://msdn.microsoft.com/library/windows/desktop/ms691379) e [Release](http://msdn.microsoft.com/library/windows/desktop/ms682317) non è molto interessante. Sarebbe più interessante indicare all'oggetto di eseguire più operazioni di quelle fornite da [IUnknown](http://msdn.microsoft.com/library/windows/desktop/ms680509).  È in questo caso che [QueryInterface](http://msdn.microsoft.com/library/windows/desktop/ms682521) si rivela utile,  perché permette di ottenere un'"interfaccia" diversa nello stesso oggetto.  Queste interfacce vengono in genere derivate da [IUnknown](http://msdn.microsoft.com/library/windows/desktop/ms680509) e aggiungono altre funzionalità attraverso l'inserimento di nuove funzioni membro.  Le interfacce COM non hanno mai variabili membro dichiarate nell'interfaccia e tutte le funzioni membro vengono dichiarate come virtuali pure.  Di seguito è riportato un esempio:  
  
```  
class IPrintInterface : public IUnknown  
{  
public:  
    virtual void PrintObject() = 0;  
};  
```  
  
 Per ottenere un'interfaccia IPrintInterface se è presente solo [IUnknown](http://msdn.microsoft.com/library/windows/desktop/ms680509), chiamare [QueryInterface](http://msdn.microsoft.com/library/windows/desktop/ms682521) usando l'oggetto `IID` di **IPrintInterface**.  `IID` è un numero a 128 bit che identifica in modo univoco l'interfaccia.  Esiste un oggetto `IID` per ogni interfaccia definita dall'utente o da OLE.  Se `pUnk` è un puntatore a un oggetto [IUnknown](http://msdn.microsoft.com/library/windows/desktop/ms680509), il codice per recuperarne un'interfaccia IPrintInterface potrebbe essere questo:  
  
```  
IPrintInterface* pPrint = NULL;  
if (pUnk->QueryInterface(IID_IPrintInterface,   
    (void**)&pPrint) == NOERROR)  
{  
    pPrint->PrintObject();  
    pPrint->Release();     
        // release pointer obtained via QueryInterface  
}  
```  
  
 Può sembrare piuttosto semplice, ma come implementare un oggetto che supporta entrambe le interfacce IPrintInterface e [IUnknown](http://msdn.microsoft.com/library/windows/desktop/ms680509)?  In questo caso è facile, perché IPrintInterface viene derivata direttamente da [IUnknown](http://msdn.microsoft.com/library/windows/desktop/ms680509): implementando IPrintInterface, è supportata automaticamente anche [IUnknown](http://msdn.microsoft.com/library/windows/desktop/ms680509).  Ad esempio:  
  
```  
class CPrintObj : public CPrintInterface  
{  
    virtual HRESULT QueryInterface(REFIID iid, void** ppvObj);  
    virtual ULONG AddRef();  
    virtual ULONG Release();  
    virtual void PrintObject();  
};  
```  
  
 Le implementazioni di [AddRef](http://msdn.microsoft.com/library/windows/desktop/ms691379) e [Release](http://msdn.microsoft.com/library/windows/desktop/ms682317) sarebbero assolutamente identiche a quelle indicate sopra.  **CPrintObj::QueryInterface** avrebbe un aspetto simile a questo:  
  
```  
HRESULT CPrintObj::QueryInterface(REFIID iid, void FAR* FAR* ppvObj)  
{  
    if (iid == IID_IUnknown || iid == IID_IPrintInterface)  
    {  
        *ppvObj = this;  
        AddRef();  
        return NOERROR;  
    }  
    return E_NOINTERFACE;  
}  
```  
  
 Come si può notare, se l'identificatore di interfaccia \(IID\) viene riconosciuto, viene restituito un puntatore all'oggetto, altrimenti si verifica un errore.  Si noti inoltre che un oggetto [QueryInterface](http://msdn.microsoft.com/library/windows/desktop/ms682521) corretto comporta una funzione [AddRef](http://msdn.microsoft.com/library/windows/desktop/ms691379) implicita.  Naturalmente, sarebbe necessario implementare anche CEditObj::Print.  Questo è facile, perché l'interfaccia IPrintInterface è stata derivata direttamente dall'interfaccia [IUnknown](http://msdn.microsoft.com/library/windows/desktop/ms680509).  Tuttavia, se si vuole supportare due interfacce diverse, entrambe derivate da [IUnknown](http://msdn.microsoft.com/library/windows/desktop/ms680509), tenere presente quanto segue:  
  
```  
class IEditInterface : public IUnkown  
{  
public:  
    virtual void EditObject() = 0;  
};  
```  
  
 Benché esistano diversi modi per implementare una classe supportando IEditInterface e IPrintInterface, tra cui l'uso dell'ereditarietà multipla di C\+\+, questa nota è incentrata sull'uso di classi annidate per implementare la funzionalità.  
  
```  
class CEditPrintObj  
{  
public:  
    CEditPrintObj();  
  
    HRESULT QueryInterface(REFIID iid, void**);  
    ULONG AddRef();  
    ULONG Release();  
    DWORD m_dwRef;  
  
    class CPrintObj : public IPrintInterface  
    {  
    public:  
        CEditPrintObj* m_pParent;  
        virtual HRESULT QueryInterface(REFIID iid, void** ppvObj);  
        virtual ULONG AddRef();  
        virtual ULONG Release();  
    } m_printObj;  
  
    class CEditObj : public IEditInterface  
    {  
    public:  
        CEditPrintObj* m_pParent;  
        virtual ULONG QueryInterface(REFIID iid, void** ppvObj);  
        virtual ULONG AddRef();  
        virtual ULONG Release();  
    } m_editObj;  
};  
```  
  
 Ecco l'intera implementazione:  
  
```  
CEditPrintObj::CEditPrintObj()  
{  
    m_editObj.m_pParent = this;  
    m_printObj.m_pParent = this;  
}  
  
ULONG CEditPrintObj::AddRef()   
{   
    return ++m_dwRef;  
}  
  
CEditPrintObj::Release()  
{  
    if (--m_dwRef == 0)  
    {  
        delete this;  
        return 0;  
    }  
    return m_dwRef;  
}  
  
HRESULT CEditPrintObj::QueryInterface(REFIID iid, void** ppvObj)  
{  
    if (iid == IID_IUnknown || iid == IID_IPrintInterface)  
    {  
        *ppvObj = &m_printObj;  
        AddRef();  
        return NOERROR;  
    }  
    else if (iid == IID_IEditInterface)  
    {  
        *ppvObj = &m_editObj;  
        AddRef();  
        return NOERROR;  
    }  
    return E_NOINTERFACE;  
}  
  
ULONG CEditPrintObj::CEditObj::AddRef()   
{   
    return m_pParent->AddRef();   
}  
  
ULONG CEditPrintObj::CEditObj::Release()   
{   
    return m_pParent->Release();   
}  
  
HRESULT CEditPrintObj::CEditObj::QueryInterface(  
    REFIID iid, void** ppvObj)   
{   
    return m_pParent->QueryInterface(iid, ppvObj);   
}  
  
ULONG CEditPrintObj::CPrintObj::AddRef()   
{   
    return m_pParent->AddRef();   
}  
  
ULONG CEditPrintObj::CPrintObj::Release()   
{   
    return m_pParent->Release();   
}  
  
HRESULT CEditPrintObj::CPrintObj::QueryInterface(  
    REFIID iid, void** ppvObj)   
{   
    return m_pParent->QueryInterface(iid, ppvObj);   
}  
```  
  
 Si noti che la maggior parte dell'implementazione di [IUnknown](http://msdn.microsoft.com/library/windows/desktop/ms680509) viene inserita nella classe CEditPrintObj invece di duplicare il codice in CEditPrintObj::CEditObj e CEditPrintObj::CPrintObj.  In questo modo, si riduce la quantità di codice e si evitano bug.  L'aspetto essenziale qui è che dall'interfaccia IUnknown è possibile chiamare [QueryInterface](http://msdn.microsoft.com/library/windows/desktop/ms682521) per recuperare tutte le eventuali interfacce supportate dall'oggetto, da ognuna delle quali è possibile fare lo stesso.  Di conseguenza, tutte le funzioni di [QueryInterface](http://msdn.microsoft.com/library/windows/desktop/ms682521) disponibili da ogni interfaccia devono comportarsi esattamente nello stesso modo.  Perché questi oggetti incorporati possano chiamare l'implementazione nell'"oggetto esterno", viene usato un puntatore all'indietro \(m\_pParent\).  Il puntatore m\_pParent viene inizializzato durante il costruttore CEditPrintObj.  È quindi necessario implementare anche CEditPrintObj::CPrintObj::PrintObject e CEditPrintObj::CEditObj::EditObject.  È stata inserita una certa quantità di codice per aggiungere una sola funzionalità, ovvero la possibilità di modificare l'oggetto.  Fortunatamente, è piuttosto insolito \(anche se può succedere\) che le interfacce includano una sola funzione membro e, in questo caso, EditObject e PrintObject vengono in genere combinati in una singola interfaccia.  
  
 Per uno scenario così semplice, la quantità di codice e le spiegazioni necessarie sono quasi eccessive.  Le classi MFC\/OLE offrono un'alternativa più facile.  L'implementazione MFC usa una tecnica simile al modo in cui viene eseguito il wrapping dei messaggi di Windows con le mappe messaggi.  Questa tecnica consiste nelle *mappe dell'interfaccia*, descritte nella prossima sezione.  
  
## Mappe dell'interfaccia MFC  
 MFC\/OLE include un'implementazione di "mappe dell'interfaccia" simile alle "mappe messaggi" e alle "mappe di invio" di MFC quanto a concetto ed esecuzione.  Le funzionalità di base delle mappe dell'interfaccia di MFC sono le seguenti:  
  
-   Implementazione standard di [IUnknown](http://msdn.microsoft.com/library/windows/desktop/ms680509), incorporata nella classe `CCmdTarget`.  
  
-   Manutenzione del conteggio dei riferimenti, modificato da [AddRef](http://msdn.microsoft.com/library/windows/desktop/ms691379) e [Release](http://msdn.microsoft.com/library/windows/desktop/ms682317)  
  
-   Implementazione basata sui dati di [QueryInterface](http://msdn.microsoft.com/library/windows/desktop/ms682521)  
  
 Le mappe dell'interfaccia supportano anche queste funzionalità avanzate:  
  
-   Supporto per la creazione di oggetti COM aggregabili  
  
-   Supporto per l'uso di oggetti aggregati nell'implementazione di un oggetto COM  
  
-   L'implementazione è associabile ed estendibile  
  
 Per altre informazioni sull'aggregazione, vedere l'argomento [Aggregazione](http://msdn.microsoft.com/library/windows/desktop/ms686558\(v=vs.85\).aspx).  
  
 Il supporto delle mappe dell'interfaccia di MFC è radicato nella classe `CCmdTarget`.  `CCmdTarget` ha \(relazione "*has\-a*"\) un conteggio dei riferimenti, nonché tutte le funzioni membro associate all'implementazione di [IUnknown](http://msdn.microsoft.com/library/windows/desktop/ms680509) \(il conteggio dei riferimenti è ad esempio in `CCmdTarget`\).  Per creare una classe che supporta OLE COM, è necessario derivare una classe da `CCmdTarget` e usare diverse macro e funzioni membro di `CCmdTarget` per implementare le interfacce desiderate.  L'implementazione di MFC usa classi annidate per definire l'implementazione di ogni interfaccia in modo molto simile all'esempio precedente.  Questa operazione viene resa più semplice con un'implementazione standard di IUnknown e con alcune macro che eliminano parte del codice ripetitivo.  
  
## Nozioni di base sulle mappe dell'interfaccia  
  
#### Per implementare una classe usando le mappe dell'interfaccia di MFC  
  
1.  Derivare una classe direttamente o indirettamente da `CCmdTarget`.  
  
2.  Usare la funzione `DECLARE_INTERFACE_MAP` nella definizione della classe derivata.  
  
3.  Per ogni interfaccia che si vuole supportare, usare le macro `BEGIN_INTERFACE_PART` e `END_INTERFACE_PART` nella definizione della classe.  
  
4.  Nel file di implementazione usare le macro `BEGIN_INTERFACE_MAP` e `END_INTERFACE_MAP` per definire la mappa dell'interfaccia della classe.  
  
5.  Per ogni IID supportato, usare la macro `INTERFACE_PART` tra le macro `BEGIN_INTERFACE_MAP` e `END_INTERFACE_MAP` per eseguire il mapping dell'IID a una "parte" specifica della classe.  
  
6.  Implementare ognuna delle classi annidate che rappresentano le interfacce supportate.  
  
7.  Usare la macro `METHOD_PROLOGUE` per accedere all'oggetto padre derivato da `CCmdTarget`.  
  
8.  [AddRef](http://msdn.microsoft.com/library/windows/desktop/ms691379), [Release](http://msdn.microsoft.com/library/windows/desktop/ms682317) e [QueryInterface](http://msdn.microsoft.com/library/windows/desktop/ms682521) possono delegare all'implementazione `CCmdTarget` di queste funzioni \(`ExternalAddRef`, `ExternalRelease` e `ExternalQueryInterface`\).  
  
 L'esempio di CPrintEditObj precedente potrebbe essere implementato in questo modo:  
  
```  
class CPrintEditObj : public CCmdTarget  
{  
public:  
    // member data and member functions for CPrintEditObj go here  
  
// Interface Maps  
protected:  
    DECLARE_INTERFACE_MAP()  
  
    BEGIN_INTERFACE_PART(EditObj, IEditInterface)  
        STDMETHOD_(void, EditObject)();  
    END_INTERFACE_PART(EditObj)  
  
    BEGIN_INTERFACE_PART(PrintObj, IPrintInterface)  
        STDMETHOD_(void, PrintObject)();  
    END_INTERFACE_PART(PrintObj)  
};  
```  
  
 La dichiarazione precedente crea una classe derivata da `CCmdTarget`.  La macro `DECLARE_INTERFACE_MAP` indica al framework che la classe avrà una mappa dell'interfaccia personalizzata.  Inoltre, le macro `BEGIN_INTERFACE_PART` e `END_INTERFACE_PART` definiscono classi annidate, in questo caso con i nomi CEditObj e CPrintObj \(la X viene usata solo per differenziare le classi annidate dalle classi globali che iniziano con "C" e dalle classi di interfaccia che iniziano con "I"\).  Vengono creati due membri annidati di queste classi, rispettivamente m\_CEditObj e m\_CPrintObj.  Le macro dichiarano automaticamente le funzioni [AddRef](http://msdn.microsoft.com/library/windows/desktop/ms691379), [Release](http://msdn.microsoft.com/library/windows/desktop/ms682317) e [QueryInterface](http://msdn.microsoft.com/library/windows/desktop/ms682521). Di conseguenza, è necessario dichiarare solo le funzioni specifiche per questa interfaccia, ovvero EditObject e PrintObject \(la macro OLE `STDMETHOD` viene usata in modo da fornire `_stdcall` e parole chiave virtuali nel modo appropriato per la piattaforma di destinazione\).  
  
 Per implementare la mappa dell'interfaccia per la classe:  
  
```  
BEGIN_INTERFACE_MAP(CPrintEditObj, CCmdTarget)  
    INTERFACE_PART(CPrintEditObj, IID_IPrintInterface, PrintObj)  
    INTERFACE_PART(CPrintEditObj, IID_IEditInterface, EditObj)  
END_INTERFACE_MAP()  
```  
  
 In questo modo, si connette rispettivamente l'IID IID\_IPrintInterface a m\_CPrintObj e IID\_IEditInterface a m\_CEditObj.  L'implementazione `CCmdTarget` di [QueryInterface](http://msdn.microsoft.com/library/windows/desktop/ms682521) \(`CCmdTarget::ExternalQueryInterface`\) usa questa mappa per restituire puntatori a m\_CPrintObj e m\_CEditObj quando richiesto.  Non è necessario includere una voce per `IID_IUnknown`. Il framework userà la prima interfaccia nella mappa, in questo caso m\_CPrintObj, quando viene richiesto `IID_IUnknown`.  
  
 Anche se la macro `BEGIN_INTERFACE_PART` dichiara automaticamente le funzioni [AddRef](http://msdn.microsoft.com/library/windows/desktop/ms691379), [Release](http://msdn.microsoft.com/library/windows/desktop/ms682317) e [QueryInterface](http://msdn.microsoft.com/library/windows/desktop/ms682521), queste devono comunque essere implementate:  
  
```  
ULONG FAR EXPORT CEditPrintObj::XEditObj::AddRef()  
{  
    METHOD_PROLOGUE(CEditPrintObj, EditObj)  
    return pThis->ExternalAddRef();  
}  
  
ULONG FAR EXPORT CEditPrintObj::XEditObj::Release()  
{  
    METHOD_PROLOGUE(CEditPrintObj, EditObj)  
    return pThis->ExternalRelease();  
}  
  
HRESULT FAR EXPORT CEditPrintObj::XEditObj::QueryInterface(  
    REFIID iid, void FAR* FAR* ppvObj)  
{  
    METHOD_PROLOGUE(CEditPrintObj, EditObj)  
    return (HRESULT)pThis->ExternalQueryInterface(&iid, ppvObj);  
}  
  
void FAR EXPORT CEditPrintObj::XEditObj::EditObject()  
{  
    METHOD_PROLOGUE(CEditPrintObj, EditObj)  
    // code to "Edit" the object, whatever that means...  
}  
```  
  
 L'implementazione per CEditPrintObj::CPrintObj sarà simile alle definizioni indicate sopra per CEditPrintObj::CEditObj.  Benché sia possibile creare una macro da usare per generare automaticamente queste funzioni \(nello sviluppo MFC\/OLE in passato avveniva così\), diventa difficile impostare punti di interruzione quando una macro genera più di una riga di codice.  Per questo motivo, questo codice viene espanso manualmente.  
  
 Se si usa l'implementazione del framework delle mappe messaggi, è necessario eseguire alcune operazioni:  
  
-   Implementare QueryInterface  
  
-   Implementare AddRef e Release  
  
-   Dichiarare uno di questi metodi predefiniti in entrambe le interfacce  
  
 Inoltre, il framework usa le mappe messaggi internamente.  In questo modo, è possibile derivare da una classe del framework, ad esempio `COleServerDoc`, che supporta già certe interfacce e fornisce sostituzioni o aggiunte per le interfacce specificate dal framework.  Questo è possibile perché il framework supporta completamente l'ereditarietà di una mappa dell'interfaccia da una classe base.  Per questo motivo, `BEGIN_INTERFACE_MAP` accetta come secondo parametro il nome della classe base.  
  
> [!NOTE]
>  In genere, non è possibile riusare le implementazioni predefinite di MFC delle interfacce OLE semplicemente ereditando la specializzazione incorporata di tale interfaccia dalla versione MFC.  Il motivo è che l'uso della macro `METHOD_PROLOGUE` per ottenere l'accesso all'oggetto contenitore derivato da `CCmdTarget` implica un *offset fisso* dell'oggetto incorporato dall'oggetto derivato da `CCmdTarget`.  Di conseguenza, ad esempio, non è possibile derivare un oggetto XMyAdviseSink incorporato dall'implementazione di MFC in `COleClientItem::XAdviseSink`, perché XAdviseSink presuppone di trovarsi in corrispondenza di un offset specifico dall'inizio dell'oggetto `COleClientItem`.  
  
> [!NOTE]
>  Tuttavia, è possibile delegare all'implementazione MFC per tutte le funzioni che si vuole definire come comportamento predefinito di MFC.  A questo scopo, viene usata l'implementazione MFC di `IOleInPlaceFrame` \(XOleInPlaceFrame\) nella classe `COleFrameHook` \(con delega a m\_xOleInPlaceUIWindow per molte funzioni\).  Questa progettazione è stata scelta per ridurre le dimensioni di runtime degli oggetti che implementano molte interfacce ed elimina la necessità di un puntatore all'indietro \(ad esempio, nel modo in cui è stato usato m\_pParent nella sezione precedente\).  
  
### Aggregazione e mappe dell'interfaccia  
 Oltre a supportare oggetti COM autonomi, MFC supporta anche l'aggregazione.  L'aggregazione in se stessa è un argomento troppo complesso per parlarne qui. Per altre informazioni, fare riferimento all'argomento [Aggregazione](http://msdn.microsoft.com/library/windows/desktop/ms686558\(v=vs.85\).aspx).  Questa nota descriverà semplicemente il supporto per l'aggregazione integrata nel framework e nelle mappe dell'interfaccia.  
  
 Esistono due modi per usare l'aggregazione: \(1\) usando un oggetto COM che supporta l'aggregazione e \(2\) implementando un oggetto che può essere aggregato da un altro.  Queste funzionalità possono essere definite "uso di un oggetto aggregato" e "impostazione di un oggetto come aggregabile".  MFC le supporta entrambe.  
  
### Uso di un oggetto aggregato  
 Per usare un oggetto aggregato, è necessario determinare come associare l'aggregato al meccanismo di QueryInterface.  In altre parole, l'oggetto aggregato deve comportarsi come se fosse una parte nativa dell'oggetto.  In che modo si esegue l'associazione al meccanismo della mappa dell'interfaccia di MFC?  Oltre alla macro `INTERFACE_PART`, in cui viene eseguito il mapping di un oggetto annidato a un IID, è possibile anche dichiarare un oggetto aggregato come parte della classe derivata `CCmdTarget`.  A questo scopo, viene usata la macro `INTERFACE_AGGREGATE`.  In questo modo, è possibile specificare una variabile membro \(che deve essere un puntatore a [IUnknown](http://msdn.microsoft.com/library/windows/desktop/ms680509) o a una classe derivata\), che deve essere integrata nel meccanismo della mappa dell'interfaccia.  Se il puntatore non è NULL quando viene chiamato `CCmdTarget::ExternalQueryInterface`, il framework chiama automaticamente la funzione membro [QueryInterface](http://msdn.microsoft.com/library/windows/desktop/ms682521) dell'oggetto aggregato, se l'oggetto `IID` richiesto non è uno degli oggetti `IID` nativi supportati dall'oggetto `CCmdTarget` stesso.  
  
##### Per usare la macro INTERFACE\_AGGREGATE  
  
1.  Dichiarare una variabile membro \(`IUnknown*`\) che conterrà un puntatore all'oggetto aggregato.  
  
2.  Includere una macro `INTERFACE_AGGREGATE` nella mappa dell'interfaccia, che fa riferimento alla variabile membro in base al nome.  
  
3.  A un certo punto \(in genere durante `CCmdTarget::OnCreateAggregates`\), inizializzare la variabile membro in un oggetto diverso da NULL.  
  
 Ad esempio:  
  
```  
class CAggrExample : public CCmdTarget  
{  
public:  
    CAggrExample();  
  
protected:  
    LPUNKNOWN m_lpAggrInner;  
    virtual BOOL OnCreateAggregates();  
  
    DECLARE_INTERFACE_MAP()  
    // "native" interface part macros may be used here  
};  
  
CAggrExample::CAggrExample()  
{  
    m_lpAggrInner = NULL;  
}  
  
BOOL CAggrExample::OnCreateAggregates()  
{  
    // wire up aggregate with correct controlling unknown  
    m_lpAggrInner = CoCreateInstance(CLSID_Example,  
        GetControllingUnknown(), CLSCTX_INPROC_SERVER,  
        IID_IUnknown, (LPVOID*)&m_lpAggrInner);  
    if (m_lpAggrInner == NULL)  
        return FALSE;  
    // optionally, create other aggregate objects here  
    return TRUE;  
}  
  
BEGIN_INTERFACE_MAP(CAggrExample, CCmdTarget)  
    // native "INTERFACE_PART" entries go here  
    INTERFACE_AGGREGATE(CAggrExample, m_lpAggrInner)  
END_INTERFACE_MAP()  
```  
  
 La variabile m\_lpAggrInner viene inizializzata nel costruttore in NULL.  Il framework ignora una variabile membro NULL nell'implementazione predefinita di [QueryInterface](http://msdn.microsoft.com/library/windows/desktop/ms682521).  `OnCreateAggregates` è un buon punto in cui creare gli oggetti aggregati.  Sarà necessario chiamarlo in modo esplicito se l'oggetto viene creato all'esterno dell'implementazione MFC di `COleObjectFactory`.  Il motivo per cui creare aggregati in `CCmdTarget::OnCreateAggregates` e quello per cui utilizzare `CCmdTarget::GetControllingUnknown` risulteranno evidenti quando verrà descritta la creazione di oggetti aggregabili.  
  
 Questa tecnica fornisce agli oggetti tutte le interfacce supportate dall'oggetto aggregato, insieme alle interfacce native.  Se si vuole solo un subset delle interfacce supportate dall'aggregato, è possibile ignorare `CCmdTarget::GetInterfaceHook`.  Si ottiene così un livello di associazione molto ridotto, in modo simile a [QueryInterface](http://msdn.microsoft.com/library/windows/desktop/ms682521).  In genere, è preferibile ottenere tutte le interfacce supportate dall'aggregato.  
  
### Impostazione dell'implementazione di un oggetto come aggregabile  
 Perché un oggetto sia aggregabile, l'implementazione di [AddRef](http://msdn.microsoft.com/library/windows/desktop/ms691379), [Release](http://msdn.microsoft.com/library/windows/desktop/ms682317) e [QueryInterface](http://msdn.microsoft.com/library/windows/desktop/ms682521) deve delegare a un puntatore "controlling unknown". In altre parole, perché sia parte dell'oggetto, deve delegare [AddRef](http://msdn.microsoft.com/library/windows/desktop/ms691379), [Release](http://msdn.microsoft.com/library/windows/desktop/ms682317) e [QueryInterface](http://msdn.microsoft.com/library/windows/desktop/ms682521) a un oggetto diverso, derivato anch'esso da [IUnknown](http://msdn.microsoft.com/library/windows/desktop/ms680509).  Questo puntatore "controlling unknown" viene fornito all'oggetto quando questo viene creato, ovvero viene fornito all'implementazione di `COleObjectFactory`.  Questa implementazione implica una quantità ridotta di overhead. Poiché questo potrebbe essere un problema, MFC la rende facoltativa.  Per fare in modo che un oggetto sia aggregabile, chiamare `CCmdTarget::EnableAggregation` dal costruttore dell'oggetto.  
  
 Se l'oggetto usa anche aggregati, è necessario assicurarsi di passare il puntatore "controlling unknown" corretto agli oggetti aggregati.  In genere, questo puntatore a [IUnknown](http://msdn.microsoft.com/library/windows/desktop/ms680509) viene passato all'oggetto quando viene creato l'aggregato.  Ad esempio, il parametro pUnkOuter è il puntatore "controlling unknown" per gli oggetti creati con `CoCreateInstance`.  Il puntatore "controlling unknown" corretto può essere recuperato chiamando `CCmdTarget::GetControllingUnknown`.  Il valore restituito dalla funzione, tuttavia, non è valido durante il costruttore.  Per questo motivo, è consigliabile creare gli aggregati solo in un override di `CCmdTarget::OnCreateAggregates`, in cui il valore restituito da `GetControllingUnknown` è affidabile, anche se creato dall'implementazione di `COleObjectFactory`.  
  
 È anche importante che l'oggetto modifichi il conteggio dei riferimenti corretto durante l'aggiunta o il rilascio di conteggi dei riferimenti artificiali.  Per assicurarsi che sia questo il caso, chiamare sempre `ExternalAddRef` e `ExternalRelease` invece di `InternalRelease` e `InternalAddRef`.  È raro chiamare `InternalRelease` o `InternalAddRef` in una classe che supporta l'aggregazione.  
  
### Materiale di riferimento  
 L'utilizzo avanzato di OLE, ad esempio per la definizione di interfacce personalizzate o l'override dell'implementazione del framework delle interfacce OLE, richiede l'uso del meccanismo della mappa dell'interfaccia sottostante.  
  
 Questa sezione descrive ogni macro e le API usate per implementare queste funzionalità avanzate.  
  
### CCmdTarget::EnableAggregation: descrizione della funzione  
  
```  
  
void EnableAggregation();  
```  
  
## Note  
 Chiamare questa funzione nel costruttore della classe derivata se si vuole supportare l'aggregazione OLE per oggetti di questo tipo.  Questa funzione prepara una speciale implementazione di IUnknown necessaria per gli oggetti aggregabili.  
  
### CCmdTarget::ExternalQueryInterface: descrizione della funzione  
  
```  
  
              DWORD ExternalQueryInterface(    const void FAR* lpIID,    LPVOID FAR* ppvObj   
);  
```  
  
## Note  
  
#### Parametri  
 `lpIID`  
 Puntatore far a un IID \(primo argomento per QueryInterface\)  
  
 `ppvObj`  
 Puntatore a IUnknown\* \(secondo argomento per QueryInterface\)  
  
## Note  
 Chiamare questa funzione nell'implementazione di IUnknown per ogni interfaccia implementata dalla classe.  Questa funzione fornisce l'implementazione basata sui dati standard di QueryInterface in base alla mappa dell'interfaccia dell'oggetto.  È necessario eseguire il cast del valore restituito in HRESULT.  Se l'oggetto è aggregato, questa funzione chiamerà l'interfaccia "IUnknown di controllo" invece di usare la mappa dell'interfaccia locale.  
  
### CCmdTarget::ExternalAddRef: descrizione della funzione  
  
```  
  
DWORD ExternalAddRef();  
```  
  
## Note  
 Chiamare questa funzione nell'implementazione di IUnknown::AddRef per ogni interfaccia implementata dalla classe.  Il valore restituito è il nuovo conteggio dei riferimenti nell'oggetto CCmdTarget.  Se l'oggetto è aggregato, questa funzione chiama l'interfaccia "IUnknown di controllo" invece di modificare il conteggio dei riferimenti locale.  
  
### CCmdTarget::ExternalRelease: descrizione della funzione  
  
```  
  
DWORD ExternalRelease();  
  
```  
  
## Note  
 Chiamare questa funzione nell'implementazione di IUnknown::Release per ogni interfaccia implementata dalla classe.  Il valore restituito indica il nuovo conteggio dei riferimenti nell'oggetto.  Se l'oggetto è aggregato, questa funzione chiama l'interfaccia "IUnknown di controllo" invece di modificare il conteggio dei riferimenti locale.  
  
### DECLARE\_INTERFACE\_MAP: descrizione della macro  
  
```  
  
DECLARE_INTERFACE_MAP  
  
```  
  
## Note  
 Usare questa macro in qualsiasi classe derivata da `CCmdTarget` che avrà una mappa dell'interfaccia.  L'uso è molto simile a quello di `DECLARE_MESSAGE_MAP`.  La chiamata di questa macro deve essere inserita nella definizione della classe, in genere nel file di intestazione \(con estensione H\).  Una classe con `DECLARE_INTERFACE_MAP` deve definire la mappa dell'interfaccia nel file di implementazione \(con estensione CPP\) con le macro `BEGIN_INTERFACE_MAP` e `END_INTERFACE_MAP`.  
  
### BEGIN\_INTERFACE\_PART e END\_INTERFACE\_PART: descrizioni delle macro  
  
```  
  
              BEGIN_INTERFACE_PART(   
   localClass,  
   iface   
);  
END_INTERFACE_PART(   
   localClass   
)  
```  
  
## Note  
  
#### Parametri  
 l`ocalClass`  
 Nome della classe che implementa l'interfaccia  
  
 `iface`  
 Nome dell'interfaccia implementata dalla classe  
  
## Note  
 Per ogni interfaccia implementata dalla classe, deve essere presente una coppia di macro `BEGIN_INTERFACE_PART` e `END_INTERFACE_PART`.  Queste macro definiscono una classe locale derivata dall'interfaccia OLE specificata, nonché una variabile membro incorporata della classe.  I membri [AddRef](http://msdn.microsoft.com/library/windows/desktop/ms691379), [Release](http://msdn.microsoft.com/library/windows/desktop/ms682317) e [QueryInterface](http://msdn.microsoft.com/library/windows/desktop/ms682521) vengono dichiarati automaticamente.  È necessario includere le dichiarazioni per le altre funzioni membro che fanno parte dell'interfaccia implementata \(tali dichiarazioni vengono inserite tra le macro `BEGIN_INTERFACE_PART` e `END_INTERFACE_PART`\).  
  
 L'argomento `iface` è l'interfaccia OLE che si vuole implementare, ad esempio `IAdviseSink` o `IPersistStorage` \(oppure l'interfaccia personalizzata\).  
  
 L'argomento `localClass` è il nome della classe locale che verrà definita.  Al nome verrà anteposta automaticamente una "X".  Questa convenzione di denominazione viene usata per evitare conflitti con le classi globali che hanno lo stesso nome.  Inoltre, il nome del membro incorporato è uguale a quello di `localClass`, ad eccezione del fatto che è preceduto da "m\_x".  
  
 Ad esempio:  
  
```  
BEGIN_INTERFACE_PART(MyAdviseSink, IAdviseSink)  
   STDMETHOD_(void,OnDataChange)(LPFORMATETC, LPSTGMEDIUM);  
   STDMETHOD_(void,OnViewChange)(DWORD, LONG);  
   STDMETHOD_(void,OnRename)(LPMONIKER);  
   STDMETHOD_(void,OnSave)();  
   STDMETHOD_(void,OnClose)();  
END_INTERFACE_PART(MyAdviseSink)  
```  
  
 definisce una classe locale chiamata XMyAdviseSink e derivata da IAdviseSink e un membro della classe in cui questa viene dichiarata, chiamato m\_xMyAdviseSink.  
  
> [!NOTE]
>  Le righe che iniziano con `STDMETHOD`\_ vengono essenzialmente copiate da OLE2.H e modificate leggermente.  La copia di queste righe da OLE2.H può ridurre gli errori difficili da risolvere.  
  
### BEGIN\_INTERFACE\_MAP e END\_INTERFACE\_MAP: descrizioni delle macro  
  
```  
  
              BEGIN_INTERFACE_MAP(   
   theClass,  
   baseClass   
) END_INTERFACE_MAP  
```  
  
## Note  
  
#### Parametri  
 `theClass`  
 Classe in cui deve essere definita la mappa dell'interfaccia  
  
 `baseClass`  
 Classe da cui deriva `theClass`.  
  
## Note  
 Le macro `BEGIN_INTERFACE_MAP` e `END_INTERFACE_MAP` vengono usate nel file di implementazione per definire effettivamente la mappa dell'interfaccia.  Per ogni interfaccia implementata, sono presenti una o più chiamate della macro `INTERFACE_PART`.  Per ogni aggregato usato dalla classe, esiste una chiamata della macro `INTERFACE_AGGREGATE`.  
  
### INTERFACE\_PART: descrizione della macro  
  
```  
  
              INTERFACE_PART(   
   theClass,  
   iid,   
   localClass   
)  
```  
  
## Note  
  
#### Parametri  
 `theClass`  
 Nome della classe che contiene la mappa dell'interfaccia.  
  
 `iid`  
 `IID` di cui eseguire il mapping alla classe incorporata.  
  
 `localClass`  
 Nome della classe locale \(meno la "X"\).  
  
## Note  
 Questa macro viene usata tra le macro `BEGIN_INTERFACE_MAP` e `END_INTERFACE_MAP` per ogni interfaccia che verrà supportata dall'oggetto.  Consente di eseguire il mapping di un IID a un membro della classe indicata da `theClass` e `localClass`.  A `localClass` verrà automaticamente aggiunto il prefisso "m\_x".  Si noti che a un singolo membro possono essere associati più `IID`.  Questo comportamento è molto utile quando si implementa solo un'interfaccia "più derivata" e si vuole fornire anche tutte le interfacce intermedie.  Un esempio valido è l'interfaccia `IOleInPlaceFrameWindow`.  La gerarchia ha questo aspetto:  
  
```  
IUnknown  
    IOleWindow  
        IOleUIWindow  
            IOleInPlaceFrameWindow  
```  
  
 Se un oggetto implementa `IOleInPlaceFrameWindow`, un client può eseguire `QueryInterface` su una di queste interfacce: `IOleUIWindow`, `IOleWindow` o [IUnknown](http://msdn.microsoft.com/library/windows/desktop/ms680509), oltre all'interfaccia "più derivata" `IOleInPlaceFrameWindow` \(quella effettivamente implementata\).  Per gestire questo comportamento, è possibile usare più macro `INTERFACE_PART` per eseguire il mapping di tutte le interfacce di base all'interfaccia `IOleInPlaceFrameWindow`:  
  
 Nel file di definizione della classe:  
  
```  
BEGIN_INTERFACE_PART(CMyFrameWindow, IOleInPlaceFrameWindow)  
```  
  
 Nel file di implementazione della classe:  
  
```  
BEGIN_INTERFACE_MAP(CMyWnd, CFrameWnd)  
    INTERFACE_PART(CMyWnd, IID_IOleWindow, MyFrameWindow)  
    INTERFACE_PART(CMyWnd, IID_IOleUIWindow, MyFrameWindow)  
    INTERFACE_PART(CMyWnd, IID_IOleInPlaceFrameWindow, MyFrameWindow)  
END_INTERFACE_MAP  
```  
  
 Il framework si occupa di IUnknown perché è sempre obbligatorio.  
  
### INTERFACE\_PART: descrizione della macro  
  
```  
  
              INTERFACE_AGGREGATE(   
   theClass,  
   theAggr   
)  
```  
  
## Note  
  
#### Parametri  
 `theClass`  
 Nome della classe che contiene la mappa dell'interfaccia.  
  
 `theAggr`  
 Nome della variabile membro che deve essere aggregata.  
  
## Note  
 Questa macro viene usata per indicare al framework che la classe usa un oggetto aggregato.  La macro deve trovarsi tra le macro `BEGIN_INTERFACE_PART` e `END_INTERFACE_PART`.  Un oggetto aggregato è un oggetto separato, derivato da [IUnknown](http://msdn.microsoft.com/library/windows/desktop/ms680509).  Usando un aggregato e la macro `INTERFACE_AGGREGATE`, è possibile fare in modo che tutte le interfacce supportate dall'aggregato appaiano come direttamente supportate dall'oggetto.  L'argomento `theAggr` è semplicemente il nome di una variabile membro della classe derivata da [IUnknown](http://msdn.microsoft.com/library/windows/desktop/ms680509), direttamente o indirettamente.  Tutte le macro `INTERFACE_AGGREGATE` devono seguire le macro `INTERFACE_PART` se si trovano in una mappa dell'interfaccia.  
  
## Vedere anche  
 [Note tecniche per numero](../mfc/technical-notes-by-number.md)   
 [Note tecniche per categoria](../mfc/technical-notes-by-category.md)