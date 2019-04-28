---
title: Specifica di strumenti di compilazione personalizzata
ms.date: 06/05/2018
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
helpviewer_keywords:
- build tools (C++), specifying
- custom build tools (C++), specifying
- builds (C++), custom build tools
ms.openlocfilehash: dbce226b34503a9e8e70b6f19d9aa0c68ef487f3
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62314754"
---
# <a name="specify-custom-build-tools"></a>Specificare strumenti di compilazione personalizzati

Uno *strumento di compilazione personalizzato* offre al sistema di compilazione le informazioni necessarie per compilare file di input specifici. Uno strumento di compilazione personalizzato specifica un comando da eseguire, un elenco di file di input, un elenco dei file di output generati dal comando e una descrizione facoltativa dello strumento.

Per informazioni generali sugli strumenti di compilazione personalizzati e sulle istruzioni di compilazione personalizzate, vedere [Informazioni sulle istruzioni di compilazione personalizzate e sugli eventi di compilazione](understanding-custom-build-steps-and-build-events.md).

### <a name="to-specify-a-custom-build-tool"></a>Per specificare uno strumento di compilazione personalizzato

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per altre informazioni, vedere [le proprietà del compilatore e compilazione impostare C++ in Visual Studio](working-with-project-properties.md).

1. Scegliere **Proprietà di configurazione** per attivare la casella **Configurazione**. Nella casella **Configurazione** selezionare la configurazione per la quale si vuole specificare uno strumento di compilazione personalizzato.

1. In **Esplora soluzioni** selezionare il file di input per lo strumento di compilazione personalizzato.

   Se la cartella **Strumento di compilazione personalizzato** non viene visualizzata, l'estensione di file selezionata è associata a uno strumento predefinito. Ad esempio lo strumento predefinito per i file con estensione c e cpp è il compilatore. Per eseguire l'override di un'impostazione dello strumento predefinito, nel nodo **Proprietà di configurazione** nella scheda **Generale** e nella proprietà **Tipo di elemento** scegliere **Strumento di compilazione personalizzato**. Scegliere **Applica**. Viene visualizzato il nodo **Strumento di compilazione personalizzato**.

1. Nel nodo **Strumento di compilazione personalizzato** nella cartella **Generale** specificare le proprietà associate allo strumento di compilazione personalizzato:

   - In **Dipendenze aggiuntive** specificare eventuali file aggiuntivi oltre a quello per cui viene definito lo strumento di compilazione personalizzato (che viene considerato in modo implicito un input per lo strumento). La presenza di file di input aggiuntivi non è obbligatoria per uno strumento di compilazione personalizzato. Se sono presenti più input aggiuntivi, separarli con punti e virgola.

      Se la data di uno dei file specificati in **Dipendenze aggiuntive** è successiva a quella del file di input, lo strumento di compilazione personalizzato viene eseguito. Se tutti i file in **Dipendenze aggiuntive** sono meno recenti del file di input e il file di input è meno recente del file della proprietà **Output**, lo strumento di compilazione personalizzato non viene eseguito.

      Si supponga ad esempio di avere uno strumento di compilazione personalizzato che accetta come input MyInput.x e genera MyInput.cpp e si supponga anche che MyInput.x includa il file di intestazione MyHeader.h. È possibile specificare MyHeader.h come dipendenza di input per MyInput.x. Il sistema compila MyInput.cpp quando questo non risulta aggiornato rispetto a MyInput.x o MyHeader.h.

      Le dipendenze di input possono anche garantire che gli strumenti di compilazione personalizzati vengano eseguiti nell'ordine richiesto. Nell'esempio precedente si supponga che MyHeader.x sia l'output di uno strumento di compilazione personalizzato. Dato che MyHeader.h è una dipendenza di MyInput.x, il sistema compila Myheader.h prima di eseguire lo strumento di compilazione personalizzato su MyInput.x.

   - In **Riga di comando** specificare un comando con il formato usato al prompt dei comandi. Specificare un comando o un file batch valido e i file di input o output necessari. Specificare il comando batch **call** prima del nome di un file batch per garantire che tutti i comandi successivi vengano eseguiti.

      Le macro di MSBuild consentono di specificare vari file di input e output in modo simbolico. Per informazioni su come specificare il percorso dei file o i nomi dei set di file, vedere [macro comuni per compilare i comandi e proprietà](reference/common-macros-for-build-commands-and-properties.md).

      Poiché il carattere "%" è riservato per MSBuild, se si specifica una variabile di ambiente sostituire ogni carattere di escape **%** con la sequenza di escape esadecimale **%25**. Ad esempio, sostituire **%WINDIR%** con **%25WINDIR%25**. MSBuild sostituisce ogni sequenza **%25** con il carattere **%** prima di accedere alla variabile di ambiente.

   - In **Descrizione** immettere un messaggio descrittivo per questo strumento di compilazione personalizzato. Il messaggio viene visualizzato nella finestra **Output** quando il sistema esegue lo strumento.

   - In **Output** specificare il nome del file di output. Questa voce è obbligatoria. Se questa proprietà non dispone di un valore lo strumento di compilazione personalizzato non viene eseguito. Se uno strumento di compilazione personalizzato dispone di più output, separare i nomi di file con punti e virgola.

      Il nome del file di output deve essere lo stesso nome specificato nella proprietà **Riga di comando**. Il sistema di compilazione del progetto cerca il file e ne verifica la data. Se il file di output è meno recente del file di input o non viene trovato, viene eseguito lo strumento di compilazione personalizzato. Se tutti i file in **Dipendenze aggiuntive** sono meno recenti del file di input e il file di input è meno recente del file specificato nella proprietà **Output**, lo strumento di compilazione personalizzato non viene eseguito.

Se si vuole che il sistema di compilazione elabori un file di output generato dallo strumento di compilazione personalizzato, è necessario aggiungere manualmente il file al progetto. Lo strumento di compilazione personalizzato aggiornerà il file durante la compilazione.

## <a name="example"></a>Esempio

Si supponga di voler includere nel progetto un file con nome parser.l. Il percorso eseguibile include un analizzatore lessicale, **lexer.exe**. Si vuole usarlo per elaborare parser.l e produrre un file con estensione c e con lo stesso nome di base (parser.c).

In primo luogo aggiungere parser.l e parser.c al progetto. Se i file non esistono ancora, aggiungere un riferimento ai file. Creare uno strumento di compilazione personalizzato per parser.l e immettere quanto segue nella proprietà **Comandi**:

> **lexer %(FullPath) .\%(Filename).c**

Questo comando esegue l'analizzatore lessicale su parser.l e restituisce parser.c nella directory del progetto.

Nella proprietà **Output** immettere quanto segue:

> **.\%(Filename).c**

Quando si compila il progetto, il sistema di compilazione confronta i timestamp di parser.l e parser.c. Se parser.l è più recente o se parser.c non esiste, il sistema di compilazione esegue il valore della proprietà **Riga di comando** per aggiornare parser.c. Dato che anche parser.c è stato aggiunto al progetto, il sistema di compilazione compila quindi parser.c.

## <a name="see-also"></a>Vedere anche

[Macro comuni per i comandi e le proprietà di compilazione](reference/common-macros-for-build-commands-and-properties.md)<br>
[Risoluzione dei problemi di personalizzazione della compilazione](troubleshooting-build-customizations.md)
