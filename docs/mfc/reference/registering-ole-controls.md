---
title: Registrazione di controlli OLE
ms.date: 11/04/2016
helpviewer_keywords:
- registering OLE controls
- OLE controls [MFC], registering
ms.assetid: 73c45b7f-7dbc-43f5-bd17-dd77c6acec72
ms.openlocfilehash: 2f2d7872e8b9369b5eef283e5b52a54c29afd563
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81372964"
---
# <a name="registering-ole-controls"></a>Registrazione di controlli OLE

I controlli OLE, come altri oggetti server OLE, sono accessibili da altre applicazioni in grado di riconoscere OLE. Ciò si ottiene registrando la libreria dei tipi e la classe del controllo.

Le funzioni seguenti consentono di aggiungere e rimuovere la classe, le pagine delle proprietà e la libreria dei tipi del controllo nel database di registrazione di Windows:

### <a name="registering-ole-controls"></a>Registrazione di controlli OLE

|||
|-|-|
|[AfxOleRegisterControlClass](#afxoleregistercontrolclass)|Aggiunge la classe del controllo al database di registrazione.|
|[AfxOleRegisterPropertyPageClass](#afxoleregisterpropertypageclass)|Aggiunge una pagina delle proprietà del controllo al database di registrazione.|
|[AfxOleRegisterTypeLib](#afxoleregistertypelib)|Aggiunge la libreria dei tipi del controllo al database di registrazione.|
|[AfxOleUnregisterClass](#afxoleunregisterclass)|Rimuove una classe di controlli o una classe di pagine delle proprietà dal database di registrazione.|
|[AfxOleUnregisterTypeLib](#afxoleunregistertypelib)|Rimuove la libreria dei tipi del controllo dal database di registrazione.|

`AfxOleRegisterTypeLib`viene in genere chiamato nell'implementazione di una DLL di controllo di `DllRegisterServer`. Allo stesso `AfxOleUnregisterTypeLib` modo, `DllUnregisterServer`viene chiamato da . `AfxOleRegisterControlClass`, `AfxOleRegisterPropertyPageClass`, `AfxOleUnregisterClass` e vengono `UpdateRegistry` in genere chiamati dalla funzione membro della class factory o della pagina delle proprietà di un controllo.

## <a name="afxoleregistercontrolclass"></a><a name="afxoleregistercontrolclass"></a>AfxOleRegisterControlClass

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
Handle di istanza del modulo associato alla classe del controllo.

*clsid*<br/>
ID univoco della classe del controllo.

*pszProgID (IDSP)*<br/>
ID univoco del programma del controllo.

*idTypeName (NomeTipo)*<br/>
ID di risorsa della stringa che contiene un nome di tipo leggibile dall'utente per il controllo.

*idBitmap (informazioni in stato inquesto*<br/>
ID di risorsa della bitmap utilizzata per rappresentare il controllo OLE in una barra degli strumenti o una tavolozza.

*nRegFlags (in modo nRegFlags)*<br/>
Contiene uno o più dei seguenti flag:

- `afxRegInsertable`Consente al controllo di essere visualizzato nella finestra di dialogo Inserisci oggetto per gli oggetti OLE.

- `afxRegApartmentThreading`Imposta il modello di threading nel Registro di sistema su ThreadingModel.

- `afxRegFreeThreading`Imposta il modello di threading nel Registro di sistema su ThreadingModel-Free.

   È possibile combinare `afxRegApartmentThreading` i `afxRegFreeThreading` due flag e impostare ThreadingModel- Entrambi. Per ulteriori informazioni sulla registrazione del modello di threading, vedere [InprocServer32](/windows/win32/com/inprocserver32) in Windows SDK.

> [!NOTE]
> Nelle versioni MFC precedenti a MFC 4.2, il parametro **int** *nRegFlags* era un parametro BOOL, *bInsertable*, che consentiva o meno l'inserimento del controllo dalla finestra di dialogo Inserisci oggetto.

*dwMiscStatus (stato dwMisc)*<br/>
Contiene uno o più dei seguenti flag di stato (per una descrizione dei flag, vedere enumerazione OLEMISC in Windows SDK):

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

*wVerMajor (informazioni in base alle persone*<br/>
Numero di versione principale della classe del controllo.

*wVerMinor (informazioni in base al ruolo minore)*<br/>
Numero di versione secondario della classe del controllo.

### <a name="return-value"></a>Valore restituito

Diverso da zero se la classe del controllo è stata registrata; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

In questo modo il controllo può essere utilizzato da contenitori che sono in grado di riconoscere il controllo OLE. `AfxOleRegisterControlClass`aggiorna il Registro di sistema con il nome e il percorso del controllo nel sistema e imposta anche il modello di threading supportato dal controllo nel Registro di sistema. Per ulteriori informazioni, vedere [Nota tecnica 64](../../mfc/tn064-apartment-model-threading-in-activex-controls.md), "Threading del modello di apartment nei controlli OLE" e [Informazioni su processi e thread](/windows/win32/ProcThread/about-processes-and-threads) in Windows SDK.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCAxCtl#11](../../mfc/reference/codesnippet/cpp/registering-ole-controls_1.cpp)]

L'esempio precedente `AfxOleRegisterControlClass` viene illustrato come viene chiamato con il flag per inseribile e il flag per il modello di apartment ORed insieme per creare il sesto parametro:The above example demonstrates how is called with the flag for insertable and the flag for apartment model ORed together to create the sixth parameter:

[!code-cpp[NVC_MFCAxCtl#12](../../mfc/reference/codesnippet/cpp/registering-ole-controls_2.cpp)]

Il controllo verrà visualizzato nella finestra di dialogo Inserisci oggetto per i contenitori abilitati e sarà in grado di riconoscere il modello di apartment. I controlli in grado di riconoscere il modello Apartment devono garantire che i dati statici della classe siano protetti da blocchi, in modo che mentre un controllo in un apartment accede ai dati statici, non venga disabilitato dall'utilità di pianificazione prima del termine e un'altra istanza della stessa classe inizi a usare gli stessi dati statici. Tutti gli accessi ai dati statici saranno racchiusi in un codice di sezione critico.

### <a name="requirements"></a>Requisiti

  **Intestazione** afxctl.h

## <a name="afxoleregisterpropertypageclass"></a><a name="afxoleregisterpropertypageclass"></a>AfxOleRegisterPropertyPageClass

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
Handle di istanza del modulo associato alla classe della pagina delle proprietà.

*clsid*<br/>
ID di classe univoco della pagina delle proprietà.

*idTypeName (NomeTipo)*<br/>
ID di risorsa della stringa che contiene un nome leggibile dall'utente per la pagina delle proprietà.

*nRegFlags (in modo nRegFlags)*<br/>
Può contenere la bandiera:

- `afxRegApartmentThreading`Imposta il modello di threading nel Registro di sistema su ThreadingModel - Apartment.

> [!NOTE]
> Nelle versioni MFC precedenti a MFC 4.2, il parametro **int** *nRegFlags* non era disponibile. Si noti `afxRegInsertable` inoltre che il flag non è un'opzione valida per le pagine delle proprietà e causerà un ASSERT in MFC se è impostato

### <a name="return-value"></a>Valore restituito

Diverso da zero se la classe del controllo è stata registrata; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

In questo modo la pagina delle proprietà può essere utilizzata da contenitori che sono in grado di riconoscere il controllo OLE. `AfxOleRegisterPropertyPageClass`aggiorna il Registro di sistema con il nome della pagina delle proprietà e il relativo percorso nel sistema e imposta anche il modello di threading supportato dal controllo nel Registro di sistema. Per ulteriori informazioni, vedere [Nota tecnica 64](../../mfc/tn064-apartment-model-threading-in-activex-controls.md), "Threading del modello di apartment nei controlli OLE" e [Informazioni su processi e thread](/windows/win32/ProcThread/about-processes-and-threads) in Windows SDK.

### <a name="requirements"></a>Requisiti

  **Intestazione** afxctl.h

## <a name="afxoleregistertypelib"></a><a name="afxoleregistertypelib"></a>AfxOleRegisterTypeLib

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

  **Intestazione** afxdisp.h

## <a name="afxoleunregisterclass"></a><a name="afxoleunregisterclass"></a>AfxOleUnregisterClass (Classe AfxOleUnregisterClass)

Rimuove la voce della classe del controllo o della pagina delle proprietà dal database di registrazione di Windows.

```
BOOL AFXAPI AfxOleUnregisterClass(REFCLSID clsID, LPCSTR pszProgID);
```

### <a name="parameters"></a>Parametri

*Clsid*<br/>
ID di classe univoco del controllo o della pagina delle proprietà.

*pszProgID (IDSP)*<br/>
ID di programma univoco del controllo o della pagina delle proprietà.

### <a name="return-value"></a>Valore restituito

Diverso da zero se è stata annullata la registrazione del controllo o della classe della pagina delle proprietà; in caso contrario 0.

### <a name="requirements"></a>Requisiti

  **Intestazione** afxctl.h

## <a name="afxoleunregistertypelib"></a><a name="afxoleunregistertypelib"></a>AfxOleUnregisterTypeLib

Chiamare questa funzione per rimuovere la voce della libreria dei tipi dal database di registrazione di Windows.Call this function to remove the type library entry from the Windows registration database.

```
BOOL AFXAPI AfxOleUnregisterTypeLib(REFGUID tlID);
```

### <a name="parameters"></a>Parametri

*tlID*<br/>
ID univoco della libreria dei tipi.

### <a name="return-value"></a>Valore restituito

Diverso da zero se la registrazione della libreria dei tipi è stata annullata correttamente; in caso contrario 0.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCAxCtl#13](../../mfc/reference/codesnippet/cpp/registering-ole-controls_5.cpp)]

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdisp.h

## <a name="see-also"></a>Vedere anche

[Macro e funzioni globali](../../mfc/reference/mfc-macros-and-globals.md)
