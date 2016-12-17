---
title: "Procedura: Esportare impostazioni tramite assembly di interoperabilit&#224; | Microsoft Docs"
ms.custom: ""
ms.date: "11/17/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
helpviewer_keywords: 
  - "impostazioni IDE, esportazione tramite assembly di interoperabilità"
  - "impostazioni utente [Visual Studio SDK], esportazione tramite assembly di interoperabilità"
  - "IDE, esportazione delle impostazioni tramite assembly di interoperabilità"
ms.assetid: d470d4f9-3006-40c3-99db-21abcd5003b8
caps.latest.revision: 23
caps.handback.revision: 23
manager: "douge"
---
# Procedura: Esportare impostazioni tramite assembly di interoperabilit&#224;
Un pacchetto VSPackage può esportare impostazioni dall'ambiente di sviluppo integrato \(IDE, Integrated Development Environment\) di [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)]. L'IDE usa un'implementazione di VSPackage dell'interfaccia <xref:Microsoft.VisualStudio.Shell.Interop.IVsUserSettings>. Se il pacchetto fornisce anche l'interfaccia <xref:Microsoft.VisualStudio.Shell.Interop.IVsUserSettingsQuery>, l'interfaccia <xref:Microsoft.VisualStudio.Shell.Interop.IVsUserSettingsQuery> viene usata per determinare il modo in cui salvare la configurazione del pacchetto VSPackage.  
  
> [!NOTE]
>  Il framework di pacchetto gestito \(MPF, Managed Package Framework\) fornisce un set di classi gestite per semplificare la creazione di estensioni di Visual Studio. Per eseguire questa attività usando MPF, vedere [Esportazione delle impostazioni](../misc/exporting-settings.md).  
  
### Per implementare l'esportazione delle impostazioni in un pacchetto VSPackage  
  
1.  Implementare il supporto di base per il meccanismo delle impostazioni di [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)].  
  
    -   Registrare il pacchetto VSPackage a supporto del meccanismo delle impostazioni definendo uno o più punti di impostazioni personalizzati.  
  
         Per altre informazioni, vedere [Supporto per le impostazioni utente](../Topic/Support%20for%20User%20Settings.md).  
  
    -   Dichiarare che il pacchetto VSPackage implementa <xref:Microsoft.VisualStudio.Shell.Interop.IVsUserSettings>. Se necessario, il pacchetto VSPackage può implementare anche l'interfaccia <xref:Microsoft.VisualStudio.Shell.Interop.IVsUserSettingsQuery>. Ad esempio:  
  
        ```  
        public class MyPackage : IVsPackage, IVsUserSettings, IVsUserSettingsQuery  
        ```  
  
    -   Verificare che l'implementazione di VSPackage del metodo <xref:System.Runtime.InteropServices.Marshal.QueryInterface%2A> fornisca un'interfaccia <xref:Microsoft.VisualStudio.Shell.Interop.IVsUserSettings> quando viene eseguita la chiamata con `IID_IVsUserSettings`.  
  
         Facoltativamente, `QueryInterface` può fornire un'interfaccia <xref:Microsoft.VisualStudio.Shell.Interop.IVsUserSettingsQuery> quando viene eseguita la chiamata con l'interfaccia `IID_IVsUserSettingsQuery`.  
  
        ```  
        STDMETHODIMP MyPackage::QueryInterface(THIS_ REFIID riid, LPVOID FAR* ppvObj) { if (ppvObj == NULL) return E_POINTER; *ppvObj = NULL; if (riid == IID_IUnknown) *ppvObj = (LPVOID)(IUnknown *)(IClassFactory*)this; else if (riid == IID_IClassFactory) *ppvObj = (LPVOID)(IClassFactory *)this; else if (riid == IID_IVsPackage) *ppvObj = (LPVOID)(IVsPackage *)this; else if (riid == IID_IVsPersistSolutionOpts) *ppvObj = (LPVOID)(IVsPersistSolutionOpts *)this; else if (riid == IID_IVsPersistSolutionProps) *ppvObj = (LPVOID)(IVsPersistSolutionProps *)this; else if (riid == IID_IVsComponentSelectorProvider) *ppvObj = (LPVOID)(IVsComponentSelectorProvider *)this; else if (riid == IID_IVsUserSettings) *ppvObj = (LPVOID)(IVsUserSettings *)this; else if (riid == IID_IVsUserSettingsQuery) *ppvObj = (LPVOID)(IVsUserSettingsQuery *)this; if (*ppvObj) { AddRef(); return NOERROR; } return E_NOINTERFACE; }  
        ```  
  
2.  È possibile indicare all'IDE la necessità di esportare un'impostazione specifica \(facoltativo\).  
  
     Un pacchetto VSPackage può scegliere di salvare in modo condizionale un'impostazione definita dallo stato del punto di impostazioni personalizzato. Ad esempio, è possibile salvare solo se l'utente indica in modo esplicito un'impostazione da salvare.  
  
     In questo caso, l'interfaccia <xref:Microsoft.VisualStudio.Shell.Interop.IVsUserSettingsQuery> deve essere implementata.  
  
     Se un pacchetto VSPackage non implementa <xref:Microsoft.VisualStudio.Shell.Interop.IVsUserSettingsQuery>, durante un'esportazione delle impostazioni vengono salvate tutte le informazioni sullo stato.  
  
     Un pacchetto VSPackage può supportare più punti di impostazioni personalizzati \(categoria di impostazioni\). Le implementazioni del metodo <xref:Microsoft.VisualStudio.Shell.Interop.IVsUserSettingsQuery.NeedExport%2A> devono controllare il GUID o l'argomento della categoria di impostazioni del punto di impostazioni personalizzato fornito per determinare se un gruppo di impostazioni specifico debba essere salvato.  
  
     Nell'esempio seguente il pacchetto VSPackage richiede sempre che venga salvato lo stato della barra dei comandi, ma richiede che venga salvato solo lo stato dei tasti di scelta rapida se è stato impostato un flag.  
  
3.  Scrivere i dati delle impostazioni nel file di impostazioni.  
  
     Per supportare l'esportazione delle impostazioni, un pacchetto VSPackage deve sempre implementare il metodo <xref:Microsoft.VisualStudio.Shell.Interop.IVsUserSettings.ExportSettings%2A>.  
  
     L'implementazione deve gestire gli argomenti passati dall'IDE, il GUID della categoria del punto di impostazioni personalizzato e un'interfaccia <xref:Microsoft.VisualStudio.Shell.Interop.IVsSettingsWriter>.  
  
    1.  Un pacchetto VSPackage può supportare più punti di impostazioni personalizzati \(categoria di impostazioni\). Nell'esempio seguente il metodo <xref:Microsoft.VisualStudio.Shell.Interop.IVsUserSettings.ExportSettings%2A> chiama un'implementazione diversa per salvare in modo permanente lo stato della barra dei comandi invece dello stato dei tasti di scelta rapida.  
  
    2.  Un pacchetto VSPackage deve usare l'interfaccia <xref:Microsoft.VisualStudio.Shell.Interop.IVsSettingsWriter> fornita per salvare dati nel file di impostazioni.  
  
         `interface IVsSettingsWriter : IUnknown`  
  
         `{`  
  
         `HRESULT WriteSettingString( LPCOLESTR pszSettingName, LPCOLESTR pszSettingValue);`  
  
         `HRESULT WriteSettingLong( LPCOLESTR pszSettingName, long lSettingValue);`  
  
         `HRESULT WriteSettingBoolean( LPCOLESTR pszSettingName, BOOL fSettingValue);`  
  
         `HRESULT WriteSettingBytes( LPCOLESTR pszSettingName, BYTE *pSettingValue, long lDataLength);`  
  
         `HRESULT WriteSettingAttribute( LPCOLESTR pszSettingName, LPCOLESTR pszAttributeName, LPCOLESTR pszSettingValue);`  
  
         `HRESULT WriteSettingXml( IUnknown *pIXMLDOMNode);`  
  
         `HRESULT WriteSettingXmlFromString( LPCOLESTR szXML);`  
  
         `HRESULT ReportError( LPCOLESTR pszError, VSSETTINGSERRORTYPES dwErrorType);`  
  
         `};`  
  
         Il valore dell'argomento `pszSettingName` fornito a un'interfaccia <xref:Microsoft.VisualStudio.Shell.Interop.IVsSettingsWriter> deve identificare in modo univoco ogni elemento dati salvato all'interno di una categoria di impostazioni.  
  
        > [!NOTE]
        >  I nomi devono essere univoci all'interno di un punto di impostazioni personalizzato, perché l'IDE usa il GUID del punto di impostazioni personalizzato e il valore di `pszSettingName` per identificare ogni impostazione salvata. Se più metodi <xref:Microsoft.VisualStudio.Shell.Interop.IVsSettingsWriter> vengono chiamati con lo stesso valore `pszSettingName`, il valore originale viene sovrascritto nel file di impostazioni.  
  
         Il file di impostazioni supporta l'accesso ai dati casuale. Di conseguenza, l'ordine delle operazioni di lettura e scrittura delle impostazioni non è importante.  
  
         Ciò è illustrato nelle implementazioni dell'esportazione e dell'importazione dello stato della barra dei comandi \(`ExportSettings_CommandBa`r e `ImportSettings_CommandBar`\) nell'esempio seguente.  
  
         Se l'implementazione può eseguire il mapping dei dati in uno dei quattro formati supportati, non esistono restrizioni sulla quantità o il tipo di dati che è possibile scrivere.  
  
        > [!NOTE]
        >  Oltre ai dati scritti in modo esplicito e trasparenti nell'implementazione <xref:Microsoft.VisualStudio.Shell.Interop.IVsUserSettings.ExportSettings%2A>, l'API delle impostazioni salva anche le informazioni sulla versione di [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)]. Le impostazioni salvate possono essere confrontate rispetto alla versione dell'IDE che le ha generate durante l'importazione delle impostazioni.  
  
## Esempio  
 Questo esempio illustra come importare ed esportare i dati delle impostazioni.  
  
```  
// -------------------------------------------------------------------------- //    IVsUserSettings methods used for configuration export. //    Delegate to the right shell object based on the category GUID. // -------------------------------------------------------------------------- static const WCHAR c_szFirstSettingName[] = L"FirstSettingName"; static const WCHAR c_szRandomTrashBytes[] = L"RandomTrashBytes"; static const WCHAR c_szRandomTrashLength[] = L"RandomTrashLength"; static const WCHAR c_szBreakPointWindow[] = L"Breakpoints Window"; // Export Settings. STDMETHOD(NeedExport)(WCHAR* pszCategoryGUID, BOOL *pfNeedExport) { if (!pfNeedExport) return E_INVALIDARG; CLSID clsidCategory; HRESULT hr= S_OK; hr = CLSIDFromString(pszCategoryGUID, &clsidCategory); IfFailGo(hr); if (GUID_Profiles_CommandBars == clsidCategory) { *pfNeedExport = TRUE; //Always export Command Bar Configuration }else if (GUID_Profiles_KeyBindings == clsidCategory) { *pfNeedExport = FALSE; //By Default don't export key bindings if (m_fMake_Permanent) *pfNeedExport = TRUE; //Export if user wants current configuration saved. }else{ hr = E_UNEXPECTED; } Error: return hr; } STDMETHOD(ExportSettings)(WCHAR *pszCategoryGUID, IVsSettingsWriter *pSettings) { CLSID clsidCategory; HRESULT hr; hr = CLSIDFromString(pszCategoryGUID, &clsidCategory); IfFailGo(hr); // Delegate to the right internal implementation based on // the requested category. if (GUID_Profiles_CommandBars == clsidCategory) { hr = ExportSettings_CommandBars(pSettings); }else if (GUID_Profiles_KeyBindings == clsidCategory) { hr = ExportSettings_KeyBindings(pSettings); }else{ hr = E_UNEXPECTED; } Error: return hr; }; HRESULT ExportSettings_CommandBars(IVsSettingsWriter *pSettings) { if (!pSettings) return E_INVALIDARG; hr = pSettings->WriteSettingString(c_szFirstSettingName, L"Value1"); IfFailGo(hr); int cRandomTrash = 12345; BYTE *pRandomTrash = (BYTE *)VSAlloc(cRandomTrash); if (pRandomTrash){ hr = pSettings->WriteSettingBytes(c_szRandomTrashBytes, pRandomTrash, cRandomTrash); IfFailGo(hr); hr = pSettings->WriteSettingLong(c_szRandomTrashLength, cRandomTrash); IfFailGo(hr); } Error: return hr; }; HRESULT ExportSettings_KeyBindings(IVsSettingsWriter *pSettings) { if (!pSettings) return E_INVALIDARG; hr = pSettings->WriteSettingString(c_szBreakPointWindow, L"Ctrl + Alt + B"); IfFailGo(hr); Error: return hr; }; STDMETHOD(ImportSettings)(WCHAR *pszCategoryGUID, IVsSettingsReader *pSettings, UserSettingsFlags flags, BOOL *pfRestartRequired) { CLSID clsidCategory; HRESULT hr; hr = CLSIDFromString(pszCategoryGUID, &clsidCategory); IfFailGo(hr); // Delegate to the right internal implementation based on // the requested category. if (GUID_Profiles_CommandBars == clsidCategory) { hr = ImportSettings_CommandBars(, pSettings, flags, pfRestartRequired); } else if (GUID_Profiles_KeyBindings == clsidCategory) { hr = ImportSettings_KeyBindings( pSettings, flags, pfRestartRequired); } else { hr = E_UNEXPECTED; } Error: return hr; }; // Import Settings. HRESULT ImportSettings_CommandBars(IVsSettingsReader *pSettings, UserSettingsFlags flags, BOOL *pfRestartRequired) { if (!pSettings) return E_INVALIDARG; if (pfRestartRequired) { *pfRestartRequired = FALSE; //Nobody should require a restart!! } CComBSTR bstrFirstSettingName; long lTrashLength = 0; BYTE *pTrashBytes = NULL; // Determines whether to treat import as an additive operation, or a reset all settings operation. BOOL fResetCompletely = FALSE; if (flags & USF_ResetOnImport) fResetCompletely = TRUE; hr = pSettings->ReadSettingString(c_szFirstSettingName, &bstrFirstSettingName); IfFailGo(hr); hr = pSettings->ReadSettingLong(c_szRandomTrashLength, &lTrashLength); IfFailGo(hr); if (lTrashLength > 0) { pTrashBytes = (BYTE*)VSAlloc(lTrashLength); IfNullMemGo(pTrashBytes); long lDataRead = 0; hr = pSettings->ReadSettingBytes(c_szRandomTrashLength, pTrashBytes, &lDataRead, lTrashLength); IfFailGo(hr); if (lDataRead != lTrashLength) { hr = E_UNEXPECTED; goto Error; } } // Note: before returning, these settings should immediately //             be applied to your personal settings store, //             whether in the registry or the file system. // This write-through cache methodology is essential to to work //             in multi-instance IDE scenarios. hr = UpdateState_CommandBar(bstrFirstSettingName,lTrashLength,pTrashBytes,lDataRead); Error: return hr; }; HRESULT ImportSettings_KeyBindings(IVsSettingsReader *pSettings, UserSettingsFlags flags, BOOL *pfRestartRequired) { if (!pSettings) return E_INVALIDARG; if (pfRestartRequired) { *pfRestartRequired = FALSE; //Nobody should require a restart!! } CComBSTR bstrBreakPointWindow; // Determines whether import can be treated as an additive // operation, or a reset all settings operation. BOOL fResetCompletely = FALSE; if (flags & USF_ResetOnImport) fResetCompletely = TRUE; hr = pSettings->ReadSettingString(c_szBreakPointWindow, &bstrBreakPointWindow); IfFailGo(hr); // Note: Before returning, these settings should immediately //             be applied to your personal settings //             store, whether in the registry or the file system. // This write-through cache methodology is essential to allow us //             to work in multi-instance IDE scenarios. hr = UpdateState_KeyBindings(bstrBreakPointWindow); Error: return hr; }  
```  
  
## Vedere anche  
 [Supporto per le impostazioni utente](../Topic/Support%20for%20User%20Settings.md)   
 [Opzioni e impostazioni utente estensione](../Topic/Extending%20User%20Settings%20and%20Options.md)   
 [Personalizzazione delle impostazioni di sviluppo in Visual Studio](http://msdn.microsoft.com/it-it/22c4debb-4e31-47a8-8f19-16f328d7dcd3)   
 [Procedura: Usare assembly di interoperabilità per importare impostazioni](../misc/how-to-use-interop-assemblies-to-import-settings.md)