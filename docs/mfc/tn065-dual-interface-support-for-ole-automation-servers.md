---
title: 'TN065: Supporto di interfaccia duale per i server di automazione OLE | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: vc.ole
dev_langs: C++
helpviewer_keywords:
- dual interfaces [MFC], OLE Automation
- TN065 [MFC]
- ACDUAL sample [MFC]
- Automation servers [MFC], dual-interface support
ms.assetid: b5c8ed09-2f7f-483c-80fc-2a47ad896063
caps.latest.revision: "11"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 959938be27e66a765ee0ae9e5aef9b3c1f1aed6f
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="tn065-dual-interface-support-for-ole-automation-servers"></a>TN065: supporto di interfaccia duale per i server di automazione OLE
> [!NOTE]
>  La seguente nota tecnica non è stata aggiornata da quando è stata inclusa per la prima volta nella documentazione online. Di conseguenza, alcune procedure e argomenti potrebbero essere non aggiornati o errati. Per le informazioni più recenti, è consigliabile cercare l'argomento di interesse nell'indice della documentazione online.  
  
 Questa nota viene descritto come aggiungere il supporto di interfaccia duale a un'applicazione server basata su MFC di automazione OLE. Il [ACDUAL](../visual-cpp-samples.md) esempio viene illustrato il supporto di interfaccia duale e codice di esempio in questa nota viene eseguito da ACDUAL. Le macro descritte in questa nota, ad esempio `DECLARE_DUAL_ERRORINFO`, `DUAL_ERRORINFO_PART`, e `IMPLEMENT_DUAL_ERRORINFO`, fanno parte dell'esempio ACDUAL e possono trovarsi in MFCDUAL. H.  
  
## <a name="dual-interfaces"></a>Interfacce duali  
 Benché l'automazione OLE consentono di implementare un `IDispatch` interfaccia, un'interfaccia VTBL o un'interfaccia duale (che include entrambi), Microsoft consiglia di implementare le interfacce duali per tutti gli oggetti di automazione OLE di esposto. Interfacce duali presentano vantaggi significativi in `IDispatch`- o VTBL sola sole interfacce:  
  
-   Associazione possa avvenire in fase di compilazione tramite l'interfaccia VTBL o in fase di esecuzione tramite `IDispatch`.  
  
-   I controller di automazione OLE che è possono utilizzare l'interfaccia VTBL possono trarre vantaggio dalle prestazioni più elevate.  
  
-   Controller di automazione OLE esistenti che utilizzano il `IDispatch` interfaccia continueranno a funzionare.  
  
-   L'interfaccia VTBL è più semplice da chiamare da C++.  
  
-   Interfacce duali sono necessari per la compatibilità con le funzionalità di supporto di Visual Basic oggetto.  
  
## <a name="adding-dual-interface-support-to-a-ccmdtarget-based-class"></a>Aggiunta del supporto di interfaccia duale per una classe basata su CCmdTarget  
 Un'interfaccia duale è semplicemente un'interfaccia personalizzata derivata da `IDispatch`. Il modo più semplice per implementare il supporto di interfaccia duale in un `CCmdTarget`-classe di base è l'implementazione prima l'invio della normale interfaccia nella classe utilizzando ClassWizard e MFC, quindi aggiungere l'interfaccia personalizzata in un secondo momento. La maggior parte, l'implementazione personalizzata dell'interfaccia delegano semplicemente al MFC `IDispatch` implementazione.  
  
 In primo luogo, modificare il file ODL per il server definire le interfacce duali per gli oggetti. Per definire un'interfaccia duale, è necessario utilizzare un'istruzione di interfaccia, anziché il `DISPINTERFACE` istruzione che generano le procedure guidate di Visual C++. Anziché rimuovere esistente `DISPINTERFACE` istruzione, aggiungere una nuova dichiarazione di interfaccia. Mantenendo il `DISPINTERFACE` modulo, è possibile continuare a utilizzare ClassWizard per aggiungere proprietà e metodi per l'oggetto, ma è necessario aggiungere le proprietà equivalenti e i metodi per l'istruzione di interfaccia.  
  
 Un'istruzione di interfaccia per un'interfaccia duale deve avere il **OLEAUTOMATION** e **DUAL** gli attributi e l'interfaccia deve essere derivato da `IDispatch`. È possibile utilizzare il [GUIDGEN](../visual-cpp-samples.md) esempio per creare un **IID** per l'interfaccia duale:  
  
```  
[ uuid(0BDD0E81-0DD7-11cf-BBA8-444553540000), // IID_IDualAClick  
    oleautomation, 
    dual 
]  
interface IDualAClick : IDispatch  
 {  
 };  
```  
  
 Dopo aver creato l'istruzione interface sul posto, avviare l'aggiunta di voci per i metodi e proprietà. Per le interfacce duali, è necessario per ridisporre gli elenchi di parametri in modo che i metodi e funzioni di accesso delle proprietà nell'interfaccia duale restituiscano un `HRESULT` e passare i valori restituiti come parametri con gli attributi `[retval,out]`. Tenere presente che per le proprietà, è necessario aggiungere entrambi una lettura (`propget`) e la scrittura (`propput`) accedere a una funzione con lo stesso id. Ad esempio:  
  
```  
[propput,
    id(1)] HRESULT text([in] BSTR newText);

[propget,
    id(1)] HRESULT text([out,
    retval] BSTR* retval);
```  
  
 Dopo aver definite i metodi e proprietà, è necessario aggiungere un riferimento all'istruzione interfaccia nell'istruzione coclasse. Ad esempio:  
  
```  
[ uuid(4B115281-32F0-11cf-AC85-444553540000) ]  
coclass Document  
{  
    dispinterface IAClick;  
 [default] interface IDualAClick;  
};  
```  
  
 Una volta aggiornato il file ODL, utilizzare meccanismo della mappa dell'interfaccia di MFC consente di definire una classe di implementazione per l'interfaccia duale nella classe di oggetto e stabilire le voci corrispondenti MFC `QueryInterface` meccanismo. È necessario una voce di `INTERFACE_PART` blocco per ogni voce nell'istruzione di interfaccia del ODL, nonché le voci per un'interfaccia dispatch. Ogni voce ODL con il **propput** attributo richiede una funzione denominata `put_propertyname`. Ogni voce con la **propget** attributo richiede una funzione denominata `get_propertyname`.  
  
 Per definire una classe di implementazione per l'interfaccia duale, aggiungere un `DUAL_INTERFACE_PART` blocco alla definizione della classe di oggetto. Ad esempio:  
  
```  
BEGIN_DUAL_INTERFACE_PART(DualAClick,
    IDualAClick)  
    STDMETHOD(put_text)(THIS_ BSTR newText);

    STDMETHOD(get_text)(THIS_ BSTR FAR* retval);

    STDMETHOD(put_x)(THIS_ short newX);

    STDMETHOD(get_x)(THIS_ short FAR* retval);

    STDMETHOD(put_y)(THIS_ short newY);

    STDMETHOD(get_y)(THIS_ short FAR* retval);

    STDMETHOD(put_Position)(THIS_ IDualAutoClickPoint FAR* newPosition);

    STDMETHOD(get_Position)(THIS_ IDualAutoClickPoint FAR* FAR* retval);

    STDMETHOD(RefreshWindow)(THIS);

 STDMETHOD(SetAllProps)(THIS_ short x,
    short y,
    BSTR text);

    STDMETHOD(ShowWindow)(THIS);

END_DUAL_INTERFACE_PART(DualAClick) 
```  
  
 Per connettere l'interfaccia duale per MFC [QueryInterface](http://msdn.microsoft.com/library/windows/desktop/ms687230) meccanismo, aggiungere un `INTERFACE_PART` voce alla mappa dell'interfaccia:  
  
```  
BEGIN_INTERFACE_MAP(CAutoClickDoc,
    CDocument)  
    INTERFACE_PART(CAutoClickDoc,
    DIID_IAClick,
    Dispatch)  
    INTERFACE_PART(CAutoClickDoc,
    IID_IDualAClick,
    DualAClick)  
END_INTERFACE_MAP()  
```  
  
 Successivamente, è necessario compilare l'implementazione dell'interfaccia. La maggior parte, sarà possibile delegare a MFC esistente `IDispatch` implementazione. Ad esempio:  
  
```  
STDMETHODIMP_(ULONG) CAutoClickDoc::XDualAClick::AddRef()  
{  
    METHOD_PROLOGUE(CAutoClickDoc,
    DualAClick)  
    return pThis->ExternalAddRef();

}  
STDMETHODIMP_(ULONG) CAutoClickDoc::XDualAClick::Release()  
{  
    METHOD_PROLOGUE(CAutoClickDoc,
    DualAClick)  
    return pThis->ExternalRelease();

}  
STDMETHODIMP CAutoClickDoc::XDualAClick::QueryInterface(
    REFIID iid,
    LPVOID* ppvObj)  
{  
    METHOD_PROLOGUE(CAutoClickDoc,
    DualAClick)  
    return pThis->ExternalQueryInterface(&iid,
    ppvObj);

}  
STDMETHODIMP CAutoClickDoc::XDualAClick::GetTypeInfoCount(
    UINT FAR* pctinfo)  
{  
    METHOD_PROLOGUE(CAutoClickDoc,
    DualAClick)  
    LPDISPATCH lpDispatch = pThis->GetIDispatch(FALSE);

    ASSERT(lpDispatch != NULL);

    return lpDispatch->GetTypeInfoCount(pctinfo);

}  
STDMETHODIMP CAutoClickDoc::XDualAClick::GetTypeInfo(
    UINT itinfo,
    LCID lcid,
    ITypeInfo FAR* FAR* pptinfo)  
{  
    METHOD_PROLOGUE(CAutoClickDoc,
    DualAClick)  
    LPDISPATCH lpDispatch = pThis->GetIDispatch(FALSE);

    ASSERT(lpDispatch != NULL);

    return lpDispatch->GetTypeInfo(itinfo,
    lcid,
    pptinfo);

}  
STDMETHODIMP CAutoClickDoc::XDualAClick::GetIDsOfNames(
    REFIID riid,
    OLECHAR FAR* FAR* rgszNames,
    UINT cNames,  
    LCID lcid,
    DISPID FAR* rgdispid)   
{  
    METHOD_PROLOGUE(CAutoClickDoc,
    DualAClick)  
    LPDISPATCH lpDispatch = pThis->GetIDispatch(FALSE);

    ASSERT(lpDispatch != NULL);

    return lpDispatch->GetIDsOfNames(riid,
    rgszNames,
    cNames,   
    lcid,
    rgdispid);

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
    METHOD_PROLOGUE(CAutoClickDoc,
    DualAClick)  
    LPDISPATCH lpDispatch = pThis->GetIDispatch(FALSE);

    ASSERT(lpDispatch != NULL);

    return lpDispatch->Invoke(dispidMember,
    riid,
    lcid,  
    wFlags,
    pdispparams,
    pvarResult,  
    pexcepinfo,
    puArgErr);

}  
```  
  
 Per i metodi e le funzioni di accesso delle proprietà dell'oggetto, è necessario compilare l'implementazione. Le funzioni di metodo e proprietà in genere possono delegare ai metodi generati mediante la creazione guidata classe. Tuttavia, se impostano proprietà per accedere alle variabili direttamente, è necessario scrivere il codice per recuperare e inserire il valore nella variabile. Ad esempio:  
  
```  
STDMETHODIMP CAutoClickDoc::XDualAClick::put_text(BSTR newText)  
{  
    METHOD_PROLOGUE(CAutoClickDoc,
    DualAClick) *// MFC automatically converts from Unicode BSTR to *// Ansi CString,
    if necessary...  
    pThis->m_str = newText;  
    return NOERROR;  
}  
STDMETHODIMP CAutoClickDoc::XDualAClick::get_text(BSTR* retval)  
{  
    METHOD_PROLOGUE(CAutoClickDoc,
    DualAClick) *// MFC automatically converts from Ansi CString to *// Unicode BSTR,
    if necessary...  
    pThis->m_str.SetSysString(retval);

 return NOERROR;  
}  
```  
  
## <a name="passing-dual-interface-pointers"></a>Il passaggio di puntatori di interfaccia duale  
 Passare il puntatore di interfaccia duale non è semplice, soprattutto se è necessario chiamare `CCmdTarget::FromIDispatch`. `FromIDispatch`funziona solo su MFC `IDispatch` puntatori. È un modo per risolvere il problema per eseguire query per originale `IDispatch` puntatore set up da MFC e passare tale puntatore alle funzioni che lo richiedono. Ad esempio:  
  
```  
STDMETHODIMP CAutoClickDoc::XDualAClick::put_Position(
    IDualAutoClickPoint FAR* newPosition)  
{  
    METHOD_PROLOGUE(CAutoClickDoc,
    DualAClick)  
    LPDISPATCH lpDisp = NULL;  
    newPosition->QueryInterface(IID_IDispatch, (LPVOID*)&lpDisp);

    pThis->SetPosition(lpDisp);

 lpDisp->Release();
return NOERROR;  
}  
```  
  
 Prima di passare un puntatore tramite il metodo di interfaccia duale, è necessario convertirlo da MFC `IDispatch` puntatore per il puntatore di interfaccia duale. Ad esempio:  
  
```  
STDMETHODIMP CAutoClickDoc::XDualAClick::get_Position(
    IDualAutoClickPoint FAR* FAR* retval)  
{  
    METHOD_PROLOGUE(CAutoClickDoc,
    DualAClick)  
    LPDISPATCH lpDisp;  
    lpDisp = pThis->GetPosition();
lpDisp->QueryInterface(IID_IDualAutoClickPoint, (LPVOID*)retval);

    return NOERROR;  
}  
```  
  
## <a name="registering-the-applications-type-library"></a>Registrazione libreria dei tipi dell'applicazione  
 La creazione guidata applicazione non genera codice per registrare una libreria dei tipi di applicazioni del server di automazione OLE con il sistema. Esistono altri modi per registrare la libreria dei tipi, ma è utile per disporre dell'applicazione di registrare la libreria dei tipi quando si effettua l'aggiornamento delle informazioni relative al tipo OLE, vale a dire, ogni volta che viene eseguita l'applicazione autonoma.  
  
 Per registrare la libreria dei tipi dell'applicazione ogni volta che viene eseguita l'applicazione fungere autonomamente da:  
  
-   Includere AFXCTL. H gli standard include i file di intestazione STDAFX. H, per accedere alla definizione del `AfxOleRegisterTypeLib` (funzione).  
  
-   In un'applicazione `InitInstance` di funzione, individuare la chiamata a `COleObjectFactory::UpdateRegistryAll`. In seguito a questa chiamata, aggiungere una chiamata a `AfxOleRegisterTypeLib`, specificando il **LIBID** corrispondente per la libreria dei tipi, insieme al nome della libreria dei tipi:  
  
 ' ' * / / Durante l'avvio di un'applicazione server autonomo, è buona norma * / / per aggiornare il Registro di sistema nel caso in cui sia stato danneggiato.  
    m_server. UpdateRegistry(OAT_DISPATCH_OBJECT);

 COleObjectFactory::UpdateRegistryAll(); * / / DUAL_SUPPORT_START * / / assicurarsi che la libreria dei tipi è registrata o di interfaccia duale non funzionerà.  
_T("AutoClik.TLB")) AfxOleRegisterTypeLib(AfxGetInstanceHandle(), LIBID_ACDual, * / / DUAL_SUPPORT_END  
 ```  
  
## Modifying Project Build Settings to Accommodate Type Library Changes  
 To modify a project's build settings so that a header file containing **UUID** definitions is generated by MkTypLib whenever the type library is rebuilt:  
  
1.  On the **Build** menu, click **Settings**, and then select the ODL file from the file list for each configuration.  
  
2.  Click the **OLE Types** tab and specify a filename in the **Output header** filename field. Use a filename that is not already used by your project, because MkTypLib will overwrite any existing file. Click **OK** to close the **Build Settings** dialog box.  
  
 To add the **UUID** definitions from the MkTypLib-generated header file to your project:  
  
1.  Include the MkTypLib-generated header file in your standard includes header file, STDAFX.H.  
  
2.  Create a new file, INITIIDS.CPP, and add it to your project. In this file, include your MkTypLib-generated header file after including OLE2.H and INITGUID.H:  
  
 ```  
    initIIDs.c: definisce IID per le interfacce duali  
    Questo non deve essere compilato con l'intestazione precompilata.  
      #<a name="include-ole2h"></a>includere < OLE2 >  
      #<a name="include-initguidh"></a>includere < Initguid. h >  
      #<a name="include-acdualh"></a>includere "acdual.h"  
 ```  
  
3.  On the **Build** menu, click **Settings**, and then select INITIIDS.CPP from the file list for each configuration.  
  
4.  Click the **C++** tab, click category **Precompiled Headers**, and select the **Not using precompiled headers** radio button. Click OK to close the **Build Settings** dialog box.  
  
## Specifying the Correct Object Class Name in the Type Library  
 The wizards shipped with Visual C++ incorrectly use the implementation class name to specify the coclass in the server's ODL file for OLE-creatable classes. While this will work, the implementation class name is probably not the class name you want users of your object to use. To specify the correct name, open the ODL file, locate each coclass statement, and replace the implementation class name with the correct external name.  
  
 Note that when the coclass statement is changed, the variable names of **CLSID**s in the MkTypLib-generated header file will change accordingly. You will need to update your code to use the new variable names.  
  
## Handling Exceptions and the Automation Error Interfaces  
 Your automation object's methods and property accessor functions may throw exceptions. If so, you should handle them in your dual-interface implementation and pass information about the exception back to the controller through the OLE Automation error-handling interface, **IErrorInfo**. This interface provides for detailed, contextual error information through both `IDispatch` and VTBL interfaces. To indicate that an error handler is available, you should implement the **ISupportErrorInfo** interface.  
  
 To illustrate the error-handling mechanism, assume that the ClassWizard-generated functions used to implement the standard dispatch support throw exceptions. MFC's implementation of **IDispatch::Invoke** typically catches these exceptions and converts them into an EXCEPTINFO structure that is returned through the `Invoke` call. However, when VTBL interface is used, you are responsible for catching the exceptions yourself. As an example of protecting your dual-interface methods:  
  
```  
STDMETHODIMP CAutoClickDoc::XDualAClick::put_text(BSTR newText)  
{  
    METHOD_PROLOGUE (CAutoClickDoc, DualAClick)  
    TRY_DUAL(IID_IDualAClick) {* / / MFC converte automaticamente da Unicode BSTR * / / Ansi CString, se necessario...  
    pThis -> m_str = newText;  
    Restituisce NOERROR;  
 }  
    CATCH_ALL_DUAL}  
```  
  
 `CATCH_ALL_DUAL` takes care of returning the correct error code when an exception occurs. `CATCH_ALL_DUAL` converts an MFC exception into OLE Automation error-handling information using the **ICreateErrorInfo** interface. (An example `CATCH_ALL_DUAL` macro is in the file MFCDUAL.H in the [ACDUAL](../visual-cpp-samples.md) sample. The function it calls to handle exceptions, `DualHandleException`, is in the file MFCDUAL.CPP.) `CATCH_ALL_DUAL` determines the error code to return based on the type of exception that occurred:  
  
- [COleDispatchException](../mfc/reference/coledispatchexception-class.md) - In this case, `HRESULT` is constructed using the following code:  
  
 ```  
    hr = MAKE_HRESULT(SEVERITY_ERROR,
    FACILITY_ITF,   
 (e -> m_wCode + 0x200));

 ```  
  
     This creates an `HRESULT` specific to the interface that caused the exception. The error code is offset by 0x200 to avoid any conflicts with system-defined `HRESULT`s for standard OLE interfaces.  
  
- [CMemoryException](../mfc/reference/cmemoryexception-class.md) - In this case, `E_OUTOFMEMORY` is returned.  
  
-   Any other exception - In this case, `E_UNEXPECTED` is returned.  
  
 To indicate that the OLE Automation error handler is used, you should also implement the **ISupportErrorInfo** interface.  
  
 First, add code to your automation class definition to show it supports **ISupportErrorInfo**.  
  
 Second, add code to your automation class's interface map to associate the **ISupportErrorInfo** implementation class with MFC's `QueryInterface` mechanism. The `INTERFACE_PART` statement matches the class defined for **ISupportErrorInfo**.  
  
 Finally, implement the class defined to support **ISupportErrorInfo**.  
  
 (The [ACDUAL](../visual-cpp-samples.md) sample contains three macros to help do these three steps, `DECLARE_DUAL_ERRORINFO`, `DUAL_ERRORINFO_PART`, and `IMPLEMENT_DUAL_ERRORINFO`, all contained in MFCDUAL.H.)  
  
 The following example implements a class defined to support **ISupportErrorInfo**. `CAutoClickDoc` is the name of your automation class and `IID_IDualAClick` is the **IID** for the interface that is the source of errors reported through the OLE Automation error object:  
  
```  
STDMETHODIMP_(ulong) CAutoClickDoc::XSupportErrorInfo::AddRef()   
{  
    METHOD_PROLOGUE (CAutoClickDoc, SupportErrorInfo)   
    restituito pThis -> ExternalAddRef();

}   
STDMETHODIMP_(ulong) CAutoClickDoc::XSupportErrorInfo::Release()   
{   
    METHOD_PROLOGUE (CAutoClickDoc, SupportErrorInfo)   
    restituito pThis -> ExternalRelease();

}   
STDMETHODIMP CAutoClickDoc::XSupportErrorInfo::QueryInterface (REFIID iid, LPVOID * ppvObj)   
{   
    METHOD_PROLOGUE (CAutoClickDoc, SupportErrorInfo)   
    -> pThis restituito ExternalQueryInterface (& iid, ppvObj);

}   
STDMETHODIMP CAutoClickDoc::XSupportErrorInfo::InterfaceSupportsErrorInfo (REFIID iid)   
{   
    METHOD_PROLOGUE (CAutoClickDoc, SupportErrorInfo)   
    restituire (iid = = IID_IDualAClick) S_OK: S_FALSE.   
}  
```  
  
## See Also  
 [Technical Notes by Number](../mfc/technical-notes-by-number.md)   
 [Technical Notes by Category](../mfc/technical-notes-by-category.md)

