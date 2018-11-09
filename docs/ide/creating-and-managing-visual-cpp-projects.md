---
title: Creazione e gestione di progetti Visual C++
ms.date: 11/04/2016
f1_keywords:
- vcprojects
- creatingmanagingVC
helpviewer_keywords:
- ATL projects, creating
- Visual C++ projects, creating
- projects [C++], creating
- Visual C++ projects
- ATL projects
ms.assetid: 11003cd8-9046-4630-a189-a32bf3b88047
ms.openlocfilehash: 2c3722fe9da764a578c255e50120fa2770555665
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50553179"
---
# <a name="creating-and-managing-msbuild-based-visual-c-projects"></a>Creazione e gestione di progetti Visual C++ basati su MSBuild

MSBuild è il sistema di compilazione nativo per Visual C++ ed è in genere il sistema migliore per compilare le app della piattaforma UWP, nonché le applicazioni Desktop che usano le librerie MFC o ATL. MSBuild è strettamente integrato con l'IDE e il sistema di progetto di Visual Studio, ma si può usare anche dalla riga di comando. A partire da Visual Studio 2017, Visual C++ supporta [CMake e altri sistemi non MSBuild usando la funzionalità Apri cartella](non-msbuild-projects.md).

Un progetto basato su MSBuild è associato a un file di progetto in formato XML (VCXPROJ) che specifica tutti i file e le risorse necessari per compilare il programma, nonché altre impostazioni di configurazione, ad esempio la piattaforma di destinazione (x86, x64 o ARM) e l'indicazione riguardo alla versione del programma compilato, ovvero se si tratta di una versione finale o una versione di debug. Un progetto (o più progetti) è contenuto in una *soluzione*che, a sua volta, può contenere ad esempio diversi progetti DLL Win32 e un'unica applicazione console Win32 che usa tali DLL. Quando si compila il progetto, il motore MSBuild usa il file di progetto e produce il file eseguibile e/o altri output personalizzati eventualmente specificati.

Per creare progetti in Visual C++, è possibile scegliere **File &#124; Nuovo &#124; Progetto**, verificare che Visual C++ sia selezionato nel riquadro sinistro e quindi scegliere un'opzione dall'elenco dei modelli di progetto nel riquadro centrale. Quando si fa clic su un modello, in molti casi viene visualizzata una procedura guidata in cui è possibile impostare varie proprietà prima di avviare la creazione del progetto. È possibile visualizzare e modificare tali proprietà in un secondo nelle pagine delle proprietà del progetto (**Progetto &#124; Proprietà**).

I progetti possono essere creati anche:

- scegliendo **File &#124; Nuovo &#124; Progetto da codice esistente** e seguendo le istruzioni per aggiungere i file di codice sorgente esistenti. Questa opzione è consigliata per i progetti relativamente piccoli e semplici, ad esempio 25 file di codice sorgente o meno con poche o nessuna dipendenza complesse.

- A partire da un makefile e scegliendo il modello di progetto Makefile nella scheda Generale.

- creando un progetto vuoto (nella scheda **Generale**) e aggiungendo manualmente i file di codice sorgente facendo clic con il pulsante destro del mouse sul nodo del progetto in Esplora soluzioni e scegliendo **Aggiungi &#124; Elemento esistente**.

- using the [Win32 Application Wizard](../windows/win32-application-wizard.md).

## <a name="in-this-section"></a>In questa sezione

[Tipi di progetto Visual C++](../ide/visual-cpp-project-types.md)<br>
Descrive i tipi di progetto basati su MSBuild che sono disponibili in Visual C++.

[Tipi di file creati per i progetti di Visual C++](../ide/file-types-created-for-visual-cpp-projects.md)<br>
Descrive i tipi di file usati con diversi tipi di progetto MSBuild.

[Creazione di progetti desktop tramite le creazioni guidate applicazioni](../ide/creating-desktop-projects-by-using-application-wizards.md)<br>
Descrive come usare le procedure guidate per creare progetti con Visual C++.

[Utilizzo di Proprietà del progetto](../ide/working-with-project-properties.md)<br>
Descrive come usare le pagine delle proprietà e le finestre delle proprietà per specificare le impostazioni di progetto.

[Aggiunta di funzionalità con creazioni guidate codice](../ide/adding-functionality-with-code-wizards-cpp.md)<br>
Descrive come aumentare la funzionalità di un progetto aggiungendo classi, metodi, variabili e altri elementi.

[Procedura: Organizzare file di output dei progetti per le compilazioni](../ide/how-to-organize-project-output-files-for-builds.md)<br>
Descrive come organizzare i file di output del progetto.

## <a name="related-sections"></a>Sezioni correlate

[Compilazione di programmi C/C++](../build/building-c-cpp-programs.md)<br>
Fornisce i collegamenti ad argomenti che illustrano come compilare un programma dalla riga di comando o dall'ambiente di sviluppo integrato (IDE) di Visual Studio.

## <a name="see-also"></a>Vedere anche

[Visual Studio SDK](https://msdn.microsoft.com/vstudio/extend)
