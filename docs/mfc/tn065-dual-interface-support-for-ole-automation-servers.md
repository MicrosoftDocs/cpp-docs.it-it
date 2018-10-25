---
title: 'TN065: Supporto di interfaccia duale per i server di automazione OLE | Microsoft Docs'
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
ms.openlocfilehash: c079201b92b6eaf3ef372bf04ab4785598c3b2bf
ms.sourcegitcommit: a9dcbcc85b4c28eed280d8e451c494a00d8c4c25
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/25/2018
ms.locfileid: "50053968"
---
# <a name="tn065-dual-interface-support-for-ole-automation-servers"></a>TN065: supporto di interfaccia duale per i server di automazione OLE

> [!NOTE]
> La seguente nota tecnica non è stata aggiornata da quando è stata inclusa per la prima volta nella documentazione online. Di conseguenza, alcune procedure e argomenti potrebbero essere non aggiornati o errati. Per le informazioni più recenti, è consigliabile cercare l'argomento di interesse nell'indice della documentazione online.

Questa nota descrive come aggiungere il supporto di interfaccia duale a un'applicazione server basata su MFC di automazione OLE. Il [ACDUAL](../visual-cpp-samples.md) esempio viene illustrato il supporto di interfaccia duale e il codice di esempio in questa nota è tratto da ACDUAL. Le macro descritte in questa nota, ad esempio DECLARE_DUAL_ERRORINFO DUAL_ERRORINFO_PART e IMPLEMENT_DUAL_ERRORINFO, fanno parte dell'esempio ACDUAL e sono reperibili in MFCDUAL. H.

## <a name="dual-interfaces"></a>Interfacce duali

Sebbene l'automazione OLE consentono di implementare un `IDispatch` interfaccia, un'interfaccia VTBL o un'interfaccia duale (che comprende entrambi), Microsoft consiglia di implementare le interfacce duali per tutti gli oggetti di automazione OLE esposti. Interfacce duali presentano vantaggi significativi in `IDispatch`-VTBL-only o sole interfacce:

- Associazione può avvenire in fase di compilazione tramite l'interfaccia VTBL o in fase di esecuzione tramite `IDispatch`.

- I controller di automazione OLE che possono usare l'interfaccia VTBL possono trarre beneficio dalle prestazioni migliorate.

- Controller di automazione OLE esistenti che usano il `IDispatch` interfaccia continueranno a funzionare.

- L'interfaccia VTBL è più semplice chiamare da C++.

- Interfacce duali sono necessari per la compatibilità con le funzionalità di supporto di Visual Basic oggetto.

## <a name="adding-dual-interface-support-to-a-ccmdtarget-based-class"></a>Aggiunta del supporto di interfaccia duale a una classe basata su CCmdTarget

Un'interfaccia duale è semplicemente un'interfaccia personalizzata derivata da `IDispatch`. Il modo più semplice per implementare il supporto di interfaccia duale in un `CCmdTarget`-classe di base deve prima implementare l'invio della normale interfaccia nella classe dell'utilizzo di MFC e ClassWizard, quindi aggiungere l'interfaccia personalizzata in un secondo momento. Nella maggior parte, l'implementazione dell'interfaccia personalizzata delegano semplicemente tornare a MFC `IDispatch` implementazione.

In primo luogo, modificare il file ODL per il server per definire le interfacce duali per gli oggetti. Per definire un'interfaccia duale, è necessario utilizzare un'istruzione di interfaccia, anziché il `DISPINTERFACE` istruzione che generano le procedure guidate di Visual C++. Anziché rimuovere esistente `DISPINTERFACE` istruzione, aggiungere una nuova istruzione di interfaccia. Grazie al mantenimento di `DISPINTERFACE` form, è possibile continuare a usare ClassWizard per aggiungere proprietà e metodi per l'oggetto, ma è necessario aggiungere i metodi e proprietà equivalenti per l'istruzione di interfaccia.

Un'istruzione di interfaccia per un'interfaccia duale deve avere il *OLEAUTOMATION* e *DUALE* gli attributi e l'interfaccia deve derivare da `IDispatch`. È possibile usare la [GUIDGEN](../visual-cpp-samples.md) esempio di creare un **IID** per interfaccia duale:

```IDL
[ uuid(0BDD0E81-0DD7-11cf-BBA8-444553540000), // IID_IDualAClick
    oleautomation,
    dual
]
interface IDualAClick : IDispatch
    {
    };
```

Dopo aver creato l'istruzione interfaccia posto, iniziare ad aggiungere voci per i metodi e proprietà. Per le interfacce duali, è necessario riorganizzare gli elenchi di parametri in modo che i metodi e funzioni di accesso di proprietà nell'interfaccia duale restituiscono un **HRESULT** e passare i valori restituiti come parametri con gli attributi `[retval,out]`. Tenere presente che per le proprietà, è necessario aggiungere sia un'operazione di lettura (`propget`) e la scrittura (`propput`) accedere a una funzione con lo stesso id. Ad esempio:

```IDL
[propput, id(1)] HRESULT text([in] BSTR newText);
[propget, id(1)] HRESULT text([out, retval] BSTR* retval);
```

Dopo aver definita i metodi e proprietà, è necessario aggiungere un riferimento all'istruzione interfaccia nell'istruzione coclasse. Ad esempio:

```IDL
[ uuid(4B115281-32F0-11cf-AC85-444553540000) ]
coclass Document
{
    dispinterface IAClick;
    [default] interface IDualAClick;
};
```

Dopo aver aggiornato il file ODL, usare il meccanismo della mappa dell'interfaccia di MFC per definire una classe di implementazione per l'interfaccia duale nella classe di oggetto e verificare le voci corrispondenti in MFC `QueryInterface` meccanismo. Necessaria una voce nel `INTERFACE_PART` blocco per ogni voce nel rapporto dell'interfaccia del ODL, più le voci per un'interfaccia di dispatch. Ogni voce ODL con il *propput* attributo necessita di una funzione denominata `put_propertyname`. Ogni voce con la *propget* attributo necessita di una funzione denominata `get_propertyname`.

Per definire una classe di implementazione per l'interfaccia duale, aggiungere un `DUAL_INTERFACE_PART` blocco alla definizione di classe oggetto. Ad esempio:

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

Per connettere l'interfaccia duale di MFC [QueryInterface](/windows/desktop/com/queryinterface--navigating-in-an-object) meccanismo, aggiungere un `INTERFACE_PART` voce alla mappa dell'interfaccia:

```cpp
BEGIN_INTERFACE_MAP(CAutoClickDoc, CDocument)
    INTERFACE_PART(CAutoClickDoc, DIID_IAClick, Dispatch)
    INTERFACE_PART(CAutoClickDoc, IID_IDualAClick, DualAClick)
END_INTERFACE_MAP()
```

Successivamente, è necessario specificare l'implementazione dell'interfaccia. Nella maggior parte, sarà in grado di delegare a MFC esistente `IDispatch` implementazione. Ad esempio:

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

Per i metodi e le funzioni di accesso di proprietà dell'oggetto, è necessario specificare l'implementazione. Le funzioni di metodi e le proprietà in genere possono delegare ai metodi generati mediante la creazione guidata classe. Tuttavia, se impostano proprietà per accedere alle variabili direttamente, è necessario scrivere il codice per get/put il valore nella variabile. Ad esempio:

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

Passando il puntatore di interfaccia duale non è affatto semplice, specialmente se è necessario chiamare `CCmdTarget::FromIDispatch`. `FromIDispatch` funziona solo su MFC `IDispatch` puntatori. È un modo per risolvere questo problema in cui cercare originale `IDispatch` puntatore set up da MFC e passare il puntatore a funzioni che ne hanno necessità. Ad esempio:

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

Prima di passare un puntatore tramite il metodo di interfaccia duale, potrebbe essere necessario convertirlo da MFC `IDispatch` puntatore per il puntatore di interfaccia duale. Ad esempio:

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

Creazione guidata applicazioni non genera codice per registrare una libreria dei tipi dell'applicazione di un server OLE Automation con il sistema. Anche se esistono altri modi per registrare la libreria dei tipi, è consigliabile che l'applicazione di registrare la libreria dei tipi quando si effettua l'aggiornamento delle informazioni sul tipo relative OLE, vale a dire, ogni volta che viene eseguita l'applicazione autonoma.

Per registrare fungere autonomamente da libreria dei tipi dell'applicazione ogni volta che viene eseguita l'applicazione:

- Includere AFXCTL. H di standard include file di intestazione STDAFX. H, per accedere alla definizione del `AfxOleRegisterTypeLib` (funzione).

- All'interno dell'applicazione `InitInstance` funzionare, individuare la chiamata a `COleObjectFactory::UpdateRegistryAll`. In seguito a questa chiamata, aggiungere una chiamata a `AfxOleRegisterTypeLib`, specificando le **LIBID** corrispondente a libreria dei tipi, insieme al nome della libreria dei tipi:

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

## <a name="modifying-project-build-settings-to-accommodate-type-library-changes"></a>Modifica delle impostazioni di compilazione progetto per supportare le modifiche di tipo raccolta

Per modificare le impostazioni di compilazione di un progetto in modo che un file di intestazione contenente **UUID** definizioni generato da MkTypLib ogni volta che viene ricompilata la libreria dei tipi:

1. Nel **compilare** menu, fare clic su **impostazioni**e quindi selezionare il file ODL dall'elenco dei file per ogni configurazione.

2. Fare clic sul **i tipi OLE** scheda e specificare un nome di file nei **intestazione Output** campo filename. Utilizzare un nome di file che non è già usato dal progetto, in quanto MkTypLib sovrascriverà tutti i file esistenti. Fare clic su **OK** per chiudere la **Build Settings** nella finestra di dialogo.

Per aggiungere il **UUID** definizioni dal file di intestazione generato MkTypLib al progetto:

1. Includere MkTypLib-generato dal file di intestazione di standard include file di intestazione STDAFX. H.

2. Creare un nuovo file, INITIIDS. CPP e aggiungerlo al progetto. In questo file, includere il file di intestazione generato MkTypLib dopo avere incluso OLE2. H e INITGUID. H:

    ```cpp
    // initIIDs.c: defines IIDs for dual interfaces
    // This must not be built with precompiled header.
    #include <ole2.h>
    #include <initguid.h>
    #include "acdual.h"
    ```

3. Nel **compilare** menu, fare clic su **impostazioni**e quindi selezionare INITIIDS. CPP nell'elenco di file per ogni configurazione.

4. Scegliere il **C++** scheda, fare clic sulla categoria **intestazioni precompilate**e selezionare il **senza intestazioni precompilate** pulsante di opzione. Fare clic su OK per chiudere la **Build Settings** nella finestra di dialogo.

## <a name="specifying-the-correct-object-class-name-in-the-type-library"></a>Specifica il nome della classe oggetto appropriato nella libreria dei tipi

Le procedure guidate fornite con Visual C++ in modo non corretto utilizzano il nome di classe di implementazione per specificare la coclasse nel file ODL del server per le classi OLE generabile. Sebbene funzioni, il nome di classe di implementazione è probabilmente non si desidera che gli utenti dell'oggetto da utilizzare il nome della classe. Per specificare il nome corretto, aprire il file ODL, individuare ogni istruzione (coclasse) e sostituire il nome di classe di implementazione con il nome esterno corretto.

Si noti che quando viene modificata l'istruzione (coclasse), i nomi delle variabili di **CLSID**s nel file di intestazione generato MkTypLib cambierà di conseguenza. È necessario aggiornare il codice per usare i nuovi nomi di variabile.

## <a name="handling-exceptions-and-the-automation-error-interfaces"></a>Gestione delle eccezioni e le interfacce di errore di automazione

I metodi e le funzioni di accesso di proprietà dell'oggetto di automazione possono generare eccezioni. Se, pertanto, è necessario gestirle nell'implementazione dell'interfaccia duale e passare le informazioni sull'eccezione al controller tramite l'interfaccia di gestione degli errori di automazione OLE, `IErrorInfo`. Questa interfaccia fornisce per informazioni sugli errori contestuali e dettagliati tramite entrambi `IDispatch` e interfacce VTBL. Per indicare che un gestore degli errori è disponibile, è necessario implementare il `ISupportErrorInfo` interfaccia.

Per illustrare il meccanismo di gestione degli errori, si supponga che le funzioni generate ClassWizard usate per implementare il supporto di invio standard generano eccezioni. Dell'implementazione MFC dei `IDispatch::Invoke` in genere rileva queste eccezioni e li converte in una struttura EXCEPTINFO che viene restituita tramite la `Invoke` chiamare. Tuttavia, quando viene usata l'interfaccia VTBL, si è responsabili per intercettare le eccezioni se stessi. Ad esempio di proteggere i metodi di interfaccia duale:

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

`CATCH_ALL_DUAL` si occupa di restituire il codice di errore corretto quando si verifica un'eccezione. `CATCH_ALL_DUAL` Converte un'eccezione di MFC in informazioni di gestione degli errori di automazione OLE utilizzando la `ICreateErrorInfo` interfaccia. (Ad esempio `CATCH_ALL_DUAL` macro è disponibile nel file MFCDUAL. H nel [ACDUAL](../visual-cpp-samples.md) esempio. La funzione chiama per gestire le eccezioni, `DualHandleException`, si trova nel file MFCDUAL. . CPP) `CATCH_ALL_DUAL` determina il codice di errore da restituire in base al tipo di eccezione che si sono verificati:

- [COleDispatchException](../mfc/reference/coledispatchexception-class.md) : In questo caso, `HRESULT` viene costruita usando il codice seguente:

    ```cpp
    hr = MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, (e->m_wCode + 0x200));
    ```

   Verrà creato un `HRESULT` specifiche per l'interfaccia che ha causato l'eccezione. Il codice di errore viene diminuito di 0x200 per evitare eventuali conflitti con definito dal sistema `HRESULT`s per le interfacce OLE standard.

- [CMemoryException](../mfc/reference/cmemoryexception-class.md) : In questo caso, `E_OUTOFMEMORY` viene restituito.

- Qualsiasi altra eccezione: In questo caso, `E_UNEXPECTED` viene restituito.

Per indicare che il gestore degli errori di automazione OLE è usato, è consigliabile implementare anche il `ISupportErrorInfo` interfaccia.

In primo luogo, aggiungere codice alla definizione della classe di automazione per mostrare che supporta `ISupportErrorInfo`.

In secondo luogo, aggiungere codice alla mappa dell'interfaccia della classe dell'automazione per associare il `ISupportErrorInfo` classe di implementazione con MFC `QueryInterface` meccanismo. Il `INTERFACE_PART` istruzione corrisponde alla classe definita per `ISupportErrorInfo`.

Infine, implementa la classe definita per supportare `ISupportErrorInfo`.

(Il [ACDUAL](../visual-cpp-samples.md) esempio contiene tre macro per la gestione di questi tre passaggi `DECLARE_DUAL_ERRORINFO`, `DUAL_ERRORINFO_PART`, e `IMPLEMENT_DUAL_ERRORINFO`tutti i contenuti negli MFCDUAL. H.)

L'esempio seguente implementa una classe definita per il supporto `ISupportErrorInfo`. `CAutoClickDoc` è il nome della classe di automazione e `IID_IDualAClick` è il **IID** per l'interfaccia che rappresenta l'origine degli errori segnalati tramite l'oggetto errore di automazione OLE:

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

[Note tecniche per numero](../mfc/technical-notes-by-number.md)<br/>
[Note tecniche per categoria](../mfc/technical-notes-by-category.md)
