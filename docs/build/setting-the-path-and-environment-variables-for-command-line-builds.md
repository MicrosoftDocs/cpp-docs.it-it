---
title: Impostare il percorso e le variabili di ambiente per le compilazioni da riga di comando | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: get-started-article
f1_keywords:
- include
- Lib
- Path
dev_langs: C++
helpviewer_keywords:
- environment variables [C++]
- VCVARS32.bat file
- cl.exe compiler [C++], environment variables
- LINK tool [C++], environment variables
- PATH reserved word
- INCLUDE reserved word
- LINK tool [C++], path
- LIB environment variable
- compiling source code [C++], from command line
- environment variables [C++], CL compiler
ms.assetid: 99389528-deb5-43b9-b99a-03c8773ebaf4
caps.latest.revision: "17"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: babca0fb75748f95d36a7afdd3c76be4419abc43
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="set-the-path-and-environment-variables-for-command-line-builds"></a>Impostare il percorso e le variabili di ambiente per le compilazioni da riga di comando

Gli strumenti di compilazione da riga di comando di Visual C++ richiedono diverse variabili di ambiente personalizzate per la configurazione di installazione e compilazione. Quando un carico di lavoro di C++ viene installato per il [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] programma di installazione crea file di comando personalizzato o file batch, impostano le variabili di ambiente necessarie. Il programma di installazione utilizza quindi tali file di comando per creare collegamenti per il menu Start di Windows aprire una finestra del prompt dei comandi per sviluppatori. Questi collegamenti, impostare le variabili di ambiente per una specifica configurazione di compilazione. Quando si desidera utilizzare gli strumenti da riga di comando, è possibile eseguire uno di questi collegamenti oppure è possibile aprire una finestra del prompt dei comandi normale e quindi eseguire uno dei file di comando personalizzato per impostare l'ambiente di configurazione di compilazione se stessi. Per ulteriori informazioni, vedere [compilare codice C/C++ nella riga di comando](building-on-the-command-line.md).  
  
Gli strumenti da riga di comando di Visual C++ utilizzano le variabili di ambiente PATH, TMP, INCLUDE, LIB e LIBPATH e anche altre variabili di ambiente specifiche al installati gli strumenti, piattaforme e SDK. Anche una semplice [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] installazione può impostare venti o più variabili di ambiente. Poiché i valori di queste variabili di ambiente siano per l'installazione e la scelta della configurazione della build e possono essere modificati da aggiornamenti del prodotto, è consigliabile utilizzare un collegamento del prompt dei comandi sviluppatore o uno di file di comando personalizzata per impostarle, anziché impostarle nell'ambiente di Windows a se stessi. 

Per visualizzare le variabili di ambiente vengono impostate da un collegamento del prompt dei comandi per sviluppatori, è possibile utilizzare il comando SET. Aprire una finestra del prompt dei comandi normale e acquisire l'output del comando SET per una linea di base. Aprire una finestra del prompt dei comandi per sviluppatori e acquisire l'output del comando SET per il confronto. Uno strumento delle differenze, ad esempio quello compilato nell'IDE di Visual Studio può essere utile per confrontare le variabili di ambiente e visualizzare le impostazioni definite dal prompt dei comandi per sviluppatori. Per informazioni sulle variabili di ambiente specifico utilizzato dal compilatore e del linker, vedere [variabili di ambiente CL](../build/reference/cl-environment-variables.md) e [variabili di ambiente LINK](../build/reference/link-environment-variables.md).  
  
> [!NOTE]
>  Più strumenti da riga di comando o le opzioni dello strumento possono richiedere l'autorizzazione di amministratore. Se si verificano problemi di autorizzazione quando vengono utilizzati, è consigliabile che si apre la finestra prompt dei comandi per gli sviluppatori utilizzando il **Esegui come amministratore** opzione. In Windows 10, fare doppio clic per aprire il menu di scelta rapida per la finestra del prompt dei comandi, quindi scegliere **più**, **Esegui come amministratore**.  
  
## <a name="see-also"></a>Vedere anche  

[Compilare il codice C/C++ nella riga di comando](../build/building-on-the-command-line.md)   
[Il collegamento](../build/reference/linking.md)   
[Opzioni del linker](../build/reference/linker-options.md)   
[Compilazione di un programma C/C++](../build/reference/compiling-a-c-cpp-program.md)   
[Opzioni del compilatore](../build/reference/compiler-options.md)