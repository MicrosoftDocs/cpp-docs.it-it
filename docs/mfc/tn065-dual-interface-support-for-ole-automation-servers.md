---
description: 'Altre informazioni su: TN065: supporto Dual-Interface per i server di automazione OLE'
title: 'TN065: supporto di interfaccia duale per i server di automazione OLE'
ms.date: 06/28/2018
f1_keywords:
- vc.ole
helpviewer_keywords:
- dual interfaces [MFC], OLE Automation
- TN065 [MFC]
- ACDUAL sample [MFC]
- Automation servers [MFC], dual-interface support
ms.assetid: b5c8ed09-2f7f-483c-80fc-2a47ad896063
ms.openlocfilehash: 9add7b42c832944c10b4b607f26b6ca8f23ae300
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97214572"
---
# <a name="tn065-dual-interface-support-for-ole-automation-servers"></a>TN065: supporto di interfaccia duale per i server di automazione OLE

> [!NOTE]
> La seguente nota tecnica non è stata aggiornata da quando è stata inclusa per la prima volta nella documentazione online. Di conseguenza, alcune procedure e argomenti potrebbero essere non aggiornati o errati. Per le informazioni più recenti, è consigliabile cercare l'argomento di interesse nell'indice della documentazione online.

In questa nota viene illustrato come aggiungere il supporto Dual Interface a un'applicazione server di automazione OLE basata su MFC. L'esempio [ACDual](../overview/visual-cpp-samples.md) illustra il supporto dell'interfaccia duale e il codice di esempio in questa nota viene tratto da ACDUAL. Le macro descritte in questa nota, ad esempio DECLARE_DUAL_ERRORINFO, DUAL_ERRORINFO_PART e IMPLEMENT_DUAL_ERRORINFO, fanno parte dell'esempio ACDUAL ed è possibile trovarle in MFCDUAL. H.

## <a name="dual-interfaces"></a>Interfacce doppie

Sebbene l'automazione OLE consenta di implementare un'interfaccia `IDispatch` , un'interfaccia VTBL o una doppia interfaccia (che comprende entrambe), Microsoft consiglia di implementare interfacce duali per tutti gli oggetti di automazione OLE esposti. Le interfacce duali offrono vantaggi significativi rispetto alle `IDispatch` interfacce solo VTBL o solo per le interfacce:

- L'associazione può essere eseguita in fase di compilazione tramite l'interfaccia VTBL oppure in fase di esecuzione tramite `IDispatch` .

- I controller di automazione OLE che possono usare l'interfaccia VTBL possono trarre vantaggio dalle migliori prestazioni.

- I controller di automazione OLE esistenti che utilizzano l'interfaccia continueranno `IDispatch` a funzionare.

- L'interfaccia VTBL è più facile da chiamare da C++.

- Per la compatibilità con Visual Basic funzionalità di supporto degli oggetti, sono necessarie interfacce doppie.

## <a name="adding-dual-interface-support-to-a-ccmdtarget-based-class"></a>Aggiunta del supporto Dual-Interface a una classe CCmdTarget-Based

Una doppia interfaccia è in realtà solo un'interfaccia personalizzata derivata da `IDispatch` . Il modo più semplice per implementare il supporto Dual Interface in una `CCmdTarget` classe basata su consiste nel implementare prima di tutto la normale interfaccia dispatch sulla classe usando MFC e ClassWizard, quindi aggiungere l'interfaccia personalizzata in un secondo momento. Nella maggior parte dei casi, l'implementazione dell'interfaccia personalizzata delegherà semplicemente all' `IDispatch` implementazione MFC.

In primo luogo, modificare il file di FAD per il server per definire interfacce doppie per gli oggetti. Per definire un'interfaccia duale, è necessario utilizzare un'istruzione di interfaccia, anziché l' `DISPINTERFACE` istruzione generata dalle procedure guidate Visual C++. Anziché rimuovere l'istruzione esistente `DISPINTERFACE` , aggiungere una nuova istruzione Interface. Mantenendo il `DISPINTERFACE` modulo, è possibile continuare a usare ClassWizard per aggiungere proprietà e metodi all'oggetto, ma è necessario aggiungere le proprietà e i metodi equivalenti all'istruzione di interfaccia.

Un'istruzione di interfaccia per un'interfaccia duale deve avere gli attributi *oleautomation* e *Dual* e l'interfaccia deve essere derivata da `IDispatch` . Per creare un **IID** per l'interfaccia duale, è possibile usare l'esempio [Guidgen](../overview/visual-cpp-samples.md) :

```IDL
[ uuid(0BDD0E81-0DD7-11cf-BBA8-444553540000), // IID_IDualAClick
    oleautomation,
    dual
]
interface IDualAClick : IDispatch
    {
    };
```

Una volta eseguita l'istruzione Interface, iniziare ad aggiungere le voci per i metodi e le proprietà. Per le interfacce duali, è necessario ridisporre gli elenchi di parametri in modo che i metodi e le funzioni di accesso alle proprietà nell'interfaccia doppia restituiscano un **HRESULT** e passino i valori restituiti come parametri con gli attributi `[retval,out]` . Tenere presente che, per le proprietà, sarà necessario aggiungere una funzione di `propget` accesso Read () e Write ( `propput` ) con lo stesso ID. Per esempio:

```IDL
[propput, id(1)] HRESULT text([in] BSTR newText);
[propget, id(1)] HRESULT text([out, retval] BSTR* retval);
```

Dopo aver definito i metodi e le proprietà, è necessario aggiungere un riferimento all'istruzione Interface nell'istruzione coclass. Ad esempio:

```IDL
[ uuid(4B115281-32F0-11cf-AC85-444553540000) ]
coclass Document
{
    dispinterface IAClick;
    [default] interface IDualAClick;
};
```

Al termine dell'aggiornamento del file FAD, utilizzare il meccanismo di mappa dell'interfaccia di MFC per definire una classe di implementazione per l'interfaccia duale nella classe di oggetti e creare le voci corrispondenti nel meccanismo di MFC `QueryInterface` . È necessaria una voce nel `INTERFACE_PART` blocco per ogni voce nell'istruzione di interfaccia di FAD, più le voci per un'interfaccia dispatch. Per ogni voce della funzione con l'attributo *propput* è necessaria una funzione denominata `put_propertyname` . Ogni voce con l'attributo *propget* necessita di una funzione denominata `get_propertyname` .

Per definire una classe di implementazione per l'interfaccia duale, aggiungere un `DUAL_INTERFACE_PART` blocco alla definizione della classe dell'oggetto. Ad esempio:

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

Per connettere l'interfaccia duale al meccanismo [QueryInterface](/windows/win32/com/queryinterface--navigating-in-an-object) di MFC, aggiungere una `INTERFACE_PART` voce alla mappa dell'interfaccia:

```cpp
BEGIN_INTERFACE_MAP(CAutoClickDoc, CDocument)
    INTERFACE_PART(CAutoClickDoc, DIID_IAClick, Dispatch)
    INTERFACE_PART(CAutoClickDoc, IID_IDualAClick, DualAClick)
END_INTERFACE_MAP()
```

Successivamente, è necessario compilare l'implementazione dell'interfaccia. Nella maggior parte dei casi sarà possibile delegare all'implementazione MFC esistente `IDispatch` . Ad esempio:

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

Per i metodi e le funzioni della funzione di accesso alle proprietà dell'oggetto, è necessario compilare l'implementazione. Il metodo e le funzioni di proprietà in genere possono delegare nuovamente ai metodi generati usando ClassWizard. Tuttavia, se si impostano le proprietà per accedere direttamente alle variabili, è necessario scrivere il codice per ottenere/inserire il valore nella variabile. Ad esempio:

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

## <a name="passing-dual-interface-pointers"></a>Passaggio di puntatori Dual-Interface

Il passaggio del puntatore a doppia interfaccia non è semplice, specialmente se è necessario chiamare `CCmdTarget::FromIDispatch` . `FromIDispatch` funziona solo sui `IDispatch` puntatori di MFC. Un modo per aggirare questo problema consiste nell'eseguire una query per il `IDispatch` puntatore originale impostato da MFC e passare tale puntatore alle funzioni che lo richiedono. Ad esempio:

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

Prima di passare un puntatore tramite il metodo Dual Interface, potrebbe essere necessario convertirlo dal `IDispatch` puntatore MFC al puntatore a doppia interfaccia. Ad esempio:

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

## <a name="registering-the-applications-type-library"></a>Registrazione della libreria dei tipi dell'applicazione

Creazione guidata applicazioni non genera codice per la registrazione di una libreria dei tipi di applicazione server di automazione OLE con il sistema. Sebbene esistano altri modi per registrare la libreria dei tipi, è opportuno che l'applicazione registri la libreria dei tipi durante l'aggiornamento delle relative informazioni sul tipo OLE, ovvero ogni volta che l'applicazione viene eseguita autonomamente.

Per registrare la libreria dei tipi dell'applicazione ogni volta che l'applicazione viene eseguita autonomamente:

- Includi AFXCTL. H nel file di intestazione standard include, STDAFX. H, per accedere alla definizione della `AfxOleRegisterTypeLib` funzione.

- Nella funzione dell'applicazione `InitInstance` individuare la chiamata a `COleObjectFactory::UpdateRegistryAll` . Dopo questa chiamata, aggiungere una chiamata a `AfxOleRegisterTypeLib` , specificando il **LIBID** corrispondente alla libreria dei tipi, insieme al nome della libreria dei tipi:

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

## <a name="modifying-project-build-settings-to-accommodate-type-library-changes"></a>Modifica delle impostazioni di compilazione del progetto per supportare le modifiche alla libreria di tipi

Per modificare le impostazioni di compilazione di un progetto in modo che un file di intestazione contenente definizioni **UUID** venga generato da MkTypLib ogni volta che la libreria dei tipi viene ricompilata:

1. Nel menu **Compila** fare clic su **Impostazioni** e quindi selezionare il file con estensione per ogni configurazione.

2. Fare clic sulla scheda **tipi OLE** e specificare un nome file nel campo nome file **intestazione output** . Usare un nome di file non già usato dal progetto, perché MkTypLib sovrascriverà qualsiasi file esistente. Fare clic su **OK** per chiudere la finestra di dialogo **impostazioni di compilazione** .

Per aggiungere le definizioni **UUID** dal file di intestazione generato da MkTypLib al progetto:

1. Includere il file di intestazione generato da MkTypLib nel file di intestazione standard includes, *stdafx. h*.

2. Creare un nuovo file, INITIIDS. CPP e aggiungerlo al progetto. In questo file, includere il file di intestazione generato da MkTypLib dopo aver incluso OLE2. H e INITGUID. H

    ```cpp
    // initIIDs.c: defines IIDs for dual interfaces
    // This must not be built with precompiled header.
    #include <ole2.h>
    #include <initguid.h>
    #include "acdual.h"
    ```

3. Scegliere **Impostazioni** dal menu **Compila** e quindi selezionare INITIIDS. CPP dall'elenco di file per ogni configurazione.

4. Fare clic sulla scheda **C++** , fare clic su categoria **intestazioni precompilate** e selezionare il pulsante di opzione **non utilizzare intestazioni precompilate** . Fare clic su OK per chiudere la finestra di dialogo **impostazioni di compilazione** .

## <a name="specifying-the-correct-object-class-name-in-the-type-library"></a>Specifica del nome della classe di oggetti corretta nella libreria dei tipi

Le procedure guidate fornite con Visual C++ usano erroneamente il nome della classe di implementazione per specificare la coclasse nel file a cui è possibile creare le classi OLE generabili nel server. Sebbene questo funzionerà, il nome della classe di implementazione probabilmente non è il nome della classe che si desidera venga utilizzato dagli utenti dell'oggetto. Per specificare il nome corretto, aprire il file FAD, individuare ogni istruzione coclass e sostituire il nome della classe di implementazione con il nome esterno corretto.

Si noti che quando viene modificata l'istruzione coclass, i nomi delle variabili di **CLSID** nel file di intestazione generato da MkTypLib vengono modificati di conseguenza. Sarà necessario aggiornare il codice per usare i nuovi nomi di variabile.

## <a name="handling-exceptions-and-the-automation-error-interfaces"></a>Gestione delle eccezioni e delle interfacce degli errori di automazione

I metodi e le funzioni di accesso alle proprietà dell'oggetto di automazione possono generare eccezioni. In tal caso, è necessario gestirli nell'implementazione a doppia interfaccia e passare le informazioni sull'eccezione al controller tramite l'interfaccia di gestione degli errori di automazione OLE `IErrorInfo` . Questa interfaccia fornisce informazioni dettagliate sugli errori contestuali tramite `IDispatch` le interfacce e VTBL. Per indicare che è disponibile un gestore errori, è necessario implementare l' `ISupportErrorInfo` interfaccia.

Per illustrare il meccanismo di gestione degli errori, si supponga che le funzioni generate da ClassWizard utilizzate per implementare il supporto di invio standard generino eccezioni. L'implementazione di MFC di `IDispatch::Invoke` in genere intercetta queste eccezioni e le converte in una struttura EXCEPTINFO restituita tramite la `Invoke` chiamata. Tuttavia, quando si usa l'interfaccia VTBL, l'utente è responsabile di intercettare le eccezioni. Come esempio di protezione dei metodi di interfaccia duale:

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

`CATCH_ALL_DUAL` si occupa della restituzione del codice di errore corretto quando si verifica un'eccezione. `CATCH_ALL_DUAL` Converte un'eccezione MFC in informazioni sulla gestione degli errori di automazione OLE mediante l' `ICreateErrorInfo` interfaccia. Una `CATCH_ALL_DUAL` macro di esempio si trova nel file MFCDUAL. H nell'esempio [ACDual](../overview/visual-cpp-samples.md) . La funzione che chiama per gestire le eccezioni, `DualHandleException` , si trova nel file MFCDUAL. CPP.) `CATCH_ALL_DUAL` determina il codice di errore da restituire in base al tipo di eccezione che si è verificata:

- [COleDispatchException](../mfc/reference/coledispatchexception-class.md) : in questo caso, `HRESULT` viene costruito usando il codice seguente:

    ```cpp
    hr = MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, (e->m_wCode + 0x200));
    ```

   In questo modo viene creato un oggetto `HRESULT` specifico per l'interfaccia che ha causato l'eccezione. Il codice di errore viene sfalsato da 0x200 per evitare conflitti con `HRESULT` i per le interfacce OLE standard definite dal sistema.

- [CMemoryException](../mfc/reference/cmemoryexception-class.md) , in questo caso, `E_OUTOFMEMORY` viene restituito.

- Qualsiasi altra eccezione, in questo caso, `E_UNEXPECTED` viene restituito.

Per indicare che viene utilizzato il gestore degli errori di automazione OLE, è necessario implementare anche l' `ISupportErrorInfo` interfaccia.

Per prima cosa, aggiungere il codice alla definizione della classe di automazione per mostrarne il supporto `ISupportErrorInfo` .

In secondo luogo, aggiungere il codice alla mappa dell'interfaccia della classe di automazione per associare la `ISupportErrorInfo` classe di implementazione al meccanismo di MFC `QueryInterface` . L' `INTERFACE_PART` istruzione corrisponde alla classe definita per `ISupportErrorInfo` .

Infine, implementare la classe definita per supportare `ISupportErrorInfo` .

L'esempio [ACDual](../overview/visual-cpp-samples.md) contiene tre macro che consentono di eseguire questi tre passaggi, `DECLARE_DUAL_ERRORINFO` , `DUAL_ERRORINFO_PART` e `IMPLEMENT_DUAL_ERRORINFO` , tutti contenuti in MFCDUAL. H.

Nell'esempio seguente viene implementata una classe definita per supportare `ISupportErrorInfo` . `CAutoClickDoc` è il nome della classe di automazione ed `IID_IDualAClick` è l' **IID** per l'interfaccia che rappresenta l'origine degli errori segnalati tramite l'oggetto errore di automazione OLE:

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

## <a name="see-also"></a>Vedi anche

[Note tecniche per numero](../mfc/technical-notes-by-number.md)<br/>
[Note tecniche per categoria](../mfc/technical-notes-by-category.md)
