---
title: Registrazione di controlli OLE
ms.date: 11/04/2016
f1_keywords:
- vc.mfc.macros.ole
helpviewer_keywords:
- registering OLE controls
- OLE controls [MFC], registering
ms.assetid: 73c45b7f-7dbc-43f5-bd17-dd77c6acec72
ms.openlocfilehash: 9c480696bdec3591f0509cbad04051a2b3af4070
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57262155"
---
# <a name="registering-ole-controls"></a>Registrazione di controlli OLE

Controlli OLE, analogamente ad altri oggetti di server OLE, sono accessibili da altre applicazioni compatibili con OLE. Ciò si ottiene registrando libreria dei tipi e classe del controllo.

Le funzioni seguenti consentono di aggiungere e rimuovere classi, le pagine delle proprietà e libreria dei tipi del controllo nel database di registrazione Windows:

### <a name="registering-ole-controls"></a>Registrazione di controlli OLE

|||
|-|-|
|[AfxOleRegisterControlClass](#afxoleregistercontrolclass)|Aggiunge la classe del controllo al database di registrazione.|
|[AfxOleRegisterPropertyPageClass](#afxoleregisterpropertypageclass)|Aggiunge una pagina di proprietà di controllo per il database di registrazione.|
|[AfxOleRegisterTypeLib](#afxoleregistertypelib)|Aggiunge una libreria dei tipi del controllo al database di registrazione.|
|[AfxOleUnregisterClass](#afxoleunregisterclass)|Rimuove una classe del controllo o una classe di pagina delle proprietà dal database di registrazione.|
|[AfxOleUnregisterTypeLib](#afxoleunregistertypelib)|Rimuove il database di registrazione della libreria dei tipi del controllo.|

`AfxOleRegisterTypeLib` in genere viene chiamato nell'implementazione di un controllo della DLL di `DllRegisterServer`. Analogamente, `AfxOleUnregisterTypeLib` viene chiamato da `DllUnregisterServer`. `AfxOleRegisterControlClass`, `AfxOleRegisterPropertyPageClass`, e `AfxOleUnregisterClass` vengono in genere chiamata dal `UpdateRegistry` funzione membro della pagina di factory o delle proprietà di classe del controllo.

##  <a name="afxoleregistercontrolclass"></a>  AfxOleRegisterControlClass

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
L'handle di istanza del modulo associato con la classe del controllo.

*clsid*<br/>
ID univoco della classe del controllo.

*pszProgID*<br/>
ID univoco del programma del controllo.

*idTypeName*<br/>
L'ID risorsa della stringa che contiene un nome tipo leggibile dall'utente per il controllo.

*idBitmap*<br/>
L'ID risorsa della bitmap utilizzata per rappresentare il controllo OLE in una barra degli strumenti o tavolozza.

*nRegFlags*<br/>
Contiene uno o più dei flag seguenti:

- `afxRegInsertable` Consente il controllo venga visualizzato nella finestra di dialogo Inserisci oggetto per gli oggetti OLE.

- `afxRegApartmentThreading` Imposta il modello di threading nel Registro di sistema ThreadingModel = Apartment.

- `afxRegFreeThreading` Imposta il modello di threading nel Registro di sistema ThreadingModel = gratuito.

   È possibile combinare i due flag `afxRegApartmentThreading` e `afxRegFreeThreading` impostare ThreadingModel impostato su Both. Visualizzare [InprocServer32](/windows/desktop/com/inprocserver32) nel SDK di Windows per ulteriori informazioni sulla registrazione del modello di threading.

> [!NOTE]
>  Nelle versioni MFC precedenti alla 4.2 MFC, la **int** *nRegFlags* parametro è un parametro, BOOL *bInsertable*, che consentito o meno il controllo deve essere inserito l'inserimento Finestra di dialogo di oggetto.

*dwMiscStatus*<br/>
Contiene uno o più dei flag di stato seguenti (per una descrizione dei flag, vedere enumerazione OLEMISC nel SDK di Windows):

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
Il numero di versione principale della classe del controllo.

*wVerMinor*<br/>
Il numero di versione secondaria della classe del controllo.

### <a name="return-value"></a>Valore restituito

Diverso da zero se la classe del controllo è stata registrata. in caso contrario 0.

### <a name="remarks"></a>Note

In questo modo il controllo utilizzabile dai contenitori di controlli OLE consapevoli. `AfxOleRegisterControlClass` Aggiorna il Registro di sistema con il nome e posizione del controllo del sistema e imposta anche il modello di threading che supporta il controllo nel Registro di sistema. Per altre informazioni, vedere [64 Nota tecnica](../../mfc/tn064-apartment-model-threading-in-activex-controls.md), "Modello di Apartment del Threading in OLE controlli," e [sui processi e thread](/windows/desktop/ProcThread/about-processes-and-threads) nel SDK di Windows.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCAxCtl#11](../../mfc/reference/codesnippet/cpp/registering-ole-controls_1.cpp)]

Nell'esempio precedente viene illustrato come `AfxOleRegisterControlClass` viene chiamato con il flag per inseribile e il flag per apartment dall'operatore OR combinati per creare il sesto parametro del modello:

[!code-cpp[NVC_MFCAxCtl#12](../../mfc/reference/codesnippet/cpp/registering-ole-controls_2.cpp)]

Il controllo verrà visualizzato nella finestra di dialogo Inserisci oggetto per i contenitori abilitati e sarà apartment con supporto del modello. I controlli con supporto del modello di apartment è necessario assicurarsi che i dati sono protetti da blocchi, di classe statica in modo che durante un controllo in un apartment è l'accesso ai dati statici, non è disabilitata dall'utilità di pianificazione prima del completamento, e un'altra istanza della classe stessa venga avviato usando gli stessi dati statici. Qualsiasi tipo di accesso ai dati statici verrà racchiusa da codice di sezione critica.

### <a name="requirements"></a>Requisiti

  **Intestazione** afxctl. h

##  <a name="afxoleregisterpropertypageclass"></a>  AfxOleRegisterPropertyPageClass

Registra la classe di pagina delle proprietà con il database di registrazione di Windows.

```
BOOL AFXAPI AfxOleRegisterPropertyPageClass(
   HINSTANCE hInstance,
   REFCLSID  clsid,
   UINT idTypeName,
   int nRegFlags);
```

### <a name="parameters"></a>Parametri

*hInstance*<br/>
L'handle di istanza del modulo associato alla proprietà pagina classe.

*clsid*<br/>
ID univoco di classe della pagina delle proprietà.

*idTypeName*<br/>
L'ID risorsa della stringa che contiene un nome leggibile dall'utente per la pagina delle proprietà.

*nRegFlags*<br/>
Può includere il flag:

- `afxRegApartmentThreading` Imposta il modello di threading nel Registro di sistema ThreadingModel = Apartment.

> [!NOTE]
>  Nelle versioni MFC precedenti alla 4.2 MFC, la **int** *nRegFlags* parametro non è disponibile. Si noti inoltre che il `afxRegInsertable` flag non è un'opzione valida per le pagine delle proprietà e causerà un'ASSERZIONE in MFC, se è impostato

### <a name="return-value"></a>Valore restituito

Diverso da zero se la classe del controllo è stata registrata. in caso contrario 0.

### <a name="remarks"></a>Note

In questo modo la pagina delle proprietà utilizzabile dai contenitori di controlli OLE consapevoli. `AfxOleRegisterPropertyPageClass` Aggiorna il Registro di sistema con il nome della pagina proprietà e il relativo percorso nel sistema e imposta anche il modello di threading che supporta il controllo nel Registro di sistema. Per altre informazioni, vedere [64 Nota tecnica](../../mfc/tn064-apartment-model-threading-in-activex-controls.md), "Modello di Apartment del Threading in OLE controlli," e [sui processi e thread](/windows/desktop/ProcThread/about-processes-and-threads) nel SDK di Windows.

### <a name="requirements"></a>Requisiti

  **Intestazione** afxctl. h

##  <a name="afxoleregistertypelib"></a>  AfxOleRegisterTypeLib

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
Nome della directory in cui è disponibile il file della Guida della libreria dei tipi. Se NULL, il file della guida presuppone di trovarsi nella stessa directory di libreria dei tipi di se stesso.

### <a name="return-value"></a>Valore restituito

Diverso da zero se la libreria dei tipi è stata registrata; in caso contrario, 0.

### <a name="remarks"></a>Note

Questa funzione aggiorna il Registro di sistema con il nome della libreria dei tipi e il relativo percorso nel sistema.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCAutomation#7](../../mfc/codesnippet/cpp/registering-ole-controls_3.cpp)]

[!code-cpp[NVC_MFCAutomation#8](../../mfc/codesnippet/cpp/registering-ole-controls_4.cpp)]

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdisp. h

##  <a name="afxoleunregisterclass"></a>  AfxOleUnregisterClass

Rimuove la voce della classe pagina controllo o una proprietà dal database di registrazione di Windows.

```
BOOL AFXAPI AfxOleUnregisterClass(REFCLSID clsID, LPCSTR pszProgID);
```

### <a name="parameters"></a>Parametri

*clsID*<br/>
ID univoco di classe della pagina controllo o una proprietà.

*pszProgID*<br/>
L'ID univoco della pagina controllo o una proprietà.

### <a name="return-value"></a>Valore restituito

Diverso da zero se la classe delle pagine di controllo o la proprietà è stata annullata. in caso contrario 0.

### <a name="requirements"></a>Requisiti

  **Intestazione** afxctl. h

##  <a name="afxoleunregistertypelib"></a>  AfxOleUnregisterTypeLib

Chiamare questa funzione per rimuovere la voce di tipo raccolta dal database di registrazione di Windows.

```
BOOL AFXAPI AfxOleUnregisterTypeLib(REFGUID tlID);
```

### <a name="parameters"></a>Parametri

*tlID*<br/>
ID univoco della libreria dei tipi.

### <a name="return-value"></a>Valore restituito

Diverso da zero se la libreria dei tipi è stata annullata. in caso contrario 0.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCAxCtl#13](../../mfc/reference/codesnippet/cpp/registering-ole-controls_5.cpp)]

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdisp. h

## <a name="see-also"></a>Vedere anche

[Macro e funzioni globali](../../mfc/reference/mfc-macros-and-globals.md)
