---
title: "Procedura: Personalizzare un pacchetto VSPackage (C++) | Microsoft Docs"
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
  - "Finestra di dialogo Informazioni"
  - "VSPackage, schermate iniziali"
  - "VSPackage, personalizzazione"
ms.assetid: a1b9213f-8702-4716-8623-cd3705d531fa
caps.latest.revision: 10
caps.handback.revision: 10
manager: "douge"
---
# Procedura: Personalizzare un pacchetto VSPackage (C++)
Per visualizzare nella finestra di dialogo di **La guida su** e nella schermata iniziale, Vspackage deve implementare l'interfaccia di <xref:Microsoft.VisualStudio.Shell.Interop.IVsInstalledProduct> .  Questa operazione vengono fornite le seguenti informazioni su [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)]:  
  
-   Nome  
  
-   ID, come la pubblicazione periodica o numero di versione  
  
-   Informazioni  
  
-   Icona del logo  
  
 La classe di `IVsInstalledProductImpl` accetta parametri di template per tali informazioni.  Ogni parametro di modello è un ID  I primi tre sono ID delle risorse di tipo stringa e il quarto è l'ID della risorsa di un'icona.  
  
## Esempio  
 La seguente dichiarazione della classe di un VSPackage [Esempi di VSSDK](../misc/vssdk-samples.md)è fornito da.  
  
```  
class ATL_NO_VTABLE BasicPackage :   
  ...  
  public IVsInstalledProductImpl<  
    IDS_BASICPACKAGE_PRODUCT_NAME,  
    IDS_BASICPACKAGE_PRODUCT_IDENTIFIER,   
    IDS_BASICPACKAGE_PRODUCT_DETAILS,   
    IDI_BASICPACKAGE_LOGO>  
```  
  
 Per testare il package VS, vedere [Procedura: Testare la pagina Informazioni su della Guida e le schermate iniziali](../misc/how-to-test-the-help-about-and-splash-screens.md).  
  
## Vedere anche  
 [Personalizzazione di un pacchetto VSPackage](../misc/vspackage-branding.md)