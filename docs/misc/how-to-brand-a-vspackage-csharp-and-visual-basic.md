---
title: "Procedura: Personalizzare un pacchetto VSPackage (C# e Visual Basic) | Microsoft Docs"
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
ms.assetid: 705a41c3-63d6-4c1e-9f82-771be9191579
caps.latest.revision: 16
caps.handback.revision: 16
manager: "douge"
---
# Procedura: Personalizzare un pacchetto VSPackage (C# e Visual Basic)
Per visualizzare nella finestra di dialogo di **Su** e nella schermata iniziale, Vspackage deve implementare l'interfaccia di <xref:Microsoft.VisualStudio.Shell.Interop.IVsInstalledProduct> .  Ciò fornisce informazioni seguenti a [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)]:  
  
-   Nome  
  
-   ID, come la pubblicazione periodica o numero di versione  
  
-   Informazioni  
  
-   Icona del logo  
  
 Il codice seguente proviene da [Esempi di VSSDK](../misc/vssdk-samples.md).  
  
### Per implementare l'interfaccia di IVsInstalledProduct  
  
1.  Aggiungere l'attributo di <xref:Microsoft.VisualStudio.Shell.InstalledProductRegistrationAttribute> la classe che implementa il package VS.  Questa classe deve derivare da <xref:Microsoft.VisualStudio.Shell.Package> che da <xref:Microsoft.VisualStudio.Shell.Interop.IVsInstalledProduct>.  
  
     [!code-cs[VSSDKPackageSplashHelpAboutLoadKey#1](../misc/codesnippet/CSharp/how-to-brand-a-vspackage-csharp-and-visual-basic_1.cs)]
     [!code-vb[VSSDKPackageSplashHelpAboutLoadKey#1](../misc/codesnippet/VisualBasic/how-to-brand-a-vspackage-csharp-and-visual-basic_1.vb)]  
  
     Primo argomento, <xref:Microsoft.VisualStudio.Shell.InstalledProductRegistrationAttribute.UseInterface%2A>, l'attributo di <xref:Microsoft.VisualStudio.Shell.InstalledProductRegistrationAttribute> indica [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] di utilizzare <xref:Microsoft.VisualStudio.Shell.Interop.IVsInstalledProduct> per ottenere le informazioni sul prodotto, anziché la chiave del Registro di sistema di InstalledProducts.  Gli argomenti rimanenti selezionare le risorse di tipo stringa per visualizzare il nome del prodotto, i dettagli e l'ID, rispettivamente.  Tuttavia, poiché il primo argomento è `true`, gli argomenti restanti vengono `null`.  
  
2.  Fare clic con il pulsante destro del mouse su <xref:Microsoft.VisualStudio.Shell.Interop.IVsInstalledProduct>, scegliere **implementare l'interfaccia**quindi fare clic su **implementare l'interfaccia**.  
  
3.  Utilizzo <xref:Microsoft.VisualStudio.Shell.Interop.IVsInstalledProduct> tramite il codice seguente.  
  
     [!code-cs[VSSDKPackageSplashHelpAboutLoadKey#2](../misc/codesnippet/CSharp/how-to-brand-a-vspackage-csharp-and-visual-basic_2.cs)]
     [!code-vb[VSSDKPackageSplashHelpAboutLoadKey#2](../misc/codesnippet/VisualBasic/how-to-brand-a-vspackage-csharp-and-visual-basic_2.vb)]  
  
     [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] chiamati questi metodi per ottenere informazioni per cliente di personalizzazione il package VS.  Il metodo di GetResourceString viene utilizzato per localizzare tali informazioni.  
  
    > [!NOTE]
    >  I commenti del codice vengono eliminati per ragioni di brevità.  È possibile trovarli in [Esempi di VSSDK](../misc/vssdk-samples.md).  
  
### Per gestire le stringhe di informazioni del prodotto  
  
1.  Fare doppio clic sul file di risorse RESX associato al package VS.  
  
     L'editor di risorse viene aperto.  
  
2.  Individuare o aggiungere il nome del prodotto, le informazioni e ID.  
  
     Le seguenti stringhe di risorsa provengono da [Esempi di VSSDK](../misc/vssdk-samples.md).  
  
     @101  
     Schermata iniziale e la guida del pacchetto sul nome ufficiale \(c\#\).  
  
     @102  
     Questo pacchetto viene illustrato come visualizzare testo e l'immagine della schermata iniziale e nella guida di.  
  
     @104  
     8.0  
  
3.  Selezionare e modificare queste informazioni desiderate.  
  
### Per gestire le icone e bitmap del prodotto  
  
1.  Aggiungere le bitmap e le icone al progetto come risorse del progetto.  
  
     Per ulteriori informazioni, vedere [NOT IN BUILD: Adding and Editing Resources \(Visual C\#\)](http://msdn.microsoft.com/it-it/95f15d03-bed0-410c-8d1f-dece5199ba1e).  
  
2.  Chiudere l'editor di risorse e riaprire il file RESX in XML o in un editor di testo.  
  
    > [!NOTE]
    >  L'editor di risorse non supporta assegnare la risorsa ID agli elementi diversi dalle stringhe.  
  
3.  Individuare o aggiungere l'icona e le risorse bitmap al file RESX.  Le risorse seguenti hanno origine da [Esempi di VSSDK](../misc/vssdk-samples.md).  
  
    ```  
    <data name="300" type="System.Resources.ResXFileRef, System.Windows.Forms">  
        <value>GenericPackage.bmp;System.Drawing.Bitmap, System.Drawing,  
            Version=2.0.0.0, Culture=neutral,         PublicKeyToken=b03f5f7f11d50a3a</value>  
    </data>  
    <data name="400" type="System.Resources.ResXFileRef, System.Windows.Forms">  
        <value>GenericPackage.ico;System.Drawing.Icon, System.Drawing,  
            Version=2.0.0.0, Culture=neutral,         PublicKeyToken=b03f5f7f11d50a3a</value>  
    </data>  
    ```  
  
### Per testare sulla finestra di dialogo e le schermate iniziali  
  
-   Per testare il package VS, vedere [Procedura: Testare la pagina Informazioni su della Guida e le schermate iniziali](../misc/how-to-test-the-help-about-and-splash-screens.md).  
  
## Vedere anche  
 [Personalizzazione di un pacchetto VSPackage](../misc/vspackage-branding.md)