---
title: "Procedura: creare un'applicazione parzialmente attendibile (C + + CLI) | Documenti Microsoft"
ms.custom: get-started-article
ms.date: 11/04/2016
ms.technology:
- cpp-cli
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- partially trusted applications [C++]
- mixed assemblies [C++], partially trusted applications
- msvcm90[d].dll
- interoperability [C++], partially trusted applications
- interop [C++], partially trusted applications
- /clr compiler option [C++], partially trusted applications
ms.assetid: 4760cd0c-4227-4f23-a7fb-d25b51bf246e
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: a4a0a4b8b1045a9107158c6e67ecdfa7939b6a08
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="how-to-create-a-partially-trusted-application-by-removing-dependency-on-the-crt-library-dll"></a>Procedura: creare un'applicazione parzialmente attendibile rimuovendo la dipendenza dalla DLL della libreria CRT
In questo argomento viene illustrato come creare un'applicazione Common Language Runtime parzialmente attendibile tramite Visual C++ rimuovendo la dipendenza da msvcm90.  
  
 Un'applicazione Visual C++ compilata con **/clr** avrà una dipendenza msvcm90, che fa parte della libreria di Runtime C. Quando si desidera che l'applicazione da utilizzare in un ambiente parzialmente attendibile, CLR applicherà alcune regole di sicurezza di accesso di codice alla DLL. Pertanto, sarà necessario rimuovere questa dipendenza poiché msvcm90 contiene codice nativo e non possono essere applicati criteri di sicurezza di accesso di codice.  
  
 Se l'applicazione non utilizza le funzionalità della libreria di Runtime C e si desidera rimuovere la dipendenza da questa raccolta dal codice, sarà necessario utilizzare il **/NODEFAULTLIB:msvcmrt.lib** l'opzione del linker e collegamento con eseguire o ptrustmd. Queste librerie contengono file oggetto per l'inizializzazione e annullamento dell'inizializzazione di un'applicazione, le classi di eccezioni usato dal codice di inizializzazione e gestione delle eccezioni gestite. Il collegamento a una di queste librerie rimuoverà tutte le dipendenze msvcm90.  
  
> [!NOTE]
>  L'ordine di annullamento dell'inizializzazione di assembly potrebbero essere diversi per le applicazioni che utilizzano le librerie ptrust. Per le applicazioni normali, gli assembly vengono in genere scaricati nell'ordine inverso in cui vengono caricati, ma questo non è garantito. Per le applicazioni con attendibilità parziale, gli assembly vengono in genere scaricati nello stesso ordine in cui vengono caricati. Questa operazione, inoltre, non è garantita.  
  
### <a name="to-create-a-partially-trusted-mixed-clr-application"></a>Per creare un parzialmente attendibile mista (o clr) dell'applicazione  
  
1.  Per rimuovere la dipendenza msvcm90, è necessario specificare al linker di non includere questa raccolta usando il **/NODEFAULTLIB:msvcmrt.lib** l'opzione del linker. Per informazioni su come eseguire questa operazione usando l'ambiente di sviluppo di Visual Studio o a livello di codice, vedere [/NODEFAULTLIB (Ignora librerie)](../build/reference/nodefaultlib-ignore-libraries.md).  
  
2.  Aggiungere una delle librerie ptrustm alle dipendenze di input del linker. Utilizzare eseguire se si compila l'applicazione in modalità di rilascio. Per la modalità di debug, utilizzare ptrustmd. Per informazioni su come eseguire questa operazione usando l'ambiente di sviluppo di Visual Studio o a livello di codice, vedere [. LIB file come Input del Linker](../build/reference/dot-lib-files-as-linker-input.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Assembly misti (nativi e gestiti)](../dotnet/mixed-native-and-managed-assemblies.md)   
 [Inizializzazione di assembly misti](../dotnet/initialization-of-mixed-assemblies.md)   
 [Supporto delle librerie per assembly misti](../dotnet/library-support-for-mixed-assemblies.md)   
 [/link (passa opzioni al linker)](../build/reference/link-pass-options-to-linker.md)   
