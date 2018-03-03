---
title: Macro e funzioni per la gestione delle DLL | Documenti Microsoft
ms.custom: 
ms.date: 04/03/2017
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- module macros in MFC
ms.assetid: 303f4161-cb5e-4099-81ad-acdb11aa60fb
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 535045d715651d6393227457068a86f240c27dce
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="macros-and-functions-for-managing-dlls"></a>Macro e funzioni per la gestione di DLL

|||
|-|-|
|[AFX_EXT_CLASS](#afx_ext_class)]|Classi di esportazioni.|
|[AFX_MANAGE_STATE](#afx_manage_state)|Proteggere una funzione esportata in una DLL.|
|[AfxOleInitModule](#afxoleinitmodule)|Fornisce supporto OLE da una DLL MFC regolare collegata in modo dinamico a MFC.|
|[AfxNetInitModule](#afxnetinitmodule)|Fornisce il che supporto di Sockets MFC da una DLL MFC regolare collegata in modo dinamico a MFC.|
|[AfxGetAmbientActCtx](#afxgetambientactctx)|Ottiene lo stato corrente del flag di stato per ogni modulo.|
|[AfxGetStaticModuleState](#afxgetstaticmodulestate)|Imposta lo stato del modulo prima dell'inizializzazione e/o per ripristinare lo stato precedente del modulo al termine della pulizia.|
|[AfxInitExtensionModule]()#afxinitextensionmodule|Inizializza la DLL.|
|[AfxSetAmbientActCtx](#afxsetambientactctx)|impostare il flag di stato per ogni modulo, che influisce sul comportamento WinSxS di MFC.|
|[AfxTermExtensionModule]()#afxtermextensionmodule)|Consente di MFC per eseguire la pulizia la DLL di estensione MFC quando ogni processo si disconnette dalla DLL.|


## <a name="afx_ext_class"></a>AFX_EXT_CLASS
[DLL di estensione MFC](../../build/extension-dlls.md) usare la macro **AFX_EXT_CLASS** per esportare classi; i file eseguibili che si collegano alla DLL di estensione MFC utilizzano la macro per importare le classi.  
   
### <a name="remarks"></a>Note  
 Con il **AFX_EXT_CLASS** (macro), la stessa intestazione file utilizzati per compilare la DLL di estensione MFC possono essere utilizzati con i file eseguibili che si collegano alla DLL.  
  
 Nel file di intestazione per la DLL, aggiungere il **AFX_EXT_CLASS** parola chiave per la dichiarazione della classe come indicato di seguito:  
  
```cpp
class AFX_EXT_CLASS CMyClass : public CDocument
{
// <body of class>
};
``` 
  
 Per ulteriori informazioni, vedere [esportazione e importazione tramite AFX_EXT_CLASS](../../build/exporting-and-importing-using-afx-ext-class.md).  
   
### <a name="requirements"></a>Requisiti  
 Intestazione: **afxv_**dll.h  
   
## <a name="afx_manage_state"></a>AFX_MANAGE_STATE
Chiamare questa macro per proteggere una funzione esportata in una DLL.  
   
### <a name="syntax"></a>Sintassi    
```
AFX_MANAGE_STATE(AFX_MODULE_STATE* pModuleState )  
```
### <a name="parameters"></a>Parametri  
 `pModuleState`  
 Un puntatore a un `AFX_MODULE_STATE` struttura.  
   
### <a name="remarks"></a>Note  
 Quando viene richiamata questa macro, `pModuleState` è lo stato del modulo effettivo per il resto dell'immediato ambito contenitore. All'uscita dall'ambito, lo stato del modulo effettivo precedente verrà ripristinato automaticamente.    
 Il `AFX_MODULE_STATE` struttura contiene dati globali per il modulo, ovvero la parte dello stato del modulo che viene inserito o estratto.    
 Per impostazione predefinita, MFC utilizza il gestore delle risorse dell'applicazione principale per caricare il modello di risorsa. Se si dispone di una funzione esportata in una DLL, ad esempio un oggetto che consente di avviare una finestra di dialogo nella DLL, questo modello viene effettivamente archiviato nel modulo DLL. È necessario passare lo stato del modulo per l'handle corretto da utilizzare. È possibile farlo aggiungendo il codice seguente all'inizio della funzione:    
```cpp
AFX_MANAGE_STATE(AfxGetStaticModuleState( ));

```
 Scambiato lo stato del modulo corrente con lo stato restituito da [AfxGetStaticModuleState](#afxgetstaticmodulestate) fino alla fine dell'ambito corrente.    
 Per ulteriori informazioni su MFC e stati dei moduli, vedere "Gestione di stato dei dati dei moduli MFC" in [la creazione di nuovi documenti, finestre e visualizzazioni](../creating-new-documents-windows-and-views.md) e [Nota tecnica 58](../tn058-mfc-module-state-implementation.md).    
> [!NOTE]
>  Quando MFC crea un contesto di attivazione per un assembly, utilizza [AfxWinInit](#afxwininit) per creare il contesto e `AFX_MANAGE_STATE` per attivare e disattivare. Si noti inoltre che `AFX_MANAGE_STATE` è abilitata per statico delle librerie MFC, nonché le DLL MFC, per consentire codice MFC di operare nel proprio contesto di attivazione selezionato dalla DLL dell'utente. Per ulteriori informazioni, vedere [il supporto per contesti di attivazione nello stato del modulo MFC](../support-for-activation-contexts-in-the-mfc-module-state.md).     
### <a name="requirements"></a>Requisiti  
 **Intestazione:** afxstat_.h  
   
### <a name="see-also"></a>Vedere anche  
 [AfxGetStaticModuleState](#afxgetstaticmodulestate)

## <a name="a-nameafxoleinitmodulea-afxoleinitmodule"></a><a name="afxoleinitmodule"><a/>AfxOleInitModule
Per il supporto OLE da una DLL MFC regolare collegata a MFC in modo dinamico, chiamare questa funzione nel regolare MFC DLL `CWinApp::InitInstance` funzione per inizializzare OLE DLL MFC.  
   
### <a name="syntax"></a>Sintassi    
```
void AFXAPI AfxOleInitModule( );  
```  
   
### <a name="remarks"></a>Note  
 La DLL di MFC OLE è un'estensione MFC DLL. Affinché una DLL di estensione MFC di un **CDynLinkLibrary** catena, è necessario creare un **CDynLinkLibrary** oggetto nel contesto di ogni modulo che verrà utilizzato. `AfxOleInitModule`Crea il **CDynLinkLibrary** oggetto nel contesto di MFC DLL il regolare in modo che si ottiene formare il **CDynLinkLibrary** oggetto catena della DLL regolare MFC.  
  
 Se si sta creando un controllo OLE e utilizza `COleControlModule`, non è necessario chiamare **AfxOleInitModule** perché il `InitInstance` funzione membro per `COleControlModule` chiamate `AfxOleInitModule`.  
   
### <a name="requirements"></a>Requisiti  
 **Intestazione**: < AFXDLL . h >  
   
### <a name="see-also"></a>Vedere anche  
 [Macro e funzioni globali](mfc-macros-and-globals.md)   
 [AfxMessageBox](cstring-formatting-and-message-box-display.md#afxmessagebox)

## <a name="afxnetinitmodule"></a>AfxNetInitModule
Per supportare la Sockets MFC da una DLL MFC regolare collegata in modo dinamico a MFC, aggiungere una chiamata a questa funzione il regolare MFC DLL **:: InitInstance** funzione per inizializzare la DLL Sockets di MFC.  
   
### <a name="syntax"></a>Sintassi    
```
void AFXAPI AfxNetInitModule( );  
```  
   
### <a name="remarks"></a>Note  
 DLL MFC Sockets è un'estensione MFC DLL. Affinché una DLL di estensione MFC di un **CDynLinkLibrary** catena, è necessario creare un **CDynLinkLibrary** oggetto nel contesto di ogni modulo che verrà utilizzato. `AfxNetInitModule`Crea il **CDynLinkLibrary** oggetto nel contesto di MFC DLL il regolare in modo che si ottiene formare il **CDynLinkLibrary** oggetto catena della DLL regolare MFC.  
   
### <a name="requirements"></a>Requisiti  
 **Intestazione:** < AFXDLL . h >  
   
### <a name="see-also"></a>Vedere anche  
 [Macro e funzioni globali](mfc-macros-and-globals.md)   
 [AfxMessageBox](cstring-formatting-and-message-box-display.md#afxmessagebox)

## <a name="afxgetambientactctx"></a>AfxGetAmbientActCtx
Utilizzare questa funzione per ottenere lo stato corrente del flag di stato per ogni modulo, che influisce sul comportamento WinSxS di MFC.  
   
### <a name="syntax"></a>Sintassi    
```  
BOOL AFXAPI AfxGetAmbientActCtx();   
```  
   
### <a name="return-value"></a>Valore restituito  
 Modulo stato corrente valore del flag.  
   
### <a name="remarks"></a>Note  
 Quando il flag è impostato (ovvero il valore predefinito) e un thread viene inserito un modulo MFC (vedere [AFX_MANAGE_STATE](#afx_manage_state)), viene attivato il contesto del modulo.  
  
 Se non è stato impostato il flag, il contesto del modulo non è attivato in ingresso.  
  
 Il contesto di un modulo è determinato dal relativo manifesto, in genere è incorporata nelle risorse di modulo.  
   
### <a name="requirements"></a>Requisiti  
 **Intestazione:** afxcomctl32.h  
   
### <a name="see-also"></a>Vedere anche  
 [Macro e funzioni globali](mfc-macros-and-globals.md)   
 [AFX_MANAGE_STATE](#afx_manage_state)   
 [Gestione dei dati dello stato dei moduli MFC](../managing-the-state-data-of-mfc-modules.md)   
 [AfxSetAmbientActCtx](#setambientactctx)
 
## <a name="afxgetstaticmodulestate"></a>AfxGetStaticModuleState
Chiamare questa funzione per impostare lo stato del modulo prima dell'inizializzazione e/o per ripristinare lo stato precedente del modulo al termine della pulizia.  
   
### <a name="syntax"></a>Sintassi    
```
AFX_MODULE_STATE* AFXAPI AfxGetStaticModuleState( );  
```  
   
### <a name="return-value"></a>Valore restituito  
 Un puntatore a un `AFX_MODULE_STATE` struttura.  
   
### <a name="remarks"></a>Note  
 Il `AFX_MODULE_STATE` struttura contiene dati globali per il modulo, ovvero la parte dello stato del modulo che viene inserito o estratto.  
  
 Per impostazione predefinita, MFC utilizza il gestore delle risorse dell'applicazione principale per caricare il modello di risorsa. Se si dispone di una funzione esportata in una DLL, ad esempio un oggetto che consente di avviare una finestra di dialogo nella DLL, questo modello viene effettivamente archiviato nel modulo DLL. È necessario passare lo stato del modulo per l'handle corretto da utilizzare. È possibile farlo aggiungendo il codice seguente all'inizio della funzione:  
  
```cpp
AFX_MANAGE_STATE(AfxGetStaticModuleState( ));

```
  
 Scambiato lo stato del modulo corrente con lo stato restituito da `AfxGetStaticModuleState` fino alla fine dell'ambito corrente.  
  
 Per ulteriori informazioni su MFC e stati dei moduli, vedere "Gestione di stato dei dati dei moduli MFC" in [la creazione di nuovi documenti, finestre e visualizzazioni](../creating-new-documents-windows-and-views.md) e [Nota tecnica 58](../tn058-mfc-module-state-implementation.md).  
   
### <a name="requirements"></a>Requisiti  
 **Intestazione:** afxstat_.h  
   

## <a name="afxinitextensionmodule"></a>AfxInitExtensionModule
Chiamare questa funzione nella DLL estensione MFC `DllMain` per inizializzare la DLL.  
   
### <a name="syntax"></a>Sintassi    
```
BOOL AFXAPI AfxInitExtensionModule( AFX_EXTENSION_MODULE& state,  HMODULE hModule );  
```
### <a name="parameters"></a>Parametri  
 `state`  
 Un riferimento di [struttura AFX_EXTENSION_MODULE](afx-extension-module-structure.md) struttura che contiene lo stato del modulo DLL estensione MFC dopo l'inizializzazione. Lo stato include una copia degli oggetti di classe di runtime che sono state inizializzate dalla DLL di estensione MFC come parte della costruzione di un normale oggetto statico eseguita prima `DllMain` viene immesso.  
  
 `hModule`  
 Handle del modulo DLL estensione MFC.  
   
### <a name="return-value"></a>Valore restituito  
 **TRUE** se la DLL di estensione MFC è stato correttamente inizializzato; in caso contrario, **FALSE**.  
   
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

```
  
 `AfxInitExtensionModule`Copia la DLL **HMODULE** e acquisisce le classi di runtime della DLL (`CRuntimeClass` strutture) nonché le object factory (`COleObjectFactory` oggetti) per l'utilizzo in seguito quando la **CDynLinkLibrary**viene creato l'oggetto.    
 Estensione MFC DLL è necessario eseguire due operazioni nella loro `DllMain` funzione:    
-   Chiamare [AfxInitExtensionModule](#_mfc_afxinitextensionmodule) e controllare il valore restituito.   
-   Creare un **CDynLinkLibrary** oggetto se di esportazione di DLL [struttura CRuntimeClass](cruntimeclass-structure.md) oggetti o ha un proprio risorse personalizzate.    
 È possibile chiamare `AfxTermExtensionModule` per pulire la DLL di estensione MFC quando ogni processo si disconnette dalla DLL di estensione MFC (situazione che si verifica quando il processo viene chiuso o quando la DLL viene scaricata come risultato di un `AfxFreeLibrary` chiamare).     

### <a name="requirements"></a>Requisiti  
 **Intestazione:** AFXDLL . h     

### <a name="see-also"></a>Vedere anche  
 [Macro e funzioni globali](mfc-macros-and-globals.md)   
 [AfxTermExtensionModule](#afxtermextensionmodule)

 ## <a name="afxsetambientactctx"></a>AfxSetAmbientActCtx
Utilizzare questa funzione per impostare il flag di stato per ogni modulo, che influisce sul comportamento WinSxS di MFC.  
   
### <a name="syntax"></a>Sintassi  
  ```
   void AFXAPI AfxSetAmbientActCtx( BOOL bSet  
);  
```
### <a name="parameters"></a>Parametri  
 `bSet`  
 Nuovo valore del flag di stato di modulo.  
   
### <a name="remarks"></a>Note  
 Quando il flag è impostato (ovvero il valore predefinito) e un thread viene inserito un modulo MFC (vedere [AFX_MANAGE_STATE](#afx_manage_state)), viene attivato il contesto del modulo.    
 Se non è stato impostato il flag, il contesto del modulo non è attivato in ingresso.    
 Il contesto di un modulo è determinato dal relativo manifesto, in genere è incorporata nelle risorse di modulo.  
   
### <a name="example"></a>Esempio  
 ```cpp
BOOL CMFCListViewApp::InitInstance()
{
   AfxSetAmbientActCtx(FALSE);
   // Remainder of function definition omitted.
```
   
### <a name="requirements"></a>Requisiti  
 **Intestazione:** afxcomctl32.h  
   
### <a name="see-also"></a>Vedere anche  
 [Macro e funzioni globali](mfc-macros-and-globals.md)   
 [AfxGetAmbientActCtx](#afxgetambientactctx)   
 [AFX_MANAGE_STATE](#afx_manage_state)   
 [Gestione dei dati dello stato dei moduli MFC](../managing-the-state-data-of-mfc-modules.md) 

## <a name="afxtermextensionmodule"></a>AfxTermExtensionModule

Chiamare questa funzione per consentire MFC per eseguire la pulizia DLL di estensione MFC quando ciascun processo si disconnette dalla DLL (situazione che si verifica quando il processo viene chiuso o quando la DLL viene scaricata come risultato di un `AfxFreeLibrary` chiamare).  
   
### <a name="syntax"></a>Sintassi  
  ```
void AFXAPI AfxTermExtensionModule(  AFX_EXTENSION_MODULE& state,  BOOL bAll  = FALSE );  
```
### <a name="parameters"></a>Parametri  
 `state`  
 Un riferimento di [AFX_EXTENSION_MODULE](afx-extension-module-structure.md) struttura che contiene lo stato del modulo DLL estensione MFC.  
  
 *Palla*  
 Se **TRUE**, eseguire la pulizia tutti i moduli DLL estensione MFC. Pulizia in caso contrario, solo il modulo DLL corrente.  
   
### <a name="remarks"></a>Note  
 `AfxTermExtensionModule`eliminare qualsiasi archiviazione locale collegata al modulo, verrà rimosso tutte le voci dalla cache della mappa messaggi. Ad esempio:  
  
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
  
 Se l'applicazione carica e libera le DLL di estensione MFC in modo dinamico, assicurarsi di chiamare `AfxTermExtensionModule`. Poiché la maggior parte di estensione MFC DLL non sono caricate in modo dinamico (in genere, questi elementi sono collegati tramite le librerie di importazione), la chiamata a `AfxTermExtensionModule` non è in genere necessario.  
  
 DLL di estensione MFC necessario chiamare il metodo [AfxInitExtensionModule](#afxinitextensionmodule) nella loro `DllMain`. Se prevede di esportare il file DLL [CRuntimeClass](cruntimeclass-structure.md) oggetti o ha un proprio risorse personalizzate, è necessario creare un **CDynLinkLibrary** oggetto `DllMain`.  
   
### <a name="requirements"></a>Requisiti  
 **Intestazione:** AFXDLL . h  
   
### <a name="see-also"></a>Vedere anche  
 [Macro e funzioni globali](mfc-macros-and-globals.md)   
 [AfxInitExtensionModule](#afxinitextensionmodule)
 




