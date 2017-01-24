---
title: "Procedura: Usare assembly di interoperabilit&#224; per importare impostazioni | Microsoft Docs"
ms.custom: ""
ms.date: "12/15/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
helpviewer_keywords: 
  - "impostazioni IDE, importazione tramite assembly di interoperabilità"
  - "IDE, importazione delle impostazioni tramite assembly di interoperabilità"
  - "impostazioni utente [Visual Studio SDK], importazione tramite assembly di interoperabilità"
ms.assetid: 8a43dbe2-fdc0-471b-8235-3f489b77db0f
caps.latest.revision: 26
caps.handback.revision: 26
manager: "douge"
---
# Procedura: Usare assembly di interoperabilit&#224; per importare impostazioni
Un pacchetto VSPackage può importare impostazioni dall'ambiente di sviluppo integrato \(IDE, Integrated Development Environment\) di [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)]. L'IDE usa un'implementazione di VSPackage dell'interfaccia <xref:Microsoft.VisualStudio.Shell.Interop.IVsUserSettings> per determinare come recuperare la configurazione del pacchetto VSPackage.  
  
> [!NOTE]
>  Il framework di pacchetto gestito \(MPF, Managed Package Framework\) fornisce un set di classi gestite per semplificare la creazione di estensioni di Visual Studio. Per eseguire questa attività usando MPF, vedere [Importazione delle impostazioni](../misc/importing-settings.md).  
  
### Per implementare l'importazione delle impostazioni in un pacchetto VSPackage  
  
1.  Implementare il supporto di base per il meccanismo delle impostazioni di [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)].  
  
    -   Registrare il pacchetto VSPackage a supporto del meccanismo delle impostazioni definendo uno o più punti di impostazioni personalizzati.  
  
         Per altre informazioni, vedere [Supporto per le impostazioni utente](../Topic/Support%20for%20User%20Settings.md).  
  
    -   Dichiarare che il pacchetto VSPackage implementa l'interfaccia <xref:Microsoft.VisualStudio.Shell.Interop.IVsUserSettings>, ad esempio:  
  
        ```  
        public class MyPackage : IVsPackage, IVsUserSettings, IVsUserSettingsQuery  
        ```  
  
    -   Verificare che l'implementazione di VSPackage del metodo <xref:System.Runtime.InteropServices.Marshal.QueryInterface%2A> fornisca un'interfaccia <xref:Microsoft.VisualStudio.Shell.Interop.IVsUserSettings> quando viene eseguita la chiamata con `IID_IVsUserSettings`. Ad esempio:  
  
        ```  
        STDMETHODIMP MyPackage::QueryInterface(THIS_ REFIID riid, LPVOID FAR* ppvObj) { if (ppvObj == NULL) return E_POINTER; *ppvObj = NULL; if (riid == IID_IUnknown) *ppvObj = (LPVOID)(IUnknown *)(IClassFactory*)this; else if (riid == IID_IClassFactory) *ppvObj = (LPVOID)(IClassFactory *)this; else if (riid == IID_IVsPackage) *ppvObj = (LPVOID)(IVsPackage *)this; else if (riid == IID_IVsPersistSolutionOpts) *ppvObj = (LPVOID)(IVsPersistSolutionOpts *)this; else if (riid == IID_IVsPersistSolutionProps) *ppvObj = (LPVOID)(IVsPersistSolutionProps *)this; else if (riid == IID_IVsComponentSelectorProvider) *ppvObj = (LPVOID)(IVsComponentSelectorProvider *)this; else if (riid == IID_IVsUserSettings) *ppvObj = (LPVOID)(IVsUserSettings *)this; else if (riid == IID_IVsUserSettingsQuery) *ppvObj = (LPVOID)(IVsUserSettingsQuery *)this; if (*ppvObj) { AddRef(); return NOERROR; } return E_NOINTERFACE; }  
        ```  
  
2.  Recuperare le informazioni sulle impostazioni.  
  
     Per supportare il recupero delle informazioni sulle impostazioni, un pacchetto VSPackage deve implementare il metodo <xref:Microsoft.VisualStudio.Shell.Interop.IVsUserSettings.ImportSettings%2A>.  
  
     Per leggere i dati, l'implementazione di VSPackage dell'interfaccia <xref:Microsoft.VisualStudio.Shell.Interop.IVsUserSettings> deve usare i primi due argomenti passati dall'IDE: il GUID della categoria del punto di impostazioni personalizzato e un'interfaccia <xref:Microsoft.VisualStudio.Shell.Interop.IVsSettingsReader>.  
  
    1.  Un'implementazione di VSPackage del metodo <xref:Microsoft.VisualStudio.Shell.Interop.IVsUserSettings.ImportSettings%2A> deve controllare il GUID della categoria passato e scegliere il meccanismo corretto per lo stato di recupero.  
  
         Nell'esempio seguente il metodo <xref:Microsoft.VisualStudio.Shell.Interop.IVsUserSettings.ImportSettings%2A> chiama un'implementazione diversa per recuperare lo stato della barra dei comandi invece dello stato dei tasti di scelta rapida.  
  
    2.  Un pacchetto VSPackage deve usare l'interfaccia <xref:Microsoft.VisualStudio.Shell.Interop.IVsSettingsReader> fornita per recuperare i dati nel file di impostazioni.  
  
        > [!NOTE]
        >  Se le informazioni sulle impostazioni variano in funzione della versione di [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)], un'implementazione di VSPackage del metodo <xref:Microsoft.VisualStudio.Shell.Interop.IVsUserSettings.ImportSettings%2A> deve usare il metodo <xref:Microsoft.VisualStudio.Shell.Interop.IVsSettingsReader.ReadFileVersion%2A> prima di leggere i dati per controllare la versione dell'IDE.  
  
         L'interfaccia fornisce i metodi per la lettura di tipi di dati diversi dal file di impostazioni.  
  
         `interface IVsSettingsReader : IUnknown`  
  
         `{`  
  
         `HRESULT ReadSettingString(WCHAR *pszSettingName, BSTR *pbstrSettingValue);`  
  
         `HRESULT ReadSettingLong(WCHAR *pszSettingName, long *plSettingValue);`  
  
         `HRESULT ReadSettingBoolean(WCHAR *pszSettingName, BOOL *pfSettingValue);`  
  
         `HRESULT ReadSettingAttribute(LPCOLESTR pszSettingName,LPCOLESTR pszAttributeName, BSTR *pbstrSettingValue);  //Internal use only`  
  
         `HRESULT ReadSettingBytes(WCHAR *pszSettingName, BYTE *pSettingValue, long *plDataLength, long lDataMax);`  
  
         `HRESULT ReadVersion(int *pnMajor, int *pnMinor, int *pnBuild);`  
  
         `HRESULT ReportError(WCHAR *pszError);`  
  
         `};`  
  
     Il file di impostazioni supporta l'accesso casuale ai dati, quindi l'ordine delle operazioni di lettura e scrittura delle impostazioni non è importante.  
  
     Ciò è illustrato nell'esportazione e nell'importazione dello stato della barra dei comandi \(`ExportSettings_CommandBa`r e `ImportSettings_CommandBar`\) dell'implementazione nell'esempio seguente.  
  
3.  Convalidare i dati recuperati.  
  
     Le informazioni sulle impostazioni sono contenute in file XML, che possono essere modificati manualmente.  
  
> [!IMPORTANT]
>  Le informazioni sulle impostazioni potrebbero essere danneggiate sul disco, potrebbero contenere impostazioni specifiche della versione e potrebbero venire usate come mezzo per attacchi dannosi. La validità di ogni elemento di dati restituito dal metodo <xref:Microsoft.VisualStudio.Shell.Interop.IVsSettingsReader> deve essere verificata.  
  
-   Per verificare il supporto della versione di [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] usata per creare le impostazioni recuperate, chiamare il metodo <xref:Microsoft.VisualStudio.Shell.Interop.IVsSettingsReader.ReadFileVersion%2A> per recuperare la versione.  
  
-   Per fare in modo che l'IDE invii una notifica a un utente quando un elemento di dati importato non viene convalidato, un pacchetto VSPackage chiama il metodo <xref:Microsoft.VisualStudio.Shell.Interop.IVsSettingsReader.ReportError%2A>.  
  
1.  Applicare le informazioni sulle impostazioni.  
  
    1.  L'implementazione del metodo <xref:Microsoft.VisualStudio.Shell.Interop.IVsUserSettings.ImportSettings%2A> deve rispettare il valore del terzo argomento passato dall'IDE. I valori supportati sono membri dell'enumerazione <xref:Microsoft.VisualStudio.Shell.Interop.__UserSettingsFlags>. Per altre informazioni, vedere <xref:Microsoft.VisualStudio.Shell.Interop.__UserSettingsFlags>.  
  
         Nell'esempio seguente l'implementazione per l'importazione delle impostazioni della barra dei comandi \(`ImportSettings_Commandbar`\) usa il valore di questo argomento per determinare se applicare le impostazioni per sovrascrivere i valori esistenti o aggiornarli in modo additivo.  
  
    2.  Quando si applicano le impostazioni importate, è necessario implementare una metodologia di cache write\-through.  
  
         Le informazioni sullo stato nel Registro di sistema o nel file system devono essere aggiornate nello stesso momento in cui le impostazioni vengono applicate all'IDE. Ciò garantisce la coerenza della configurazione e supporta scenari di IDE a istanza multipla.  
  
2.  Indicare all'IDE come gestire l'importazione delle impostazioni.  
  
     Usare l'argomento `pfRestartRequired` restituito del metodo <xref:Microsoft.VisualStudio.Shell.Interop.IVsUserSettings.ImportSettings%2A> per indicare all'IDE se è necessario un riavvio per applicare le impostazioni importate.  
  
     Se l'implementazione di VSPackage del metodo <xref:Microsoft.VisualStudio.Shell.Interop.IVsUserSettings.ImportSettings%2A> restituisce `true`, all'utente viene chiesto di riavviare l'IDE.  
  
## Esempio  
 Questo esempio illustra come importare ed esportare i dati delle impostazioni.  
  
```  
static const WCHAR c_szFirstSettingName[] = L"FirstSettingName"; static const WCHAR c_szRandomTrashBytes[] = L"RandomTrashBytes"; static const WCHAR c_szRandomTrashLength[] = L"RandomTrashLength"; static const WCHAR c_szBreakPointWindow[] = L"Breakpoints Window"; // -------------------------------------------------------------------------- //    IVsUserSettings methods used for configuration export and import //    Delegate to the right shell object based on the category GUID // -------------------------------------------------------------------------- static const WCHAR c_szFirstSettingName[] = L"FirstSettingName"; static const WCHAR c_szRandomTrashBytes[] = L"RandomTrashBytes"; static const WCHAR c_szRandomTrashLength[] = L"RandomTrashLength"; static const WCHAR c_szBreakPointWindow[] = L"Breakpoints Window"; // Export Settings. STDMETHOD(NeedExport)(WCHAR* pszCategoryGUID, BOOL *pfNeedExport) { if (!pfNeedExport) return E_INVALIDARG; CLSID clsidCategory; HRESULT hr= S_OK; hr = CLSIDFromString(pszCategoryGUID, &clsidCategory); IfFailGo(hr); if (GUID_Profiles_CommandBars == clsidCategory) { *pfNeedExport = TRUE; //Always export Command Bar Configuration }else if (GUID_Profiles_KeyBindings == clsidCategory) { *pfNeedExport = FALSE; //By Default don't export key bindings if (m_fMake_Permanent) *pfNeedExport = TRUE; //Export if user wants current configuration saved. }else{ hr = E_UNEXPECTED; } Error: return hr; } STDMETHOD(ExportSettings)(WCHAR *pszCategoryGUID, IVsSettingsWriter *pSettings) { CLSID clsidCategory; HRESULT hr; hr = CLSIDFromString(pszCategoryGUID, &clsidCategory); IfFailGo(hr); // Delegate to the right internal implementation based on the requested category. if (GUID_Profiles_CommandBars == clsidCategory) { hr = ExportSettings_CommandBars(pSettings); }else if (GUID_Profiles_KeyBindings == clsidCategory) { hr = ExportSettings_KeyBindings(pSettings); }else{ hr = E_UNEXPECTED; } Error: return hr; }; HRESULT ExportSettings_CommandBars(IVsSettingsWriter *pSettings) { if (!pSettings) return E_INVALIDARG; hr = pSettings->WriteSettingString(c_szFirstSettingName, L"Value1"); IfFailGo(hr); int cRandomTrash = 12345; BYTE *pRandomTrash = (BYTE *)VSAlloc(cRandomTrash); if (pRandomTrash){ hr = pSettings->WriteSettingBytes(c_szRandomTrashBytes, pRandomTrash, cRandomTrash); IfFailGo(hr); hr = pSettings->WriteSettingLong(c_szRandomTrashLength, cRandomTrash); IfFailGo(hr); } Error: return hr; }; HRESULT ExportSettings_KeyBindings(IVsSettingsWriter *pSettings) { if (!pSettings) return E_INVALIDARG; hr = pSettings->WriteSettingString(c_szBreakPointWindow, L"Ctrl + Alt + B"); IfFailGo(hr); Error: return hr; }; STDMETHOD(ImportSettings)(WCHAR *pszCategoryGUID, IVsSettingsReader *pSettings, UserSettingsFlags flags, BOOL *pfRestartRequired) { CLSID clsidCategory; HRESULT hr; hr = CLSIDFromString(pszCategoryGUID, &clsidCategory); IfFailGo(hr); // Delegate to the right internal implementation based on the requested category. if (GUID_Profiles_CommandBars == clsidCategory) { hr = ImportSettings_CommandBars(, pSettings, flags, pfRestartRequired); } else if (GUID_Profiles_KeyBindings == clsidCategory) { hr = ImportSettings_KeyBindings( pSettings, flags, pfRestartRequired); } else { hr = E_UNEXPECTED; } Error: return hr; }; // Import Settings. HRESULT ImportSettings_CommandBars(IVsSettingsReader *pSettings, UserSettingsFlags flags, BOOL *pfRestartRequired) { if (!pSettings) return E_INVALIDARG; if (pfRestartRequired) { *pfRestartRequired = FALSE; //Nobody should require a restart!! } CComBSTR bstrFirstSettingName; long lTrashLength = 0; BYTE *pTrashBytes = NULL; // Determines whether to import as an additive operation, or a reset all settings operation. BOOL fResetCompletely = FALSE; if (flags & USF_ResetOnImport) fResetCompletely = TRUE; hr = pSettings->ReadSettingString(c_szFirstSettingName, &bstrFirstSettingName); IfFailGo(hr); hr = pSettings->ReadSettingLong(c_szRandomTrashLength, &lTrashLength); IfFailGo(hr); if (lTrashLength > 0) { pTrashBytes = (BYTE*)VSAlloc(lTrashLength); IfNullMemGo(pTrashBytes); long lDataRead = 0; hr = pSettings->ReadSettingBytes(c_szRandomTrashLength, pTrashBytes, &lDataRead, lTrashLength); IfFailGo(hr); if (lDataRead != lTrashLength) { hr = E_UNEXPECTED; goto Error; } } // Note: before returning these settings should immediately be applied to your personal //            settings store, whether in the registry or the file system. // This write-thru cache methodology is essential to work in multi-instance IDE scenarios. hr = UpdateState_CommandBar(bstrFirstSettingName,lTrashLength,pTrashBytes,lDataRead); Error: return hr; }; HRESULT ImportSettings_KeyBindings(IVsSettingsReader *pSettings, UserSettingsFlags flags, BOOL *pfRestartRequired) { if (!pSettings) return E_INVALIDARG; if (pfRestartRequired) { *pfRestartRequired = FALSE; //Nobody should require a restart!! } CComBSTR bstrBreakPointWindow; // Determines whether to import as an additive operation or a reset all settings operation. BOOL fResetCompletely = FALSE; if (flags & USF_ResetOnImport) fResetCompletely = TRUE; hr = pSettings->ReadSettingString(c_szBreakPointWindow, &bstrBreakPointWindow); IfFailGo(hr); // Note: before returning these settings should immediately be applied to your personal //            settings store, whether in the registry or the file system. // This write-thru cache methodology is essential to work in multi-instance IDE scenarios. hr = UpdateState_KeyBindings(bstrBreakPointWindow); Error: return hr; }  
```  
  
## Vedere anche  
 [Procedura: Esportare impostazioni tramite assembly di interoperabilità](../misc/how-to-export-settings-by-using-interop-assemblies.md)   
 [Supporto per le impostazioni utente](../Topic/Support%20for%20User%20Settings.md)   
 [Opzioni e impostazioni utente estensione](../Topic/Extending%20User%20Settings%20and%20Options.md)   
 [Personalizzazione delle impostazioni di sviluppo in Visual Studio](http://msdn.microsoft.com/it-it/22c4debb-4e31-47a8-8f19-16f328d7dcd3)