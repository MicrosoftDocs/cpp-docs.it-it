---
description: 'Altre informazioni su: TN039: implementazione di automazione MFC/OLE'
title: 'TN039: implementazione di automazione MFC-OLE'
ms.date: 06/28/2018
helpviewer_keywords:
- MFC, COM support
- IDispatch interface
- MFC, OLE DB and
- TN039
- Automation, MFC COM interface entry points
ms.assetid: 765fa3e9-dd54-4f08-9ad2-26e0546ff8b6
ms.openlocfilehash: caabd3719a467e534e47ca61ed8f9a9f1f0d2eb6
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97215417"
---
# <a name="tn039-mfcole-automation-implementation"></a>TN039: implementazione di automazione MFC/OLE

> [!NOTE]
> La seguente nota tecnica non è stata aggiornata da quando è stata inclusa per la prima volta nella documentazione online. Di conseguenza, alcune procedure e argomenti potrebbero essere non aggiornati o errati. Per le informazioni più recenti, è consigliabile cercare l'argomento di interesse nell'indice della documentazione online.

## <a name="overview-of-ole-idispatch-interface"></a>Cenni preliminari sull'interfaccia OLE IDispatch

L' `IDispatch` interfaccia è il modo in cui le applicazioni espongono metodi e proprietà in modo che altre applicazioni, ad esempio Visual Basic o altri linguaggi, possano utilizzare le funzionalità dell'applicazione. La parte più importante di questa interfaccia è la `IDispatch::Invoke` funzione. MFC utilizza "mappe Dispatch" per implementare `IDispatch::Invoke` . La mappa di invio fornisce le informazioni di implementazione MFC sul layout o sulla "forma" delle `CCmdTarget` classi derivate da, in modo che possa modificare direttamente le proprietà dell'oggetto o chiamare funzioni membro all'interno dell'oggetto per soddisfare `IDispatch::Invoke` le richieste.

Per la maggior parte, ClassWizard e MFC cooperano per nascondere la maggior parte dei dettagli dell'automazione OLE dal programmatore di applicazioni. Il programmatore si concentra sulle funzionalità effettive da esporre nell'applicazione e non deve preoccuparsi del plumbing sottostante.

Esistono tuttavia casi in cui è necessario comprendere il funzionamento di MFC in background. Questa nota affronterà il modo in cui il Framework assegna **DISPID** a funzioni membro e proprietà. La conoscenza dell'algoritmo utilizzato da MFC per l'assegnazione di **DISPID** s è necessaria solo quando è necessario conoscere gli ID, ad esempio quando si crea una "libreria dei tipi" per gli oggetti dell'applicazione.

## <a name="mfc-dispid-assignment"></a>Assegnazione DISPID MFC

Sebbene l'utente finale di automazione (ad esempio, un utente Visual Basic), veda i nomi effettivi delle proprietà e dei metodi abilitati per l'automazione nel proprio codice, ad esempio obj. ShowWindow), l'implementazione di non `IDispatch::Invoke` riceve i nomi effettivi. Per motivi di ottimizzazione, riceve un **DISPID**, che è un "Magic cookie" a 32 bit che descrive il metodo o la proprietà a cui accedere. Questi valori **DISPID** vengono restituiti dall' `IDispatch` implementazione tramite un altro metodo, denominato `IDispatch::GetIDsOfNames` . Un'applicazione client di automazione chiamerà `GetIDsOfNames` una volta per ogni membro o proprietà che intende accedere e la memorizza nella cache per le chiamate successive a `IDispatch::Invoke` . In questo modo, la ricerca di stringhe costosa viene eseguita solo una volta per ogni oggetto utilizzato, anziché una volta per ogni `IDispatch::Invoke` chiamata.

MFC determina il **DISPID** per ogni metodo e proprietà in base a due elementi:

- Distanza tra la parte superiore della mappa di invio (1 relativa)

- Distanza della mappa di invio dalla classe più derivata (0 relativa)

Il **DISPID** è diviso in due parti. Il **LOWORD** del **DISPID** contiene il primo componente, ovvero la distanza dalla parte superiore della mappa di invio. **HIWORD** contiene la distanza dalla classe più derivata. Ad esempio:

```cpp
class CDispPoint : public CCmdTarget
{
public:
    short m_x, m_y;
    // ...
    DECLARE_DISPATCH_MAP()
    // ...
};

class CDisp3DPoint : public CDispPoint
{
public:
    short m_z;
    // ...
    DECLARE_DISPATCH_MAP()
    // ...
};

BEGIN_DISPATCH_MAP(CDispPoint, CCmdTarget)
    DISP_PROPERTY(CDispPoint, "x", m_x, VT_I2)
    DISP_PROPERTY(CDispPoint, "y", m_y, VT_I2)
END_DISPATCH_MAP()

BEGIN_DISPATCH_MAP(CDisp3DPoint, CDispPoint)
    DISP_PROPERTY(CDisp3DPoint, "z", m_z, VT_I2)
END_DISPATCH_MAP()
```

Come si può notare, sono disponibili due classi, entrambe che espongono interfacce di automazione OLE. Una di queste classi è derivata dall'altra e quindi sfrutta la funzionalità della classe base, incluse le proprietà della parte di automazione OLE ("x" e "y" in questo caso).

MFC genererà **DISPID** s per la classe CDispPoint come segue:

```cpp
property X    (DISPID)0x00000001
property Y    (DISPID)0x00000002
```

Poiché le proprietà non si trovano in una classe di base, **HIWORD** del **DISPID** è sempre zero (la distanza dalla classe più derivata per CDispPoint è zero).

MFC genererà **DISPID** s per la classe CDisp3DPoint come segue:

```cpp
property Z    (DISPID)0x00000001
property X    (DISPID)0x00010001
property Y    (DISPID)0x00010002
```

Alla proprietà Z viene assegnato un **DISPID** con un **HIWORD** zero poiché è definito nella classe che espone le proprietà CDisp3DPoint. Poiché le proprietà X e Y sono definite in una classe di base, **HIWORD** del **DISPID** è 1, poiché la classe in cui sono definite tali proprietà è a una distanza di una derivazione dalla classe più derivata.

> [!NOTE]
> Il **LOWORD** è sempre determinato dalla posizione nella mappa, anche se sono presenti voci nella mappa con **DISPID** esplicito (vedere la sezione successiva per informazioni sulle versioni **_ID** delle `DISP_PROPERTY` `DISP_FUNCTION` macro e).

## <a name="advanced-mfc-dispatch-map-features"></a>Funzionalità avanzate della mappa di invio MFC

Con questa versione di Visual C++ non è supportata una serie di funzionalità aggiuntive. ClassWizard supporta `DISP_FUNCTION` , `DISP_PROPERTY` e `DISP_PROPERTY_EX` che definiscono rispettivamente un metodo, una proprietà della variabile membro e una proprietà della funzione membro get/set. Queste funzionalità sono in genere necessarie per creare la maggior parte dei server di automazione.

È possibile usare le macro aggiuntive seguenti quando le macro supportate da ClassWizard non sono adeguate: `DISP_PROPERTY_NOTIFY` , e `DISP_PROPERTY_PARAM` .

## <a name="disp_property_notify--macro-description"></a>DISP_PROPERTY_NOTIFY-Descrizione macro

```cpp
DISP_PROPERTY_NOTIFY(
    theClass,
    pszName,
    memberName,
    pfnAfterSet,
    vtPropType)
```

### <a name="parameters"></a>Parametri

*theClass*<br/>
Nome della classe.

*pszName*<br/>
Nome esterno della proprietà.

*memberName*<br/>
Nome della variabile membro in cui è archiviata la proprietà.

*pfnAfterSet*<br/>
Nome della funzione membro da chiamare quando la proprietà viene modificata.

*vtPropType*<br/>
Valore che specifica il tipo della proprietà.

### <a name="remarks"></a>Commenti

Questa macro è molto simile DISP_PROPERTY, ad eccezione del fatto che accetta un argomento aggiuntivo. L'argomento aggiuntivo, *pfnAfterSet,* deve essere una funzione membro che non restituisce alcun valore e non accetta parametri, "void OnPropertyNotify ()". Verrà chiamato **dopo che** la variabile membro è stata modificata.

## <a name="disp_property_param--macro-description"></a>DISP_PROPERTY_PARAM-Descrizione macro

```cpp
DISP_PROPERTY_PARAM(
    theClass,
    pszName,
    pfnGet,
    pfnSet,
    vtPropType,
    vtsParams)
```

### <a name="parameters"></a>Parametri

*theClass*<br/>
Nome della classe.

*pszName*<br/>
Nome esterno della proprietà.

*memberGet*<br/>
Nome della funzione membro utilizzata per ottenere la proprietà.

*memberSet*<br/>
Nome della funzione membro utilizzata per impostare la proprietà.

*vtPropType*<br/>
Valore che specifica il tipo della proprietà.

*vtsParams*<br/>
Una stringa di spazio separato VTS_ per ogni parametro.

### <a name="remarks"></a>Commenti

Analogamente alla macro DISP_PROPERTY_EX, questa macro definisce una proprietà a cui si accede con funzioni membro get e set separate. Questa macro, tuttavia, consente di specificare un elenco di parametri per la proprietà. Questa operazione è utile per l'implementazione di proprietà indicizzate o parametrizzate in altro modo. I parametri verranno sempre inseriti prima, seguiti dal nuovo valore per la proprietà. Ad esempio:

```cpp
DISP_PROPERTY_PARAM(CMyObject, "item", GetItem, SetItem, VT_DISPATCH, VTS_I2 VTS_I2)
```

corrisponderebbe alle funzioni membro get e set:

```cpp
LPDISPATCH CMyObject::GetItem(short row, short col)
void CMyObject::SetItem(short row, short col, LPDISPATCH newValue)
```

## <a name="disp_xxxx_id--macro-descriptions"></a>DISP_XXXX_ID: descrizioni delle macro

```cpp
DISP_FUNCTION_ID(
    theClass,
    pszName,
    dispid,
    pfnMember,
    vtRetVal,
    vtsParams)
DISP_PROPERTY_ID(
    theClass,
    pszName,
    dispid,
    memberName,
    vtPropType)
DISP_PROPERTY_NOTIFY_ID(
    theClass,
    pszName,
    dispid,
    memberName,
    pfnAfterSet,
    vtPropType)
DISP_PROPERTY_EX_ID(
    theClass,
    pszName,
    dispid,
    pfnGet,
    pfnSet,
    vtPropType)
DISP_PROPERTY_PARAM_ID(
    theClass,
    pszName,
    dispid,
    pfnGet,
    pfnSet,
    vtPropType,
    vtsParams)
```

### <a name="parameters"></a>Parametri

*theClass*<br/>
Nome della classe.

*pszName*<br/>
Nome esterno della proprietà.

*DISPID*<br/>
DISPID fisso per la proprietà o il metodo.

*pfnGet*<br/>
Nome della funzione membro utilizzata per ottenere la proprietà.

*pfnSet*<br/>
Nome della funzione membro utilizzata per impostare la proprietà.

*memberName*<br/>
Nome della variabile membro di cui eseguire il mapping alla proprietà.

*vtPropType*<br/>
Valore che specifica il tipo della proprietà.

*vtsParams*<br/>
Una stringa di spazio separato VTS_ per ogni parametro.

### <a name="remarks"></a>Commenti

Queste macro consentono di specificare un **DISPID** anziché consentire a MFC di assegnarne automaticamente uno. Queste macro avanzate hanno gli stessi nomi, ad eccezione del fatto che l'ID viene aggiunto al nome della macro (ad esempio **DISP_PROPERTY_ID**) e l'ID è determinato dal parametro specificato subito dopo il parametro *pszName* . Vedere AFXDISP. H per ulteriori informazioni su queste macro. Le voci **_ID** devono essere posizionate alla fine della mappa di invio. Avranno effetto sulla generazione automatica del **DISPID** nello stesso modo in cui una versione non **_ID** della macro (i **DISPID** sono determinati dalla posizione). Ad esempio:

```cpp
BEGIN_DISPATCH_MAP(CDisp3DPoint, CCmdTarget)
    DISP_PROPERTY(CDisp3DPoint, "y", m_y, VT_I2)
    DISP_PROPERTY(CDisp3DPoint, "z", m_z, VT_I2)
    DISP_PROPERTY_ID(CDisp3DPoint, "x", 0x00020003, m_x, VT_I2)
END_DISPATCH_MAP()
```

MFC genererà i DISPID per la classe CDisp3DPoint, come indicato di seguito:

```cpp
property X    (DISPID)0x00020003
property Y    (DISPID)0x00000002
property Z    (DISPID)0x00000001
```

La specifica di un **DISPID** fisso è utile per mantenere la compatibilità con le versioni precedenti di un'interfaccia dispatch esistente o per implementare determinati metodi o proprietà definiti dal sistema, generalmente indicati da un **DISPID** negativo, ad esempio la raccolta di **DISPID_NEWENUM** .

## <a name="retrieving-the-idispatch-interface-for-a-coleclientitem"></a>Recupero dell'interfaccia IDispatch per un COleClientItem

Molti server supporteranno l'automazione negli oggetti documento, insieme alla funzionalità server OLE. Per ottenere l'accesso a questa interfaccia di automazione, è necessario accedere direttamente alla `COleClientItem::m_lpObject` variabile membro. Il codice seguente recupera l' `IDispatch` interfaccia per un oggetto derivato da `COleClientItem` . Se questa funzionalità è necessaria, è possibile includere il codice seguente nell'applicazione:

```cpp
LPDISPATCH CMyClientItem::GetIDispatch()
{
    ASSERT_VALID(this);
    ASSERT(m_lpObject != NULL);

    LPUNKNOWN lpUnk = m_lpObject;

    Run();      // must be running

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
    if (lpUnk->QueryInterface(IID_IDispatch, &lpDispatch) != NOERROR)
    {
        TRACE0("Warning: does not support IDispatch!\n");
        return NULL;
    }

    ASSERT(lpDispatch != NULL);
    return lpDispatch;
}
```

L'interfaccia dispatch restituita da questa funzione può quindi essere utilizzata direttamente o collegata a un `COleDispatchDriver` per l'accesso indipendente dai tipi. Se lo si usa direttamente, assicurarsi di chiamare il relativo `Release` membro quando si usa con il puntatore (il `COleDispatchDriver` distruttore esegue questa operazione per impostazione predefinita).

## <a name="see-also"></a>Vedi anche

[Note tecniche per numero](../mfc/technical-notes-by-number.md)<br/>
[Note tecniche per categoria](../mfc/technical-notes-by-category.md)
