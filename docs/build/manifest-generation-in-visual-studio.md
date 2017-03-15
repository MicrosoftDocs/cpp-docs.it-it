---
title: "Generazione di manifesti in Visual Studio | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "manifesti [C++]"
ms.assetid: 0af60aa9-d223-42cd-8426-b3fc543a2a81
caps.latest.revision: 14
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 14
---
# Generazione di manifesti in Visual Studio
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La generazione di un file manifesto per un particolare progetto può essere controllata nella finestra di dialogo **Pagine delle proprietà** del progetto.  Nella scheda **Proprietà di configurazione** selezionare **Linker**, **File manifesto** e quindi **Genera manifesto**.  Per impostazione predefinita, le proprietà dei nuovi progetti sono impostate per generare un file manifesto.  È tuttavia possibile disabilitare la generazione del manifesto per un progetto utilizzando la proprietà **Genera manifesto**.  Quando questa proprietà è impostata su **Sì**, viene generato il manifesto per il progetto.  In caso contrario, il linker ignorerà le informazioni sull'assembly al momento della risoluzione delle dipendenze del codice dell'applicazione e il manifesto non verrà generato.  
  
 Il sistema di compilazione di Visual Studio consente di incorporare il manifesto nel file binario finale dell'applicazione o di generarlo come file esterno.   Tale comportamento è controllato dall'opzione **Incorpora manifesto** nella finestra di dialogo **Proprietà progetto**.  Per impostare tale proprietà, aprire il nodo **Strumento Manifesto** e selezionare **Input e output**.   Se il manifesto non è incorporato, viene generato come file esterno e salvato nella stessa directory del file binario finale.  Se il manifesto è incorporato, i manifesti finali verranno incorporati tramite il processo riportato di seguito:  
  
1.  Dopo che il codice sorgente viene compilato in file oggetto, vengono raccolte informazioni sull'assembly dipendente.  Durante il collegamento del file binario finale, il linker genera un manifesto temporaneo che verrà utilizzato in seguito per generare il manifesto finale.  
  
2.  Al termine della creazione del manifesto temporaneo e del collegamento, verrà eseguito lo strumento Manifesto per unire un manifesto finale e salvarlo come file esterno.  
  
3.  In seguito, il sistema di compilazione del progetto rileverà se all'interno del manifesto generato dallo strumento Manifesto sono contenute informazioni diverse rispetto al manifesto già incorporato nel file binario.  
  
4.  Se il manifesto incorporato nel file binario risulta diverso da quello generato dallo strumento Manifesto oppure se il file binario non contiene un manifesto incorporato, verrà nuovamente chiamato il linker per incorporare il file manifesto esterno all'interno del file binario come risorsa.  
  
5.  Se il manifesto incorporato nel file binario è uguale al manifesto generato dallo strumento Manifesto, la compilazione continuerà con i passaggi successivi.  
  
 Il manifesto verrà incorporato all'interno del file binario finale come risorsa di testo e potrà essere visualizzato aprendo il file binario finale come file in Visual Studio.  Per assicurarsi che il manifesto punti alle librerie corrette, seguire i passaggi illustrati in [Informazioni sulle dipendenze di un'applicazione Visual C\+\+](../ide/understanding-the-dependencies-of-a-visual-cpp-application.md) o seguire i suggerimenti contenuti nella sezione [Risoluzione dei problemi](../build/troubleshooting-c-cpp-isolated-applications-and-side-by-side-assemblies.md).  
  
## Vedere anche  
 [Procedura: incorporare un manifesto in un'applicazione C\/C\+\+](../build/how-to-embed-a-manifest-inside-a-c-cpp-application.md)   
 [Assembly privati](_win32_private_assemblies)   
 [Strumento Manifesto](http://msdn.microsoft.com/library/aa375649)   
 [Informazioni sulla generazione di manifesti per programmi C\/C\+\+](../build/understanding-manifest-generation-for-c-cpp-programs.md)