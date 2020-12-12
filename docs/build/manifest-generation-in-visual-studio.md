---
description: 'Altre informazioni su: generazione di manifesti in Visual Studio'
title: Generazione di manifesti in Visual Studio
ms.date: 11/04/2016
helpviewer_keywords:
- manifests [C++]
ms.assetid: 0af60aa9-d223-42cd-8426-b3fc543a2a81
ms.openlocfilehash: 88d6cac19e7a0c24a28252edda5ac22ca3cadd64
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97176444"
---
# <a name="manifest-generation-in-visual-studio"></a>Generazione di manifesti in Visual Studio

La generazione di un file manifesto per un progetto specifico può essere controllata nella finestra di dialogo **pagine delle proprietà** del progetto. Nella scheda **proprietà di configurazione** fare clic **su linker**, quindi su **file manifesto** e quindi su **Genera manifesto**. Per impostazione predefinita, le proprietà del progetto dei nuovi progetti sono impostate per generare un file manifesto. È tuttavia possibile disabilitare la generazione del manifesto per un progetto utilizzando la proprietà **Genera manifesto** del progetto. Quando questa proprietà è impostata su **Sì**, viene generato il manifesto per questo progetto. In caso contrario, il linker ignorerà le informazioni sull'assembly durante la risoluzione delle dipendenze del codice dell'applicazione e non genererà il manifesto.

Il sistema di compilazione in Visual Studio consente di incorporare il manifesto nel file di applicazione binario finale o di essere generato come file esterno. Questo comportamento è controllato dall'opzione **Incorpora manifesto** nella finestra di dialogo delle **proprietà del progetto** . Per impostare questa proprietà, aprire il nodo **strumento Manifesto** , quindi selezionare **input e output**. Se il manifesto non è incorporato, viene generato come file esterno e salvato nella stessa directory del file binario finale. Se il manifesto è incorporato, Visual Studio incorpora i manifesti finali usando il processo seguente:

1. Dopo la compilazione del codice sorgente nei file oggetto, il linker raccoglie informazioni sull'assembly dipendente. Quando si collega il file binario finale, il linker genera un manifesto intermedio che viene usato in seguito per generare il manifesto finale.

1. Al termine del manifesto intermedio e del collegamento, lo strumento manifesto verrà eseguito per unire un manifesto finale e salvarlo come file esterno.

1. Il sistema di compilazione del progetto rileva quindi se il manifesto generato dallo strumento manifesto contiene informazioni diverse da quelle del manifesto già incorporato nel file binario.

1. Se il manifesto incorporato nel file binario è diverso dal manifesto generato dallo strumento Manifesto oppure il file binario non contiene un manifesto incorporato, Visual Studio richiamerà il linker una volta per incorporare il file manifesto esterno all'interno del file binario come risorsa.

1. Se il manifesto incorporato nel file binario è lo stesso del manifesto generato dallo strumento Manifesto, la compilazione continuerà a eseguire le successive fasi di compilazione.

Il manifesto è incorporato nel file binario finale come risorsa di testo e può essere visualizzato aprendo il file binario finale come file in Visual Studio. Per assicurarsi che il manifesto punti alle librerie corrette, seguire i passaggi descritti in [informazioni sulle dipendenze di un'applicazione Visual C++](../windows/understanding-the-dependencies-of-a-visual-cpp-application.md) o seguire i suggerimenti descritti nella sezione sulla [risoluzione dei problemi](troubleshooting-c-cpp-isolated-applications-and-side-by-side-assemblies.md) .

## <a name="see-also"></a>Vedi anche

[Informazioni sulla generazione di manifesti per i programmi C/C++](understanding-manifest-generation-for-c-cpp-programs.md)
