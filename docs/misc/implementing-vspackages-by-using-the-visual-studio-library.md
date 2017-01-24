---
title: "Implementazione di pacchetti VSPackage mediante la libreria di Visual Studio | Microsoft Docs"
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
  - "Libreria di Visual Studio, implementazione di pacchetti VSPackage"
ms.assetid: 4cbac13f-2a9d-4955-b411-dad79081fdeb
caps.latest.revision: 7
caps.handback.revision: 7
manager: "douge"
---
# Implementazione di pacchetti VSPackage mediante la libreria di Visual Studio
La classe di `IVsPackageImpl` nella raccolta di Visual Studio fornisce un'implementazione minima dell'interfaccia di <xref:Microsoft.VisualStudio.Shell.Interop.IVsPackage> .  `IVsPackageImpl` gestisce la maggior parte dei metodi di gestione di <xref:Microsoft.VisualStudio.Shell.Interop.IVsPackage>.  Altri metodi che può essere necessario sottoporre a override per fornire un'implementazione significativa includono:  
  
-   <xref:Microsoft.VisualStudio.Shell.Interop.IVsPackage.GetAutomationObject%2A>  
  
-   <xref:Microsoft.VisualStudio.Shell.Interop.IVsPackage.CreateTool%2A>  
  
-   <xref:Microsoft.VisualStudio.Shell.Interop.IVsPackage.ResetDefaults%2A>  
  
-   <xref:Microsoft.VisualStudio.Shell.Interop.IVsPackage.GetPropertyPage%2A>  
  
    > [!NOTE]
    >  Il modello importa pacchetto di [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] genera qualsiasi codice illustrato di seguito.  È possibile risparmiare tempo utilizzando il modello per generare un VSPackage automaticamente.  
  
 I pacchetti che vengono implementati utilizzando la raccolta di Visual Studio in genere ereditano una classe di package VS da [CComObjectRootEx Class](../atl/reference/ccomobjectrootex-class.md) ATL [CComCoClass Class](../atl/reference/ccomcoclass-class.md) e dal IVsPackageImpl la raccolta di Visual Studio.  Ad esempio, seguire è la dichiarazione di classe di un VSPackage nell'esempio di Reference.Package:  
  
```  
class ATL_NO_VTABLE BasicPackage :   
    public CComObjectRootEx<CComSingleThreadModel>,  
    public CComCoClass<BasicPackage, &CLSID_BasicPackage>,  
    public IVsPackageImpl<BasicPackage, &CLSID_BasicPackage>,  
    ...  
```  
  
 I parametri di modello di `IVsPackageImpl` mostrati sono la classe stessa di un VSPackage e un puntatore al GUID che identifica il package VS.  
  
## QueryInterface di supporto con i mappa COM  
 Per ottenere il supporto ATL a `QueryInterface`, la mappa COM necessario elencare le interfacce che la classe implementa.  Ad esempio, seguire è la mappa COM per la classe di un VSPackage nell'esempio di Reference.Package:  
  
```  
BEGIN_COM_MAP(BasicPackage)  
    COM_INTERFACE_ENTRY(IVsPackage)  
    ...  
END_COM_MAP()  
```  
  
 Per ulteriori informazioni sulla mappa COM, vedere [Implementing CComObjectRootEx](../atl/implementing-ccomobjectrootex.md) e [COM\_INTERFACE\_ENTRY Macros](../Topic/COM_INTERFACE_ENTRY%20Macros.md).  
  
## Registrazione di supporto con i mapping del Registro Di Sistema  
 La raccolta di Visual Studio utilizza i file stile ATL .RGS per supportare la registrazione degli oggetti COM.  Per supportare la sostituzione dei token nel file di .RGS, la raccolta di Visual Studio utilizza i mapping del Registro di sistema.  I mapping del Registro Di Sistema sono elencati i simboli da sostituire e supportano l'utilizzo degli ID per le risorse tabella di stringhe.  
  
 Ad esempio, seguire è il mapping del Registro di sistema per la classe di un VSPackage nell'esempio di Reference.Package:  
  
```  
VSL_BEGIN_REGISTRY_MAP(IDR_BASICPACKAGE_RGS)  
    VSL_REGISTRY_MAP_GUID_ENTRY(CLSID_BasicPackage)  
    VSL_REGISTRY_RESOURCE_STRING_ENTRY(IDS_BASICPACKAGE_REGISTRY_NAME)  
    ...  
VSL_END_REGISTRY_MAP()  
```  
  
## Vedere anche  
 [Esempi di VSSDK](../misc/vssdk-samples.md)