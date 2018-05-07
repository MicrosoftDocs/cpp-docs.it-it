---
title: Strumenti di compilazione specificando | Documenti Microsoft
ms.custom: ''
ms.date: 12/28/2017
ms.technology:
- cpp-ide
ms.topic: conceptual
f1_keywords:
- VC.Project.VCCustomBuildTool.CustomBuildToolBeforeTargets
- VC.Project.VCCustomBuildTool.Outputs
- VC.Project.VCCustomBuildTool.Command
- VC.Project.VCCustomBuildTool.CommandLine
- VC.Project.VCCustomBuildTool.AdditionalDependencies
- VC.Project.VCCustomBuildTool.Message
- VC.Project.VCCustomBuildTool.CustomBuildToolAfterTargets
- VC.Project.VCCustomBuildTool.Description
- VC.Project.VCCustomBuildTool.AdditionalInputs
dev_langs:
- C++
helpviewer_keywords:
- build tools (C++), specifying
- custom build tools (C++), specifying
- builds (C++), custom build tools
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 1b8fc10d2a94ab4b26a47991d3dc8923afb28ca3
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="specify-custom-build-tools"></a>Specificare gli strumenti di compilazione personalizzata

Oggetto *strumento di compilazione personalizzato* fornisce il sistema di compilazione con le informazioni necessarie per compilare file di input specifici. Uno strumento di compilazione personalizzata specifica un comando da eseguire, un elenco di file di input, un elenco dei file di output generati dal comando e una descrizione facoltativa dello strumento.

Per informazioni generali sugli strumenti di compilazione personalizzata e istruzioni di compilazione personalizzate, vedere [informazioni sulle istruzioni di compilazione personalizzate e di eventi di compilazione](../ide/understanding-custom-build-steps-and-build-events.md).

### <a name="to-specify-a-custom-build-tool"></a>Per specificare uno strumento di compilazione personalizzata

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per ulteriori informazioni, vedere [impostazione delle proprietà dei progetti Visual C++](../ide/working-with-project-properties.md).

1. Scegliere **le proprietà di configurazione** per abilitare il **configurazione** casella. Nel **configurazione** , selezionare la configurazione per il quale si desidera specificare uno strumento di compilazione personalizzata.

1. In **Esplora**, selezionare il file di input per lo strumento di compilazione personalizzata.

   Se il **strumento di compilazione personalizzato** cartella non viene visualizzata, l'estensione del file selezionato è associato a uno strumento predefinito. Lo strumento predefinito per file c e cpp è ad esempio, il compilatore. Per eseguire l'override di un'impostazione o dello strumento, nel **le proprietà di configurazione** nodo, nel **generale** cartella, nel **tipo di elemento** proprietà, scegliere **di compilazione personalizzata Strumento**. Scegliere **applica** e **strumento di compilazione personalizzato** nodo viene visualizzato.

1. Nel **strumento di compilazione personalizzato** nodo, nel **generale** cartella, specificare le proprietà associate personalizzata strumento di compilazione:

   - In **dipendenze aggiuntive**, specificare eventuali file aggiuntivi oltre a quella per cui viene definito lo strumento di compilazione personalizzata (il file associato con lo strumento di compilazione personalizzata è considerato in modo implicito un input allo strumento). Il file di input aggiuntivi non è un requisito necessario per uno strumento di compilazione personalizzata. Se si dispone di più di un input aggiuntivo, separarli con punti e virgola.

      Se un **dipendenze aggiuntive** data del file è successiva al file di input, quindi viene eseguito lo strumento di compilazione personalizzata. Se tutti del **dipendenze aggiuntive** file risalgono a più file di input e il file di input è antecedente la **output** file delle proprietà, quindi lo strumento di compilazione personalizzate non viene eseguito.

      Ad esempio, si supponga un strumento di compilazione personalizzato che accetta NomeInput come input e genera NomeInput e che NomeInput include un file di intestazione, NomeIntestazione. È possibile specificare NomeIntestazione come dipendenza di input per MyInput e il sistema di compilazione compilerà NomeInput quando è aggiornato x.

      Le dipendenze di input possono inoltre garantire che gli strumenti di compilazione personalizzata eseguiti nell'ordine che richiesto. Nell'esempio precedente, si supponga che NomeIntestazione effettivamente l'output di uno strumento di compilazione personalizzata. Poiché una dipendenza di NomeInput NomeIntestazione, il sistema di compilazione genererà innanzitutto NomeIntestazione prima di eseguire lo strumento di compilazione personalizzata su NomeInput.

   - In **riga di comando**, specificare un comando come se si stesse specificando al prompt dei comandi. Specificare un comando valido o un file batch e qualsiasi input obbligatorio o file di output. Specificare il **chiamare** comando prima del nome di un file batch per garantire che tutti i comandi successivi vengono eseguiti batch.

      Possono specificare più file di input e outpui simbolicamente con le macro di MSBuild. Per informazioni su come specificare il percorso dei file o i nomi dei set di file, vedere [comuni macro per comandi di compilazione e proprietà](../ide/common-macros-for-build-commands-and-properties.md).

      Poiché il carattere '% s'è riservato da MSBuild, se si specifica una variabile di ambiente sostituire ogni **%** con carattere di escape di **% 25** sequenza di escape esadecimale. Ad esempio, sostituire **% WINDIR %** con **25WINDIR % 25**. MSBuild sostituisce ogni **% 25** sequenza con la **%** carattere prima di accedere alla variabile di ambiente.

   - In **descrizione**, immettere un messaggio descrittivo per questo strumento di compilazione personalizzata. Il messaggio viene stampato il **Output** finestra quando il sistema di compilazione elabora questo strumento.

   - In **output**, specificare il nome del file di output. Si tratta di una voce obbligatoria. senza un valore per questa proprietà, lo strumento di compilazione personalizzata non verrà eseguito. Se uno strumento di compilazione personalizzata dispone di più output, separare i nomi di file con un punto e virgola.

      Il nome del file di output deve essere lo stesso come specificato nella **riga di comando** proprietà. Il sistema di compilazione progetto verrà cercare il file e controllare la data. Se il file di output è più recente del file di input o se il file di output non viene trovato, viene eseguito lo strumento di compilazione personalizzata. Se tutti del **dipendenze aggiuntive** file risalgono a più file di input e il file di input è più recente del file specificato nella **output** proprietà, lo strumento di compilazione personalizzate non viene eseguito.

Se si desidera che il sistema di compilazione di operare su un file di output generato dallo strumento di compilazione personalizzata, è necessario aggiungere manualmente, al progetto. Lo strumento di compilazione personalizzata aggiornerà il file durante la compilazione.

## <a name="example"></a>Esempio

Si supponga che si desidera includere un file denominato parser nel progetto. Si dispone di un analizzatore lessicale, **lexer.exe**, al percorso eseguibile. Si desidera utilizzarla per elaborare parser per produrre un file c che ha lo stesso nome di base (parser).

Innanzitutto, è possibile aggiungere l e parser al progetto. Se i file non esiste ancora, aggiungere un riferimento ai file. Creare uno strumento di compilazione personalizzata per parser e immettere quanto segue nel **comandi** proprietà:

> **%(FullPath) lexer. \%C (nome file)**

Questo comando viene eseguito l'analizzatore lessicale nel parser e restituisce i parser alla directory del progetto.

Nel **output** proprietà, immettere quanto segue:

> **. \%C (nome file)**

Quando si compila il progetto, il sistema di compilazione confronta i timestamp di parser e parser. Se il parser è più recente o se il parser non esiste, il sistema di compilazione esegue il valore della **riga di comando** proprietà per aggiornare parser. Dal momento che è stato anche aggiunto al progetto, il sistema di compilazione compila quindi parser.

## <a name="see-also"></a>Vedere anche

[Macro comuni per i comandi e le proprietà di compilazione](../ide/common-macros-for-build-commands-and-properties.md)  
[Risoluzione dei problemi di personalizzazione della compilazione](../ide/troubleshooting-build-customizations.md)  
