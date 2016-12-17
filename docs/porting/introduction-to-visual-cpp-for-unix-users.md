---
title: "Introduzione a Visual C++ per utenti UNIX | Microsoft Docs"
ms.custom: ""
ms.date: "12/15/2016"
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
  - "UNIX [C++]"
ms.assetid: 36108b31-e7fa-49a8-a1f7-7077fcbec873
caps.latest.revision: 13
caps.handback.revision: 13
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Introduzione a Visual C++ per utenti UNIX
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Questo argomento fornisce informazioni per gli utenti UNIX che non hanno familiarità con [!INCLUDE[vcprvc](../build/includes/vcprvc_md.md)] e che desiderano aumentare la produttività.  
  
## Introduzione all'uso della riga di comando  
 È possibile usare [!INCLUDE[vcprvc](../build/includes/vcprvc_md.md)] dalla riga di comando in modo analogo a come si usa un ambiente della riga di comando UNIX.  Per compilare dal prompt dei comandi, si usano infatti gli strumenti e il compilatore C e C\+\+ da riga di comando \(CL.EXE\), incluso NMAKE.EXE, la versione Microsoft dell'utilità make di UNIX.  
  
 In UNIX i comandi vengono installati in una cartella comune, ad esempio \/usr\/bin.  In [!INCLUDE[vcprvc](../build/includes/vcprvc_md.md)] gli strumenti da riga di comando vengono installati nella directory di installazione VC\\bin, ovvero in un'installazione tipica in Programmi\\Visual Studio 8\\VC\\bin.  Per usare gli strumenti da riga di comando, eseguire vsvars32.bat, disponibile nella directory di installazione Common7\\Tools.  In tal modo al percorso verrà aggiunta la directory bin e verranno configurati altri percorsi necessari per compilare programmi Visual C\+\+ dalla riga di comando.  
  
> [!NOTE]
>  Se si apre un prompt dei comandi scegliendo **Prompt dei comandi di Visual Studio** dal menu **Start**, il file vsvars32.bat verrà eseguito automaticamente.  
  
 Per sfruttare i vantaggi di funzionalità più potenti, quali il debugger, il completamento delle istruzioni e così via, è necessario usare l'ambiente di sviluppo.  Per altre informazioni, vedere [Compilazione dalla riga di comando](../build/building-on-the-command-line.md) e [Procedura dettagliata: compilazione di un programma C\+\+ nativo nella riga di comando](../build/walkthrough-compiling-a-native-cpp-program-on-the-command-line.md).  
  
## Debug del codice  
 Se si usa la riga di comando e si eseguono le applicazioni nella workstation di sviluppo, verrà visualizzata una finestra di dialogo per eseguire il debugger di [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] quando il codice rileva una violazione di accesso di memoria, un'eccezione non gestita o altri errori irreversibili.  Facendo clic su **OK**, verrà avviato l'ambiente di sviluppo di Visual Studio e il debugger verrà aperto in corrispondenza del punto di errore.  È possibile eseguire il debug delle applicazioni in questo modo, ma, in questo caso, il codice sorgente risulterà disponibile solo se è stato compilato con l'opzione [\/Z7, \/Zi, \/ZI \(Formato informazioni di debug\)](../build/reference/z7-zi-zi-debug-information-format.md).  Per altre informazioni, vedere [Debug del codice nativo](../Topic/Debugging%20Native%20Code.md) e [Utilizzo dell'ambiente di sviluppo di Visual Studio per lo sviluppo di applicazioni desktop C\+\+](../ide/using-the-visual-studio-ide-for-cpp-desktop-development.md).  
  
## Uso dell'ambiente di sviluppo  
 Per modificare e compilare il codice sorgente in un *progetto*, è più agevole usare l'ambiente di sviluppo.  Per progetto si intende una raccolta di file di origine e correlati che verranno compilati in una singola unità, ad esempio una libreria o un eseguibile.  Un progetto contiene anche informazioni sulla modalità di compilazione dei file.  Le informazioni sui progetti vengono archiviate in un file di progetto con estensione prj.  
  
 Un'applicazione è invece costituita da più librerie ed eseguibili, ognuno dei quali potenzialmente compilato con un set diverso di opzioni del compilatore o persino in un linguaggio diverso e che vengono archiviati in più progetti appartenenti a un'unica *soluzione*.  Una soluzione è un'astrazione di un contenitore in cui raggruppare più progetti.  Le informazioni sulle soluzioni vengono archiviate in un file di soluzione con estensione sln.  Per altre informazioni, vedere [PAVE: Managing Solutions and Projects](http://msdn.microsoft.com/it-it/7a50db22-d3cc-46f3-b648-ab7e0528e260) e [Utilizzo dell'ambiente di sviluppo di Visual Studio per lo sviluppo di applicazioni desktop C\+\+](../ide/using-the-visual-studio-ide-for-cpp-desktop-development.md).  
  
## Importazione di codice esistente  
 [!INCLUDE[vcprvc](../build/includes/vcprvc_md.md)] consente di usare codice esistente configurato per la compilazione con e senza un makefile e inserirlo in un progetto [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)].  Per altre informazioni, vedere la **Creazione guidata nuovo progetto da file di codice esistenti**.  Per altre informazioni, vedere [Procedura: creare un progetto C\+\+ da codice esistente](../ide/how-to-create-a-cpp-project-from-existing-code.md).  
  
## Creazione di un nuovo progetto  
 È possibile creare nuovi progetti nell'ambiente di sviluppo.  In [!INCLUDE[vcprvc](../build/includes/vcprvc_md.md)] sono disponibili numerosi modelli che forniscono codice standard per vari progetti comuni.  È possibile usare creazioni guidate applicazione per generare progetti con strutture di codice per i vari tipi di applicazione.  
  
 È possibile iniziare con un progetto vuoto tramite la **creazione guidata Applicazione console \(Win32\)**.  Selezionare la casella di controllo **Progetto vuoto**.  È quindi possibile aggiungere file nuovi ed esistenti al progetto in un secondo momento.  
  
 A ogni progetto creato è necessario assegnare un nome.  Per impostazione predefinita, il nome del progetto è uguale al nome della libreria di collegamento dinamico \(DLL\) o dell'eseguibile compilato dal progetto.  Per altre informazioni, vedere [Creazione di soluzioni e progetti](../Topic/Creating%20Solutions%20and%20Projects.md).  
  
## Modificatori specifici Microsoft  
 Visual C\+\+ contiene diverse estensioni del linguaggio di programmazione C\+\+ standard.  Queste estensioni consentono di specificare, tra l'altro, attributi della classe di archiviazione, convenzioni di chiamata delle funzioni e indirizzi di base.  Per un elenco completo di tutte le estensioni di Visual C\+\+, vedere [Modificatori specifici Microsoft](../cpp/microsoft-specific-modifiers.md).  
  
 Per disabilitare tutte le estensioni specifiche di Microsoft in C\+\+, usare l'opzione **\/Za** del compilatore.  Questa opzione è consigliata se si intende scrivere codice da eseguire su più piattaforme.  Per altre informazioni sull'opzione **\/Za** del compilatore, vedere [\/Za, \/Ze \(Disabilita estensioni linguaggio\)](../build/reference/za-ze-disable-language-extensions.md).  Per altre informazioni sulla conformità di Visual C\+\+, vedere [Problemi di conformità e compatibilità in Visual C\+\+](../misc/compatibility-and-compliance-issues-in-visual-cpp.md).  
  
## Intestazioni precompilate  
 I compilatori Microsoft C e C\+\+ includono opzioni per la precompilazione di codice C o C\+\+ di qualsiasi tipo, incluso quello inline.  Questa funzionalità avanzata consente di compilare un corpo di codice stabile, archiviare lo stato del codice compilato in un file e, durante le successive compilazioni, combinare il codice precompilato con quello ancora in fase di sviluppo.  Le compilazioni successive risultano più veloci perché il codice stabile non deve essere ricompilato.  
  
 Per impostazione predefinita, tutto il codice precompilato viene specificato nei file **stdafx.h** e **stdafx.cpp**.  Questi file vengono creati automaticamente durante l'esecuzione della procedura guidata **Nuovo progetto** a meno l'opzione **Intestazione precompilata** non viene deselezionata.  Per altre informazioni sulle intestazioni precompilate, vedere [Creazione di file di intestazione precompilati](../build/reference/creating-precompiled-header-files.md).  
  
## Sezioni correlate  
 Per altre informazioni, vedere [Porting da UNIX a Win32](../porting/porting-from-unix-to-win32.md).  
  
## Vedere anche  
 [Visual C\+\+ Guided Tour](http://msdn.microsoft.com/it-it/499cb66f-7df1-45d6-8b6b-33d94fd1f17c)