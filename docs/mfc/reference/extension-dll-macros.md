---
title: Macro e funzioni per la gestione di DLL | Microsoft Docs
ms.custom: ''
ms.date: 04/03/2017
ms.technology:
- cpp-mfc
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- module macros in MFC
ms.assetid: 303f4161-cb5e-4099-81ad-acdb11aa60fb
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 320bbc9fde5888f75149d6f3f9fad60deb869924
ms.sourcegitcommit: a738519aa491a493a8f213971354356c0e6a5f3a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/05/2018
ms.locfileid: "48821425"
---
# <a name="macros-and-functions-for-managing-dlls"></a>Macro e funzioni per la gestione di DLL

|||
|-|-|
|[AFX_EXT_CLASS](#afx_ext_class)]|Consente di esportare le classi.|
|[AFX_MANAGE_STATE](#afx_manage_state)|Proteggere una funzione esportata in una DLL.|
|[AfxOleInitModule](#afxoleinitmodule)|Fornisce supporto OLE da una DLL MFC regolare collegata in modo dinamico a MFC.|
|[AfxNetInitModule](#afxnetinitmodule)|Fornisce che il supporto dei socket MFC da una DLL MFC regolare collegata in modo dinamico a MFC.|
|[AfxGetAmbientActCtx](#afxgetambientactctx)|Ottiene lo stato corrente del flag di stato per ogni modulo.|
|[AfxGetStaticModuleState](#afxgetstaticmodulestate)|Imposta lo stato del modulo prima dell'inizializzazione e/o per ripristinare lo stato del modulo precedente dopo la pulizia.|
|[AfxInitExtensionModule]()#afxinitextensionmodule|Inizializza la DLL.|
|[AfxSetAmbientActCtx](#afxsetambientactctx)|impostare il flag di stato per ogni modulo, che influisce sul comportamento WinSxS di MFC.|
|[AfxTermExtensionModule]()#afxtermextensionmodule)|Consente di MFC per eseguire la pulizia di DLL estensione MFC quando ogni processo scollegato dalla DLL.|

## <a name="afx_ext_class"></a>  AFX_EXT_CLASS

[DLL di estensione MFC](../../build/extension-dlls.md) per esportare classi di utilizzare la macro AFX_EXT_CLASS; i file eseguibili che si collegano alla DLL di estensione MFC utilizzano la macro per importare le classi.

### <a name="remarks"></a>Note

Con il AFX_EXT_CLASS (macro), gli stessi file di intestazione utilizzati per compilare la DLL di estensione MFC possono essere utilizzati con i file eseguibili che si collegano alla DLL.

Nel file di intestazione per la DLL, aggiungere la parola chiave AFX_EXT_CLASS alla dichiarazione di classe come indicato di seguito:

```cpp
class AFX_EXT_CLASS CMyClass : public CDocument
{
// <body of class>
};
```

Per altre informazioni, vedere [esportazione e importazione utilizzando AFX_EXT_CLASS](../../build/exporting-and-importing-using-afx-ext-class.md).

### <a name="requirements"></a>Requisiti

Intestazione: **afxv_** dll.h

## <a name="afx_manage_state"></a>  AFX_MANAGE_STATE

Chiamare questa macro per proteggere una funzione esportata in una DLL.

### <a name="syntax"></a>Sintassi

```
AFX_MANAGE_STATE(AFX_MODULE_STATE* pModuleState )
```

### <a name="parameters"></a>Parametri

*pModuleState*<br/>
Un puntatore a un `AFX_MODULE_STATE` struttura.

### <a name="remarks"></a>Note

Quando viene richiamata questa macro, *pModuleState* è lo stato del modulo effettivo per il resto dell'immediato ambito contenitore. Al momento di uscire dall'ambito, lo stato del modulo effettivo precedente verrà ripristinato automaticamente.
Il `AFX_MODULE_STATE` struttura contiene i dati globali per il modulo, vale a dire, la parte dello stato del modulo che viene eseguito il push o estratto.

Per impostazione predefinita, MFC utilizza il gestore delle risorse dell'applicazione principale per caricare il modello di risorsa. Se si dispone di una funzione esportata in una DLL, ad esempio un oggetto che consente di avviare una finestra di dialogo nella DLL, questo modello viene effettivamente archiviato nel modulo DLL. È necessario passare lo stato del modulo per l'handle corretto da usare. È possibile farlo aggiungendo il codice seguente all'inizio della funzione:

```cpp
AFX_MANAGE_STATE(AfxGetStaticModuleState( ));
```

Ciò consente di scambiare lo stato corrente del modulo con lo stato restituito da [AfxGetStaticModuleState](#afxgetstaticmodulestate) fino alla fine dell'ambito corrente.

Per altre informazioni sugli stati di modulo e MFC, vedere "Gestione di stato dei dati dei moduli MFC" nella [creazione di nuovi documenti, Windows e viste](../creating-new-documents-windows-and-views.md) e [Nota tecnica 58](../tn058-mfc-module-state-implementation.md).

> [!NOTE]
>  Quando MFC crea un contesto di attivazione per un assembly, Usa [AfxWinInit](#afxwininit) per creare il contesto e `AFX_MANAGE_STATE` per attivare e disattivare. Si noti inoltre che `AFX_MANAGE_STATE` è abilitato per statico delle librerie MFC, nonché le DLL MFC, per consentire codice MFC di operare nel proprio contesto di attivazione selezionato dalla DLL dell'utente. Per altre informazioni, vedere [supporto per contesti di attivazione nello stato del modulo MFC](../support-for-activation-contexts-in-the-mfc-module-state.md).

### <a name="requirements"></a>Requisiti

**Intestazione:** afxstat_.h

### <a name="see-also"></a>Vedere anche

[AfxGetStaticModuleState](#afxgetstaticmodulestate)

## <a name="a-nameafxoleinitmodulea-afxoleinitmodule"></a><a name="afxoleinitmodule"><a/> AfxOleInitModule

Per il supporto OLE da una DLL MFC regolare collegata in modo dinamico a MFC, chiamare questa funzione nel regolare MFC DLL `CWinApp::InitInstance` funzione per inizializzare OLE DLL MFC.

### <a name="syntax"></a>Sintassi

```
void AFXAPI AfxOleInitModule( );
```

### <a name="remarks"></a>Note

La DLL di MFC OLE è un'estensione MFC DLL. Affinché una DLL di estensione MFC per ottenere cablate in una `CDynLinkLibrary` catena, è necessario creare un `CDynLinkLibrary` oggetto nel contesto di ogni modulo che verrà utilizzato. `AfxOleInitModule` Crea il `CDynLinkLibrary` dell'oggetto nel contesto di MFC DLL la regolare in modo che si ottiene è connessa la `CDynLinkLibrary` catena della DLL MFC regolari dell'oggetto.

Se si compila un controllo OLE e utilizza `COleControlModule`, non è necessario chiamare `AfxOleInitModule` perché la `InitInstance` funzione membro per `COleControlModule` chiamate `AfxOleInitModule`.

### <a name="requirements"></a>Requisiti

**Intestazione**: \<AFXDLL . h >

### <a name="see-also"></a>Vedere anche

[Macro e funzioni globali](mfc-macros-and-globals.md)<br/>
[AfxMessageBox](cstring-formatting-and-message-box-display.md#afxmessagebox)

## <a name="afxnetinitmodule"></a>  AfxNetInitModule

Per il supporto dei socket MFC da una DLL MFC regolare collegata in modo dinamico a MFC, aggiungere una chiamata a questa funzione nel MFC DLL regolari `CWinApp::InitInstance` funzione per inizializzare la DLL di socket MFC.

### <a name="syntax"></a>Sintassi

```
void AFXAPI AfxNetInitModule( );
```

### <a name="remarks"></a>Note

La DLL di socket MFC è un'estensione MFC DLL. Affinché una DLL di estensione MFC per ottenere cablate in una `CDynLinkLibrary` catena, è necessario creare un `CDynLinkLibrary` oggetto nel contesto di ogni modulo che verrà utilizzato. `AfxNetInitModule` Crea il `CDynLinkLibrary` dell'oggetto nel contesto di MFC DLL la regolare in modo che si ottiene è connessa la `CDynLinkLibrary` catena della DLL MFC regolari dell'oggetto.

### <a name="requirements"></a>Requisiti

**Intestazione:** \<AFXDLL . h >

### <a name="see-also"></a>Vedere anche

[Macro e funzioni globali](mfc-macros-and-globals.md)<br/>
[AfxMessageBox](cstring-formatting-and-message-box-display.md#afxmessagebox)

## <a name="afxgetambientactctx"></a> AfxGetAmbientActCtx

Utilizzare questa funzione per ottenere lo stato corrente del flag di stato per ogni modulo, che influisce sul comportamento WinSxS di MFC.

### <a name="syntax"></a>Sintassi

```
BOOL AFXAPI AfxGetAmbientActCtx();
```

### <a name="return-value"></a>Valore restituito

Modulo stato corrente valore del flag.

### <a name="remarks"></a>Note

Quando il flag è impostato (ovvero l'impostazione predefinita) e un thread entra in un modulo di MFC (vedere [AFX_MANAGE_STATE](#afx_manage_state)), viene attivato il contesto del modulo.

Se il flag non è impostato, il contesto del modulo non viene attivato in ingresso.

Il contesto di un modulo è determinato dal relativo manifesto, in genere è incorporata nelle risorse di modulo.

### <a name="requirements"></a>Requisiti

**Intestazione:** afxcomctl32.h

### <a name="see-also"></a>Vedere anche

[Macro e funzioni globali](mfc-macros-and-globals.md)<br/>
[AFX_MANAGE_STATE](#afx_manage_state)<br/>
[Gestione dei dati dello stato dei moduli MFC](../managing-the-state-data-of-mfc-modules.md)<br/>
[AfxSetAmbientActCtx](#setambientactctx)

## <a name="afxgetstaticmodulestate"></a> AfxGetStaticModuleState

Chiamare questa funzione per impostare lo stato del modulo prima dell'inizializzazione e/o per ripristinare lo stato del modulo precedente dopo la pulizia.

### <a name="syntax"></a>Sintassi

```
AFX_MODULE_STATE* AFXAPI AfxGetStaticModuleState( );
```

### <a name="return-value"></a>Valore restituito

Un puntatore a un `AFX_MODULE_STATE` struttura.

### <a name="remarks"></a>Note

Il `AFX_MODULE_STATE` struttura contiene i dati globali per il modulo, vale a dire, la parte dello stato del modulo che viene eseguito il push o estratto.

Per impostazione predefinita, MFC utilizza il gestore delle risorse dell'applicazione principale per caricare il modello di risorsa. Se si dispone di una funzione esportata in una DLL, ad esempio un oggetto che consente di avviare una finestra di dialogo nella DLL, questo modello viene effettivamente archiviato nel modulo DLL. È necessario passare lo stato del modulo per l'handle corretto da usare. È possibile farlo aggiungendo il codice seguente all'inizio della funzione:

```cpp
AFX_MANAGE_STATE(AfxGetStaticModuleState( ));
```

Ciò consente di scambiare lo stato corrente del modulo con lo stato restituito da `AfxGetStaticModuleState` fino alla fine dell'ambito corrente.

Per altre informazioni sugli stati di modulo e MFC, vedere "Gestione di stato dei dati dei moduli MFC" nella [creazione di nuovi documenti, Windows e viste](../creating-new-documents-windows-and-views.md) e [Nota tecnica 58](../tn058-mfc-module-state-implementation.md).

### <a name="requirements"></a>Requisiti

**Intestazione:** afxstat_.h

## <a name="afxinitextensionmodule"></a> AfxInitExtensionModule

Chiamare questa funzione nella DLL estensione MFC `DllMain` per inizializzare la DLL.

### <a name="syntax"></a>Sintassi

```
BOOL AFXAPI AfxInitExtensionModule( AFX_EXTENSION_MODULE& state,  HMODULE hModule );
```
### <a name="parameters"></a>Parametri

*state*<br/>
Un riferimento per la [struttura AFX_EXTENSION_MODULE](afx-extension-module-structure.md) struttura che contiene lo stato del modulo DLL estensione MFC dopo l'inizializzazione. Lo stato include una copia degli oggetti classe runtime che sono state inizializzate dalla DLL di estensione MFC come parte della costruzione di oggetti statici normali eseguita prima `DllMain` viene immesso.

*hModule*<br/>
Handle del modulo DLL estensione MFC.

### <a name="return-value"></a>Valore restituito

TRUE se la DLL di estensione MFC viene inizializzata correttamente; in caso contrario, FALSE.

### <a name="remarks"></a>Note

Ad esempio:

```cpp
static AFX_EXTENSION_MODULE NVC_MFC_DLLDLL = { NULL, NULL };
extern "C" int APIENTRY
DllMain(HINSTANCE hInstance, DWORD dwReason, LPVOID lpReserved)
{
    // Remove this if you use lpReserved
    UNREFERENCED_PARAMETER(lpReserved);

    if (dwReason == DLL_PROCESS_ATTACH)
    {
        TRACE0("NVC_MFC_DLL.DLL Initializing!\n");

        // MFC extension DLL one-time initialization
        if (!AfxInitExtensionModule(NVC_MFC_DLLDLL, hInstance))
            return 0;
...
```

`AfxInitExtensionModule` Crea una copia del HMODULE della DLL e acquisisce le classi di runtime della DLL (`CRuntimeClass` strutture), nonché le factory di oggetto (`COleObjectFactory` oggetti) per l'uso in seguito quando la `CDynLinkLibrary` oggetto viene creato.
MFC di estensione DLL di dover fare due cose nella loro `DllMain` funzione:

- Chiamare [AfxInitExtensionModule](#_mfc_afxinitextensionmodule) e controllare il valore restituito.

- Creare un `CDynLinkLibrary` dell'oggetto se prevede di esportare il file DLL [struttura CRuntimeClass](cruntimeclass-structure.md) oggetti o ha un proprio risorse personalizzate.

È possibile chiamare `AfxTermExtensionModule` per pulire la DLL di estensione MFC quando ogni processo viene scollegato dalla DLL di estensione MFC (situazione che si verifica quando il processo viene chiuso o quando la DLL viene scaricata come risultato di un `AfxFreeLibrary` chiamare).

### <a name="requirements"></a>Requisiti

**Intestazione:** AFXDLL . h

### <a name="see-also"></a>Vedere anche

[Macro e funzioni globali](mfc-macros-and-globals.md)<br/>
[AfxTermExtensionModule](#afxtermextensionmodule)

## <a name="afxsetambientactctx"></a>  AfxSetAmbientActCtx

Utilizzare questa funzione per impostare il flag di stato per ogni modulo, che influisce sul comportamento WinSxS di MFC.

### <a name="syntax"></a>Sintassi

```
void AFXAPI AfxSetAmbientActCtx(BOOL bSet);
```
### <a name="parameters"></a>Parametri

*bSet*<br/>
Nuovo valore del flag di stato di modulo.

### <a name="remarks"></a>Note

Quando il flag è impostato (ovvero l'impostazione predefinita) e un thread entra in un modulo di MFC (vedere [AFX_MANAGE_STATE](#afx_manage_state)), viene attivato il contesto del modulo.
Se il flag non è impostato, il contesto del modulo non viene attivato in ingresso.
Il contesto di un modulo è determinato dal relativo manifesto, in genere è incorporata nelle risorse di modulo.

### <a name="example"></a>Esempio

```cpp
BOOL CMFCListViewApp::InitInstance()
{
   AfxSetAmbientActCtx(FALSE);
   // Remainder of function definition omitted.
}
```

### <a name="requirements"></a>Requisiti

**Intestazione:** afxcomctl32.h

### <a name="see-also"></a>Vedere anche

[Macro e funzioni globali](mfc-macros-and-globals.md)<br/>
[AfxGetAmbientActCtx](#afxgetambientactctx)<br/>
[AFX_MANAGE_STATE](#afx_manage_state)<br/>
[Gestione dei dati dello stato dei moduli MFC](../managing-the-state-data-of-mfc-modules.md)

## <a name="afxtermextensionmodule"></a>  AfxTermExtensionModule

Chiamare questa funzione per consentire MFC per eseguire la pulizia DLL di estensione MFC quando ogni processo scollegato dalla DLL (situazione che si verifica quando il processo viene chiuso o quando la DLL viene scaricata come risultato di un `AfxFreeLibrary` chiamare).

### <a name="syntax"></a>Sintassi

```
void AFXAPI AfxTermExtensionModule(  AFX_EXTENSION_MODULE& state,  BOOL bAll  = FALSE );
```

### <a name="parameters"></a>Parametri

*state*<br/>
Un riferimento per la [AFX_EXTENSION_MODULE](afx-extension-module-structure.md) struttura che contiene lo stato del modulo di DLL estensione MFC.

*Palla*<br/>
Se TRUE, processo di pulizia tutti i moduli DLL estensione MFC. Pulizia in caso contrario, solo il modulo DLL corrente.

### <a name="remarks"></a>Note

`AfxTermExtensionModule` Elimina qualsiasi risorsa di archiviazione locale collegata al modulo e rimuovere tutte le voci dalla cache della mappa messaggi. Ad esempio:

```cpp
static AFX_EXTENSION_MODULE NVC_MFC_DLLDLL = { NULL, NULL };
extern "C" int APIENTRY
DllMain(HINSTANCE hInstance, DWORD dwReason, LPVOID lpReserved)
{
    // Remove this if you use lpReserved
    UNREFERENCED_PARAMETER(lpReserved);

    if (dwReason == DLL_PROCESS_ATTACH)
    {
        TRACE0("NVC_MFC_DLL.DLL Initializing!\n");

        // MFC extension DLL one-time initialization
        if (!AfxInitExtensionModule(NVC_MFC_DLLDLL, hInstance))
            return 0;

        new CMyDynLinkLibrary(NVC_MFC_DLLDLL);

    }
    else if (dwReason == DLL_PROCESS_DETACH)
    {
        TRACE0("NVC_MFC_DLL.DLL Terminating!\n");

        // Terminate the library before destructors are called
        AfxTermExtensionModule(NVC_MFC_DLLDLL);
    }
    return 1;   // ok
}
```

Se l'applicazione viene caricata e libera la DLL di estensione MFC in modo dinamico, accertarsi di chiamare `AfxTermExtensionModule`. Poiché la maggior parte delle estensioni MFC le DLL non vengono caricate in modo dinamico (in genere, sono collegati tramite le librerie di importazione), la chiamata a `AfxTermExtensionModule` non è in genere necessario.

MFC di estensione dll necessario chiamare [AfxInitExtensionModule](#afxinitextensionmodule) nel loro `DllMain`. Se prevede di esportare il file DLL [CRuntimeClass](cruntimeclass-structure.md) oggetti o ha una proprio le risorse personalizzate, è necessario anche creare un `CDynLinkLibrary` dell'oggetto `DllMain`.

### <a name="requirements"></a>Requisiti

**Intestazione:** AFXDLL . h

### <a name="see-also"></a>Vedere anche

[Macro e funzioni globali](mfc-macros-and-globals.md)<br/>
[AfxInitExtensionModule](#afxinitextensionmodule)
