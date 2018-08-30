---
title: Generazione di manifesti in Visual Studio | Microsoft Docs
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
ms.openlocfilehash: 6f927e153c25b41b48b783281a36dd2705e42006
ms.sourcegitcommit: 9a0905c03a73c904014ec9fd3d6e59e4fa7813cd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/29/2018
ms.locfileid: "43205800"
---
# <a name="manifest-generation-in-visual-studio"></a>Generazione di manifesti in Visual Studio
Generazione di un file manifesto per un particolare progetto può essere controllata nel progetto **pagine delle proprietà** finestra di dialogo. Nel **le proprietà di configurazione** scheda, fare clic su **Linker**, quindi **File manifesto**, quindi **Genera manifesto**. Per impostazione predefinita per generare un file manifesto sono impostare le proprietà del progetto di nuovi progetti. Tuttavia è possibile disabilitare la generazione del manifesto per un progetto usando il **Genera manifesto** proprietà del progetto. Quando questa proprietà è impostata su **Sì**, viene generato il manifesto per questo progetto. In caso contrario, il linker ignora le informazioni sull'assembly durante la risoluzione delle dipendenze del codice dell'applicazione e non genera il manifesto.  
  
 Il sistema di compilazione in Visual Studio consente il manifesto incorporato nel file dell'applicazione binario finale o generato come file esterno. Questo comportamento è controllato dal **Incorpora manifesto** opzione il **proprietà progetto** finestra di dialogo. Per impostare questa proprietà, aprire il **dello strumento manifesto** nodo, quindi selezionare **di Input e Output**. Se il manifesto non è incorporato, è generato come file esterno e salvato nella stessa directory del file binario finale. Se il manifesto è incorporato, Visual Studio incorpora i manifesti finali usando la procedura seguente:  
  
1.  Dopo che il codice sorgente viene compilato in file oggetto, il linker raccoglie informazioni sull'assembly dipendenti. Durante il collegamento del file binario finale, il linker genera un manifesto temporaneo che viene usato in un secondo momento per generare il manifesto finale.  
  
2.  Al termine di intermedi del manifesto e del collegamento, lo strumento manifesto verrà eseguito per un manifesto finale di tipo merge e salvarlo come file esterno.  
  
3.  Il progetto di sistema di compilazione, quindi rileva se il manifesto generato dallo strumento manifesto contiene informazioni diverse rispetto al manifesto già incorporato nel file binario.  
  
4.  Se il manifesto incorporato nel file binario è diverso da quello generato dallo strumento manifesto, o il file binario non contiene un manifesto incorporato, Visual Studio richiama il linker ancora una volta per incorporare il file manifesto esterno all'interno del file binario come un risorsa.  
  
5.  Se il manifesto incorporato nel file binario è identico al manifesto generato dallo strumento manifesto, la compilazione continuerà per i passaggi successivi.  
  
 Il manifesto è incorporato nel file binario finale come risorsa di testo e possono essere visualizzato aprendo il file binario finale come un file in Visual Studio. Per assicurarsi che il manifesto faccia riferimento alle librerie corrette, seguire i passaggi descritti in [informazioni sulle dipendenze di un'applicazione Visual C++](../ide/understanding-the-dependencies-of-a-visual-cpp-application.md) o le indicazioni descritte nel [Troubleshooting](../build/troubleshooting-c-cpp-isolated-applications-and-side-by-side-assemblies.md) sezione.  
  
## <a name="see-also"></a>Vedere anche  
 [Procedura: incorporare un manifesto in un'applicazione C/C++](../build/how-to-embed-a-manifest-inside-a-c-cpp-application.md)   
 [Informazioni sugli assembly privati](/windows/desktop/SbsCs/about-private-assemblies-)   
 [Strumento manifesto](/windows/desktop/SbsCs/mt-exe)   
 [Informazioni sulla generazione di manifesti per programmi C/C++](../build/understanding-manifest-generation-for-c-cpp-programs.md)