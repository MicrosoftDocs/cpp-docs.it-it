---
title: "TN065: supporto di interfaccia duale per i server di automazione OLE | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.ole"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ACDUAL (esempio) [MFC]"
  - "server di automazione, supporto di interfaccia duale"
  - "interfacce duali, automazione OLE"
  - "TN065"
ms.assetid: b5c8ed09-2f7f-483c-80fc-2a47ad896063
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 7
---
# TN065: supporto di interfaccia duale per i server di automazione OLE
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

> [!NOTE]
>  La seguente nota tecnica non è stata aggiornata da quando è stata inclusa per la prima volta nella documentazione online.  Di conseguenza, alcune procedure e argomenti potrebbero essere non aggiornati o errati.  Per le informazioni più recenti, è consigliabile cercare l'argomento di interesse nell'indice della documentazione online.  
  
 Questa nota viene illustrato come aggiungere il supporto per le interfacce duali a un'applicazione server di automazione basata su MFC OLE.  L'esempio di [Esempio ACDUAL](../top/visual-cpp-samples.md) viene illustrato il supporto per l'interfaccia duale e il codice di esempio in questa nota che segue è tratto da ACDUAL.  Le macro descritte in questa nota, come `DECLARE_DUAL_ERRORINFO`, `DUAL_ERRORINFO_PART` e `IMPLEMENT_DUAL_ERRORINFO`, fa parte dell'esempio ACDUAL e sono disponibili in MFCDUAL.H.  
  
## Interfacce duali  
 Benché l'automazione OLE consente di implementare un'interfaccia di `IDispatch`, VTBL, o un'interfaccia duale \(che include sia\), Si consiglia vivamente di implementare le interfacce duali per tutti gli oggetti esposti di automazione OLE.  Le interfacce duali presentano vantaggi rispetto alle interfacce solo o solo VTBL di `IDispatch`:  
  
-   L'associazione può aver luogo in fase di compilazione tramite l'interfaccia di VTBL, o in fase di esecuzione con `IDispatch`.  
  
-   Controller di automazione OLE che possono utilizzare l'interfaccia di VTBL possono trarre vantaggio dalle prestazioni migliori.  
  
-   I controller esistenti di automazione OLE che utilizzano l'interfaccia di `IDispatch` continueranno a funzionare.  
  
-   L'interfaccia di VTBL è più semplice chiamare da C\+\+.  
  
-   Le interfacce duali sono richieste per compatibilità con le funzionalità di supporto dell'oggetto Visual Basic.  
  
## Supporto per l'interfaccia duale add su una classe basata CCmdTarget  
 Un'interfaccia duale è in realtà un'interfaccia personalizzata derivata da `IDispatch`.  Il modo più semplice per implementare il supporto per l'interfaccia duale in una classe di base `CCmdTarget`consiste nel implementa l'interfaccia dispatch normale nella classe utilizzo di MFC e di ClassWizard, quindi aggiungere l'interfaccia personalizzata in un secondo momento.  In genere, l'implementazione dell'interfaccia personalizzata delegherà semplicemente all'implementazione MFC `IDispatch`.  
  
 Innanzitutto, modificare il file ODL del server per definire le interfacce duali per gli oggetti.  Per definire un'interfaccia duale, è necessario utilizzare un'istruzione dell'interfaccia, anziché l'istruzione di `DISPINTERFACE` che le procedure guidate di Visual C\+\+ genera.  Anziché rimuovere l'istruzione esistente di `DISPINTERFACE`, aggiungere una nuova istruzione interface.  Tenendo premuto il form di `DISPINTERFACE`, è possibile continuare a utilizzare ClassWizard per aggiungere proprietà e metodi all'oggetto, ma è necessario aggiungere proprietà e metodi equivalenti all'istruzione interface.  
  
 Un'istruzione dell'interfaccia per un'interfaccia duale deve avere gli attributi di **DUAL** e di **OLEAUTOMATION** e l'interfaccia deve essere derivata da `IDispatch`.  È possibile utilizzare l'esempio di [GUIDGEN](../top/visual-cpp-samples.md) per creare **IID** per l'interfaccia duale:  
  
```  
[ uuid(0BDD0E81-0DD7-11cf-BBA8-444553540000), // IID_IDualAClick  
   oleautomation,  
   dual  
]  
interface IDualAClick : IDispatch  
  {  
  };  
```  
  
 Dopo aver l'istruzione interface, voci avviare add per metodi e proprietà.  Per le interfacce duali, è necessario riorganizzare gli elenchi di parametri in modo che i metodi e funzioni di accesso della proprietà nell'interfaccia duale restituiscano `HRESULT` e passino i valori restituiti come parametri con attributi `[retval,out]`.  Tenere presente che per le proprietà, è necessario aggiungere sia read \(`propget`\) che la scrittura \(`propput`\) la funzione di accesso con lo stesso ID.  Di seguito è riportato un esempio.  
  
```  
[propput, id(1)] HRESULT text([in] BSTR newText);  
[propget, id(1)] HRESULT text([out, retval] BSTR* retval);  
```  
  
 Dopo i metodi e proprietà sono definiti, è necessario aggiungere un riferimento all'istruzione interface nell'istruzione coclass.  Di seguito è riportato un esempio.  
  
```  
[ uuid(4B115281-32F0-11cf-AC85-444553540000) ]  
coclass Document  
{  
   dispinterface IAClick;  
   [default] interface IDualAClick;  
};  
```  
  
 Dopo che il file ODL è stato aggiornato, utilizzare il meccanismo della mappa dell'interfaccia di MFC per definire una classe di implementazione per l'interfaccia duale nella classe di oggetto e fare le voci corrispondenti nel meccanismo di `QueryInterface` di MFC.  È necessaria una voce nel blocco di `INTERFACE_PART` per ciascuna voce dell'istruzione interface di ODL, più voci per un'interfaccia dispatch.  Ogni voce ODL con l'attributo di **propput** necessita di una funzione denominata `put_propertyname`.  Ogni voce con l'attributo di **propget** necessita di una funzione denominata `get_propertyname`.  
  
 Per definire una classe di implementazione per l'interfaccia duale, aggiungere un blocco di `DUAL_INTERFACE_PART` alla definizione di classe object.  Di seguito è riportato un esempio.  
  
```  
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
  
 Per connettere l'interfaccia duale al meccanismo di [QueryInterface](http://msdn.microsoft.com/library/windows/desktop/ms687230) di MFC, aggiungere una voce di `INTERFACE_PART` alla mappa dell'interfaccia:  
  
```  
BEGIN_INTERFACE_MAP(CAutoClickDoc, CDocument)  
  INTERFACE_PART(CAutoClickDoc, DIID_IAClick, Dispatch)  
  INTERFACE_PART(CAutoClickDoc, IID_IDualAClick, DualAClick)  
END_INTERFACE_MAP()  
```  
  
 Quindi, è necessario compilare l'implementazione dell'interfaccia.  In genere, sarà possibile delegare l'implementazione MFC esistente `IDispatch`.  Di seguito è riportato un esempio.  
  
```  
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
             REFIID iid, LPVOID* ppvObj)  
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
          UINT itinfo, LCID lcid, ITypeInfo FAR* FAR* pptinfo)  
{  
   METHOD_PROLOGUE(CAutoClickDoc, DualAClick)  
   LPDISPATCH lpDispatch = pThis->GetIDispatch(FALSE);  
   ASSERT(lpDispatch != NULL);  
   return lpDispatch->GetTypeInfo(itinfo, lcid, pptinfo);  
}  
STDMETHODIMP CAutoClickDoc::XDualAClick::GetIDsOfNames(  
       REFIID riid, OLECHAR FAR* FAR* rgszNames, UINT cNames,  
       LCID lcid, DISPID FAR* rgdispid)   
{  
   METHOD_PROLOGUE(CAutoClickDoc, DualAClick)  
   LPDISPATCH lpDispatch = pThis->GetIDispatch(FALSE);  
   ASSERT(lpDispatch != NULL);  
   return lpDispatch->GetIDsOfNames(riid, rgszNames, cNames,   
                                    lcid, rgdispid);  
}  
STDMETHODIMP CAutoClickDoc::XDualAClick::Invoke(  
    DISPID dispidMember, REFIID riid, LCID lcid, WORD wFlags,  
    DISPPARAMS FAR* pdispparams, VARIANT FAR* pvarResult,  
    EXCEPINFO FAR* pexcepinfo, UINT FAR* puArgErr)  
{  
   METHOD_PROLOGUE(CAutoClickDoc, DualAClick)  
   LPDISPATCH lpDispatch = pThis->GetIDispatch(FALSE);  
   ASSERT(lpDispatch != NULL);  
   return lpDispatch->Invoke(dispidMember, riid, lcid,  
                             wFlags, pdispparams, pvarResult,  
                             pexcepinfo, puArgErr);  
}  
```  
  
 Per i metodi dell'oggetto e le funzioni di accesso a proprietà, è necessario compilare l'implementazione.  Il metodo e funzioni di proprietà possono delegare in genere ai metodi generati mediante ClassWizard.  Tuttavia, se si installano le proprietà per accedere direttamente alle variabili, è necessario scrivere il codice per ottenere\/incollare il valore nella variabile.  Di seguito è riportato un esempio.  
  
```  
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
  
## Passaggio di puntatori a interfaccia duale  
 Passare il puntatore a interfaccia duale non è chiaro, specialmente se è necessario chiamare `CCmdTarget::FromIDispatch`.  funzionamento di`FromIDispatch` solo sui puntatori di `IDispatch` di MFC.  Un modo per risolvere il problema consiste di eseguire una query per l'installazione originale del puntatore di `IDispatch` da MFC e di passare tale puntatore a funzioni che lo richiedono.  Di seguito è riportato un esempio.  
  
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
  
 Prima di passare un puntatore di nuovo con il metodo interfaccia duale, potrebbe essere necessario convertirlo del puntatore MFC in `IDispatch` puntatore a interfaccia duale.  Di seguito è riportato un esempio.  
  
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
  
## Registrare la libreria dei tipi dell'applicazione  
 AppWizard non genera il codice per registrare la libreria dei tipi di un'applicazione server di automazione OLE con il sistema.  Quando esistono altri modi per registrare la libreria dei tipi, è utile disporre del log dell'applicazione la libreria dei tipi quando viene aggiornato le informazioni sul tipo OLE, ovvero, ogni volta che l'applicazione viene eseguito autonomamente.  
  
 Per registrare la libreria dei tipi dell'applicazione ogni volta che l'applicazione viene eseguita da supporto solo:  
  
-   Importare AFXCTL.H nello standard include il file di intestazione, STDAFX.H, per accedere alla definizione della funzione di `AfxOleRegisterTypeLib`.  
  
-   Nella funzione di `InitInstance` dell'applicazione, individuare la chiamata a `COleObjectFactory::UpdateRegistryAll`.  Attenendosi a questa chiamata, aggiungere una chiamata a `AfxOleRegisterTypeLib`, specificando **LIBID** che corrisponde alla libreria dei tipi, con il nome della libreria dei tipi:  
  
    ```  
    // When a server application is launched stand-alone, it is a good idea  
    // to update the system registry in case it has been damaged.  
    m_server.UpdateRegistry(OAT_DISPATCH_OBJECT);  
    COleObjectFactory::UpdateRegistryAll();  
    // DUAL_SUPPORT_START  
    // Make sure the type library is registered or dual interface won't work.  
    AfxOleRegisterTypeLib(AfxGetInstanceHandle(), LIBID_ACDual, _T("AutoClik.TLB"));  
    // DUAL_SUPPORT_END  
    ```  
  
## Modificare le impostazioni di compilazione del progetto in base alle modifiche della libreria dei tipi  
 Per modificare le impostazioni di compilazione di un progetto in modo che un file di intestazione contenente le definizioni di **UUID** sia generato da MkTypLib ogni volta che la libreria dei tipi viene ricompilata:  
  
1.  Dal menu di **Compilazione**, scegliere **Impostazioni**quindi selezionare il file ODL dall'elenco file per ogni configurazione.  
  
2.  Fare clic sulla scheda di **Tipi di OLE** e specificare un nome di file nel campo nome del file di **Intestazione di output**.  Utilizzare un nome di file non ancora utilizzato dal progetto, poiché MkTypLib sovrascriverà il file esistente.  Scegliere **OK** per chiudere la finestra di dialogo **Impostazioni di compilazione**.  
  
 Per aggiungere le definizioni di **UUID** dal file di intestazione MkTypLib\- generato al progetto:  
  
1.  Includere il file di intestazione MkTypLib\- generato nello standard include il file di intestazione, STDAFX.H.  
  
2.  Creare un nuovo file, INITIIDS.CPP e aggiungerlo al progetto.  In questo file, includere dopo il file di intestazione generato MkTypLib\- inclusi OLE2.H e INITGUID.H:  
  
    ```  
    // initIIDs.c: defines IIDs for dual interfaces  
    // This must not be built with precompiled header.  
      #include <ole2.h>  
      #include <initguid.h>  
      #include "acdual.h"  
    ```  
  
3.  Dal menu di **Compilazione**, scegliere **Impostazioni**quindi selezionare INITIIDS.CPP dall'elenco file per ogni configurazione.  
  
4.  Fare clic sulla scheda di **C\+\+**, fare clic sulla categoria **Intestazioni precompilate** e selezionare il pulsante di opzione **Senza intestazioni precompilate**.  Scegliere OK per chiudere la finestra di dialogo **Impostazioni di compilazione**.  
  
## Specificare il nome della classe corretto dell'oggetto nella libreria dei tipi  
 Le procedure guidate disponibili in Visual C\+\+ utilizzano in modo non corretto il nome della classe di implementazione per specificare la coclasse nel file ODL del server per le classi OLE creabili.  Sebbene questo verrà eseguito, il nome della classe di implementazione non è probabilmente il nome della classe desiderata gli utenti dell'oggetto da utilizzare.  Per specificare il nome corretto, aprire il file ODL, individuare ogni istruzione coclass e sostituire il nome della classe di implementazione con il nome esterno corretto.  
  
 Notare che quando l'istruzione della coclasse viene modificata, i nomi delle variabili di **CLSID**s nel file di intestazione generato MkTypLib\- cambieranno di conseguenza.  Sarà necessario aggiornare il codice per utilizzare i nuovi nomi di variabili.  
  
## Gestione delle eccezioni e le interfacce degli errori di automazione  
 I metodi dell'oggetto ActiveX e le funzioni di accesso alle proprietà possono generare eccezioni.  In questo caso, è necessario gestirle nell'implementazione interfaccia duale e comunicare le informazioni sull'eccezione del controller tramite l'interfaccia di gestione degli errori di automazione OLE, **IErrorInfo**.  Questa interfaccia prevede informazioni dettagliate sugli errori e contestuali tramite sia `IDispatch` che le interfacce di VTBL.  Per indicare che un gestore errori è disponibile, è necessario implementare l'interfaccia di **ISupportErrorInfo**.  
  
 Per illustrare il meccanismo di gestione degli errori, si supponga che le funzioni ClassWizard\- generate utilizzate per implementare le eccezioni standard throw di supporto di invio.  L'implementazione di MFC di **IDispatch::Invoke** in genere intercetta queste eccezioni e le converte in una struttura di EXCEPTINFO restituita con la chiamata di `Invoke`.  Tuttavia, quando l'interfaccia di VTBL viene utilizzata, è responsabile del rilevamento di eccezioni.  Come esempio di protezione dei metodi interfaccia duale:  
  
```  
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
  
 `CATCH_ALL_DUAL` consente infatti di restituire il codice di errore corretto quando si verifica un'eccezione.  `CATCH_ALL_DUAL` converte un'eccezione MFC in informazioni di gestione degli errori di automazione OLE tramite l'interfaccia di **ICreateErrorInfo**. \(Una macro di `CATCH_ALL_DUAL` di esempio è presente nel file MFCDUAL.H nell'esempio di [Esempio ACDUAL](../top/visual-cpp-samples.md).  La funzione che chiama per gestire le eccezioni, `DualHandleException`, si trova nel file MFCDUAL.CPP.\) `CATCH_ALL_DUAL` determina il codice di errore da restituire in base al tipo di eccezione che si è verificato:  
  
-   [COleDispatchException](../mfc/reference/coledispatchexception-class.md) \(in questo caso, `HRESULT` viene costruito utilizzando il codice seguente:  
  
    ```  
    hr = MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF,   
                               (e->m_wCode + 0x200));  
    ```  
  
     Verrà creata `HRESULT` specifico dell'interfaccia che ha causato l'eccezione.  Il codice di errore è compensato da 0x200 per evitare eventuali conflitti con `HRESULT`definito dal sistema s per le interfacce OLE standard.  
  
-   [CMemoryException](../mfc/reference/cmemoryexception-class.md) \(in questo caso, `E_OUTOFMEMORY` viene restituito.  
  
-   Qualsiasi altra eccezione \(in questo caso, `E_UNEXPECTED` viene restituito.  
  
 Per indicare che il gestore errori di automazione OLE viene utilizzato, è necessario implementare anche l'interfaccia di **ISupportErrorInfo**.  
  
 Innanzitutto, aggiungere il codice alla definizione della classe di automazione che ne che supporta **ISupportErrorInfo**.  
  
 In secondo luogo, aggiungerlo alla mappa dell'interfaccia della classe di automazione per associare la classe di implementazione di **ISupportErrorInfo** con il meccanismo di `QueryInterface` di MFC.  L'istruzione di `INTERFACE_PART` corrisponde alla classe definita per **ISupportErrorInfo**.  
  
 Infine, implementare la classe definita per supportare **ISupportErrorInfo**.  
  
 Nell'esempio di [Esempio ACDUAL](../top/visual-cpp-samples.md) contiene tre macro consentono a questi tre passaggi, `DECLARE_DUAL_ERRORINFO`, `DUAL_ERRORINFO_PART` e `IMPLEMENT_DUAL_ERRORINFO`, interamente contenuto in MFCDUAL.H\).  
  
 Nell'esempio seguente viene implementata una classe definita per supportare **ISupportErrorInfo**.  `CAutoClickDoc` è il nome della classe di automazione e `IID_IDualAClick` è **IID** per l'interfaccia che rappresenta l'origine di errore segnalati mediante l'oggetto gli errori di automazione OLE:  
  
```  
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
   REFIID iid, LPVOID* ppvObj)   
{   
   METHOD_PROLOGUE(CAutoClickDoc, SupportErrorInfo)   
   return pThis->ExternalQueryInterface(&iid, ppvObj);   
}   
STDMETHODIMP CAutoClickDoc::XSupportErrorInfo::InterfaceSupportsErrorInfo(   
   REFIID iid)   
{   
   METHOD_PROLOGUE(CAutoClickDoc, SupportErrorInfo)   
   return (iid == IID_IDualAClick) ? S_OK : S_FALSE;   
}  
```  
  
## Vedere anche  
 [Note tecniche per numero](../mfc/technical-notes-by-number.md)   
 [Note tecniche per categoria](../mfc/technical-notes-by-category.md)