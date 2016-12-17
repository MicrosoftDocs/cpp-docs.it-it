---
title: "Modifiche al sistema di compilazione | Microsoft Docs"
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
  - "vc.msbuild.changes"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "sistema di compilazione (modifiche), $(Inherit)"
  - "sistema di compilazione (modifiche), $(NoInherit)"
  - "sistema di compilazione (modifiche), .vsprops"
  - "sistema di compilazione (modifiche), regole di compilazione personalizzate"
  - "sistema di compilazione (modifiche), MSBuild"
  - "sistema di compilazione (modifiche), file di progetto (vcxprog)"
  - "MSBuild, modifiche del sistema di compilazione"
ms.assetid: e564d95f-a6cc-4d97-b57e-1a71daf66f4a
caps.latest.revision: 13
caps.handback.revision: 13
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Modifiche al sistema di compilazione
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Il sistema MSBuild è utilizzato per compilare progetti Visual C\+\+.  Tuttavia, in Visual Studio 2008 e le versioni precedenti, il sistema VCBuild è stato utilizzato.  Alcuni tipi di file e i concetti che dipendono da VCBuild non esistono o sono rappresentati in modo diverso nel sistema corrente.  In questo documento vengono illustrate le differenze nel sistema di compilazione corrente.  
  
## L'estensione di file vcproj è ora vcxproj  
 Per i file di progetto non viene più utilizzata l'estensione vcproj.  In Visual Studio i file di progetto creati in una versione precedente di Visual C\+\+ vengono convertiti automaticamente nel formato utilizzato dal sistema corrente.  Per ulteriori informazioni su come aggiornare manualmente un progetto, vedere [\/Upgrade](../Topic/-Upgrade%20\(devenv.exe\).md).  
  
 Nella versione corrente l'estensione di un file di progetto è vcxproj.  
  
## L'estensione di file vsprops è ora props  
 Nelle versioni precedenti una *finestra delle proprietà di progetto* è un file basato su XML con estensione vsprops.  Una finestra delle proprietà di progetto consente di specificare opzioni per costruire strumenti, ad esempio il compilatore o il linker, e creare macro definite dall'utente  
  
 Nella versione corrente l'estensione di file di una finestra delle proprietà di progetto è props.  
  
## Regole di compilazione personalizzate e file con estensione rules  
 Nelle versioni precedenti un *file delle regole* è un file basato su XML con estensione rules.  Un file delle regole consente di definire regole di compilazione personalizzate e incorporarle nel processo di compilazione di un progetto Visual C\+\+.  Una regola di compilazione personalizzata, che può essere associata a una o più estensioni di file, consente di passare i file di input a uno strumento che crea uno o più file di output.  
  
 In questa versione le regole di compilazione personalizzate vengono rappresentate da tre tipi di file, con estensione xml, props e targets, anziché da un file con estensione rules.  Quando si esegue la migrazione di un file con estensione rules creato mediante una versione precedente di Visual C\+\+ alla versione corrente, i file con estensione xml, props e targets equivalenti vengono creati e archiviati nel progetto insieme con il file con estensione rules originale.  
  
> [!IMPORTANT]
>  Nella versione corrente, [!INCLUDE[TLA2#tla_ide](../build/includes/tla2sharptla_ide_md.md)] non supporta la creazione di nuove regole.  Per questo motivo, il modo più semplice per utilizzare un file di regole da un progetto creato con una versione precedente di Visual C\+\+ è di eseguire la migrazione del progetto nella versione corrente.  
  
## Macro di ereditarietà  
 Nelle versioni precedenti le macro **$\(Inherit\)** specificano l'ordine in cui le proprietà ereditate appaiono sulla riga di comando composta dal sistema di compilazione del progetto.  La macro **$\(NoInherit\)** fa sì che venga ignorata qualsiasi occorrenza di $\(Inherit\) e che non vengano ereditate le proprietà che sarebbero altrimenti state ereditate.  Ad esempio, per impostazione predefinita, la macro $\(Inherit\) comporta l'aggiunta dei file specificati tramite l'opzione del compilatore [\/I \(Directory di inclusione aggiuntive\)](../build/reference/i-additional-include-directories.md) alla riga di comando.  
  
 Nella versione corrente l'ereditarietà viene supportata specificando il valore di una proprietà come concatenazione di uno o più valori letterali e macro della proprietà.  Le macro **$\(Inherit\)** e **$\(NoInherit\)** non sono supportate.  
  
 Nell'esempio seguente un elenco delimitato da punti e virgola viene assegnato a una proprietà in una pagina delle proprietà.  L'elenco è composto dalla concatenazione del letterale *\<value\>* e del valore della proprietà `MyProperty`, a cui si accede tramite la notazione di macro, **$\(***MyProperty***\)**.  
  
```  
Property=<value>;$(MyProperty)  
```  
  
## File con estensione vcxproj.user  
 In un file utente \(con estensione vcxproj.user\) vengono archiviate proprietà specifiche dell'utente, ad esempio le impostazioni di debug e distribuzione.  Il file con estensione vcxproj.user viene applicato a tutti i progetti per un determinato utente.  
  
## File con estensione vcxproj.filters  
 Quando si utilizza **Esplora soluzioni** per aggiungere un file a un progetto, il file di filtro \(con estensione vcxproj.filters\) definisce la posizione in cui viene aggiunto il file nella visualizzazione ad albero di **Esplora soluzioni**, a seconda dell'estensione di file.  
  
## Impostazioni delle directory di VC\+\+  
 Le impostazioni delle directory di Visual C\+\+ vengono specificate nella [Directory di VC\+\+ \(pagina delle proprietà\)](../ide/vcpp-directories-property-page.md).  Nelle versioni precedenti di Visual Studio, le impostazioni delle directory vengono applicate per ciascun utente e l'elenco delle directory escluse viene specificato nel file sysincl.dat.  
  
 Non è possibile modificare le impostazioni delle directory di VC\+\+ se si esegue [devenv \/resetsettings](../Topic/-ResetSettings%20\(devenv.exe\).md) dalla riga di comando.  Inoltre, non si possono modificare le impostazioni aprendo il menu **Strumenti**, facendo clic su **Importa\/Esporta impostazioni** e selezionando l'opzione **Reimposta tutte le impostazioni**.  
  
 Eseguire la migrazione delle impostazioni delle directory di VC\+\+ da un file con estensione vssettings creato da una versione precedente di Visual C\+\+.  Aprire il menu **Strumenti**, fare clic su **Importa\/Esporta impostazioni**, selezionare **Importa le impostazioni di ambiente selezionate** e seguire le istruzioni della procedura guidata.  In alternativa, quando si avvia per la prima volta Visual Studio, nella finestra di dialogo **Seleziona impostazioni di ambiente predefinite** selezionare **Esegui la migrazione delle impostazioni appropriate da una versione precedente e applicale insieme alle impostazioni predefinite selezionate di seguito**.  
  
## Vedere anche  
 [MSBuild \(Visual C\+\+\)](../build/msbuild-visual-cpp.md)