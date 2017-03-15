---
title: "Esecuzione di LIB | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "VC.Project.VCLibrarianTool.TargetMachine"
  - "Lib"
  - "VC.Project.VCLibrarianTool.PrintProgress"
  - "VC.Project.VCLibrarianTool.SuppressStartupBanner"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/ (file di comando)"
  - "/MACHINE (opzione piattaforma di destinazione)"
  - "/NOLOGO (opzione di Gestione librerie)"
  - "/VERBOSE (opzione di Gestione librerie)"
  - "due punti (file di comando)"
  - "file di comando"
  - "file di comando, LIB"
  - "trattino (identificatore di opzione)"
  - "barra (identificatore di opzione)"
  - "LIB [C++], esecuzione di LIB"
  - "MACHINE (opzione piattaforma di destinazione)"
  - "-MACHINE (opzione piattaforma di destinazione)"
  - "NOLOGO (opzione di Gestione librerie)"
  - "-NOLOGO (opzione di Gestione librerie)"
  - "punto e virgola, file di comando"
  - "barra (/)"
  - "VERBOSE (opzione di Gestione librerie)"
  - "-VERBOSE (opzione di Gestione librerie)"
ms.assetid: d54f5c81-7147-4b2c-a8db-68ce6eb1eabd
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 8
---
# Esecuzione di LIB
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Per il controllo di LIB sono disponibili varie opzioni della riga di comando.  
  
## Riga di comando di LIB  
 Per eseguire LIB, digitare il comando `lib` seguito dalle opzioni e dai nomi file necessari per le attività che si desidera eseguire.  LIB accetta anche input della riga di comando nei file di comando descritti nella sezione che segue.  Non vengono invece utilizzate le variabili di ambiente.  
  
> [!NOTE]
>  Se si ha familiarità con gli strumenti LINK32.exe e LIB32.exe forniti con Microsoft Win32 Software Development Kit per Windows NT, è possibile che si sia già utilizzato il comando `link32 -lib` o `lib32` per la gestione delle librerie e la creazione di librerie di importazione.  Modificare i makefile e i file batch per utilizzare invece il comando `lib`.  
  
## File di comando di LIB  
 È possibile passare a LIB argomenti della riga di comando in un file di comando utilizzando la seguente sintassi:  
  
```  
LIB @commandfile  
```  
  
 Il file `commandfile` è un file di testo.  Non sono consentiti spazi o tabulazioni tra il simbolo @ e il nome file.  Non è disponibile alcuna estensione predefinita ed è necessario specificare il nome file completo, inclusa l'estensione.  I caratteri jolly non sono consentiti.  Con il nome file è possibile specificare un percorso assoluto o relativo.  
  
 Nel file di comando gli argomenti possono essere separati da spazi o tabulazioni, come nella riga di comando, oppure mediante caratteri di nuova riga.  Utilizzare un punto e virgola \(;\) per contrassegnare eventuali commenti.  Il testo compreso tra il punto e virgola e la fine della riga viene ignorato.  
  
 È possibile specificare la riga di comando sia interamente che in parte in un file di comando, nonché utilizzare più file di comando in un unico comando LIB.  L'input del file di comando viene accettato come se fosse specificato in tale posizione sulla riga di comando.  I file di comando non possono essere annidati.  Il contenuto di tali file viene visualizzato, a meno che non venga utilizzata l'opzione \/NOLOGO.  
  
## Utilizzo delle opzioni di LIB  
 Un'opzione è formata da un identificatore di opzione, che può essere un trattino \(–\) o una barra \(\/\), seguito dal nome dell'opzione.  I nomi delle opzioni non possono essere abbreviati.  Per alcune opzioni è possibile specificare un argomento, preceduto da due punti \(:\).  Non sono consentiti spazi o tabulazioni nella specifica di un'opzione.  Utilizzare uno o più spazi o tabulazioni per separare le specifiche delle opzioni nella riga di comando.  Per i nomi delle opzioni e i corrispondenti argomenti parola chiave o nome file non viene rilevata la distinzione tra maiuscole e minuscole. Tale distinzione viene invece rilevata per gli identificatori utilizzati come argomenti.  Le opzioni vengono elaborate nell'ordine specificato nella riga di comando e nei file di comando.  Se un'opzione è ripetuta con argomenti differenti, quella che viene elaborata per ultima avrà la precedenza sulle altre.  
  
 Le seguenti opzioni sono utilizzabili in tutte le modalità di LIB:  
  
 \/ERRORREPORT \[NONE &#124; PROMPT &#124; QUEUE &#124; SEND\]  
 Se lib.exe non viene eseguito correttamente in fase di esecuzione, è possibile utilizzare \/ERRORREPORT per inviare a Microsoft informazioni su questi errori interni.  
  
 Per ulteriori informazioni su \/ERRORREPORT, vedere [\/errorReport \(Segnala gli errori interni del compilatore\)](../../build/reference/errorreport-report-internal-compiler-errors.md).  
  
 \/LTCG  
 Determina la compilazione della libreria mediante la generazione di codice in fase di collegamento.  Per ulteriori informazioni, vedere [\/LTCG](../../build/reference/ltcg-link-time-code-generation.md).  
  
 \/MACHINE  
 Consente di specificare la piattaforma di destinazione per il programma.  In genere non è necessario specificare questa opzione.  Il tipo di computer viene infatti dedotto dai file obj.  In alcune circostanze, tuttavia, non è possibile determinare il tipo di computer utilizzato e pertanto viene generato un messaggio di errore.  In tal caso, specificare \/MACHINE.  In modalità \/EXTRACT questa opzione ha unicamente uno scopo di verifica.  Utilizzare `lib /?` nella riga di comando per visualizzare i tipi di computer disponibili.  
  
 \/NOLOGO  
 Consente di evitare la visualizzazione del messaggio contenente le informazioni sul copyright e il numero di versione di LIB, nonché impedire che vengano visualizzati i file di comando.  
  
 \/VERBOSE  
 Visualizza informazioni dettagliate sullo stato di avanzamento della sessione, inclusi i nomi dei file obj aggiunti.  Tali informazioni vengono inviate all'output standard e possono essere reindirizzate a un file.  
  
 \/WX\[:NO\]  
 Considera gli avvisi come errori.  Per ulteriori informazioni, vedere [\/WX \(Considera gli avvisi del linker come errori\)](../../build/reference/wx-treat-linker-warnings-as-errors.md).  
  
 Altre opzioni sono utilizzabili solo con specifiche modalità di LIB.  Queste opzioni sono illustrate nelle sezioni relative alle singole modalità.  
  
## Vedere anche  
 [Riferimenti a LIB](../../build/reference/lib-reference.md)