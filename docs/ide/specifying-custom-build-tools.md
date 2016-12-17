---
title: "Specifica di strumenti di compilazione personalizzata | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "VC.Project.VCCustomBuildTool.CustomBuildToolBeforeTargets"
  - "VC.Project.VCCustomBuildTool.Outputs"
  - "VC.Project.VCCustomBuildTool.Command"
  - "VC.Project.VCCustomBuildTool.CommandLine"
  - "VC.Project.VCCustomBuildTool.AdditionalDependencies"
  - "VC.Project.VCCustomBuildTool.Message"
  - "VC.Project.VCCustomBuildTool.CustomBuildToolAfterTargets"
  - "VC.Project.VCCustomBuildTool.Description"
  - "VC.Project.VCCustomBuildTool.AdditionalInputs"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "strumenti per la compilazione (C++), specifica"
  - "compilazioni (C++), strumenti per la compilazione personalizzati"
  - "strumenti per la compilazione personalizzati (C++), specifica"
ms.assetid: e5161946-8002-418d-991e-219e6a8586f5
caps.latest.revision: 11
caps.handback.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Specifica di strumenti di compilazione personalizzata
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Uno *strumento di compilazione personalizzato* fornisce al sistema di compilazione le informazioni necessarie per compilare file di input specifici.  Uno strumento di compilazione personalizzato specifica un comando da eseguire, un elenco di file di input, un elenco dei file di output generati dal comando e una descrizione facoltativa dello strumento.  
  
 Per informazioni generali sugli strumenti di compilazione personalizzati e sulle istruzioni di compilazione personalizzate, vedere [Informazioni sulle istruzioni di compliazione personalizzate e sugli eventi di compilazione](../ide/understanding-custom-build-steps-and-build-events.md).  
  
### Per specificare uno strumento di compilazione personalizzato  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto.  Per ulteriori informazioni, vedere [Impostazione delle proprietà dei progetti Visual C\+\+](../ide/working-with-project-properties.md).  
  
2.  Fare clic su **Proprietà di configurazione** per abilitare la casella **Configurazione**.  Nella casella **Configurazione** selezionare la configurazione per la quale si desidera specificare uno strumento di compilazione personalizzato.  
  
3.  In **Esplora soluzioni** selezionare il file di input relativo allo strumento di compilazione personalizzato.  
  
     Se la cartella **Strumento di compilazione personalizzato** non viene visualizzata, significa che l'estensione del file selezionato è associata a uno strumento predefinito.  Ad esempio, lo strumento predefinito per i file con estensione c e cpp è il compilatore.  Per eseguire l'override di un'impostazione dello strumento predefinito, nel nodo **Proprietà di configurazione**, cartella **Generale**, proprietà **Tipo di elemento** fare clic su **Strumento di compilazione personalizzato**.  Fare clic su **Applica** per visualizzare il nodo **Strumento di compilazione personalizzato**.  
  
4.  Nel nodo **Strumento di compilazione personalizzato** della cartella **Generale** specificare le proprietà associate allo strumento di compilazione personalizzato:  
  
    -   In **Dipendenze aggiuntive** specificare gli eventuali file aggiuntivi oltre a quello per il quale è stato definito lo strumento di compilazione personalizzato. Il file associato allo strumento di compilazione personalizzato viene infatti implicitamente considerato come un input per lo strumento.  La presenza di file di input aggiuntivi non è un requisito necessario per uno strumento di compilazione personalizzato.  Se si possiede più di un input aggiuntivo, separarli con punti e virgola.  
  
         Se la data di un file in **Dipendenze aggiuntive** è successiva al file di input, lo strumento di compilazione personalizzato viene eseguito.  Se tutti i file in **Dipendenze aggiuntive** sono meno recenti rispetto al file di input e questo, a sua volta, è meno recente del file specificato nella proprietà **Output**, lo strumento di compilazione personalizzato non viene eseguito.  
  
         Si supponga, ad esempio, di disporre di uno strumento di compilazione personalizzato che accetta MyInput.x come input e genera MyInput.cpp, e che MyInput.x includa un file di intestazione denominato MyHeader.h.  È possibile specificare MyHeader.h come dipendenza di input per MyInput.x. In tal caso il sistema di compilazione compilerà MyInput.cpp quando non sarà aggiornato rispetto a MyInput.x o MyHeader.h.  
  
         Le dipendenze di input possono inoltre garantire che gli strumenti di compilazione personalizzati vengano eseguiti nell'ordine richiesto.  Nell'esempio precedente, si supponga che MyHeader.h sia in realtà l'output di uno strumento di compilazione personalizzato.  Dal momento che MyHeader.h è una dipendenza di MyInput.x, il sistema di compilazione compilerà Myheader.h prima di eseguire lo strumento di compilazione personalizzato su MyInput.x.  
  
    -   In **Riga di comando** specificare un comando come se lo si stesse specificando al prompt dei comandi.  Specificare un comando o un file batch valido e gli eventuali file di input o output necessari.  Specificare il comando batch **call** prima del nome di un file batch per garantire che tutti i comandi successivi vengano eseguiti.  
  
         Le macro di MSBuild consentono di specificare simbolicamente più file di input e output.  [!INCLUDE[crabout](../build/reference/includes/crabout_md.md)] sulla specificazione del percorso dei file o dei nomi dei set di file, vedere [Macro per comandi e proprietà di compilazione](../ide/common-macros-for-build-commands-and-properties.md).  
  
         Poiché il carattere "%" è riservato da MSBuild, se si specifica una variabile di ambiente sostituire ogni carattere di escape **%** con la sequenza di escape esadecimale **%25**.  Ad esempio, sostituire **%WINDIR%** con **%25WINDIR%25**.  Ogni sequenza **%25** verrà sostituita dal carattere **%** prima dell'accesso alla variabile di ambiente.  
  
    -   Digitare un messaggio descrittivo per questo strumento di compilazione personalizzato in **Descrizione**.  Il messaggio verrà visualizzato nella finestra **Output** quando il sistema di compilazione elaborerà questo strumento.  
  
    -   Nella casella **Output** specificare il nome del file di output.  Si tratta di una voce obbligatoria. Senza un valore per questa proprietà, lo strumento di compilazione personalizzato non verrà eseguito.  Se uno strumento di compilazione personalizzato ha più di un output, separare i nomi dei file con un punto e virgola.  
  
         Il nome del file di output deve corrispondere a quello specificato nella proprietà **Riga di comando**.  Il sistema di compilazione del progetto cercherà il file e ne controllerà la data.  Se il file di output è più recente del file di input oppure se il file di output non viene trovato, lo strumento di compilazione personalizzato viene eseguito.  Se tutti i file in **Dipendenze aggiuntive** sono meno recenti rispetto al file di input e questo, a sua volta, è meno recente del file specificato nella proprietà **Output**, lo strumento di compilazione personalizzato non viene eseguito.  
  
 Se si desidera che il sistema di compilazione elabori un file di output generato dallo strumento di compilazione personalizzato, è necessario aggiungerlo manualmente al progetto.  Lo strumento di compilazione personalizzato aggiornerà il file durante la compilazione.  
  
## Esempio  
 Si supponga di voler includere nel progetto un file denominato parser.l.  Si desidera che un analizzatore lessicale elabori parser.l per produrre un file con estensione c che abbia lo stesso nome di base \(parser.c\).  
  
 Innanzitutto si aggiungeranno parser.l e parser.c al progetto.  Se i file non esistono ancora, si aggiunge semplicemente un riferimento ai file.  Si creerà uno strumento di compilazione personalizzato per parser.l e si digiterà quanto segue nella proprietà **Comandi**:  
  
```  
lexer %(FullPath) .\%(Filename).c  
```  
  
 Questo comando eseguirà l'analyzer lessicale su parser.l e il parser.c di output nella directory del progetto.  
  
 Nella proprietà **Output** digitare quanto segue:  
  
```  
.\%(Filename).c  
```  
  
 Quando si compila il progetto, il sistema di compilazione confronta i timestamp di parser.l e parser.c.  Se parser.l è più recente o se parser.c non esiste, il sistema di compilazione esegue il valore della proprietà **Riga di comando** per aggiornare parser.c.  Dal momento che anche parser.c è stato aggiunto al progetto, il sistema di compilazione compilerà quindi parser.c.  
  
## Vedere anche  
 [Macro per comandi e proprietà di compilazione](../ide/common-macros-for-build-commands-and-properties.md)   
 [Risoluzione dei problemi relativi alle personalizzazioni della compilazione](../ide/troubleshooting-build-customizations.md)