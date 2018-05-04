---
title: Generazione di manifesti in Visual Studio | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- manifests [C++]
ms.assetid: 0af60aa9-d223-42cd-8426-b3fc543a2a81
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 73b5cbe631d078dd6ee27b4f7e0a97503c36638b
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="manifest-generation-in-visual-studio"></a>Generazione di manifesti in Visual Studio
La generazione di un file manifesto per un particolare progetto può essere controllata nel progetto **pagine delle proprietà** finestra di dialogo. Nel **le proprietà di configurazione** scheda, fare clic su **Linker**, quindi **File manifesto**, quindi **Genera manifesto**. Per impostazione predefinita, le proprietà del progetto di nuovi progetti sono per generare un file manifesto. Tuttavia è possibile disabilitare la generazione del manifesto per un progetto utilizzando il **Genera manifesto** proprietà del progetto. Quando questa proprietà è impostata su **Sì**, viene generato il manifesto per il progetto. In caso contrario il linker ignora le informazioni sull'assembly durante la risoluzione delle dipendenze del codice dell'applicazione e non genera il manifesto.  
  
 Il sistema di compilazione in Visual Studio consente il manifesto incorporato nel file binario finale dell'applicazione o generato come file esterno. Questo comportamento è controllato dal **Incorpora manifesto** opzione il **le proprietà del progetto** finestra di dialogo. Per impostare questa proprietà, aprire il **strumento manifesto** nodo, quindi selezionare **di Input e Output**. Se il manifesto non è incorporato, viene generato come file esterno e salvato nella stessa directory del file binario finale. Se il manifesto è incorporato, Visual Studio incorpora i manifesti finali utilizzando il processo seguente:  
  
1.  Una volta compilato il codice sorgente per i file oggetto, il linker raccoglie informazioni sull'assembly dipendente. Durante il collegamento del file binario finale, il linker genera un manifesto temporaneo che verrà utilizzato successivamente per generare il manifesto finale.  
  
2.  Al termine di intermedio manifesto e collegamento, verrà eseguito lo strumento manifesto per unire un manifesto finale e salvarlo come file esterno.  
  
3.  Il progetto di sistema di compilazione, quindi rileva se il manifesto generato dallo strumento manifesto contiene informazioni diverse rispetto al manifesto già incorporato nel file binario.  
  
4.  Se il manifesto incorporato nel file binario è diverso da quello generato dallo strumento manifesto, o il file binario non contiene un manifesto incorporato, Visual Studio richiama il linker ancora una volta per incorporare il file manifesto esterno all'interno del file binario come un risorsa.  
  
5.  Se il manifesto incorporato nel file binario è lo stesso del manifesto generato dallo strumento manifesto, la compilazione continuerà con i passaggi successivi.  
  
 Il manifesto è incorporato nel file binario finale come risorsa di testo e possono essere visualizzato aprendo il file binario finale come file in Visual Studio. Per verificare che il manifesto punti alle librerie corrette, seguire i passaggi descritti in [le dipendenze di un'applicazione Visual C++](../ide/understanding-the-dependencies-of-a-visual-cpp-application.md) o le indicazioni descritte nel [allarisoluzionedeiproblemi](../build/troubleshooting-c-cpp-isolated-applications-and-side-by-side-assemblies.md) sezione.  
  
## <a name="see-also"></a>Vedere anche  
 [Procedura: incorporare un manifesto in un'applicazione C/C++](../build/how-to-embed-a-manifest-inside-a-c-cpp-application.md)   
 [Informazioni sugli assembly privati](http://msdn.microsoft.com/library/ff951638)   
 [Strumento manifesto](http://msdn.microsoft.com/library/aa375649)   
 [Informazioni sulla generazione di manifesti per programmi C/C++](../build/understanding-manifest-generation-for-c-cpp-programs.md)