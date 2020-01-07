---
title: 'TN038: implementazione di IUnknown MFC-OLE'
ms.date: 06/28/2018
helpviewer_keywords:
- aggregation macros [MFC]
- COM interfaces, base interface
- IUnknown interface
- END_INTERFACE_MAP macro [MFC]
- TN038
- BEGIN_INTERFACE_PART macro [MFC]
- DECLARE_INTERFACE_MAP macro [MFC]
- BEGIN_INTERFACE_MAP macro [MFC]
- OLE [MFC], implementing IUnknown interface
- METHOD_PROLOGUE macro [MFC]
- STDMETHOD macro [MFC]
- END_INTERFACE_PART macro [MFC]
- INTERFACE_PART macro
ms.assetid: 19d946ba-beaf-4881-85c6-0b598d7f6f11
ms.openlocfilehash: 9ceb903ec38bc0ad7cfdee1c59babd2379422ac3
ms.sourcegitcommit: a5fa9c6f4f0c239ac23be7de116066a978511de7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/20/2019
ms.locfileid: "75302354"
---
# <a name="tn038-mfcole-iunknown-implementation"></a>TN038: implementazione di IUnknown MFC/OLE

> [!NOTE]
> La seguente nota tecnica non è stata aggiornata da quando è stata inclusa per la prima volta nella documentazione online. Di conseguenza, alcune procedure e argomenti potrebbero essere non aggiornati o errati. Per le informazioni più recenti, è consigliabile cercare l'argomento di interesse nell'indice della documentazione online.

Alla base di OLE 2 vi è "Component Object Model OLE" (COM OLE). COM definisce uno standard correlato al modo in cui comunicano tra loro gli oggetti che cooperano. Lo standard include i dettagli sull'aspetto di un "oggetto", tra cui il modo in cui i metodi vengono inviati in un oggetto. COM definisce anche una classe base, da cui vengono derivate tutte le classi compatibili con COM. Questa classe di base è [IUnknown](/windows/win32/api/unknwn/nn-unknwn-iunknown). Sebbene l'interfaccia [IUnknown](/windows/win32/api/unknwn/nn-unknwn-iunknown) venga definita come una C++ classe, com non è specifico di un linguaggio qualsiasi, può essere implementato in C, Pascal o in qualsiasi altro linguaggio in grado di supportare il layout binario di un oggetto com.

OLE fa riferimento a tutte le classi derivate da [IUnknown](/windows/win32/api/unknwn/nn-unknwn-iunknown) come "Interfaces". Si tratta di una differenza importante, perché un'"interfaccia", ad esempio [IUnknown](/windows/win32/api/unknwn/nn-unknwn-iunknown) , non contiene alcuna implementazione. ma definisce semplicemente il protocollo attraverso il quale comunicano gli oggetti e non i dettagli riguardo alle operazioni eseguite dalle implementazioni. Si tratta di un comportamento ragionevole per un sistema che permette la massima flessibilità. È compito di MFC implementare un comportamento predefinito per i programmi MFC/C++.

Per comprendere l'implementazione di MFC di [IUnknown](/windows/win32/api/unknwn/nn-unknwn-iunknown) è necessario comprendere prima di tutto l'interfaccia. Una versione semplificata di [IUnknown](/windows/win32/api/unknwn/nn-unknwn-iunknown) è definita di seguito:

```cpp
class IUnknown
{
public:
    virtual HRESULT QueryInterface(REFIID iid, void** ppvObj) = 0;
    virtual ULONG AddRef() = 0;
    virtual ULONG Release() = 0;
};
```

> [!NOTE]
> Nella figura sono stati esclusi determinati dettagli sulle convenzioni di chiamata necessarie, come `__stdcall`.

Le funzioni membro [AddRef](/windows/win32/api/unknwn/nf-unknwn-iunknown-addref) e [Release](/windows/win32/api/unknwn/nf-unknwn-iunknown-release) controllano la gestione della memoria dell'oggetto. COM usa uno schema di conteggio dei riferimenti per tenere traccia degli oggetti. A un oggetto non viene mai fatto riferimento direttamente come avviene in C++. Invece, agli oggetti COM viene sempre fatto riferimento tramite un puntatore. Per rilasciare l'oggetto quando il proprietario lo utilizza, viene chiamato il membro della [versione](/windows/win32/api/unknwn/nf-unknwn-iunknown-release) dell'oggetto, anziché usare operator delete, come avviene per un oggetto tradizionale C++ . Il meccanismo di conteggio dei riferimenti permette la gestione di più riferimenti a un singolo oggetto. Un'implementazione di [AddRef](/windows/win32/api/unknwn/nf-unknwn-iunknown-addref) e [Release](/windows/win32/api/unknwn/nf-unknwn-iunknown-release) mantiene un conteggio dei riferimenti nell'oggetto. l'oggetto non viene eliminato fino a quando il conteggio dei riferimenti non raggiunge lo zero.

[AddRef](/windows/win32/api/unknwn/nf-unknwn-iunknown-addref) e [Release](/windows/win32/api/unknwn/nf-unknwn-iunknown-release) sono piuttosto semplici dal punto di vista dell'implementazione. Ecco un'implementazione piuttosto banale:

```cpp
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

La funzione membro [QueryInterface](/windows/win32/api/unknwn/nf-unknwn-iunknown-queryinterface(q)) è un po' più interessante. Non è molto interessante avere un oggetto le cui uniche funzioni membro sono [AddRef](/windows/win32/api/unknwn/nf-unknwn-iunknown-addref) e [Release](/windows/win32/api/unknwn/nf-unknwn-iunknown-release) . sarebbe utile indicare all'oggetto di eseguire più operazioni di quelle fornite da [IUnknown](/windows/win32/api/unknwn/nn-unknwn-iunknown) . Questo è il punto in cui [QueryInterface](/windows/win32/api/unknwn/nf-unknwn-iunknown-queryinterface(q)) è utile. perché permette di ottenere un'"interfaccia" diversa nello stesso oggetto. Queste interfacce vengono in genere derivate da [IUnknown](/windows/win32/api/unknwn/nn-unknwn-iunknown) e aggiungono altre funzionalità aggiungendo nuove funzioni membro. Le interfacce COM non hanno mai variabili membro dichiarate nell'interfaccia e tutte le funzioni membro vengono dichiarate come virtuali pure. Ad esempio:

```cpp
class IPrintInterface : public IUnknown
{
public:
    virtual void PrintObject() = 0;
};
```

Per ottenere un IPrintInterface se si dispone solo di un [IUnknown](/windows/win32/api/unknwn/nn-unknwn-iunknown), chiamare [QueryInterface](/windows/win32/api/unknwn/nf-unknwn-iunknown-queryinterface(q)) usando il `IID` del `IPrintInterface`. `IID` è un numero a 128 bit che identifica in modo univoco l'interfaccia. Esiste un oggetto `IID` per ogni interfaccia definita dall'utente o da OLE. Se *punk* è un puntatore a un oggetto [IUnknown](/windows/win32/api/unknwn/nn-unknwn-iunknown) , il codice per recuperare un IPrintInterface potrebbe essere:

```cpp
IPrintInterface* pPrint = NULL;
if (pUnk->QueryInterface(IID_IPrintInterface, (void**)&pPrint) == NOERROR)
{
    pPrint->PrintObject();
    pPrint->Release();
    // release pointer obtained via QueryInterface
}
```

Sembra piuttosto semplice, ma in che modo si implementa un oggetto che supporta sia l'interfaccia IPrintInterface che [IUnknown](/windows/win32/api/unknwn/nn-unknwn-iunknown) , in questo caso è semplice poiché IPrintInterface è derivato direttamente da [IUnknown](/windows/win32/api/unknwn/nn-unknwn-iunknown) , implementando IPrintInterface, [IUnknown](/windows/win32/api/unknwn/nn-unknwn-iunknown) è supportato automaticamente. Ad esempio:

```cpp
class CPrintObj : public CPrintInterface
{
    virtual HRESULT QueryInterface(REFIID iid, void** ppvObj);
    virtual ULONG AddRef();
    virtual ULONG Release();
    virtual void PrintObject();
};
```

Le implementazioni di [AddRef](/windows/win32/api/unknwn/nf-unknwn-iunknown-addref) e [Release](/windows/win32/api/unknwn/nf-unknwn-iunknown-release) sarebbero esattamente le stesse implementate in precedenza. `CPrintObj::QueryInterface` avrà un aspetto simile al seguente:

```cpp
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

Come si può notare, se l'identificatore di interfaccia (IID) viene riconosciuto, viene restituito un puntatore all'oggetto, altrimenti si verifica un errore. Si noti inoltre che un'operazione [QueryInterface](/windows/win32/api/unknwn/nf-unknwn-iunknown-queryinterface(q)) riuscita restituisce un [AddRef](/windows/win32/api/unknwn/nf-unknwn-iunknown-addref)implicito. Naturalmente, sarebbe necessario implementare anche CEditObj::Print. Questo è semplice perché IPrintInterface è derivato direttamente dall'interfaccia [IUnknown](/windows/win32/api/unknwn/nn-unknwn-iunknown) . Tuttavia, se si desidera supportare due interfacce diverse, entrambe derivate da [IUnknown](/windows/win32/api/unknwn/nn-unknwn-iunknown), tenere presente quanto segue:

```cpp
class IEditInterface : public IUnkown
{
public:
    virtual void EditObject() = 0;
};
```

Benché esistano diversi modi per implementare una classe supportando IEditInterface e IPrintInterface, tra cui l'uso dell'ereditarietà multipla di C++, questa nota è incentrata sull'uso di classi annidate per implementare la funzionalità.

```cpp
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

```cpp
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

HRESULT CEditPrintObj::CEditObj::QueryInterface(REFIID iid, void** ppvObj)
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

HRESULT CEditPrintObj::CPrintObj::QueryInterface(REFIID iid, void** ppvObj)
{
    return m_pParent->QueryInterface(iid, ppvObj);
}
```

Si noti che la maggior parte dell'implementazione di [IUnknown](/windows/win32/api/unknwn/nn-unknwn-iunknown) viene posizionata nella classe CEditPrintObj anziché duplicare il codice in CEditPrintObj:: CEditObj e CEditPrintObj:: CPrintObj. In questo modo, si riduce la quantità di codice e si evitano bug. Il punto chiave è che dall'interfaccia IUnknown è possibile chiamare [QueryInterface](/windows/win32/api/unknwn/nf-unknwn-iunknown-queryinterface(q)) per recuperare qualsiasi interfaccia che l'oggetto potrebbe supportare e da ognuna di queste interfacce è possibile eseguire la stessa operazione. Ciò significa che tutte le funzioni [QueryInterface](/windows/win32/api/unknwn/nf-unknwn-iunknown-queryinterface(q)) disponibili da ogni interfaccia devono comportarsi esattamente allo stesso modo. Perché questi oggetti incorporati possano chiamare l'implementazione nell'"oggetto esterno", viene usato un puntatore all'indietro (m_pParent). Il puntatore m_pParent viene inizializzato durante il costruttore CEditPrintObj. È quindi necessario implementare anche CEditPrintObj::CPrintObj::PrintObject e CEditPrintObj::CEditObj::EditObject. È stata inserita una certa quantità di codice per aggiungere una sola funzionalità, ovvero la possibilità di modificare l'oggetto. Fortunatamente, è piuttosto insolito (anche se può succedere) che le interfacce includano una sola funzione membro e, in questo caso, EditObject e PrintObject vengono in genere combinati in una singola interfaccia.

Per uno scenario così semplice, la quantità di codice e le spiegazioni necessarie sono quasi eccessive. Le classi MFC/OLE offrono un'alternativa più facile. L'implementazione MFC usa una tecnica simile al modo in cui viene eseguito il wrapping dei messaggi di Windows con le mappe messaggi. Questa funzionalità è denominata *mappe di interfaccia* ed è illustrata nella sezione successiva.

## <a name="mfc-interface-maps"></a>Mappe dell'interfaccia MFC

MFC/OLE include un'implementazione di "mappe dell'interfaccia" simile alle "mappe messaggi" e alle "mappe di invio" di MFC quanto a concetto ed esecuzione. Le funzionalità di base delle mappe dell'interfaccia di MFC sono le seguenti:

- Implementazione standard di [IUnknown](/windows/win32/api/unknwn/nn-unknwn-iunknown), incorporata nella classe `CCmdTarget`.

- Manutenzione del conteggio dei riferimenti, modificato da [AddRef](/windows/win32/api/unknwn/nf-unknwn-iunknown-addref) e [Release](/windows/win32/api/unknwn/nf-unknwn-iunknown-release)

- Implementazione basata sui dati di [QueryInterface](/windows/win32/api/unknwn/nf-unknwn-iunknown-queryinterface(q))

Le mappe dell'interfaccia supportano anche queste funzionalità avanzate:

- Supporto per la creazione di oggetti COM aggregabili

- Supporto per l'uso di oggetti aggregati nell'implementazione di un oggetto COM

- L'implementazione è associabile ed estendibile

Per ulteriori informazioni sull'aggregazione, vedere l'argomento [aggregazione](/windows/win32/com/aggregation) .

Il supporto delle mappe dell'interfaccia di MFC è radicato nella classe `CCmdTarget`. `CCmdTarget` il conteggio dei riferimenti "*has-a*" e tutte le funzioni membro associate all'implementazione di [IUnknown](/windows/win32/api/unknwn/nn-unknwn-iunknown) (il conteggio dei riferimenti ad esempio è in `CCmdTarget`). Per creare una classe che supporta OLE COM, è necessario derivare una classe da `CCmdTarget` e usare diverse macro e funzioni membro di `CCmdTarget` per implementare le interfacce desiderate. L'implementazione di MFC usa classi annidate per definire l'implementazione di ogni interfaccia in modo molto simile all'esempio precedente. Questa operazione viene resa più semplice con un'implementazione standard di IUnknown e con alcune macro che eliminano parte del codice ripetitivo.

## <a name="interface-map-basics"></a>Nozioni di base sulle mappe dell'interfaccia

### <a name="to-implement-a-class-using-mfcs-interface-maps"></a>Per implementare una classe usando le mappe dell'interfaccia di MFC

1. Derivare una classe direttamente o indirettamente da `CCmdTarget`.

2. Usare la funzione `DECLARE_INTERFACE_MAP` nella definizione della classe derivata.

3. Per ogni interfaccia che si desidera supportare, utilizzare le macro BEGIN_INTERFACE_PART e END_INTERFACE_PART nella definizione della classe.

4. Nel file di implementazione usare le macro BEGIN_INTERFACE_MAP e END_INTERFACE_MAP per definire la mappa dell'interfaccia della classe.

5. Per ogni IID supportato, usare la macro INTERFACE_PART tra le macro BEGIN_INTERFACE_MAP e END_INTERFACE_MAP per eseguire il mapping dell'IID a una "parte" specifica della classe.

6. Implementare ognuna delle classi annidate che rappresentano le interfacce supportate.

7. Utilizzare la macro METHOD_PROLOGUE per accedere all'oggetto padre derivato da `CCmdTarget`.

8. [AddRef](/windows/win32/api/unknwn/nf-unknwn-iunknown-addref), [Release](/windows/win32/api/unknwn/nf-unknwn-iunknown-release)e [QueryInterface](/windows/win32/api/unknwn/nf-unknwn-iunknown-queryinterface(q)) possono delegare all'implementazione `CCmdTarget` di queste funzioni (`ExternalAddRef`, `ExternalRelease`e `ExternalQueryInterface`).

L'esempio di CPrintEditObj precedente potrebbe essere implementato in questo modo:

```cpp
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

La dichiarazione precedente crea una classe derivata da `CCmdTarget`. La DECLARE_INTERFACE_MAP macro indica al Framework che questa classe avrà una mappa dell'interfaccia personalizzata. Inoltre, le macro BEGIN_INTERFACE_PART e END_INTERFACE_PART definiscono le classi annidate, in questo caso con i nomi CEditObj e CPrintObj (la X viene utilizzata solo per distinguere le classi annidate dalle classi globali che iniziano con "C" e le classi di interfaccia che inizia con "I"). Vengono creati due membri annidati di queste classi, rispettivamente m_CEditObj e m_CPrintObj. Le macro dichiarano automaticamente le funzioni [AddRef](/windows/win32/api/unknwn/nf-unknwn-iunknown-addref), [Release](/windows/win32/api/unknwn/nf-unknwn-iunknown-release)e [QueryInterface](/windows/win32/api/unknwn/nf-unknwn-iunknown-queryinterface(q)) ; Pertanto, si dichiarano solo le funzioni specifiche di questa interfaccia: EditObject e PrintObject (la macro OLE STDMETHOD viene utilizzata in modo che **_stdcall** e le parole chiave virtuali vengano fornite come appropriato per la piattaforma di destinazione).

Per implementare la mappa dell'interfaccia per la classe:

```cpp
BEGIN_INTERFACE_MAP(CPrintEditObj, CCmdTarget)
    INTERFACE_PART(CPrintEditObj, IID_IPrintInterface, PrintObj)
    INTERFACE_PART(CPrintEditObj, IID_IEditInterface, EditObj)
END_INTERFACE_MAP()
```

In questo modo, si connette rispettivamente l'IID IID_IPrintInterface a m_CPrintObj e IID_IEditInterface a m_CEditObj. Il `CCmdTarget` implementazione di [QueryInterface](/windows/win32/api/unknwn/nf-unknwn-iunknown-queryinterface(q)) (`CCmdTarget::ExternalQueryInterface`) usa questa mappa per restituire i puntatori a m_CPrintObj e m_CEditObj quando richiesto. Non è necessario includere una voce per `IID_IUnknown`. Il framework userà la prima interfaccia nella mappa, in questo caso m_CPrintObj, quando viene richiesto `IID_IUnknown`.

Anche se la macro BEGIN_INTERFACE_PART ha dichiarato automaticamente le funzioni [AddRef](/windows/win32/api/unknwn/nf-unknwn-iunknown-addref), [Release](/windows/win32/api/unknwn/nf-unknwn-iunknown-release) e [QueryInterface](/windows/win32/api/unknwn/nf-unknwn-iunknown-queryinterface(q)) , è comunque necessario implementarle:

```cpp
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
    REFIID iid,
    void FAR* FAR* ppvObj)
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

L'implementazione per CEditPrintObj::CPrintObj sarà simile alle definizioni indicate sopra per CEditPrintObj::CEditObj. Benché sia possibile creare una macro da usare per generare automaticamente queste funzioni (nello sviluppo MFC/OLE in passato avveniva così), diventa difficile impostare punti di interruzione quando una macro genera più di una riga di codice. Per questo motivo, questo codice viene espanso manualmente.

Se si usa l'implementazione del framework delle mappe messaggi, è necessario eseguire alcune operazioni:

- Implementare QueryInterface

- Implementare AddRef e Release

- Dichiarare uno di questi metodi predefiniti in entrambe le interfacce

Inoltre, il framework usa le mappe messaggi internamente. In questo modo, è possibile derivare da una classe del framework, ad esempio `COleServerDoc`, che supporta già certe interfacce e fornisce sostituzioni o aggiunte per le interfacce specificate dal framework. Questo è possibile perché il framework supporta completamente l'ereditarietà di una mappa dell'interfaccia da una classe base. Questo è il motivo per cui BEGIN_INTERFACE_MAP accetta come secondo parametro il nome della classe di base.

> [!NOTE]
> In genere, non è possibile riusare le implementazioni predefinite di MFC delle interfacce OLE semplicemente ereditando la specializzazione incorporata di tale interfaccia dalla versione MFC. Ciò non è possibile perché l'uso della macro METHOD_PROLOGUE per ottenere l'accesso all'oggetto contenitore derivato da `CCmdTarget`implica un *offset fisso* dell'oggetto incorporato dall'oggetto derivato da `CCmdTarget`. Di conseguenza, ad esempio, non è possibile derivare un oggetto XMyAdviseSink incorporato dall'implementazione di MFC in `COleClientItem::XAdviseSink`, perché XAdviseSink presuppone di trovarsi in corrispondenza di un offset specifico dall'inizio dell'oggetto `COleClientItem`.

> [!NOTE]
> Tuttavia, è possibile delegare all'implementazione MFC per tutte le funzioni che si vuole definire come comportamento predefinito di MFC. A questo scopo, viene usata l'implementazione MFC di `IOleInPlaceFrame` (XOleInPlaceFrame) nella classe `COleFrameHook` (con delega a m_xOleInPlaceUIWindow per molte funzioni). Questa progettazione è stata scelta per ridurre le dimensioni di runtime degli oggetti che implementano molte interfacce ed elimina la necessità di un puntatore all'indietro (ad esempio, nel modo in cui è stato usato m_pParent nella sezione precedente).

### <a name="aggregation-and-interface-maps"></a>Aggregazione e mappe dell'interfaccia

Oltre a supportare oggetti COM autonomi, MFC supporta anche l'aggregazione. L'aggregazione stessa è un argomento troppo complesso da discutere qui. Per ulteriori informazioni sull'aggregazione, vedere l'argomento [aggregazione](/windows/win32/com/aggregation) . Questa nota descriverà semplicemente il supporto per l'aggregazione integrata nel framework e nelle mappe dell'interfaccia.

Esistono due modi per usare l'aggregazione: (1) usando un oggetto COM che supporta l'aggregazione e (2) implementando un oggetto che può essere aggregato da un altro. Queste funzionalità possono essere definite "uso di un oggetto aggregato" e "impostazione di un oggetto come aggregabile". MFC le supporta entrambe.

### <a name="using-an-aggregate-object"></a>Uso di un oggetto aggregato

Per usare un oggetto aggregato, è necessario determinare come associare l'aggregato al meccanismo di QueryInterface. In altre parole, l'oggetto aggregato deve comportarsi come se fosse una parte nativa dell'oggetto. Quindi, in che modo questa operazione viene associata al meccanismo della mappa dell'interfaccia di MFC oltre alla macro INTERFACE_PART, in cui un oggetto annidato viene mappato a un IID, è anche possibile dichiarare un oggetto aggregato come parte della `CCmdTarget` classe derivata. A tale scopo, viene usata la macro INTERFACE_AGGREGATE. In questo modo è possibile specificare una variabile membro (che deve essere un puntatore a un [IUnknown](/windows/win32/api/unknwn/nn-unknwn-iunknown) o a una classe derivata), che deve essere integrata nel meccanismo della mappa dell'interfaccia. Se il puntatore non è NULL quando viene chiamato `CCmdTarget::ExternalQueryInterface`, il Framework chiama automaticamente la funzione membro [QueryInterface](/windows/win32/api/unknwn/nf-unknwn-iunknown-queryinterface(q)) dell'oggetto aggregato, se il `IID` richiesto non è uno dei `IID`nativi supportati dall'oggetto `CCmdTarget` stesso.

#### <a name="to-use-the-interface_aggregate-macro"></a>Per usare la macro INTERFACE_AGGREGATE

1. Dichiarare una variabile membro (`IUnknown*`) che conterrà un puntatore all'oggetto aggregato.

2. Includere una INTERFACE_AGGREGATE macro nella mappa dell'interfaccia, che fa riferimento alla variabile membro in base al nome.

3. A un certo punto (in genere durante `CCmdTarget::OnCreateAggregates`), inizializzare la variabile membro in un oggetto diverso da NULL.

Ad esempio:

```cpp
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

La variabile m_lpAggrInner viene inizializzata nel costruttore in NULL. Il Framework ignora una variabile membro NULL nell'implementazione predefinita di [QueryInterface](/windows/win32/api/unknwn/nf-unknwn-iunknown-queryinterface(q)). `OnCreateAggregates` è un buon punto in cui creare gli oggetti aggregati. Sarà necessario chiamarlo in modo esplicito se l'oggetto viene creato all'esterno dell'implementazione MFC di `COleObjectFactory`. Il motivo per cui creare aggregati in `CCmdTarget::OnCreateAggregates` e quello per cui utilizzare `CCmdTarget::GetControllingUnknown` risulteranno evidenti quando verrà descritta la creazione di oggetti aggregabili.

Questa tecnica fornisce agli oggetti tutte le interfacce supportate dall'oggetto aggregato, insieme alle interfacce native. Se si vuole solo un subset delle interfacce supportate dall'aggregato, è possibile ignorare `CCmdTarget::GetInterfaceHook`. Ciò consente un'hook di basso livello, simile a [QueryInterface](/windows/win32/api/unknwn/nf-unknwn-iunknown-queryinterface(q)). In genere, è preferibile ottenere tutte le interfacce supportate dall'aggregato.

### <a name="making-an-object-implementation-aggregatable"></a>Impostazione dell'implementazione di un oggetto come aggregabile

Affinché un oggetto sia aggregabile, l'implementazione di [AddRef](/windows/win32/api/unknwn/nf-unknwn-iunknown-addref), [Release](/windows/win32/api/unknwn/nf-unknwn-iunknown-release)e [QueryInterface](/windows/win32/api/unknwn/nf-unknwn-iunknown-queryinterface(q)) deve delegare a un "controllo sconosciuto". In altre parole, affinché faccia parte dell'oggetto, deve delegare [AddRef](/windows/win32/api/unknwn/nf-unknwn-iunknown-addref), [Release](/windows/win32/api/unknwn/nf-unknwn-iunknown-release)e [QueryInterface](/windows/win32/api/unknwn/nf-unknwn-iunknown-queryinterface(q)) a un oggetto diverso, anch ' esso derivato da [IUnknown](/windows/win32/api/unknwn/nn-unknwn-iunknown). Questo puntatore "controlling unknown" viene fornito all'oggetto quando questo viene creato, ovvero viene fornito all'implementazione di `COleObjectFactory`. Questa implementazione implica una quantità ridotta di overhead. Poiché questo potrebbe essere un problema, MFC la rende facoltativa. Per fare in modo che un oggetto sia aggregabile, chiamare `CCmdTarget::EnableAggregation` dal costruttore dell'oggetto.

Se l'oggetto usa anche aggregati, è necessario assicurarsi di passare il puntatore "controlling unknown" corretto agli oggetti aggregati. In genere, questo puntatore [IUnknown](/windows/win32/api/unknwn/nn-unknwn-iunknown) viene passato all'oggetto quando viene creata l'aggregazione. Ad esempio, il parametro pUnkOuter è il puntatore "controlling unknown" per gli oggetti creati con `CoCreateInstance`. Il puntatore "controlling unknown" corretto può essere recuperato chiamando `CCmdTarget::GetControllingUnknown`. Il valore restituito dalla funzione, tuttavia, non è valido durante il costruttore. Per questo motivo, è consigliabile creare gli aggregati solo in un override di `CCmdTarget::OnCreateAggregates`, in cui il valore restituito da `GetControllingUnknown` è affidabile, anche se creato dall'implementazione di `COleObjectFactory`.

È anche importante che l'oggetto modifichi il conteggio dei riferimenti corretto durante l'aggiunta o il rilascio di conteggi dei riferimenti artificiali. Per assicurarsi che sia questo il caso, chiamare sempre `ExternalAddRef` e `ExternalRelease` invece di `InternalRelease` e `InternalAddRef`. È raro chiamare `InternalRelease` o `InternalAddRef` in una classe che supporta l'aggregazione.

## <a name="reference-material"></a>Materiale di riferimento

L'utilizzo avanzato di OLE, ad esempio per la definizione di interfacce personalizzate o l'override dell'implementazione del framework delle interfacce OLE, richiede l'uso del meccanismo della mappa dell'interfaccia sottostante.

Questa sezione descrive ogni macro e le API usate per implementare queste funzionalità avanzate.

### <a name="ccmdtargetenableaggregation--function-description"></a>CCmdTarget::EnableAggregation: descrizione della funzione

```cpp
void EnableAggregation();
```

#### <a name="remarks"></a>Note

Chiamare questa funzione nel costruttore della classe derivata se si vuole supportare l'aggregazione OLE per oggetti di questo tipo. Questa funzione prepara una speciale implementazione di IUnknown necessaria per gli oggetti aggregabili.

### <a name="ccmdtargetexternalqueryinterface--function-description"></a>CCmdTarget::ExternalQueryInterface: descrizione della funzione

```cpp
DWORD ExternalQueryInterface(
    const void FAR* lpIID,
    LPVOIDFAR* ppvObj
);
```

#### <a name="parameters"></a>Parametri

*lpIID*<br/>
Puntatore far a un IID (primo argomento per QueryInterface)

*ppvObj*<br/>
Puntatore a IUnknown* (secondo argomento per QueryInterface)

#### <a name="remarks"></a>Note

Chiamare questa funzione nell'implementazione di IUnknown per ogni interfaccia implementata dalla classe. Questa funzione fornisce l'implementazione basata sui dati standard di QueryInterface in base alla mappa dell'interfaccia dell'oggetto. È necessario eseguire il cast del valore restituito in HRESULT. Se l'oggetto è aggregato, questa funzione chiamerà l'interfaccia "IUnknown di controllo" invece di usare la mappa dell'interfaccia locale.

### <a name="ccmdtargetexternaladdref--function-description"></a>CCmdTarget::ExternalAddRef: descrizione della funzione

```cpp
DWORD ExternalAddRef();
```

#### <a name="remarks"></a>Note

Chiamare questa funzione nell'implementazione di IUnknown::AddRef per ogni interfaccia implementata dalla classe. Il valore restituito è il nuovo conteggio dei riferimenti nell'oggetto CCmdTarget. Se l'oggetto è aggregato, questa funzione chiama l'interfaccia "IUnknown di controllo" invece di modificare il conteggio dei riferimenti locale.

### <a name="ccmdtargetexternalrelease--function-description"></a>CCmdTarget::ExternalRelease: descrizione della funzione

```cpp
DWORD ExternalRelease();
```

#### <a name="remarks"></a>Note

Chiamare questa funzione nell'implementazione di IUnknown::Release per ogni interfaccia implementata dalla classe. Il valore restituito indica il nuovo conteggio dei riferimenti nell'oggetto. Se l'oggetto è aggregato, questa funzione chiama l'interfaccia "IUnknown di controllo" invece di modificare il conteggio dei riferimenti locale.

### <a name="declare_interface_map--macro-description"></a>DECLARE_INTERFACE_MAP: descrizione della macro

```cpp
DECLARE_INTERFACE_MAP
```

#### <a name="remarks"></a>Note

Usare questa macro in qualsiasi classe derivata da `CCmdTarget` che avrà una mappa dell'interfaccia. Utilizzato in modo molto simile a DECLARE_MESSAGE_MAP. La chiamata di questa macro deve essere inserita nella definizione della classe, in genere nel file di intestazione (con estensione H). Una classe con DECLARE_INTERFACE_MAP deve definire la mappa dell'interfaccia nel file di implementazione (. CPP) con le macro BEGIN_INTERFACE_MAP e END_INTERFACE_MAP.

### <a name="begin_interface_part-and-end_interface_part--macro-descriptions"></a>BEGIN_INTERFACE_PART e END_INTERFACE_PART: descrizioni delle macro

```cpp
BEGIN_INTERFACE_PART(localClass, iface);
END_INTERFACE_PART(localClass)
```

#### <a name="parameters"></a>Parametri

*localClass*<br/>
Nome della classe che implementa l'interfaccia

*iface*<br/>
Nome dell'interfaccia implementata dalla classe

#### <a name="remarks"></a>Note

Per ogni interfaccia che sarà implementata dalla classe, è necessario disporre di una coppia BEGIN_INTERFACE_PART e END_INTERFACE_PART. Queste macro definiscono una classe locale derivata dall'interfaccia OLE specificata, nonché una variabile membro incorporata della classe. I membri [AddRef](/windows/win32/api/unknwn/nf-unknwn-iunknown-addref), [Release](/windows/win32/api/unknwn/nf-unknwn-iunknown-release)e [QueryInterface](/windows/win32/api/unknwn/nf-unknwn-iunknown-queryinterface(q)) sono dichiarati automaticamente. È necessario includere le dichiarazioni per le altre funzioni membro che fanno parte dell'interfaccia implementata (tali dichiarazioni vengono inserite tra le macro BEGIN_INTERFACE_PART e END_INTERFACE_PART).

L'argomento *iface* è l'interfaccia OLE che si desidera implementare, ad esempio `IAdviseSink`o `IPersistStorage` (o un'interfaccia personalizzata).

L'argomento *localClass* è il nome della classe locale che verrà definita. Al nome verrà anteposta automaticamente una "X". Questa convenzione di denominazione viene usata per evitare conflitti con le classi globali che hanno lo stesso nome. Inoltre, il nome del membro incorporato, uguale al nome *localClass* , ad eccezione del fatto che è preceduto da' m_x '.

Ad esempio:

```cpp
BEGIN_INTERFACE_PART(MyAdviseSink, IAdviseSink)
    STDMETHOD_(void, OnDataChange)(LPFORMATETC, LPSTGMEDIUM);
    STDMETHOD_(void, OnViewChange)(DWORD, LONG);
    STDMETHOD_(void, OnRename)(LPMONIKER);
    STDMETHOD_(void, OnSave)();
    STDMETHOD_(void, OnClose)();
END_INTERFACE_PART(MyAdviseSink)
```

definisce una classe locale chiamata XMyAdviseSink e derivata da IAdviseSink e un membro della classe in cui questa viene dichiarata, chiamato m_xMyAdviseSink.

> [!NOTE]
> Le righe che iniziano con `STDMETHOD`_ vengono essenzialmente copiate da OLE2. H e modificati leggermente. La copia di queste righe da OLE2.H può ridurre gli errori difficili da risolvere.

### <a name="begin_interface_map-and-end_interface_map--macro-descriptions"></a>BEGIN_INTERFACE_MAP e END_INTERFACE_MAP: descrizioni delle macro

```cpp
BEGIN_INTERFACE_MAP(theClass, baseClass)
END_INTERFACE_MAP
```

#### <a name="parameters"></a>Parametri

*theClass*<br/>
Classe in cui deve essere definita la mappa dell'interfaccia

*baseClass*<br/>
Classe da cui deriva *theClass* .

#### <a name="remarks"></a>Note

Le macro BEGIN_INTERFACE_MAP e END_INTERFACE_MAP vengono usate nel file di implementazione per definire effettivamente la mappa dell'interfaccia. Per ogni interfaccia implementata è presente una o più chiamate INTERFACE_PART macro. Per ogni aggregazione utilizzata dalla classe, esiste una chiamata INTERFACE_AGGREGATE macro.

### <a name="interface_part--macro-description"></a>INTERFACE_PART: descrizione della macro

```cpp
INTERFACE_PART(theClass, iid, localClass)
```

#### <a name="parameters"></a>Parametri

*theClass*<br/>
Nome della classe che contiene la mappa dell'interfaccia.

*iid*<br/>
`IID` di cui eseguire il mapping alla classe incorporata.

*localClass*<br/>
Nome della classe locale (meno la "X").

#### <a name="remarks"></a>Note

Questa macro viene utilizzata tra la macro BEGIN_INTERFACE_MAP e la macro END_INTERFACE_MAP per ogni interfaccia che verrà supportata dall'oggetto. Consente di eseguire il mapping di un IID a un membro della classe indicata da *theClass* e *localClass*. ' M_x ' verrà aggiunto automaticamente a *localClass* . Si noti che a un singolo membro possono essere associati più `IID`. Questo comportamento è molto utile quando si implementa solo un'interfaccia "più derivata" e si vuole fornire anche tutte le interfacce intermedie. Un esempio valido è l'interfaccia `IOleInPlaceFrameWindow`. La gerarchia ha questo aspetto:

```Hierarchy
IUnknown
    IOleWindow
        IOleUIWindow
            IOleInPlaceFrameWindow
```

Se un oggetto implementa `IOleInPlaceFrameWindow`, un client può `QueryInterface` su una di queste interfacce: `IOleUIWindow`, `IOleWindow`o [IUnknown](/windows/win32/api/unknwn/nn-unknwn-iunknown), oltre all'interfaccia "più derivata" `IOleInPlaceFrameWindow` (quella che si sta effettivamente implementando). Per gestire questa operazione, è possibile usare più di una macro di INTERFACE_PART per eseguire il mapping di ogni interfaccia di base all'interfaccia `IOleInPlaceFrameWindow`:

Nel file di definizione della classe:

```cpp
BEGIN_INTERFACE_PART(CMyFrameWindow, IOleInPlaceFrameWindow)
```

Nel file di implementazione della classe:

```cpp
BEGIN_INTERFACE_MAP(CMyWnd, CFrameWnd)
    INTERFACE_PART(CMyWnd, IID_IOleWindow, MyFrameWindow)
    INTERFACE_PART(CMyWnd, IID_IOleUIWindow, MyFrameWindow)
    INTERFACE_PART(CMyWnd, IID_IOleInPlaceFrameWindow, MyFrameWindow)
END_INTERFACE_MAP
```

Il framework si occupa di IUnknown perché è sempre obbligatorio.

### <a name="interface_part--macro-description"></a>INTERFACE_PART: descrizione della macro

```cpp
INTERFACE_AGGREGATE(theClass, theAggr)
```

#### <a name="parameters"></a>Parametri

*theClass*<br/>
Nome della classe che contiene la mappa dell'interfaccia.

*theAggr*<br/>
Nome della variabile membro che deve essere aggregata.

#### <a name="remarks"></a>Note

Questa macro viene usata per indicare al framework che la classe usa un oggetto aggregato. Deve comparire tra le macro BEGIN_INTERFACE_PART e END_INTERFACE_PART. Un oggetto aggregato è un oggetto separato, derivato da [IUnknown](/windows/win32/api/unknwn/nn-unknwn-iunknown). Utilizzando un'aggregazione e la macro INTERFACE_AGGREGATE, è possibile fare in modo che tutte le interfacce supportate dall'aggregazione risultino direttamente supportate dall'oggetto. L'argomento *theAggr* è semplicemente il nome di una variabile membro della classe derivata da [IUnknown](/windows/win32/api/unknwn/nn-unknwn-iunknown) , direttamente o indirettamente. Tutte le macro di INTERFACE_AGGREGATE devono seguire le macro INTERFACE_PART quando vengono inserite in una mappa dell'interfaccia.

## <a name="see-also"></a>Vedere anche

[Note tecniche per numero](../mfc/technical-notes-by-number.md)<br/>
[Note tecniche per categoria](../mfc/technical-notes-by-category.md)
