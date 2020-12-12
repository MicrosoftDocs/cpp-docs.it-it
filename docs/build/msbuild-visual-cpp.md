---
description: 'Altre informazioni su: MSBuild nella riga di comando-C++'
title: MSBuild nella riga di comando-C++
ms.date: 12/12/2018
helpviewer_keywords:
- MSBuild
ms.assetid: 7a1be7ff-0312-4669-adf2-5f5bf507d560
ms.openlocfilehash: 9d78c50b398b0ad97cfd75727fdb4219677c546b
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97179850"
---
# <a name="msbuild-on-the-command-line---c"></a>MSBuild nella riga di comando-C++

In generale, è consigliabile usare Visual Studio per impostare le proprietà del progetto e richiamare il sistema MSBuild. Tuttavia, è possibile utilizzare lo strumento **MSBuild** direttamente dal prompt dei comandi. Il processo di compilazione è controllato dalle informazioni contenute in un file di progetto (con estensione vcxproj) che è possibile creare e modificare. Il file di progetto specifica le opzioni di compilazione in base a fasi, condizioni ed eventi di compilazione. Inoltre, è possibile specificare zero o più argomenti delle *Opzioni* della riga di comando.

> **msbuild.exe** [ *project_file* ] [ *Opzioni* ]

Usare le opzioni della riga di comando **/target** (o **/t**) e **/Property** (o **/p**) per eseguire l'override di proprietà e destinazioni specifiche specificate nel file di progetto.

Una funzione essenziale del file di progetto consiste nel specificare una *destinazione*, ovvero una particolare operazione applicata al progetto, e gli input e gli output necessari per eseguire tale operazione. Un file di progetto può specificare una o più destinazioni, che possono includere una destinazione predefinita.

Ogni destinazione è costituita da una sequenza di una o più *attività*. Ogni attività è rappresentata da una classe .NET Framework che contiene un comando eseguibile. Ad esempio, l' [attività CL](/visualstudio/msbuild/cl-task) contiene il comando [cl.exe](reference/compiling-a-c-cpp-program.md) .

Un *parametro dell'attività* è una proprietà dell'attività della classe e in genere rappresenta un'opzione della riga di comando del comando eseguibile. Il parametro dell'attività, ad esempio, `FavorSizeOrSpeed` `CL` corrisponde alle opzioni del compilatore **/OS** e **/OT** .

I parametri di attività aggiuntivi supportano l'infrastruttura di MSBuild. Il parametro Task, ad esempio, `Sources` specifica un set di attività che possono essere utilizzate da altre attività. Per altre informazioni sulle attività di MSBuild, vedere [riferimento alle attività](/visualstudio/msbuild/msbuild-task-reference).

La maggior parte delle attività richiede input e output, ad esempio i nomi di file, i percorsi e i parametri stringa, numerico o booleano. Ad esempio, un input comune è il nome di un file di origine con estensione cpp da compilare. Un parametro di input importante è una stringa che specifica la configurazione di compilazione e la piattaforma, ad esempio "debug \| Win32". Gli input e gli output vengono specificati da uno o più elementi XML definiti dall'utente `Item` contenuti in un `ItemGroup` elemento.

Un file di progetto può inoltre specificare le *Proprietà* e `ItemDefinitionGroup` *gli elementi* definiti dall'utente. Le proprietà e gli elementi formano le coppie nome/valore che possono essere usate come variabili nella compilazione. Il componente nome di una coppia definisce una *macro* e il componente valore dichiara il valore della *macro*. È possibile accedere a una macro di proprietà utilizzando la notazione $ (*Name*) e l'accesso a una macro di elemento tramite la *notazione%(.*

Gli altri elementi XML in un file di progetto possono testare le macro e quindi impostare in modo condizionale il valore di qualsiasi macro o controllare l'esecuzione della compilazione. È possibile concatenare nomi di macro e stringhe letterali per generare costrutti come un percorso e un nome file. Nella riga di comando, l'opzione **/Property** imposta o esegue l'override di una proprietà del progetto. Non è possibile fare riferimento agli elementi nella riga di comando.

Il sistema MSBuild può eseguire in modo condizionale una destinazione prima o dopo un'altra destinazione. Inoltre, il sistema può compilare una destinazione in base al fatto che i file utilizzati dalla destinazione siano più recenti rispetto ai file generati.

Per ulteriori informazioni su MSBuild, vedere:

- [MSBuild](/visualstudio/msbuild/msbuild) Panoramica dei concetti relativi a MSBuild.

- [Riferimenti a MSBuild](/visualstudio/msbuild/msbuild-reference) Informazioni di riferimento sul sistema MSBuild.

- [Riferimento allo schema del file di progetto](/visualstudio/msbuild/msbuild-project-file-schema-reference) Elenca gli elementi di XML Schema di MSBuild, insieme ai relativi attributi e agli elementi padre e figlio. Si noti in particolare gli elementi [ItemGroup](/visualstudio/msbuild/itemgroup-element-msbuild), [PropertyGroup](/visualstudio/msbuild/propertygroup-element-msbuild), [target](/visualstudio/msbuild/target-element-msbuild)e [Task](/visualstudio/msbuild/task-element-msbuild) .

- [Riferimenti alla riga di comando](/visualstudio/msbuild/msbuild-command-line-reference) Vengono descritti gli argomenti e le opzioni della riga di comando che è possibile utilizzare con msbuild.exe.

- [Riferimento attività](/visualstudio/msbuild/msbuild-task-reference) Descrive le attività di MSBuild. Si notino in particolare queste attività, specifiche per Visual C++: [attività BSCMAKE](/visualstudio/msbuild/bscmake-task), [attività CL](/visualstudio/msbuild/cl-task), attività [CPPClean](/visualstudio/msbuild/cppclean-task), attività [lib](/visualstudio/msbuild/lib-task), [attività di collegamento](/visualstudio/msbuild/link-task), [attività MIDL](/visualstudio/msbuild/midl-task), [attività MT](/visualstudio/msbuild/mt-task), attività [RC](/visualstudio/msbuild/rc-task), [attività setenv](/visualstudio/msbuild/setenv-task), attività [VCMessage](/visualstudio/msbuild/vcmessage-task)

## <a name="in-this-section"></a>Contenuto della sezione

|Termine|Definizione|
|----------|----------------|
|[Procedura dettagliata: uso di MSBuild per la creazione di un progetto C++](walkthrough-using-msbuild-to-create-a-visual-cpp-project.md)|Viene illustrato come creare un progetto Visual Studio C++ utilizzando **MSBuild**.|
|[Procedura: usare eventi di compilazione in progetti MSBuild](how-to-use-build-events-in-msbuild-projects.md)|Viene illustrato come specificare un'azione che si verifica in una fase particuler della compilazione: prima dell'avvio della compilazione. prima dell'avvio del passaggio del collegamento, o al termine della compilazione.|
|[Procedura: aggiungere un'istruzione di compilazione personalizzata a progetti MSBuild](how-to-add-a-custom-build-step-to-msbuild-projects.md)|Viene illustrato come aggiungere una fase definita dall'utente alla sequenza di compilazione.|
|[Procedura: aggiungere strumenti di compilazione personalizzati ai progetti MSBuild](how-to-add-custom-build-tools-to-msbuild-projects.md)|Viene illustrato come associare uno strumento di compilazione a un file specifico.|
|[Procedura: integrare strumenti personalizzati nelle proprietà del progetto](how-to-integrate-custom-tools-into-the-project-properties.md)|Viene illustrato come aggiungere opzioni per uno strumento personalizzato alle proprietà del progetto.|
|[Procedura: modificare il Framework di destinazione e il set di strumenti della piattaforma](how-to-modify-the-target-framework-and-platform-toolset.md)|Viene illustrato come compilare un progetto per più Framework o set di strumenti.|

## <a name="see-also"></a>Vedi anche

[Usare il set di strumenti MSVC dalla riga di comando](building-on-the-command-line.md)
