---
title: "Creazione di una pagina iniziale personalizzata | Microsoft Docs"
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
  - "Creare una pagina iniziale"
  - "pagina iniziale personalizzata"
  - "personalizzare la pagina iniziale"
ms.assetid: a0df5b9c-0932-4e54-86f0-28530ad9d684
caps.latest.revision: 22
caps.handback.revision: 22
manager: "douge"
---
# Creazione di una pagina iniziale personalizzata
È possibile creare una pagina iniziale personalizzata usando il modello di progetto di pagina iniziale o creando una pagina iniziale vuota.  
  
 La finestra di progettazione XAML potrebbe non fornire rappresentazioni visive completamente accurate delle pagine iniziali personalizzate a causa delle dipendenze dal modello applicativo di Visual Studio.  
  
## Uso del modello di progetto  
 Il modello di progetto di pagina iniziale crea un progetto di pagina iniziale che è una copia completa della pagina iniziale di Visual Studio. È quindi possibile modificare la pagina iniziale in base alle specifiche.  
  
#### Per creare una pagina iniziale personalizzata con il modello di progetto di pagina iniziale  
  
1.  Scaricare e installare il [modello di progetto di pagina iniziale](http://go.microsoft.com/fwlink/?LinkId=186204) da Visual Studio Gallery.  
  
    > [!WARNING]
    >  A questo punto il modello di progetto di pagina iniziale di Visual Studio 2010 non è ancora aggiornato. Per informazioni su come aggiornare il modello, vedere [Procedura: Aggiornare una pagina iniziale personalizzata di Visual Studio](../misc/how-to-upgrade-a-visual-studio-custom-start-page.md).  
  
2.  Dopo aver installato il modello, usarlo per creare un nuovo progetto di pagina iniziale.  
  
3.  In **Modelli installati** nel riquadro sinistro della finestra di dialogo Nuovo progetto espandere il nodo **Altri tipi di progetto** e quindi fare clic sul nodo **Extensibility**.  
  
4.  Nel riquadro centrale fare clic su **Personalizza pagina iniziale**, assegnare un nome al progetto e quindi fare clic su **OK**.  
  
     Viene creato un progetto di pagina iniziale che è una copia completa della pagina iniziale di Visual Studio.  
  
5.  Da **Esplora soluzioni** aprire il file **StartPage.xaml**.  
  
6.  Modificare il file StartPage.xaml.  
  
     È possibile visualizzare il proprio lavoro premendo F5 per aprire un'istanza sperimentale di Visual Studio con la pagina iniziale personalizzata installata.  
  
## Creazione di una pagina iniziale vuota  
 Il metodo più semplice per creare una pagina iniziale vuota è usare il modello di progetto di pagina iniziale e quindi rimuovere il contenuto.  
  
#### Per creare una pagina iniziale vuota con il modello di progetto di pagina iniziale  
  
1.  Creare un progetto di pagina iniziale usando il modello di progetto di pagina iniziale, come descritto nella routine precedente.  
  
2.  Aprire il file StartPage.xaml.  
  
3.  Rimuovere tutto il contenuto della pagina, lasciando solo gli elementi XML esterni e l'elemento griglia <xref:System.Windows.Controls.Grid> contenitore, in modo che il file XAML assomigli a quello nell'esempio seguente.  
  
     [!code-xml[BlankStartPage#01](../misc/codesnippet/Xaml/creating-your-own-start-page_1.xaml)]  
  
4.  Rimuovere tutti i file di supporto che non si intende usare.  
  
     Mantenere i file VSIX e PKGDEF per scopi di distribuzione.  
  
 In alternativa, è possibile creare una pagina iniziale vuota creando un file XAML con la struttura di tag corretta perché venga riconosciuta da Visual Studio. È quindi possibile aggiungere il markup e il code\-behind per ottenere la funzionalità e l'aspetto desiderati. Per altre informazioni, vedere [Creazione di una pagina iniziale personalizzata](../Topic/Creating%20a%20Custom%20Start%20Page.md).  
  
## Testing e applicazione della pagina iniziale personalizzata  
 Non impostare l'istanza primaria per l'esecuzione della pagina iniziale personalizzata fino a quando non si verifica che questa non si arresta in modo anomalo. Una volta testata la pagina iniziale personalizzata, è possibile applicarla nel sistema ripetendo gli ultimi tre passaggi di questa routine nell'istanza primaria di Visual Studio.  
  
#### Per testare una pagina iniziale personalizzata  
  
1.  Premere F5.  
  
     L'istanza sperimentale di Visual Studio viene aperta con la nuova pagina iniziale installata, ma non selezionata.  
  
2.  Nell'istanza sperimentale di Visual Studio scegliere **Opzioni** dal menu **Strumenti**.  
  
3.  Nella finestra di dialogo **Opzioni** selezionare **Avvio** in **Ambiente**. Nell'elenco **Personalizza pagina iniziale** selezionare quindi il file XAML e fare clic su **OK**.  
  
4.  Scegliere **Pagina iniziale** dal menu **Visualizza**.  
  
     Verrà visualizzata la pagina iniziale funzionante. È necessario chiudere l'istanza sperimentale, copiare di nuovo tutti i file modificati e quindi riaprire l'istanza sperimentale per visualizzare le nuove modifiche.  
  
 È possibile condividere la pagina iniziale personalizzata caricando il file VSIX dalla directory bin\\debug nel sito Web [Visual Studio Gallery](http://go.microsoft.com/fwlink/?LinkID=123847) o in un altro sito Web o una condivisione Intranet. Per altre informazioni, vedere [Distribuzione di pagine iniziali personalizzate](../Topic/Deploying%20Custom%20Start%20Pages.md).  
  
## Vedere anche  
 [Personalizzazione della pagina iniziale](../Topic/Customizing%20the%20Start%20Page%20for%20Visual%20Studio.md)   
 [Procedura dettagliata: Aggiunta di XAML personalizzato nella pagina iniziale](../Topic/Walkthrough:%20Adding%20Custom%20XAML%20to%20the%20Start%20Page.md)