---
title: Introduzione a Visual C++ per utenti UNIX | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-language
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- UNIX [C++]
ms.assetid: 36108b31-e7fa-49a8-a1f7-7077fcbec873
caps.latest.revision: 13
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
ms.translationtype: Human Translation
ms.sourcegitcommit: 7c75629d56e6d8e5291b7d1f7cca9995ab9a50da
ms.openlocfilehash: d8515fc613f95ae5d6395e33b49482488bcc488d
ms.contentlocale: it-it
ms.lasthandoff: 02/24/2017

---
# <a name="introduction-to-visual-c-for-unix-users"></a>Introduzione a Visual C++ per utenti UNIX
Questo argomento contiene informazioni per gli utenti UNIX che non hanno familiarità con [!INCLUDE[vcprvc](../build/includes/vcprvc_md.md)] e vogliono aumentare la produttività con [!INCLUDE[vcprvc](../build/includes/vcprvc_md.md)].  
  
## <a name="getting-started-on-the-command-line"></a>Introduzione all'uso della riga di comando  
 È possibile usare [!INCLUDE[vcprvc](../build/includes/vcprvc_md.md)] dalla riga di comando in modo analogo a come si usa un ambiente della riga di comando UNIX. Per compilare dal prompt dei comandi, si usano infatti gli strumenti e il compilatore C e C++ da riga di comando (CL.EXE), incluso NMAKE.EXE, la versione Microsoft dell'utilità make di UNIX.  
  
 In UNIX i comandi vengono installati in una cartella comune, ad esempio /usr/bin. In [!INCLUDE[vcprvc](../build/includes/vcprvc_md.md)] gli strumenti da riga di comando vengono installati nella directory di installazione VC\bin, ovvero in un'installazione tipica in Programmi\Visual Studio 8\VC\bin. Per usare gli strumenti da riga di comando, eseguire vsvars32.bat, disponibile nella directory di installazione Common7\Tools. In tal modo al percorso verrà aggiunta la directory bin e verranno configurati altri percorsi necessari per compilare programmi Visual C++ dalla riga di comando. Per altre informazioni, vedere [Compilazione sulla riga di comando](../build/building-on-the-command-line.md) e [Procedura dettagliata: Compilazione di un programma C++ nativo nella riga di comando](../build/walkthrough-compiling-a-native-cpp-program-on-the-command-line.md).  
  
> [!NOTE]
>  Se si apre un prompt dei comandi scegliendo **Prompt dei comandi di Visual Studio** dal menu **Start**, il file vsvars32.bat verrà eseguito automaticamente.  
  
 Per sfruttare i vantaggi di funzionalità più potenti, ad esempio il debugger di Visual Studio, il completamento delle istruzioni e così via, è necessario usare l'ambiente di sviluppo.  
  
## <a name="debugging-your-code"></a>Debug del codice  
 Se si usa la riga di comando e si eseguono le applicazioni nella workstation di sviluppo, verrà visualizzata una finestra di dialogo per eseguire il debugger di [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] quando il codice rileva una violazione di accesso di memoria, un'eccezione non gestita o altri errori irreversibili. Facendo clic su **OK** viene avviato l'ambiente di sviluppo di Visual Studio e il debugger viene aperto in corrispondenza del punto di errore. È possibile eseguire il debug delle applicazioni in questo modo e, in questo caso, il codice sorgente sarà disponibile solo se è stato compilato con l'opzione [/Z7, /Zi, /ZI (Formato informazioni di debug)](../build/reference/z7-zi-zi-debug-information-format.md). Per altre informazioni, vedere [Debug del codice nativo](/visualstudio/debugger/debugging-native-code) e [Utilizzo dell'ambiente di sviluppo di Visual Studio per lo sviluppo di applicazioni desktop C++](../ide/using-the-visual-studio-ide-for-cpp-desktop-development.md).  
  
## <a name="using-the-development-environment"></a>Uso dell'ambiente di sviluppo  
 Per modificare e compilare il codice sorgente in un *progetto*, è più agevole usare l'ambiente di sviluppo. Per progetto si intende una raccolta di file di origine e correlati che verranno compilati in una singola unità, ad esempio una libreria o un eseguibile. Un progetto contiene anche informazioni sulla modalità di compilazione dei file. Le informazioni sui progetti vengono archiviate in un file di progetto con estensione prj.  
  
 Un'applicazione è invece costituita da più librerie ed eseguibili, ognuno dei quali potenzialmente compilato con un set diverso di opzioni del compilatore o persino in un altro linguaggio e che vengono archiviati in più progetti appartenenti a un'unica *soluzione*. Una soluzione è un'astrazione di un contenitore in cui raggruppare più progetti. Le informazioni sulle soluzioni vengono archiviate in un file di soluzione con estensione sln. Per altre informazioni, vedere [Soluzioni e progetti in Visual Studio](/visualstudio/ide/solutions-and-projects-in-visual-studio) e [Utilizzo dell'ambiente di sviluppo di Visual Studio per lo sviluppo di applicazioni desktop C++](../ide/using-the-visual-studio-ide-for-cpp-desktop-development.md).  
  
## <a name="importing-your-existing-code"></a>Importazione di codice esistente  
 [!INCLUDE[vcprvc](../build/includes/vcprvc_md.md)] consente di usare codice esistente configurato per la compilazione con e senza un makefile e inserirlo in un progetto [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)]. Per altre informazioni, vedere **Creazione guidata nuovo progetto da file di codice esistenti**. Per altre informazioni, vedere [Procedura: Creare un progetto C++ da codice esistente](../ide/how-to-create-a-cpp-project-from-existing-code.md).  
  
## <a name="creating-a-new-project"></a>Creazione di un nuovo progetto  
 È possibile creare nuovi progetti nell'ambiente di sviluppo. In [!INCLUDE[vcprvc](../build/includes/vcprvc_md.md)] sono disponibili numerosi modelli che forniscono codice standard per vari progetti comuni. È possibile usare creazioni guidate applicazione per generare progetti con strutture di codice per i vari tipi di applicazione.  
  
 È possibile iniziare con un progetto vuoto usando la **creazione guidata applicazione console (Win32)**. Selezionare la casella di controllo **Progetto vuoto**. È quindi possibile aggiungere file nuovi ed esistenti al progetto in un secondo momento.  
  
 A ogni progetto creato è necessario assegnare un nome. Per impostazione predefinita, il nome del progetto è uguale al nome della libreria di collegamento dinamico (DLL) o dell'eseguibile compilato dal progetto. Per altre informazioni, vedere [Creazione di soluzioni e progetti](/visualstudio/ide/creating-solutions-and-projects).  
  
## <a name="microsoft-specific-modifiers"></a>Modificatori specifici Microsoft  
 Visual C++ contiene diverse estensioni del linguaggio di programmazione C++ standard. Queste estensioni consentono di specificare, tra l'altro, attributi della classe di archiviazione, convenzioni di chiamata delle funzioni e indirizzi di base. Per un elenco completo di tutte le estensioni di Visual C++, vedere [Modificatori specifici Microsoft](../cpp/microsoft-specific-modifiers.md).  
  
 Per disabilitare tutte le estensioni specifiche di Microsoft in C++, usare l'opzione **/Za** del compilatore. Questa opzione è consigliata se si intende scrivere codice da eseguire su più piattaforme. Per altre informazioni sull'opzione **/Za** del compilatore, vedere [/Za, /Ze (Disabilita estensioni linguaggio)](../build/reference/za-ze-disable-language-extensions.md). Per altre informazioni sulla conformità di Visual C++, vedere [Comportamento non standard](../cpp/nonstandard-behavior.md).  
  
## <a name="precompiled-headers"></a>Intestazioni precompilate  
 I compilatori Microsoft C e C++ includono opzioni per la precompilazione di codice C o C++ di qualsiasi tipo, incluso quello inline. Questa funzionalità avanzata consente di compilare un corpo di codice stabile, archiviare lo stato del codice compilato in un file e, durante le successive compilazioni, combinare il codice precompilato con quello ancora in fase di sviluppo. Le compilazioni successive risultano più veloci perché il codice stabile non deve essere ricompilato.  
  
 Per impostazione predefinita, tutto il codice precompilato viene specificato nei file **stdafx.h** e **stdafx.cpp**. Questi file vengono creati automaticamente durante l'esecuzione della procedura guidata **Nuovo progetto** a meno che l'opzione **Intestazione precompilata** non venga deselezionata. Per altre informazioni sulle intestazioni precompilate, vedere [Creazione di file di intestazione precompilati](../build/reference/creating-precompiled-header-files.md).  
  
## <a name="related-sections"></a>Sezioni correlate  
 Per altre informazioni, vedere [Porting da UNIX a Win32](../porting/porting-from-unix-to-win32.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Presentazione guidata di Visual C++](http://msdn.microsoft.com/en-us/499cb66f-7df1-45d6-8b6b-33d94fd1f17c)
