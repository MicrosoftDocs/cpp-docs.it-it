---
title: 'TN065: Supporto di interfaccia duale per i server di automazione OLE | Documenti Microsoft'
ms.custom: ''
ms.date: 06/28/2018
ms.technology:
- cpp-mfc
ms.topic: conceptual
f1_keywords:
- vc.ole
dev_langs:
- C++
helpviewer_keywords:
- dual interfaces [MFC], OLE Automation
- TN065 [MFC]
- ACDUAL sample [MFC]
- Automation servers [MFC], dual-interface support
ms.assetid: b5c8ed09-2f7f-483c-80fc-2a47ad896063
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: e30be46aeab92f63f1b4cba593cda52bf9aeef9a
ms.sourcegitcommit: 208d445fd7ea202de1d372d3f468e784e77bd666
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/29/2018
ms.locfileid: "37122183"
---
# <a name="tn065-dual-interface-support-for-ole-automation-servers"></a>TN065: supporto di interfaccia duale per i server di automazione OLE

> [!NOTE]
> La seguente nota tecnica non è stata aggiornata da quando è stata inclusa per la prima volta nella documentazione online. Di conseguenza, alcune procedure e argomenti potrebbero essere non aggiornati o errati. Per le informazioni più recenti, è consigliabile cercare l'argomento di interesse nell'indice della documentazione online.

In questa nota viene descritto come aggiungere il supporto di interfaccia duale a un'applicazione server basata su MFC di automazione OLE. Il [ACDUAL](../visual-cpp-samples.md) esempio viene illustrato il supporto di interfaccia duale e codice di esempio in questa nota viene eseguito da ACDUAL. Le macro descritte in questa nota, ad esempio DECLARE_DUAL_ERRORINFO, DUAL_ERRORINFO_PART e IMPLEMENT_DUAL_ERRORINFO, fanno parte dell'esempio ACDUAL e sono reperibili MFCDUAL. H.

## <a name="dual-interfaces"></a>Interfacce duali

Benché l'automazione OLE consentono di implementare un `IDispatch` interfaccia, un'interfaccia VTBL o un'interfaccia duale (che include entrambi), Microsoft consiglia di implementare le interfacce duali per tutti gli oggetti di automazione OLE esposti. Interfacce duali presentano vantaggi significativi in `IDispatch`- o VTBL sola sole interfacce:

- Associazione può avvenire in fase di compilazione tramite l'interfaccia VTBL o in fase di esecuzione tramite `IDispatch`.

- I controller di automazione OLE che è possono utilizzare l'interfaccia VTBL può risultare vantaggioso miglioramento delle prestazioni.

- Controller di automazione OLE esistenti che utilizzano il `IDispatch` interfaccia continueranno a funzionare correttamente.

- L'interfaccia VTBL è più facile da chiamare da C++.

- Interfacce duali sono necessari per la compatibilità con le funzionalità di supporto di Visual Basic oggetto.

## <a name="adding-dual-interface-support-to-a-ccmdtarget-based-class"></a>Aggiunta del supporto di interfaccia duale per una classe basata su CCmdTarget

Un'interfaccia duale è semplicemente un'interfaccia personalizzata derivata da `IDispatch`. Il modo più semplice per implementare il supporto di interfaccia duale in un `CCmdTarget`-classe di base consiste nel primo implementare l'invio della normale interfaccia nella classe utilizzando ClassWizard e MFC, quindi aggiungere l'interfaccia personalizzata in un secondo momento. Nella maggior parte, l'implementazione personalizzata dell'interfaccia verrà semplicemente delegato nuovamente l'operazione MFC `IDispatch` implementazione.

In primo luogo, modificare il file ODL per il server definire le interfacce duali per gli oggetti. Per definire un'interfaccia duale, è necessario utilizzare un'istruzione di interfaccia, anziché il `DISPINTERFACE` istruzione che generano le procedure guidate di Visual C++. Anziché rimuovere esistente `DISPINTERFACE` istruzione, aggiungere un nuovo rapporto di interfaccia. Mantenendo il `DISPINTERFACE` form, è possibile continuare a utilizzare ClassWizard per aggiungere proprietà e metodi all'oggetto, ma è necessario aggiungere i metodi e proprietà equivalenti all'istruzione di interfaccia.

Un'istruzione di interfaccia per un'interfaccia duale deve avere il *OLEAUTOMATION* e *DUALE* gli attributi e l'interfaccia deve essere derivato da `IDispatch`. È possibile usare il [GUIDGEN](../visual-cpp-samples.md) esempio per creare un **IID** per l'interfaccia duale:

```IDL
[ uuid(0BDD0E81-0DD7-11cf-BBA8-444553540000), // IID_IDualAClick
    oleautomation,
    dual
]
interface IDualAClick : IDispatch
    {
    };
```

Dopo aver creato l'istruzione interfaccia posto, avviare l'aggiunta di voci per i metodi e proprietà. Per le interfacce duali, è necessario per ridisporre elenchi di parametri in modo che i metodi e funzioni di accesso di proprietà nell'interfaccia duale restituiscano un **HRESULT** e passare i valori restituiti come parametri con gli attributi `[retval,out]`. Tenere presente che per le proprietà, è necessario aggiungere entrambi una lettura (`propget`) e la scrittura (`propput`) accedere a funzione con lo stesso id. Ad esempio:

```IDL
[propput, id(1)] HRESULT text([in] BSTR newText);
[propget, id(1)] HRESULT text([out, retval] BSTR* retval);
```

Dopo aver definite i metodi e proprietà, è necessario aggiungere un riferimento all'istruzione interfaccia nell'istruzione coclasse. Ad esempio:

```IDL
[ uuid(4B115281-32F0-11cf-AC85-444553540000) ]
coclass Document
{
    dispinterface IAClick;
    [default] interface IDualAClick;
};
```

Una volta aggiornato il file ODL, utilizzare meccanismo della mappa dell'interfaccia di MFC consente di definire una classe di implementazione per l'interfaccia duale nella classe di oggetto e stabilire le voci corrispondenti MFC `QueryInterface` meccanismo. È necessario una voce di `INTERFACE_PART` blocco per ogni voce nel rapporto dell'interfaccia del ODL, oltre alle voci per un'interfaccia dispatch. Ogni voce ODL con il *propput* attributo richiede una funzione denominata `put_propertyname`. Ogni voce con la *propget* attributo richiede una funzione denominata `get_propertyname`.

Per definire una classe di implementazione per l'interfaccia duale, aggiungere un `DUAL_INTERFACE_PART` blocco alla definizione della classe di oggetto. Ad esempio:

```cpp
BEGIN_DUAL_INTERFACE_PART(DualAClick, IDualAClick)
    STDMETHOD(put_text)(THIS_ BSTR newText);
    STDMETHOD(get_text)(THIS_ BSTR FAR* retval);
    STDMETHOD(put_x)(THIS_ short newX);
    STDMETHOD(get_x)(THIS_ short FAR* retval);
    STDMETHOD(put_y)(THIS_ short newY);
    STDMETHOD(get_y)(THIS_ short FAR* retval);
    STDMETHOD(put_Position)(THIS_ IDualAutoClickPoint FAR* newPosition);
    STDMETHOD(get_Position)(THIS_ IDualAutoClickPoint FAR* FAR* retval);
    STDMETHOD(RefreshWindow)(THIS);
    STDMETHOD(SetAllProps)(THIS_ short x, short y, BSTR text);
    STDMETHOD(ShowWindow)(THIS);
END_DUAL_INTERFACE_PART(DualAClick)
```

Per connettere l'interfaccia duale per MFC [QueryInterface](http://msdn.microsoft.com/library/windows/desktop/ms687230) meccanismo, aggiungere un `INTERFACE_PART` voce alla mappa dell'interfaccia:

```cpp
BEGIN_INTERFACE_MAP(CAutoClickDoc, CDocument)
    INTERFACE_PART(CAutoClickDoc, DIID_IAClick, Dispatch)
    INTERFACE_PART(CAutoClickDoc, IID_IDualAClick, DualAClick)
END_INTERFACE_MAP()
```

Successivamente, è necessario compilare l'implementazione dell'interfaccia. Nella maggior parte, sarà possibile delegare MFC esistente `IDispatch` implementazione. Ad esempio:

```cpp
STDMETHODIMP_(ULONG) CAutoClickDoc::XDualAClick::AddRef()
{
    METHOD_PROLOGUE(CAutoClickDoc, DualAClick)
    return pThis->ExternalAddRef();
}

STDMETHODIMP_(ULONG) CAutoClickDoc::XDualAClick::Release()
{
    METHOD_PROLOGUE(CAutoClickDoc, DualAClick)
    return pThis->ExternalRelease();
}

STDMETHODIMP CAutoClickDoc::XDualAClick::QueryInterface(
    REFIID iid,
    LPVOID* ppvObj)
{
    METHOD_PROLOGUE(CAutoClickDoc, DualAClick)
    return pThis->ExternalQueryInterface(&iid, ppvObj);
}

STDMETHODIMP CAutoClickDoc::XDualAClick::GetTypeInfoCount(
    UINT FAR* pctinfo)
{
    METHOD_PROLOGUE(CAutoClickDoc, DualAClick)
    LPDISPATCH lpDispatch = pThis->GetIDispatch(FALSE);
    ASSERT(lpDispatch != NULL);
    return lpDispatch->GetTypeInfoCount(pctinfo);
}

STDMETHODIMP CAutoClickDoc::XDualAClick::GetTypeInfo(
    UINT itinfo,
    LCID lcid,
    ITypeInfo FAR* FAR* pptinfo)
{
    METHOD_PROLOGUE(CAutoClickDoc, DualAClick)
    LPDISPATCH lpDispatch = pThis->GetIDispatch(FALSE);
    ASSERT(lpDispatch != NULL);

    return lpDispatch->GetTypeInfo(itinfo, lcid, pptinfo);
}

STDMETHODIMP CAutoClickDoc::XDualAClick::GetIDsOfNames(
    REFIID riid,
    OLECHAR FAR* FAR* rgszNames,
    UINT cNames,
    LCID lcid,
    DISPID FAR* rgdispid)
{
    METHOD_PROLOGUE(CAutoClickDoc, DualAClick)
    LPDISPATCH lpDispatch = pThis->GetIDispatch(FALSE);
    ASSERT(lpDispatch != NULL);

    return lpDispatch->GetIDsOfNames(riid, rgszNames, cNames, lcid, rgdispid);
}

STDMETHODIMP CAutoClickDoc::XDualAClick::Invoke(
    DISPID dispidMember,
    REFIID riid,
    LCID lcid,
    WORD wFlags,
    DISPPARAMS FAR* pdispparams,
    VARIANT FAR* pvarResult,
    EXCEPINFO FAR* pexcepinfo,
    UINT FAR* puArgErr)
{
    METHOD_PROLOGUE(CAutoClickDoc, DualAClick)
    LPDISPATCH lpDispatch = pThis->GetIDispatch(FALSE);
    ASSERT(lpDispatch != NULL);

    return lpDispatch->Invoke(dispidMember, riid, lcid,
        wFlags, pdispparams, pvarResult, pexcepinfo, puArgErr);
}
```

Per i metodi e le funzioni di accesso di proprietà dell'oggetto, è necessario compilare l'implementazione. Le funzioni di metodo e proprietà in genere possono delegare Torna ai metodi generati mediante la creazione guidata classe. Tuttavia, se impostano proprietà per accedere alle variabili direttamente, è necessario scrivere il codice per recuperare e inserire il valore nella variabile. Ad esempio:

```cpp
STDMETHODIMP CAutoClickDoc::XDualAClick::put_text(BSTR newText)
{
    METHOD_PROLOGUE(CAutoClickDoc, DualAClick)
    // MFC automatically converts from Unicode BSTR to
    // Ansi CString, if necessary...
    pThis->m_str = newText;
    return NOERROR;
}

STDMETHODIMP CAutoClickDoc::XDualAClick::get_text(BSTR* retval)
{
    METHOD_PROLOGUE(CAutoClickDoc, DualAClick)
    // MFC automatically converts from Ansi CString to
    // Unicode BSTR, if necessary...
    pThis->m_str.SetSysString(retval);
    return NOERROR;
}
```

## <a name="passing-dual-interface-pointers"></a>Passando i puntatori di interfaccia duale

Se si passa il puntatore di interfaccia duale non è semplice, soprattutto se è necessario chiamare `CCmdTarget::FromIDispatch`. `FromIDispatch` funziona solo su MFC `IDispatch` puntatori. È un modo per risolvere il problema eseguire query relative a originale `IDispatch` puntatore set up da MFC e passare tale puntatore alle funzioni che ne hanno necessità. Ad esempio:

```
STDMETHODIMP CAutoClickDoc::XDualAClick::put_Position(
    IDualAutoClickPoint FAR* newPosition)
{
    METHOD_PROLOGUE(CAutoClickDoc, DualAClick)
    LPDISPATCH lpDisp = NULL;
    newPosition->QueryInterface(IID_IDispatch, (LPVOID*)&lpDisp);
    pThis->SetPosition(lpDisp);
    lpDisp->Release();
    return NOERROR;
}
```

Prima di passare un puntatore tramite il metodo di interfaccia duale, può accadere di dover convertire da MFC `IDispatch` puntatore per il puntatore di interfaccia duale. Ad esempio:

```
STDMETHODIMP CAutoClickDoc::XDualAClick::get_Position(
    IDualAutoClickPoint FAR* FAR* retval)
{
    METHOD_PROLOGUE(CAutoClickDoc, DualAClick)
    LPDISPATCH lpDisp;
    lpDisp = pThis->GetPosition();
    lpDisp->QueryInterface(IID_IDualAutoClickPoint, (LPVOID*)retval);
    return NOERROR;
}
```

## <a name="registering-the-applications-type-library"></a>La registrazione libreria dei tipi dell'applicazione

La creazione guidata applicazione non genera codice per registrare una libreria dei tipi dell'applicazione di un server OLE Automation con il sistema. Sebbene ci siano altri modi per registrare la libreria dei tipi, è consigliabile impostare l'applicazione di registrare la libreria dei tipi quando si effettua l'aggiornamento delle informazioni sul relativo tipo OLE, vale a dire, ogni volta che viene eseguita l'applicazione autonoma.

Per registrare fungere autonomamente da libreria dei tipi dell'applicazione ogni volta che viene eseguita l'applicazione:

- Includere AFXCTL. H nello standard include file di intestazione STDAFX. H, per accedere alla definizione del `AfxOleRegisterTypeLib` (funzione).

- In un'applicazione `InitInstance` funzione, individuare la chiamata a `COleObjectFactory::UpdateRegistryAll`. In seguito a questa chiamata, aggiungere una chiamata a `AfxOleRegisterTypeLib`, specificando il **LIBID** corrispondente per la libreria dei tipi, insieme al nome della libreria dei tipi:

    ```cpp
    // When a server application is launched stand-alone, it is a good idea
    // to update the system registry in case it has been damaged.
    m_server.UpdateRegistry(OAT_DISPATCH_OBJECT);

    COleObjectFactory::UpdateRegistryAll();

    // DUAL_SUPPORT_START
        // Make sure the type library is registered or dual interface won't work.
        AfxOleRegisterTypeLib(AfxGetInstanceHandle(),
            LIBID_ACDual,
            _T("AutoClik.TLB"));
    // DUAL_SUPPORT_END
    ```

## <a name="modifying-project-build-settings-to-accommodate-type-library-changes"></a>Modifica delle impostazioni di compilazione progetto per supportare le modifiche di tipo libreria

Per modificare le impostazioni di compilazione di un progetto in modo che un file di intestazione contenente **UUID** definizioni viene generato da MkTypLib ogni volta che viene ricompilata la libreria dei tipi:

1. Nel **compilare** menu, fare clic su **impostazioni**e quindi selezionare il file ODL dall'elenco dei file per ogni configurazione.

2. Fare clic sui **i tipi OLE** scheda e specificare un nome di file nel **intestazione Output** campo filename. Utilizzare un nome di file che non è già utilizzato dal progetto, poiché qualsiasi file esistente verrà sovrascritto MkTypLib. Fare clic su **OK** per chiudere la **Build Settings** finestra di dialogo.

Per aggiungere la **UUID** definizioni dal file di intestazione generato MkTypLib al progetto:

1. Includere MkTypLib-generato dal file di intestazione nello standard include file di intestazione STDAFX. H.

2. Creare un nuovo file, INITIIDS. CPP e aggiungerlo al progetto. In questo file, includere il file di intestazione generato MkTypLib dopo l'inclusione OLE2. H e INITGUID. H:

    ```cpp
    // initIIDs.c: defines IIDs for dual interfaces
    // This must not be built with precompiled header.
    #include <ole2.h>
    #include <initguid.h>
    #include "acdual.h"
    ```

3. Nel **compilare** menu, fare clic su **impostazioni**e quindi selezionare INITIIDS. CPP nell'elenco di file per ogni configurazione.

4. Fare clic sui **C++** scheda, fare clic sulla categoria **intestazioni precompilate**e selezionare il **senza intestazioni precompilate** pulsante di opzione. Fare clic su OK per chiudere la **Build Settings** finestra di dialogo.

## <a name="specifying-the-correct-object-class-name-in-the-type-library"></a>Specifica il nome della classe oggetto corretto nella libreria dei tipi

Le procedure guidate fornite con Visual C++ in modo non corretto utilizzano il nome di classe di implementazione per specificare la coclasse nel file ODL del server per le classi OLE creabile. Durante questa impostazione funziona, il nome di classe di implementazione è probabilmente non si desidera che gli utenti dell'oggetto da utilizzare il nome della classe. Per specificare il nome corretto, aprire il file ODL, individuare ogni istruzione coclasse e sostituire il nome di classe di implementazione con il nome esterno corretto.

Si noti che quando l'istruzione coclasse viene modificato, i nomi delle variabili di **CLSID**s nel file di intestazione generato MkTypLib verrà modificata di conseguenza. È necessario aggiornare il codice per utilizzare i nuovi nomi di variabile.

## <a name="handling-exceptions-and-the-automation-error-interfaces"></a>Gestione delle eccezioni e le interfacce di errore di automazione

I metodi e le funzioni di accesso di proprietà dell'oggetto di automazione possono generare eccezioni. Se in tal caso, è necessario gestirli nell'implementazione dell'interfaccia duale e passare informazioni sull'eccezione al controller tramite l'interfaccia di gestione degli errori di automazione OLE, `IErrorInfo`. Questa interfaccia fornisce informazioni di errore dettagliato, contestuale tramite entrambi `IDispatch` e le interfacce VTBL. Per indicare che un gestore degli errori è disponibile, è necessario implementare la `ISupportErrorInfo` interfaccia.

Per illustrare il meccanismo di gestione degli errori, si supponga che le funzioni generate ClassWizard permette di implementare il supporto di distribuzione standard non generano eccezioni. Dell'implementazione MFC dei `IDispatch::Invoke` in genere intercetta le eccezioni e li converte in una struttura EXCEPTINFO che viene eseguita tramite il `Invoke` chiamare. Tuttavia, quando viene utilizzata l'interfaccia VTBL, è responsabile per intercettare le eccezioni manualmente. Ecco un esempio di protezione dei metodi di interfaccia duale.

```cpp
STDMETHODIMP CAutoClickDoc::XDualAClick::put_text(BSTR newText)
{
    METHOD_PROLOGUE(CAutoClickDoc, DualAClick)
    TRY_DUAL(IID_IDualAClick)
    {
        // MFC automatically converts from Unicode BSTR to
        // Ansi CString, if necessary...
        pThis->m_str = newText;
        return NOERROR;
    }
    CATCH_ALL_DUAL
}
```

`CATCH_ALL_DUAL` si occupa di restituire il codice di errore corretto quando si verifica un'eccezione. `CATCH_ALL_DUAL` Converte un'eccezione di MFC in informazioni di gestione degli errori di automazione OLE utilizzando il `ICreateErrorInfo` interfaccia. (Ad esempio `CATCH_ALL_DUAL` macro è disponibile nel file MFCDUAL. H nel [ACDUAL](../visual-cpp-samples.md) esempio. La funzione viene chiamato per gestire le eccezioni, `DualHandleException`, si trova nel file MFCDUAL. CPP). `CATCH_ALL_DUAL` determina il codice di errore da restituire in base al tipo di eccezione che si sono verificati:

- [COleDispatchException](../mfc/reference/coledispatchexception-class.md) - In questo caso, `HRESULT` viene costruita usando il codice seguente:

    ```cpp
    hr = MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, (e->m_wCode + 0x200));
    ```

     Verrà creato un `HRESULT` specifiche per l'interfaccia che ha causato l'eccezione. Il codice di errore è diminuito 0x200 per evitare eventuali conflitti con definita dal sistema `HRESULT`s per le interfacce OLE standard.

- [CMemoryException](../mfc/reference/cmemoryexception-class.md) - In questo caso, `E_OUTOFMEMORY` viene restituito.

- Qualsiasi altra eccezione - In questo caso, `E_UNEXPECTED` viene restituito.

Per indicare che il gestore degli errori di automazione OLE viene utilizzato, è inoltre necessario implementare la `ISupportErrorInfo` interfaccia.

In primo luogo, aggiungere codice alla definizione della classe di automazione per mostrare supporta `ISupportErrorInfo`.

In secondo luogo, aggiungere codice alla mappa dell'interfaccia della classe dell'automazione per associare il `ISupportErrorInfo` classe di implementazione con MFC `QueryInterface` meccanismo. Il `INTERFACE_PART` istruzione corrisponde alla classe definita per `ISupportErrorInfo`.

Infine, implementano la classe definita per il supporto `ISupportErrorInfo`.

(Il [ACDUAL](../visual-cpp-samples.md) esempio contiene tre macro consentono di eseguire questi tre passaggi `DECLARE_DUAL_ERRORINFO`, `DUAL_ERRORINFO_PART`, e `IMPLEMENT_DUAL_ERRORINFO`, tutti i contenuti in MFCDUAL. H.)

Nell'esempio seguente implementa una classe definita per il supporto `ISupportErrorInfo`. `CAutoClickDoc` è il nome della classe di automazione e `IID_IDualAClick` è il **IID** per l'interfaccia che rappresenta l'origine degli errori segnalati tramite l'oggetto errore di automazione OLE:

```cpp
STDMETHODIMP_(ULONG) CAutoClickDoc::XSupportErrorInfo::AddRef()
{
    METHOD_PROLOGUE(CAutoClickDoc, SupportErrorInfo)
    return pThis->ExternalAddRef();
}

STDMETHODIMP_(ULONG) CAutoClickDoc::XSupportErrorInfo::Release()
{
    METHOD_PROLOGUE(CAutoClickDoc, SupportErrorInfo)
    return pThis->ExternalRelease();
}

STDMETHODIMP CAutoClickDoc::XSupportErrorInfo::QueryInterface(
    REFIID iid,
    LPVOID* ppvObj)
{
    METHOD_PROLOGUE(CAutoClickDoc, SupportErrorInfo)
    return pThis->ExternalQueryInterface(&iid, ppvObj);
}

STDMETHODIMP CAutoClickDoc::XSupportErrorInfo::InterfaceSupportsErrorInfo(
    REFIID iid)
{
    METHOD_PROLOGUE(CAutoClickDoc, SupportErrorInfo)
    return (iid == IID_IDualAClick) S_OK : S_FALSE;
}
```

## <a name="see-also"></a>Vedere anche

[Note tecniche per numero](../mfc/technical-notes-by-number.md)  
[Note tecniche per categoria](../mfc/technical-notes-by-category.md)  
