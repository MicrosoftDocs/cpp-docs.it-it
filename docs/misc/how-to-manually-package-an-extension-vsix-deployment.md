---
title: "Procedura: Creare manualmente il pacchetto di un&#39;estensione (distribuzione VSIX) | Microsoft Docs"
ms.custom: ""
ms.date: "12/15/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
ms.assetid: d25990e0-e782-4a79-9d9a-1caf3c56c6a2
caps.latest.revision: 10
caps.handback.revision: 10
manager: "douge"
---
# Procedura: Creare manualmente il pacchetto di un&#39;estensione (distribuzione VSIX)
È possibile creare un pacchetto VSIX per eseguire il wrapping di un'estensione di [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] per la distribuzione. La creazione del pacchetto può avvenire in tre modi:  
  
-   Creare un progetto di pacchetto VSIX usando uno dei modelli di estendibilità inclusi in [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] SDK. Questa è l'opzione più semplice per la maggior parte degli scenari.  
  
-   Eseguire il wrapping dell'output del progetto di estensione in un [progetto VSIX](../Topic/VSIX%20Project%20Template.md) vuoto. È consigliabile scegliere questa opzione per i modelli, gli assembly non supportati e i tipi personalizzati.  
  
-   Creare manualmente un pacchetto VSIX. È consigliabile scegliere questa opzione solo quando le altre due opzioni non sono disponibili.  
  
 Questo documento descrive la terza opzione.  
  
## Creazione di un pacchetto VSIX  
 Per creare manualmente un pacchetto di un'estensione, aggiungere un file extension.manifest e un file \[Content\_Types\].xml al progetto di estensione, inserirli in un file compresso con l'output di compilazione e rinominare il file compresso assegnandogli un'estensione di file vsix. L'estensione di cui creare il pacchetto deve essere di un tipo supportato dallo [schema VSIX](http://msdn.microsoft.com/it-it/76e410ec-b1fb-4652-ac98-4a4c52e09a2b).  
  
> [!NOTE]
>  I nomi dei file nei pacchetti VSIX non devono includere spazi, né caratteri riservati negli URI \(Uniform Resource Identifier\), come definito in [\[RFC2396\]](http://go.microsoft.com/fwlink/?LinkId=90339).  
  
#### Per creare manualmente un pacchetto VSIX  
  
1.  Creare un'estensione di Visual Studio di un tipo supportato dallo schema VSIX.  
  
2.  Creare un file XML e assegnargli il nome `extension.vsixmanifest`.  
  
3.  Compilare il file extension.vsixmanifest in base allo schema VSIX. Per un esempio di manifesto, vedere [Elemento PackageManifest \(elemento radice, schema VSX\)](http://msdn.microsoft.com/it-it/f8ae42ba-775a-4d2b-976a-f556e147f187).  
  
4.  Creare un secondo file XML e assegnargli il nome `[Content_Types].xml`.  
  
5.  Compilare il file \[Content\_Types\].xml come specificato in [La struttura del Content\_types\]. XML File](../Topic/The%20Structure%20of%20the%20Content_types].xml%20File.md).  
  
6.  Inserire entrambi i file XML in una directory con l'estensione da distribuire.  
  
     Nel caso di un modello di progetto o di un modello di elemento, inserire il file ZIP contenente il modello nella stessa cartella dei file XML. Non inserire i file XML nel file ZIP.  
  
     In tutti gli altri casi, inserire i file XML nella stessa directory dell'output di compilazione.  
  
7.  In Esplora risorse fare clic con il pulsante destro del mouse sulla cartella che include il contenuto dell'estensione e i due file XML, scegliere **Invia a** e quindi fare clic su **Cartella compressa**.  
  
8.  Rinominare il file ZIP risultante in *Nomefile*.vsix, dove *Nomefile* è il nome del file ridistribuibile che installa il pacchetto.  
  
## Vedere anche  
 [Distribuzione di estensioni di Visual Studio](../Topic/Shipping%20Visual%20Studio%20Extensions.md)   
 [Anatomia di un pacchetto VSIX](../Topic/Anatomy%20of%20a%20VSIX%20Package.md)   
 [Elemento PackageManifest \(elemento radice, schema VSX\)](http://msdn.microsoft.com/it-it/f8ae42ba-775a-4d2b-976a-f556e147f187)