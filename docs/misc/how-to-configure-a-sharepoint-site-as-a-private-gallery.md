---
title: "Procedura: Configurare un sito di SharePoint come raccolta privata | Microsoft Docs"
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
  - "SharePoint, raccolte private"
  - "raccolte private, Sharepoint"
ms.assetid: 6c6ed45f-7e46-4ed0-8b5c-839dbbe3769f
caps.latest.revision: 9
caps.handback.revision: 9
manager: "douge"
---
# Procedura: Configurare un sito di SharePoint come raccolta privata
È possibile creare una pagina di elenco SharePoint che descrive e fornisce le estensioni come una raccolta privata e aggiungere l'elenco a **Estensioni e aggiornamenti**. Per altre informazioni, vedere [Raccolte private](../Topic/Private%20Galleries.md).  
  
 Per usare SharePoint per creare una raccolta privata:  
  
1.  Creare prima di tutto una pagina di elenco per la raccolta privata.  
  
2.  Caricare quindi i file di estensione \(VSIX\) come elementi nella pagina di elenco.  
  
> [!IMPORTANT]
>  Per sicurezza, SharePoint blocca il caricamento dei file VSIX. Quando si configura una raccolta privata, assicurarsi che i file VSIX non siano bloccati. Per altre informazioni, vedere [Gestire i tipi di file bloccati](http://go.microsoft.com/fwlink/?LinkID=201253).  
  
## Creazione di una pagina di elenco per una raccolta privata  
 A seconda della configurazione dei server SharePoint in cui avviene la distribuzione, i passaggi seguenti possono variare. In generale, queste istruzioni di distribuzione sono le stesse per qualsiasi estensione WSP di SharePoint. Per una spiegazione relativa allo strumento STSAdm, che può essere usato per la gestione delle distribuzioni di soluzioni SharePoint, vedere l'articolo relativo alla [distribuzione di soluzioni con SharePoint 2007](http://go.microsoft.com/fwlink/?LinkId=220676) sul sito Web di MSDN Magazine.  
  
#### Per creare una pagina di elenco per una raccolta privata  
  
1.  Caricare il file di elenco di estensioni di Visual Studio \(WSP\) nel server SharePoint.  
  
2.  Al prompt dei comandi eseguire i comandi seguenti per installare il file WSP nel server SharePoint.  
  
     **stsadm –o addsolution –name VisualStudioExtensionsList.wsp**  
  
     **stsadm –o deploysolution –name VisualStudioExtensionsList.wsp –url http:\/\/\<SERVERNAME\> –allowCasPolicies –allowgacdeployment –immediate**  
  
     Potrebbe essere anche necessario attivare la funzionalità tramite l'interfaccia utente di SharePoint per un sito secondario, come indicato di seguito.  
  
    1.  Sulla barra dei menu scegliere **Azioni sito**, **Impostazioni sito**, **Gestisci caratteristiche sito**.  
  
    2.  Fare clic sul pulsante **Attiva** accanto allalibreria di estensioni di Visual Studio.  
  
    3.  Aggiungere la libreria di estensioni di Visual Studio al sito secondario desiderato.  
  
 Se è necessario rimuovere una pagina di elenco, seguire la procedura seguente.  
  
#### Per rimuovere una pagina di elenco per una raccolta privata  
  
1.  Al prompt dei comandi eseguire i comandi seguenti per rimuovere il file WSP nel server SharePoint.  
  
     **stsadm –o retractsolution –name VisualStudioExtensionsList.wsp –immediate**  
  
     **stsadm –o deletesolution –name VisualStudioExtensionsList.wsp**  
  
2.  In SharePoint ritirare ed eliminare la soluzione.  
  
## Domande frequenti  
  
### Cosa succede quando viene caricata un'estensione?  
 Quando viene caricato un file di estensione \(VSIX\) di Visual Studio, le informazioni vengono estratte dal file. Prima di tutto, alcuni valori del file con estensione vsixmanifest incorporato, ad esempio, VsixId, VsixVersion e così via, vengono estratti e archiviati come valori di metadati nascosti nell'oggetto SPListItem corrispondente. In secondo luogo, i file Icon e PreviewImage per l'estensione vengono estratti e archiviati in un elenco separato.  
  
 Le immagini vengono archiviate nelle raccolte immagini denominate *TitoloElenco*\_VSIXIcons e *TitoloElenco*\_VSIXPreviewImages, dove *TitoloElenco* è il nome dell'istanza di elenco in cui sono archiviati i file VSIX. Al nome di ogni file di immagine viene assegnato l'ID VSIX corrispondente come prefisso.  
  
### Cosa succede quando viene eliminata un'estensione?  
 Quando un file VSIX viene eliminato, vengono eliminati anche i file di immagine corrispondenti, se presenti.  
  
### Cosa succede quando viene aggiornata un'estensione?  
 Un'estensione può essere aggiornata caricando una nuova versione del file VSIX e sovrascrivendo la versione esistente. Quando un'estensione viene aggiornata, tutti i valori dei metadati e le immagini per l'estensione vengono aggiornati in base ai valori della nuova versione.  
  
### Cosa succede quando viene eliminato un elenco?  
 Quando viene eliminata un'istanza di un elenco di estensioni di Visual Studio, vengono eliminate anche le raccolte immagini \_VSIXIcons e \_VSIXPreviewImages corrispondenti.  
  
### Quali versioni di SharePoint sono supportate?  
 Al momento, è supportato solo SharePoint 2010.  
  
## Vedere anche  
 [Raccolte private](../Topic/Private%20Galleries.md)