---
title: "Procedura: organizzare file di output dei progetti per le compilazioni | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "file di output, organizzazione"
  - "Visual C++, file di output"
ms.assetid: 521d95ea-2dcc-4da0-b5eb-ac3e57941446
caps.latest.revision: 8
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Procedura: organizzare file di output dei progetti per le compilazioni
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

In questo argomento vengono descritte alcune procedure consigliate per l'organizzazione dei file di output di un progetto.  Un'impostazione non corretta dei file di output di un progetto può provocare infatti errori di compilazione.  In questo argomento vengono inoltre indicati i vantaggi e gli svantaggi di ciascuna alternativa per l'organizzazione dei file di output di un progetto.  
  
## Riferimento agli assembly CLR  
  
#### Per fare riferimento agli assembly con \#using  
  
1.  È possibile fare riferimento a un assembly direttamente dal codice utilizzando la direttiva \#using, ad esempio `#using <System.Data.dll>`.  Per ulteriori informazioni, vedere [Direttiva \#using](../preprocessor/hash-using-directive-cpp.md).  
  
     Il file specificato può essere un file .dll, .exe, .netmodule o .obj, purché sia in MSIL.  Il componente a cui viene fatto riferimento può essere compilato in qualsiasi linguaggio.  L'utilizzo di questa opzione consente l'accesso a Intellisense, poiché i metadati vengono estratti dal codice MSIL.  Il file in questione deve trovarsi nel percorso del progetto. In caso contrario, il progetto non verrà compilato e Intellisense non sarà disponibile.  Un modo semplice per stabilire se il file si trova in tale percorso consiste nel fare clic con il pulsante destro del mouse sulla riga \#using e scegliere **Apri documento**.  Se non è possibile trovare il file, verrà visualizzata una notifica.  
  
     Per non indicare il percorso completo del file, è possibile utilizzare l'opzione del compilatore **\/AI**, allo scopo di modificare il percorso di ricerca per i riferimenti \#using.  Per ulteriori informazioni, vedere [\/AI \(Specifica le directory di metadati\)](../build/reference/ai-specify-metadata-directories.md).  
  
#### Per fare riferimento agli assembly con \/FU  
  
1.  Invece di fare riferimento a un assembly direttamente da un file di codice, come descritto in precedenza, è possibile utilizzare l'opzione del compilatore **\/FU**.  Il vantaggio offerto da questo metodo consiste nel fatto che non è necessario aggiungere un'istruzione \#using separata a ogni file che fa riferimento a un dato assembly.  
  
     Per impostare l'opzione, aprire la finestra di dialogo **Pagine delle proprietà** per il progetto.  Espandere il nodo **Proprietà di configurazione**, quindi il nodo **C\/C\+\+** e fare clic su **Avanzate**.  Aggiungere gli assembly desiderati accanto a **Imponi \#using**.  Per ulteriori informazioni, vedere [\/FU \(Specifica file \#using da utilizzare\)](../build/reference/fu-name-forced-hash-using-file.md).  
  
#### Per fare riferimento agli assembly con Aggiungi nuovo riferimento  
  
1.  Si tratta del modo più semplice di utilizzare gli assembly CLR.  In primo luogo, accertarsi che il progetto venga compilato tramite l'opzione del compilatore **\/clr**.  Fare quindi clic con il pulsante destro del mouse sul progetto in **Esplora soluzioni** e selezionare **Aggiungi**, **Riferimenti**.  Verrà visualizzata la finestra di dialogo **Pagine delle proprietà**.  
  
2.  Dalla finestra di dialogo **Pagine delle proprietà** fare clic su **Aggiungi nuovo riferimento**.  Verrà visualizzata una finestra di dialogo in cui sono elencati tutti gli assembly NET, COM e di altro tipo disponibili nel progetto corrente.  Selezionare l'assembly desiderato e scegliere **OK**.  
  
     Una volta impostato il riferimento a un progetto, le dipendenze corrispondenti vengono gestite automaticamente.  Inoltre, poiché i metadati sono parte di un assembly, non è necessario aggiungere un file di intestazione o creare prototipi degli elementi utilizzati dagli assembly gestiti.  
  
## Riferimento a DLL native o a librerie statiche  
  
#### Per fare riferimento a DLL native o a librerie statiche  
  
1.  Fare riferimento al file di intestazione appropriato nel codice, utilizzando la direttiva \#include.  Il file di intestazione deve trovarsi nel percorso di inclusione o in parte del progetto corrente.  Per ulteriori informazioni, vedere [Direttiva \#include](../preprocessor/hash-include-directive-c-cpp.md).  
  
2.  È anche possibile impostare dipendenze di progetto.  L'impostazione di dipendenze di progetto offre due garanzie.  In primo luogo, assicura che i progetti vengano compilati nell'ordine corretto, in modo che sia sempre possibile trovare i file dipendenti necessari a un dato progetto.  In secondo luogo, viene aggiunta implicitamente al percorso la directory di output del progetto dipendente, in modo che i file possano essere trovati con facilità in fase di collegamento.  
  
3.  Per distribuire l'applicazione, è necessario collocare la DLL in una posizione adatta.  Può trattarsi di una delle seguenti posizioni:  
  
    1.  Nello stesso percorso dell'eseguibile.  
  
    2.  Ovunque nel percorso di sistema \(variabile di ambiente **path**\).  
  
    3.  Nell'assembly side\-by\-side.  Per ulteriori informazioni, vedere [Compilazione di assembly side\-by\-side C\/C\+\+](../build/building-c-cpp-side-by-side-assemblies.md).  
  
## Utilizzo di più progetti  
 Per impostazione predefinita, i progetti vengono compilati in modo che la creazione di tutti i file di output avvenga in una sottodirectory della directory di progetto.  Alla directory viene attribuito un nome basato sulla configurazione della build, ad esempio  Debug o Release\).  Al fine di consentire il riferimento reciproco dei progetti di pari livello, nel percorso comune devono essere aggiunte esplicitamente per ogni progetto le directory di output dell'altro progetto, in modo che il collegamento funzioni correttamente.  Tale operazione viene eseguita automaticamente all'impostazione delle dipendenze di progetto.  Se, tuttavia, non si utilizzano le dipendenze, è necessario prestare particolare attenzione, poiché la gestione delle compilazioni potrebbe risultare molto difficile.  Quando, ad esempio, si dispone di un progetto con configurazioni Debug e Release in cui è stata inclusa una libreria esterna da un progetto di pari livello, è necessario utilizzare un file di libreria diverso, in base al tipo di configurazione che viene compilata.  Definire i percorsi a livello di codice risulta quindi un'operazione alquanto delicata.  
  
 Tutti i file di output essenziali, quali eseguibili, file di collegamento incrementale e file PDB, vengono copiati in una directory di soluzione comune.  Di conseguenza, se si utilizza una soluzione che contiene diversi progetti C\+\+ con configurazioni equivalenti, tutti i file di output vengono centralizzati per consentire collegamento e distribuzione semplificati.  Se i file vengono conservati in una stessa posizione, l'applicazione o la libreria funzionerà come previsto, poiché è assicurata la presenza dei file nel percorso in questione.  
  
 La posizione dei file di output può costituire un problema di importanza primaria durante la distribuzione in un ambiente di produzione.  Durante l'esecuzione di progetti nell'IDE, i percorsi delle librerie incluse non sono necessariamente gli stessi dell'ambiente di produzione.  Se, ad esempio, si è specificato `#using "../../lib/debug/mylib.dll"` nel codice, ma si distribuisce mylib.dll in una posizione relativa differente, si verificherà un errore dell'applicazione in fase di esecuzione.  Per evitare che questo accada, non si devono utilizzare percorsi relativi nelle istruzioni \#include all'interno del codice.  È preferibile accertarsi che i file necessari si trovino nel percorso di compilazione del progetto e che i file di produzione corrispondenti siano anch'essi collocati correttamente.  
  
#### Procedura: specificare la posizione dei file di output  
  
1.  La posizione delle impostazioni di output di un progetto è reperibile nella finestra di dialogo **Pagine delle proprietà** del progetto.  Espandere il nodo accanto a **Proprietà di configurazione** e fare clic su **Generali**.  La posizione di output verrà specificata accanto a **Directory di output**.  Per ulteriori informazioni, vedere [Pagina delle proprietà Generale \(Progetto\)](../ide/general-property-page-project.md).  
  
## Vedere anche  
 [Tipi di progetto Visual C\+\+](../ide/visual-cpp-project-types.md)