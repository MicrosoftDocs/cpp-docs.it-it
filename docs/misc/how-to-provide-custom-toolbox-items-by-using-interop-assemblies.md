---
title: "Procedura: Fornire elementi della casella degli strumenti personalizzata usando gli assembly di interoperabilit&#224; | Microsoft Docs"
ms.custom: ""
ms.date: "11/16/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
helpviewer_keywords: 
  - "Casella degli strumenti [Visual Studio SDK], aggiunta di elementi con gli assembly di interoperabilità"
ms.assetid: c3e8b404-7086-4e08-9d07-ab9c509963ca
caps.latest.revision: 33
caps.handback.revision: 33
manager: "douge"
---
# Procedura: Fornire elementi della casella degli strumenti personalizzata usando gli assembly di interoperabilit&#224;
> [!NOTE]
>  Il modo consigliato per aggiungere controlli personalizzati alla casella degli strumenti consiste nell'usare i modelli di controllo della casella degli strumenti forniti con Visual Studio 10 SDK. Questo argomento viene mantenuto solo per scopi di compatibilità con le versioni precedenti e per l'aggiunta di controlli esistenti alla casella degli strumenti.  
>   
>  Per altre informazioni sulla creazione di controlli della casella degli strumenti usando i modelli, vedere [Procedura: Creare un controllo della casella degli strumenti che usa Windows Form](../misc/how-to-create-a-toolbox-control-that-uses-windows-forms.md) e [Creazione di un controllo casella degli strumenti WPF](../Topic/Creating%20a%20WPF%20Toolbox%20Control.md).  
  
 Un VSPackage basato su un assembly di interoperabilità può estendere la funzionalità della [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] **casella degli strumenti** mediante l'aggiunta di controlli ActiveX.  
  
 Per un elenco dei formati degli Appunti standard della casella degli strumenti di [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)], vedere [Estensione della casella degli strumenti](../misc/extending-the-toolbox.md).  
  
 Per informazioni sul modo in cui un VSPackage gestisce la **casella degli strumenti** tramite [!INCLUDE[vsipsdk](../mfc/includes/vsipsdk_md.md)], vedere [Gestione della casella degli strumenti](../misc/managing-the-toolbox.md).  
  
 Per informazioni sulla gestione di una **casella degli strumenti** tramite l'automazione, vedere [Procedura: controllare la Casella degli strumenti](../Topic/How%20to:%20Control%20the%20Toolbox.md).  
  
## Procedure  
 Gli elementi aggiunti alla **casella degli strumenti** devono implementare i formati degli Appunti standard della **casella degli strumenti**, a meno che il VSPackage che aggiunge gli elementi non operi come provider di elementi della **casella degli strumenti**, fornendo il supporto di implementazione per il nuovo formato.  
  
#### Per implementare il controllo della casella degli strumenti  
  
-   Un elemento della **casella degli strumenti** fornito dal VSPackage implementato in codice non gestito deve implementare un oggetto `IDataObject` o essere un controllo ActiveX, da cui l'ambiente può ottenere un oggetto `IDataObject`.  
  
     Per altre informazioni sull'implementazione dell'oggetto `IDataObject` per supportare la **casella degli strumenti**, vedere <xref:System.Runtime.InteropServices.ComTypes.IDataObject>, <xref:Microsoft.VisualStudio.Shell.Interop.TBXITEMINFO> e <xref:System.Runtime.InteropServices.ComTypes.FORMATETC>.  
  
#### Per aggiungere controlli basati sull'assembly di interoperabilità alla casella degli strumenti  
  
1.  Ottenere le istanze di:  
  
    1.  <xref:Microsoft.VisualStudio.Shell.Interop.IVsToolbox2>, che supporta l'aggiunta di controlli e sezioni \(schede\) alla **casella degli strumenti** e il controllo di altri aspetti della configurazione della **casella degli strumenti**.  
  
    2.  <xref:Microsoft.VisualStudio.Shell.Interop.IVsToolbox3>, che fornisce il supporto per la localizzazione e la persistenza delle impostazioni di [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)].  
  
    > [!NOTE]
    >  L'interfaccia <xref:Microsoft.VisualStudio.Shell.Interop.IVsToolbox2> eredita dall'interfaccia <xref:Microsoft.VisualStudio.Shell.Interop.IVsToolbox>.<xref:Microsoft.VisualStudio.Shell.Interop.IVsToolbox3> non deriva da <xref:Microsoft.VisualStudio.Shell.Interop.IVsToolbox2> e non implementa i relativi metodi.  
  
     <xref:Microsoft.VisualStudio.Shell.Interop.IVsToolbox3> e <xref:Microsoft.VisualStudio.Shell.Interop.IVsToolbox2> vengono ottenuti chiamando il metodo <xref:Microsoft.VisualStudio.OLE.Interop.IServiceProvider.QueryService%2A> sul servizio <xref:Microsoft.VisualStudio.Shell.Interop.SVsToolbox> usando l'ID servizio di `SID_SVsToolbox`.  
  
     L'ID di interfaccia `IID_IVSToolbox2` viene usato per ottenere <xref:Microsoft.VisualStudio.Shell.Interop.IVsToolbox2> e l'ID di interfaccia `IID_IVSToolbox3` restituisce <xref:Microsoft.VisualStudio.Shell.Interop.IVsToolbox3>.  
  
     Nell'esempio seguente, l'interfaccia <xref:Microsoft.VisualStudio.Shell.Interop.IVsToolbox2> viene ottenuta con un `QueryService` e l'interfaccia <xref:Microsoft.VisualStudio.Shell.Interop.IVsToolbox3> chiamando `QueryInterface` sull'interfaccia <xref:Microsoft.VisualStudio.Shell.Interop.IVsToolbox2>.  
  
    ```cpp  
    extern CComModule _Module;  
    CComPtr<IVsToolbox2> srpTbx2;  
    CComPtr<IVsToolbox3> srpTbx3;  
    hr = _Module.QueryService(SID_SVsToolbox, IID_IVsToolbox2, (void**) &srpTbx2));  
    hr = srpTbx2->QueryInterface( IID_IVsToolbox3, (void **)&srpTbx3)  
    ```  
  
2.  Usare le istanze di <xref:Microsoft.VisualStudio.Shell.Interop.IVsToolbox2> e le interfacce <xref:Microsoft.VisualStudio.Shell.Interop.IVsToolbox3> per aggiungere schede \(sezioni\) e controlli alla **casella degli strumenti**.  
  
     Nell'esempio seguente viene aggiunta una nuova scheda con un nome localizzato usando il metodo <xref:Microsoft.VisualStudio.Shell.Interop.IVsToolbox2.AddTab%2A>.  
  
     Poiché il nome localizzato non è invariante, viene impostato un nome invariante non localizzato \(in questo caso `L"HTML"`\) tramite una chiamata al metodo <xref:Microsoft.VisualStudio.Shell.Interop.IVsToolbox3.SetIDOfTab%2A>.  
  
     Se la scheda della casella degli strumenti esiste già, `AddTab2` restituisce E\_FAIL. In tal caso, si presuppone che la scheda sia stata aggiunta correttamente prima che venga effettuato un tentativo di recuperare il nome invariante.  
  
     Se una scheda è stata aggiunta correttamente, un controllo basato su <xref:System.Runtime.InteropServices.ComTypes.IDataObject>\-viene aggiunto alla **casella degli strumenti**. In caso contrario, viene restituito un errore.  
  
    ```cpp  
    CComBSTR sbstrID;  
    hr = srpTbx2->AddTab2((WCHAR*)szwDisplayTabName, *pclsidPackage);  
    if ( hr == S_OK) {  
        sbstrID =L"HTML";  
        hr = srpTbx3->SetIDOfTab( (WCHAR*)szwDisplayTabName, sbstrID);  
    }else{  
        hr = S_OK;  
        hr = srpTbx3->GetIDOfTab( (WCHAR*)szwDisplayTabName, &sbstrID );  
  
    }  
    if ( hr = S_OK){  
        hr=srpTbx2->AddItem(tbxItem, &tinfo, bstrLabel);  
    }  
    return hr;  
    ```  
  
 Oltre che per l'aggiunta alla **casella degli strumenti** stessa, un VSPackage può essere configurato come un provider di dati della **casella degli strumenti** e può essere usato per estendere il supporto del trascinamento della selezione all'IDE di [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)]. Questo consente di esporre formati degli Appunti arbitrari alla **casella degli strumenti** e agli editor.  
  
#### Per configurare un VSPackage come un provider di elementi della casella degli strumenti  
  
1.  Registrare il VSPackage basato sull'interoperabilità come un provider di elementi della **casella degli strumenti**.  
  
     Per altre informazioni sulla registrazione come provider della **casella degli strumenti**, vedere [Registrazione delle funzionalità di supporto della casella degli strumenti](../misc/registering-toolbox-support-features.md).  
  
2.  Eseguire la registrazione per il supporto di formati degli Appunti personalizzati della **casella degli strumenti**.  
  
     I VSPackage basati sull'interoperabilità che supportano controlli che non implementano tutti i formati degli Appunti standard della **casella degli strumenti** o implementano un formato degli Appunti personalizzato della **casella degli strumenti** devono:  
  
    1.  Registrare i formati degli Appunti della casella degli strumenti che supportano. Per altre informazioni, vedere [Registrazione delle funzionalità di supporto della casella degli strumenti](../misc/registering-toolbox-support-features.md).  
  
    2.  Creare una classe che implementa le interfacce <xref:Microsoft.VisualStudio.Shell.Interop.IVsToolboxDataProvider> e <xref:Microsoft.VisualStudio.Shell.Interop.IVsToolboxDataProvider2>.  
  
        > [!NOTE]
        >  Le interfacce <xref:Microsoft.VisualStudio.Shell.Interop.IVsToolboxDataProvider> e <xref:Microsoft.VisualStudio.Shell.Interop.IVsToolboxDataProvider2> non devono essere implementate nella stessa classe che implementa l'interfaccia <xref:Microsoft.VisualStudio.Shell.Interop.IVsPackage>.  
  
    3.  Informare a livello di codice la casella degli strumenti del fatto che un'implementazione specifica delle interfacce <xref:Microsoft.VisualStudio.Shell.Interop.IVsToolboxDataProvider> e <xref:Microsoft.VisualStudio.Shell.Interop.IVsToolboxDataProvider2> fornisce il supporto per i formati di dati personalizzati con uno dei metodi equivalenti, <xref:Microsoft.VisualStudio.Shell.Interop.IVsToolboxDataProviderRegistry.RegisterDataProvider%2A> o <xref:Microsoft.VisualStudio.Shell.Interop.IVsToolbox.RegisterDataProvider%2A>.  
  
         La chiamata del metodo <xref:Microsoft.VisualStudio.Shell.Interop.IVsToolbox.RegisterDataProvider%2A> in genere viene eseguita nell'implementazione del metodo <xref:Microsoft.VisualStudio.Shell.Interop.IVsPackage.SetSite%2A> o nel metodo del gestore <xref:Microsoft.VisualStudio.Shell.WindowPane.OnCreate%2A> per i casi in cui il VSPackage diventa attivo.  
  
        ```cpp  
        CComPtr<IVsToolboxDataProviderRegistry> pTB;  
        if (SUCCEEDED (hr = pServiceProvider->QueryService(SID_SVsToolboxDataProviderRegistry, IID_IVsToolboxDataProviderRegistry, (PVOID*)&pTB)) && pTB != NULL)  
        {  
            CustToolboxDataProvider* pDP = new CustToolboxDataProvider;  
            if (pDP)  
            {  
                pDP->AddRef();  
                VSCOOKIE dwDPCookie; //UNDONE: pass NULL instead of ptr to the cookie when RegisterDataProvider allows it.  
                pTB->RegisterDataProvider((IVsToolboxDataProvider*)pDP, &dwDPCookie);  
                pDP->Release();  
            }  
            else  
            {  
                hr = E_OUTOFMEMORY;  
            }  
        }  
        ```  
  
 Per un elenco dei formati degli Appunti standard della [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] **casella degli strumenti**, vedere [Estensione della casella degli strumenti](../misc/extending-the-toolbox.md).  
  
## Vedere anche  
 [Estensione della casella degli strumenti](../misc/extending-the-toolbox.md)   
 [Procedure dettagliate sulla casella degli strumenti](../misc/toolbox-walkthroughs.md)   
 [Registrazione delle funzionalità di supporto della casella degli strumenti](../misc/registering-toolbox-support-features.md)   
 [Sviluppo avanzato di controlli della casella degli strumenti](../misc/advanced-toolbox-control-development.md)   
 [Gestione della casella degli strumenti](../misc/managing-the-toolbox.md)   
 [Procedura: controllare la Casella degli strumenti](../Topic/How%20to:%20Control%20the%20Toolbox.md)