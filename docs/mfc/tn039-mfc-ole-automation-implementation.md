---
title: "TN039: implementazione di automazione MFC/OLE | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
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
  - "automazione, punti di ingresso all'interfaccia COM MFC"
  - "interfaccia IDispatch"
  - "MFC, supporto COM"
  - "MFC, OLE DB e"
  - "TN039"
ms.assetid: 765fa3e9-dd54-4f08-9ad2-26e0546ff8b6
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 5
---
# TN039: implementazione di automazione MFC/OLE
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

> [!NOTE]
>  La seguente nota tecnica non è stata aggiornata da quando è stata inclusa per la prima volta nella documentazione online.  Di conseguenza, alcune procedure e argomenti potrebbero essere non aggiornati o errati.  Per le informazioni più recenti, è consigliabile cercare l'argomento di interesse nell'indice della documentazione online.  
  
## Cenni preliminari sull'interfaccia IDispatch OLE  
 L'interfaccia di `IDispatch` è il modo in cui le applicazioni espongono metodi e le proprietà in modo da altre applicazioni in Visual Basic, o altri linguaggi, possono utilizzare le funzionalità dell'applicazione.  La parte importante di questa interfaccia è la funzione di **IDispatch::Invoke**.  MFC utilizza le mappe "submit" per implementare **IDispatch::Invoke**.  La mappa submit fornisce informazioni di implementazione MFC sul layout o su "forma" del `CCmdTarget`alle classi derivate, in modo che può modificare direttamente le proprietà dell'oggetto, oppure chiamare le funzioni membro all'interno dell'oggetto per soddisfare le esigenze di **IDispatch::Invoke**.  
  
 In genere, ClassWizard e MFC prevedono per nascondere la maggior parte dei dettagli di automazione OLE dal programmatore di applicazione.  Il programmatore è incentrato sulla funzionalità per esporre nell'applicazione e non è necessario preoccuparsi del modello l'infrastruttura sottostante.  
  
 Vi sono casi, tuttavia, dove è necessario capire cosa MFC consiste nel funzionamento.  Questa nota come vengono illustrati il framework assegna **DISPID**s alle funzioni membro e proprietà.  La conoscenza di utilizzare l'algoritmo MFC per l'assegnazione di **DISPID**s è necessaria solo quando è necessario conoscere gli ID, ad esempio "quando si crea una libreria dei tipi" per gli oggetti dell'applicazione.  
  
## Assegnazione di MFC DISPID  
 Sebbene l'utente finale di automazione \(un utente di Visual Basic, ad esempio, vedere il nome delle proprietà attivate automazione e metodi nel codice \(ad esempio obj.ShowWindow\), l'implementazione di **IDispatch::Invoke** non riceve i nomi effettivi.  Per ragioni di ottimizzazione, riceve **DISPID**, un 32 bit "cookie magiche" che descrive il metodo o la proprietà che è necessario accedervi.  Questi valori di **DISPID** vengono restituiti dall'implementazione di `IDispatch` con un altro metodo, denominato **IDispatch::GetIDsOfNames**.  Un'applicazione client di automazione chiamerà una volta `GetIDsOfNames` per ogni membro o proprietà che intende accedere e li memorizza nella cache per le chiamate successive a **IDispatch::Invoke**.  In questo modo, la ricerca nella stringa viene eseguita solo una volta per l'utilizzo dell'oggetto, anziché una volta per chiamata di **IDispatch::Invoke**.  
  
 MFC determina **DISPID**s per ogni metodo e proprietà basati su due elementi:  
  
-   La distanza dall'inizio della mappa di divisione \(1\) relativo  
  
-   La distanza della mappa di invio dalla maggior parte della classe derivata \(0\) parenti  
  
 **DISPID** è diviso in due parti.  **LOWORD** di **DISPID** contiene la prima parte, la distanza dall'inizio della mappa di invio.  **HIWORD** contiene la distanza dalla maggior parte della classe derivata.  Di seguito è riportato un esempio.  
  
```  
class CDispPoint : public CCmdTarget  
{  
public:  
    short m_x, m_y;  
    ...  
    DECLARE_DISPATCH_MAP()  
    ...  
};  
  
class CDisp3DPoint : public CDispPoint  
{  
public:  
    short m_z;  
    ...  
    DECLARE_DISPATCH_MAP()  
    ...  
};  
  
BEGIN_DISPATCH_MAP(CDispPoint, CCmdTarget)  
    DISP_PROPERTY(CDispPoint, "x", m_x, VT_I2)  
    DISP_PROPERTY(CDispPoint, "y", m_y, VT_I2)  
END_DISPATCH_MAP()  
  
BEGIN_DISPATCH_MAP(CDisp3DPoint, CDispPoint)  
    DISP_PROPERTY(CDisp3DPoint, "z", m_z, VT_I2)  
END_DISPATCH_MAP()  
```  
  
 Come si può notare, esistono due classi, costituiti entrambi espongono le interfacce di automazione OLE.  Una di queste classi è derivata dall'altro e così sfrutta le funzionalità della classe base, inclusa la parte di automazione OLE \(proprietà y "e" x in questo caso\).  
  
 MFC genera **DISPID**s per CDispPoint classe come segue:  
  
```  
property X    (DISPID)0x00000001  
property Y    (DISPID)0x00000002  
```  
  
 Poiché le proprietà non sono in una classe base, **HIWORD** di **DISPID** è sempre zero \(la distanza dalla maggior parte della classe derivata per CDispPoint è zero\).  
  
 MFC genera **DISPID**s per CDisp3DPoint classe come segue:  
  
```  
property Z    (DISPID)0x00000001  
property X    (DISPID)0x00010001  
property Y    (DISPID)0x00010002  
```  
  
 La proprietà Z viene fornita **DISPID** con **HIWORD** zero poiché è definito nella classe che si sta esponendo le proprietà, CDisp3DPoint.  Da X e Y dalle proprietà sono definiti in una classe base, **HIWORD** di **DISPID** è 1, la classe in cui tali proprietà sono definite corrisponde a una distanza di una derivazione dalla maggior parte della classe derivata.  
  
> [!NOTE]
>  **LOWORD** è determinato sempre dalla posizione nella mappa, anche se esiste voci della mappa con **DISPID** esplicito \(vedere la sezione successiva per informazioni sulle versioni di **\_ID** di macro di `DISP_FUNCTION` e di `DISP_PROPERTY` \).  
  
## Funzionalità avanzate della mappa di invio MFC  
 Esistono numerose funzionalità aggiuntive che non supporta ClassWizard con questa versione di Visual C\+\+.  ClassWizard supporta `DISP_FUNCTION`, `DISP_PROPERTY` e `DISP_PROPERTY_EX` che definiscono un metodo, una proprietà variabile membro e personalizzato per una proprietà funzione del membro del gruppo, rispettivamente.  Queste funzionalità sono in genere tutte che si siano necessarie per creare la maggior parte dei server di automazione.  
  
 Le seguenti macro aggiuntive possono essere utilizzate quando macro di supporto ClassWizard non sono appropriate: `DISP_PROPERTY_NOTIFY` e `DISP_PROPERTY_PARAM`.  
  
## DISP\_PROPERTY\_NOTIFY \- Macro descrizione  
  
```  
  
        DISP_PROPERTY_NOTIFY(   
   theClass,   
   pszName,   
   memberName,   
   pfnAfterSet,   
   vtPropType   
)  
```  
  
## Osservazioni  
  
### Parametri  
 `theClass`  
 Nome della classe.  
  
 `pszName`  
 Nome esterno della proprietà.  
  
 `memberName`  
 Nome della variabile membro in cui la proprietà è archiviata.  
  
 `pfnAfterSet`  
 Nome della funzione membro da chiamare quando la proprietà viene modificata.  
  
 `vtPropType`  
 Un valore che specifica il tipo della proprietà.  
  
## Osservazioni  
 Questa macro è simile a l `DISP_PROPERTY`, con la differenza che accetta un argomento supplementare.  L'argomento aggiuntivo, *pfnAfterSet,* deve essere una funzione membro che restituisce nothing e non accetta parametri, "OnPropertyNotify \(void\)".  Verrà chiamato **dopo che** la variabile membro è stato modificato.  
  
## DISP\_PROPERTY\_PARAM \- Macro descrizione  
  
```  
  
        DISP_PROPERTY_PARAM(   
   theClass,  
   pszName,  
   pfnGet,  
   pfnSet,  
   vtPropType,  
   vtsParams   
)  
```  
  
## Osservazioni  
  
### Parametri  
 `theClass`  
 Nome della classe.  
  
 `pszName`  
 Nome esterno della proprietà.  
  
 `memberGet`  
 Nome della funzione membro utilizzata per ottenere la proprietà.  
  
 `memberSet`  
 Il nome della funzione membro utilizzato per impostare la proprietà.  
  
 `vtPropType`  
 Un valore che specifica il tipo della proprietà.  
  
 `vtsParams`  
 Una serie di spazio dispone di VTS\_ separato per ogni parametro.  
  
## Osservazioni  
 Analogamente alla macro di `DISP_PROPERTY_EX`, questa macro definisce una proprietà accessibile attraverso separato funzioni membro di set e get.  Questa macro, tuttavia, consente di specificare un elenco di parametri per la proprietà.  Ciò è utile per implementare le proprietà che vengono indicizzate o impostano i parametri in altro modo.  I parametri verranno sempre inseriti per primo, seguito dal nuovo valore per la proprietà.  Di seguito è riportato un esempio.  
  
```  
DISP_PROPERTY_PARAM(CMyObject, "item", GetItem, SetItem, VT_DISPATCH,    VTS_I2 VTS_I2)  
```  
  
 corrisponderebbero per ottenere e funzioni membro del gruppo:  
  
```  
LPDISPATCH CMyObject::GetItem(short row, short col)  
void CMyObject::SetItem(short row, short col, LPDISPATCH newValue)  
```  
  
## DISP\_XXXX\_ID \- macro descrizioni  
  
```  
  
        DISP_FUNCTION_ID(   
   theClass,  
   pszName,  
   dispid,  
   pfnMember,  
   vtRetVal,  
   vtsParams   
) DISP_PROPERTY_ID(   
   theClass,  
   pszName,  
   dispid,  
   memberName,  
   vtPropType   
) DISP_PROPERTY_NOTIFY_ID(   
   theClass,  
   pszName,  
   dispid,  
   memberName,  
   pfnAfterSet,  
   vtPropType   
) DISP_PROPERTY_EX_ID(   
   theClass,  
   pszName,  
   dispid,  
   pfnGet,  
   pfnSet,  
   vtPropType   
) DISP_PROPERTY_PARAM_ID(   
   theClass,  
   pszName,  
   dispid,  
   pfnGet,  
   pfnSet,  
   vtPropType,  
   vtsParams   
)  
```  
  
## Osservazioni  
  
### Parametri  
 `theClass`  
 Nome della classe.  
  
 `pszName`  
 Nome esterno della proprietà.  
  
 `dispid`  
 Il DISPID fisso per la proprietà o il metodo.  
  
 `pfnGet`  
 Nome della funzione membro utilizzata per ottenere la proprietà.  
  
 `pfnSet`  
 Il nome della funzione membro utilizzato per impostare la proprietà.  
  
 `memberName`  
 Il nome di una variabile membro per eseguire il mapping alla proprietà  
  
 `vtPropType`  
 Un valore che specifica il tipo della proprietà.  
  
 `vtsParams`  
 Una serie di spazio dispone di VTS\_ separato per ogni parametro.  
  
## Osservazioni  
 Queste macro consentono di specificare **DISPID** anziché lasciare MFC automaticamente assegnare uno.  Queste macro avanzate hanno gli stessi nomi con la differenza che l'id viene aggiunto al nome di macro \(ad esempio  **DISP\_PROPERTY\_ID**\) e ID è determinato dal parametro specificato immediatamente dopo il parametro di `pszName`.  Vedere AFXDISP.H per ulteriori informazioni su queste macro.  Le voci di **\_ID** devono essere inserite alla fine della mappa di invio.  Influiranno sulla generazione automatica di **DISPID** come una versione non di**\_ID** della macro \( **DISPID**s è determinata dalla posizione\).  Di seguito è riportato un esempio.  
  
```  
BEGIN_DISPATCH_MAP(CDisp3DPoint, CCmdTarget)  
    DISP_PROPERTY(CDisp3DPoint, "y", m_y, VT_I2)  
    DISP_PROPERTY(CDisp3DPoint, "z", m_z, VT_I2)  
    DISP_PROPERTY_ID(CDisp3DPoint, "x", 0x00020003, m_x, VT_I2)  
END_DISPATCH_MAP()  
```  
  
 MFC genera i dispid per CDisp3DPoint classe come segue:  
  
```  
property X    (DISPID)0x00020003  
property Y    (DISPID)0x00000002  
property Z     (DISPID)0x00000001  
```  
  
 Specificare **DISPID** fisso è utile per mantenere la compatibilità con le versioni precedenti a un'interfaccia dispatch già esistente, o al centro determinato sistema definiti i metodi o le proprietà \(in genere indicati da **DISPID**negativo, ad esempio la raccolta di **DISPID\_NEWENUM** \).  
  
#### Recuperare l'interfaccia IDispatch per un COleClientItem  
 Molti server supporteranno l'automazione all'interno degli oggetti documento, con la funzionalità del server OLE.  Per accedere a questa interfaccia di automazione, è necessario accedere direttamente dalla variabile membro di **COleClientItem::m\_lpObject**.  Il codice riportato di seguito vengono recuperati l'interfaccia di `IDispatch` per un oggetto derivato da `COleClientItem`.  È possibile includere il codice riportato di seguito nell'applicazione se si trova questa funzionalità necessaria:  
  
```  
LPDISPATCH CMyClientItem::GetIDispatch()  
{  
    ASSERT_VALID(this);  
    ASSERT(m_lpObject != NULL);  
  
    LPUNKNOWN lpUnk = m_lpObject;  
  
    Run();    // must be running  
  
    LPOLELINK lpOleLink = NULL;  
    if (m_lpObject->QueryInterface(IID_IOleLink,   
        (LPVOID FAR*)&lpOleLink) == NOERROR)  
    {  
        ASSERT(lpOleLink != NULL);  
        lpUnk = NULL;  
        if (lpOleLink->GetBoundSource(&lpUnk) != NOERROR)  
        {  
            TRACE0("Warning: Link is not connected!\n");  
            lpOleLink->Release();  
            return NULL;  
        }  
        ASSERT(lpUnk != NULL);  
    }  
  
    LPDISPATCH lpDispatch = NULL;  
    if (lpUnk->QueryInterface(IID_IDispatch, &lpDispatch)   
        != NOERROR)  
    {  
        TRACE0("Warning: does not support IDispatch!\n");  
        return NULL;  
    }  
  
    ASSERT(lpDispatch != NULL);  
    return lpDispatch;  
}  
```  
  
 L'interfaccia dispatch restituita dalla funzione può quindi essere utilizzata direttamente o essere associata a `COleDispatchDriver` per l'accesso indipendente dai tipi.  Se la si utilizza direttamente, assicurarsi di chiamare il relativo membro di **Rilascio** quando tramite con il puntatore \(il distruttore di `COleDispatchDriver` questa operazione viene eseguita per impostazione predefinita\).  
  
## Vedere anche  
 [Note tecniche per numero](../mfc/technical-notes-by-number.md)   
 [Note tecniche per categoria](../mfc/technical-notes-by-category.md)