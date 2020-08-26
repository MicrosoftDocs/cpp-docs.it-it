---
title: Registrazione di controlli OLE
ms.date: 11/04/2016
helpviewer_keywords:
- registering OLE controls
- OLE controls [MFC], registering
ms.assetid: 73c45b7f-7dbc-43f5-bd17-dd77c6acec72
ms.openlocfilehash: 5468f3d4b730cc0b81a6ab814d495b061d292f20
ms.sourcegitcommit: ec6dd97ef3d10b44e0fedaa8e53f41696f49ac7b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/25/2020
ms.locfileid: "88843573"
---
# <a name="registering-ole-controls"></a>Registrazione di controlli OLE

È possibile accedere ai controlli OLE, come ad altri oggetti server OLE, da altre applicazioni compatibili con OLE. Questa operazione viene eseguita registrando la libreria dei tipi e la classe del controllo.

Le funzioni seguenti consentono di aggiungere e rimuovere la classe del controllo, le pagine delle proprietà e la libreria dei tipi nel database di registrazione di Windows:

### <a name="registering-ole-controls"></a>Registrazione di controlli OLE

|Nome|Descrizione|
|-|-|
|[AfxOleRegisterControlClass](#afxoleregistercontrolclass)|Aggiunge la classe del controllo al database di registrazione.|
|[AfxOleRegisterPropertyPageClass](#afxoleregisterpropertypageclass)|Aggiunge una pagina delle proprietà del controllo al database di registrazione.|
|[AfxOleRegisterTypeLib](#afxoleregistertypelib)|Aggiunge la libreria dei tipi del controllo al database di registrazione.|
|[AfxOleUnregisterClass](#afxoleunregisterclass)|Rimuove una classe di controlli o una classe di pagine delle proprietà dal database di registrazione.|
|[AfxOleUnregisterTypeLib](#afxoleunregistertypelib)|Rimuove la libreria dei tipi del controllo dal database di registrazione.|

`AfxOleRegisterTypeLib` viene in genere chiamato in un'implementazione della DLL del controllo di `DllRegisterServer` . Analogamente, `AfxOleUnregisterTypeLib` viene chiamato da `DllUnregisterServer` . `AfxOleRegisterControlClass`, `AfxOleRegisterPropertyPageClass` e `AfxOleUnregisterClass` vengono in genere chiamate dalla `UpdateRegistry` funzione membro della class factory o della pagina delle proprietà di un controllo.

## <a name="afxoleregistercontrolclass"></a><a name="afxoleregistercontrolclass"></a> AfxOleRegisterControlClass

Registra la classe del controllo con il database di registrazione di Windows.

```
BOOL AFXAPI AfxOleRegisterControlClass(
    HINSTANCE hInstance,
    REFCLSID clsid,
    LPCTSTR pszProgID,
    UINT idTypeName,
    UINT idBitmap,
    int nRegFlags,
    DWORD dwMiscStatus,
    REFGUID tlid,
    WORD wVerMajor,
    WORD wVerMinor);
```

### <a name="parameters"></a>Parametri

*hInstance*<br/>
Handle dell'istanza del modulo associato alla classe del controllo.

*clsid*<br/>
ID univoco della classe del controllo.

*pszProgID*<br/>
ID univoco del programma del controllo.

*idTypeName*<br/>
ID risorsa della stringa che contiene un nome di tipo leggibile dall'utente per il controllo.

*idBitmap*<br/>
ID risorsa della bitmap utilizzata per rappresentare il controllo OLE in una barra degli strumenti o in una tavolozza.

*intnRegFlags*<br/>
Contiene uno o più dei flag seguenti:

- `afxRegInsertable` Consente di visualizzare il controllo nella finestra di dialogo Inserisci oggetto per gli oggetti OLE.

- `afxRegApartmentThreading` Imposta il modello di threading nel registro di sistema su ThreadingModel = Apartment.

- `afxRegFreeThreading` Imposta il modello di threading nel registro di sistema su ThreadingModel = Free.

   È possibile combinare i due flag `afxRegApartmentThreading` e `afxRegFreeThreading` impostare ThreadingModel = both. Per ulteriori informazioni sulla registrazione del modello di threading, vedere [InprocServer32](/windows/win32/com/inprocserver32) nel Windows SDK.

> [!NOTE]
> Nelle versioni MFC precedenti a MFC 4,2, il **`int`** parametro *intnRegFlags* è un parametro bool, *bInsertable*, che consentiva o non consentiva di inserire il controllo dalla finestra di dialogo Inserisci oggetto.

*dwMiscStatus*<br/>
Contiene uno o più dei flag di stato seguenti (per una descrizione dei flag, vedere Enumerazione OLEMISC nel Windows SDK):

- OLEMISC_RECOMPOSEONRESIZE

- OLEMISC_ONLYICONIC

- OLEMISC_INSERTNOTREPLACE

- OLEMISC_STATIC

- OLEMISC_CANTLINKINSIDE

- OLEMISC_CANLINKBYOLE1

- OLEMISC_ISLINKOBJECT

- OLEMISC_INSIDEOUT

- OLEMISC_ACTIVATEWHENVISIBLE

- OLEMISC_RENDERINGISDEVICEINDEPENDENT

- OLEMISC_INVISIBLEATRUNTIME

- OLEMISC_ALWAYSRUN

- OLEMISC_ACTSLIKEBUTTON

- OLEMISC_ACTSLIKELABEL

- OLEMISC_NOUIACTIVATE

- OLEMISC_ALIGNABLE

- OLEMISC_IMEMODE

- OLEMISC_SIMPLEFRAME

- OLEMISC_SETCLIENTSITEFIRST

*tlid*<br/>
ID univoco della classe del controllo.

*wVerMajor*<br/>
Numero di versione principale della classe del controllo.

*wVerMinor*<br/>
Numero della versione secondaria della classe del controllo.

### <a name="return-value"></a>Valore restituito

Diverso da zero se la classe del controllo è stata registrata. in caso contrario, 0.

### <a name="remarks"></a>Osservazioni

In questo modo il controllo può essere usato dai contenitori che sono compatibili con il controllo OLE. `AfxOleRegisterControlClass` Aggiorna il registro di sistema con il nome e il percorso del controllo nel sistema e imposta anche il modello di threading supportato dal controllo nel registro di sistema. Per ulteriori informazioni, vedere la [Nota tecnica 64](../../mfc/tn064-apartment-model-threading-in-activex-controls.md), "Threading del modello di Apartment nei controlli OLE" e [informazioni sui processi e sui thread](/windows/win32/ProcThread/about-processes-and-threads) nel Windows SDK.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCAxCtl#11](../../mfc/reference/codesnippet/cpp/registering-ole-controls_1.cpp)]

Nell'esempio precedente viene illustrato come `AfxOleRegisterControlClass` viene chiamato con il flag per Insertable e il flag per il modello di Apartment ORed insieme per creare il sesto parametro:

[!code-cpp[NVC_MFCAxCtl#12](../../mfc/reference/codesnippet/cpp/registering-ole-controls_2.cpp)]

Il controllo verrà visualizzato nella finestra di dialogo Inserisci oggetto per i contenitori abilitati e sarà compatibile con il modello Apartment. I controlli compatibili con il modello di Apartment devono garantire che i dati della classe statica siano protetti da blocchi, in modo che, mentre un controllo in un Apartment acceda ai dati statici, non venga disabilitato dall'utilità di pianificazione prima che venga terminato e un'altra istanza della stessa classe inizi a usare gli stessi dati statici. Tutti gli accessi ai dati statici saranno racchiusi dal codice della sezione critica.

### <a name="requirements"></a>Requisiti

  **Intestazione** afxctl. h

## <a name="afxoleregisterpropertypageclass"></a><a name="afxoleregisterpropertypageclass"></a> AfxOleRegisterPropertyPageClass

Registra la classe della pagina delle proprietà con il database di registrazione di Windows.

```
BOOL AFXAPI AfxOleRegisterPropertyPageClass(
   HINSTANCE hInstance,
   REFCLSID  clsid,
   UINT idTypeName,
   int nRegFlags);
```

### <a name="parameters"></a>Parametri

*hInstance*<br/>
Handle dell'istanza del modulo associato alla classe della pagina delle proprietà.

*clsid*<br/>
ID di classe univoco della pagina delle proprietà.

*idTypeName*<br/>
ID risorsa della stringa che contiene un nome leggibile dall'utente per la pagina delle proprietà.

*intnRegFlags*<br/>
Può contenere il flag:

- `afxRegApartmentThreading` Imposta il modello di threading nel registro di sistema su ThreadingModel = Apartment.

> [!NOTE]
> Nelle versioni MFC precedenti a MFC 4,2, il **`int`** parametro *intnRegFlags* non era disponibile. Si noti inoltre che il `afxRegInsertable` flag non è un'opzione valida per le pagine delle proprietà e provocherà un'asserzione in MFC se è impostata

### <a name="return-value"></a>Valore restituito

Diverso da zero se la classe del controllo è stata registrata. in caso contrario, 0.

### <a name="remarks"></a>Osservazioni

Ciò consente di utilizzare la pagina delle proprietà per i contenitori che sono compatibili con il controllo OLE. `AfxOleRegisterPropertyPageClass` Aggiorna il registro di sistema con il nome della pagina delle proprietà e il relativo percorso nel sistema e imposta anche il modello di threading supportato dal controllo nel registro di sistema. Per ulteriori informazioni, vedere la [Nota tecnica 64](../../mfc/tn064-apartment-model-threading-in-activex-controls.md), "Threading del modello di Apartment nei controlli OLE" e [informazioni sui processi e sui thread](/windows/win32/ProcThread/about-processes-and-threads) nel Windows SDK.

### <a name="requirements"></a>Requisiti

  **Intestazione** afxctl. h

## <a name="afxoleregistertypelib"></a><a name="afxoleregistertypelib"></a> AfxOleRegisterTypeLib

Registra la libreria dei tipi con il database di registrazione di Windows e consente l'utilizzo della libreria dei tipi da parte di altri contenitori che supportano i controlli OLE.

```
BOOL AfxOleRegisterTypeLib(
    HINSTANCE hInstance,
    REFGUID tlid,
    LPCTSTR pszFileName = NULL,
    LPCTSTR pszHelpDir  = NULL);
```

### <a name="parameters"></a>Parametri

*hInstance*<br/>
Handle dell'istanza dell'applicazione associata alla libreria dei tipi.

*tlid*<br/>
ID univoco della libreria dei tipi.

*pszFileName*<br/>
Punta al nome file facoltativo di un file localizzato della libreria dei tipi (.TLB) per il controllo.

*pszHelpDir*<br/>
Nome della directory in cui è disponibile il file della Guida della libreria dei tipi. Se NULL, si presuppone che il file della Guida si trovi nella stessa directory della libreria dei tipi stessa.

### <a name="return-value"></a>Valore restituito

Diverso da zero se la libreria dei tipi è stata registrata; in caso contrario, 0.

### <a name="remarks"></a>Osservazioni

Questa funzione aggiorna il Registro di sistema con il nome della libreria dei tipi e il relativo percorso nel sistema.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCAutomation#7](../../mfc/codesnippet/cpp/registering-ole-controls_3.cpp)]

[!code-cpp[NVC_MFCAutomation#8](../../mfc/codesnippet/cpp/registering-ole-controls_4.cpp)]

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdisp. h

## <a name="afxoleunregisterclass"></a><a name="afxoleunregisterclass"></a> AfxOleUnregisterClass

Rimuove la voce della classe del controllo o della pagina delle proprietà dal database di registrazione di Windows.

```
BOOL AFXAPI AfxOleUnregisterClass(REFCLSID clsID, LPCSTR pszProgID);
```

### <a name="parameters"></a>Parametri

*clsID*<br/>
ID univoco della classe del controllo o della pagina delle proprietà.

*pszProgID*<br/>
ID di programma univoco del controllo o della pagina delle proprietà.

### <a name="return-value"></a>Valore restituito

Diverso da zero se la registrazione della classe del controllo o della pagina delle proprietà è stata completata. in caso contrario, 0.

### <a name="requirements"></a>Requisiti

  **Intestazione** afxctl. h

## <a name="afxoleunregistertypelib"></a><a name="afxoleunregistertypelib"></a> AfxOleUnregisterTypeLib

Chiamare questa funzione per rimuovere la voce della libreria dei tipi dal database di registrazione di Windows.

```
BOOL AFXAPI AfxOleUnregisterTypeLib(REFGUID tlID);
```

### <a name="parameters"></a>Parametri

*tlID*<br/>
ID univoco della libreria dei tipi.

### <a name="return-value"></a>Valore restituito

Diverso da zero se la registrazione della libreria dei tipi è stata completata. in caso contrario, 0.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCAxCtl#13](../../mfc/reference/codesnippet/cpp/registering-ole-controls_5.cpp)]

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdisp. h

## <a name="see-also"></a>Vedere anche

[Macro e funzioni globali](../../mfc/reference/mfc-macros-and-globals.md)
