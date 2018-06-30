---
title: 'TN039: Implementazione di automazione OLE MFC | Documenti Microsoft'
ms.custom: ''
ms.date: 06/28/2018
ms.technology:
- cpp-mfc
ms.topic: conceptual
f1_keywords:
- vc.mfc.ole
dev_langs:
- C++
helpviewer_keywords:
- MFC, COM support
- IDispatch interface
- MFC, OLE DB and
- TN039
- Automation, MFC COM interface entry points
ms.assetid: 765fa3e9-dd54-4f08-9ad2-26e0546ff8b6
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 9dcc179b1481c4f1f6b6a0773bba792eefffae25
ms.sourcegitcommit: 208d445fd7ea202de1d372d3f468e784e77bd666
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/29/2018
ms.locfileid: "37122121"
---
# <a name="tn039-mfcole-automation-implementation"></a>TN039: implementazione di automazione MFC/OLE

> [!NOTE]
> La seguente nota tecnica non è stata aggiornata da quando è stata inclusa per la prima volta nella documentazione online. Di conseguenza, alcune procedure e argomenti potrebbero essere non aggiornati o errati. Per le informazioni più recenti, è consigliabile cercare l'argomento di interesse nell'indice della documentazione online.

## <a name="overview-of-ole-idispatch-interface"></a>Panoramica dell'interfaccia IDispatch OLE

Il `IDispatch` interfaccia costituisce il mezzo mediante il quale le applicazioni espongono metodi e proprietà ad altre applicazioni, ad esempio Visual BASIC o altri linguaggi, consentono di utilizzare funzionalità dell'applicazione. La parte più importante di questa interfaccia è il `IDispatch::Invoke` (funzione). MFC utilizza "mappe di invio" implementare `IDispatch::Invoke`. Mappa di invio vengono fornite le informazioni di implementazione MFC nel layout o "forma" i `CCmdTarget`-classi derivate, in modo che è possibile modificare le proprietà dell'oggetto, o direttamente chiamare le funzioni all'interno di oggetto per soddisfare membro `IDispatch::Invoke` richieste.

Nella maggior parte, ClassWizard e MFC collaborano per nascondere la maggior parte dei dettagli dell'automazione OLE al programmatore di applicazione. Il programmatore si concentra sulle funzionalità effettivo per esporre nell'applicazione e non è necessario preoccuparsi della struttura sottostante.

Vi sono casi, tuttavia, in cui è necessario comprendere le operazioni eseguite in background MFC. In questa nota risolverà modalità con cui il framework assegna **DISPID**s per funzioni membro e proprietà. Knowledge base dell'algoritmo MFC utilizza per l'assegnazione **DISPID**s è necessaria solo quando è necessario conoscere gli ID, ad esempio quando si crea una libreria dei tipi"" per gli oggetti dell'applicazione.

## <a name="mfc-dispid-assignment"></a>Assegnazione DISPID MFC

Anche se l'utente finale di automazione (Visual Basic utente, ad esempio), Visualizza i nomi effettivi dell'automazione abilitato proprietà e metodi nel codice (ad esempio obj. ShowWindow), l'implementazione di `IDispatch::Invoke` non riceve i nomi effettivi. Per motivi di ottimizzazione, riceve un **DISPID**, ovvero a 32 bit "magico cookie" che descrive il metodo o proprietà che deve essere accessibile. Questi **DISPID** i valori vengono restituiti dal `IDispatch` implementazione tramite un altro metodo, denominato `IDispatch::GetIDsOfNames`. Un'applicazione client di automazione chiamerà `GetIDsOfNames` una volta per ogni membro o una proprietà che si desidera accedere e memorizzarli nella cache per le chiamate successive alle `IDispatch::Invoke`. In questo modo, la ricerca stringa costosa viene eseguita solo una volta per ogni utilizzo di oggetto, anziché una sola volta per ogni `IDispatch::Invoke` chiamare.

MFC determina il **DISPID**per ogni metodo e proprietà in base a due operazioni:

- La distanza dalla parte superiore della mappa di invio (1 relativa)

- La distanza della mappa di invio dalla classe più derivata (da 0 relativo)

Il **DISPID** è suddivisa in due parti. Il **LOWORD** del **DISPID** contiene il primo componente, la distanza dalla parte superiore della mappa di invio. Il **HIWORD** contiene la distanza tra la classe più derivata. Ad esempio:

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

Come si può notare, esistono due classi, che espongono le interfacce di automazione OLE. Una di queste classi è derivata da altra e quindi utilizza le funzionalità della classe di base, tra cui la parte di automazione OLE ("x" e "y" proprietà in questo caso).

MFC genererà **DISPID**s per la classe CDispPoint come indicato di seguito:

```cpp
property X    (DISPID)0x00000001
property Y    (DISPID)0x00000002
```

Poiché le proprietà non sono in una classe base, il **HIWORD** del **DISPID** è sempre zero (la distanza tra la classe più derivata per CDispPoint è zero).

MFC genererà **DISPID**s per la classe CDisp3DPoint come indicato di seguito:

```cpp
property Z    (DISPID)0x00000001
property X    (DISPID)0x00010001
property Y    (DISPID)0x00010002
```

La proprietà Z viene fornita un **DISPID** con uno zero **HIWORD** perché è definito nella classe che espone le proprietà, CDisp3DPoint. Poiché le proprietà X e Y vengono definite in una classe base, il **HIWORD** del **DISPID** è 1, poiché la classe in cui queste proprietà sono definite in una distanza di una derivazione dalla classe più derivata.

> [!NOTE]
> Il **LOWORD** è sempre dipende dalla posizione della mappa, anche se non esistono voci della mappa con esplicita **DISPID** (vedere la sezione successiva per informazioni sul **ID** versioni di `DISP_PROPERTY` e `DISP_FUNCTION` macro).

## <a name="advanced-mfc-dispatch-map-features"></a>Avanzate funzionalità di mappa di invio MFC

Esistono una serie di funzionalità aggiuntive che non supporta la creazione guidata classe con questa versione di Visual C++. Supporta ClassWizard `DISP_FUNCTION`, `DISP_PROPERTY`, e `DISP_PROPERTY_EX` che consentono di definire un metodo, proprietà della variabile membro e proprietà funzione membro set/get, rispettivamente. Queste funzionalità sono in genere tutto ciò che serve per creare la maggior parte dei server di automazione.

Le macro aggiuntive seguenti possono essere utilizzate le macro ClassWizard supportate non sono adeguate: `DISP_PROPERTY_NOTIFY`, e `DISP_PROPERTY_PARAM`.

## <a name="disppropertynotify--macro-description"></a>DISP_PROPERTY_NOTIFY: Descrizione della Macro

```cpp
DISP_PROPERTY_NOTIFY(
    theClass,
    pszName,
    memberName,
    pfnAfterSet,
    vtPropType)
```

### <a name="parameters"></a>Parametri

*theClass*  
 Nome della classe.

*pszName*  
 Nome esterno della proprietà.

*nome membro*  
 Nome della variabile membro in cui la proprietà viene archiviata.

*pfnAfterSet*  
 Nome della funzione membro da chiamare quando la proprietà viene modificata.

*vtPropType*  
 Un valore che specifica il tipo della proprietà.

### <a name="remarks"></a>Note

Questa macro è simile DISP_PROPERTY, con la differenza che accetta un argomento aggiuntivo. L'argomento aggiuntivo *pfnAfterSet,* deve essere una funzione membro che non restituisce nulla e non accetta parametri, 'void OnPropertyNotify()'. Verrà chiamato **dopo** la variabile membro è stata modificata.

## <a name="disppropertyparam--macro-description"></a>DISP_PROPERTY_PARAM: Descrizione della Macro

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

*theClass*  
 Nome della classe.

*pszName*  
 Nome esterno della proprietà.

*memberGet*  
 Nome della funzione di membro utilizzata per ottenere la proprietà.

*set di membri*  
 Nome della funzione membro utilizzata per impostare la proprietà.

*vtPropType*  
 Un valore che specifica il tipo della proprietà.

*vtsParams*  
 Stringa dello spazio separati VTS _ per ogni parametro.

### <a name="remarks"></a>Note

Molto come il DISP_PROPERTY_EX (macro), questa macro definisce una proprietà accessibile con le funzioni membro Get e Set separate. Questa macro, tuttavia, consente di specificare un elenco di parametri per la proprietà. Ciò è utile per l'implementazione di proprietà indicizzate o con parametri in un altro modo. I parametri verranno sempre inseriti in primo luogo, aggiungendo il nuovo valore per la proprietà. Ad esempio:

```cpp
DISP_PROPERTY_PARAM(CMyObject, "item", GetItem, SetItem, VT_DISPATCH, VTS_I2 VTS_I2)
```

corrisponderebbe per ottenere e impostare le funzioni membro:

```cpp
LPDISPATCH CMyObject::GetItem(short row, short col)
void CMyObject::SetItem(short row, short col, LPDISPATCH newValue)
```

## <a name="dispxxxxid--macro-descriptions"></a>DISP_XXXX_ID: Descrizioni delle Macro

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

*theClass*  
Nome della classe.

*pszName*  
Nome esterno della proprietà.

*DISPID*  
DISPID fisso per la proprietà o metodo.

*pfnGet*  
Nome della funzione di membro utilizzata per ottenere la proprietà.

*pfnSet*  
Nome della funzione membro utilizzata per impostare la proprietà.

*nome membro*  
Il nome della variabile membro per eseguire il mapping alla proprietà

*vtPropType*  
Un valore che specifica il tipo della proprietà.

*vtsParams*  
Stringa dello spazio separati VTS _ per ogni parametro.

### <a name="remarks"></a>Note

Queste macro consentono di specificare un **DISPID** anziché consentire automaticamente MFC assegnare uno. Queste macro avanzate hanno gli stessi nomi ad eccezione del fatto che l'ID viene aggiunto al nome della macro (ad esempio **DISP_PROPERTY_ID**) e l'ID è determinato dal parametro specificato subito dopo il *pszName* parametro. Vedere AFXDISP. H per altre informazioni su queste macro. Il **ID** voci devono essere inserite alla fine della mappa di invio. Abbiano effetto su automatiche **DISPID** generazione nello stesso modo come non -**ID** versione della macro verrà (il **DISPID**s sono determinati dalla posizione). Ad esempio:

```cpp
BEGIN_DISPATCH_MAP(CDisp3DPoint, CCmdTarget)
    DISP_PROPERTY(CDisp3DPoint, "y", m_y, VT_I2)
    DISP_PROPERTY(CDisp3DPoint, "z", m_z, VT_I2)
    DISP_PROPERTY_ID(CDisp3DPoint, "x", 0x00020003, m_x, VT_I2)
END_DISPATCH_MAP()
```

MFC genera i DISPID per classe CDisp3DPoint come indicato di seguito:

```cpp
property X    (DISPID)0x00020003
property Y    (DISPID)0x00000002
property Z    (DISPID)0x00000001
```

Specificando fissa **DISPID** è utile per garantire la compatibilità con le versioni precedenti a un'interfaccia dispatch già esistente o per implementare determinati metodi definiti dal sistema o proprietà (in genere indicato da un valore negativo  **DISPID**, ad esempio il **DISPID_NEWENUM** raccolta).

## <a name="retrieving-the-idispatch-interface-for-a-coleclientitem"></a>Recuperare l'interfaccia IDispatch per un COleClientItem

Numero di server supporteranno automazione entro i relativi oggetti di documento, con le funzionalità del server OLE. Per accedere a questa interfaccia di automazione, è necessario accedere direttamente il `COleClientItem::m_lpObject` variabile membro. Il codice seguente permette di recuperare il `IDispatch` interfaccia per un oggetto derivato da `COleClientItem`. Se questa funzionalità necessarie, è possibile includere il codice seguente nell'applicazione in uso:

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

L'interfaccia dispatch restituito da questa funzione potrebbe essere usata direttamente o collegata a un `COleDispatchDriver` per l'accesso indipendente dai tipi. Se si utilizzano direttamente, assicurarsi che venga chiamato il relativo `Release` membro quando tramite con il puntatore (il `COleDispatchDriver` distruttore avviene per impostazione predefinita).

## <a name="see-also"></a>Vedere anche

[Note tecniche per numero](../mfc/technical-notes-by-number.md)  
[Note tecniche per categoria](../mfc/technical-notes-by-category.md)  
