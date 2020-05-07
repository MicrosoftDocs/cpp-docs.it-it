---
title: 'Procedura: organizzare file di output dei progetti per le compilazioni'
ms.date: 05/06/2019
helpviewer_keywords:
- C++, output files
- output files, organizing
ms.assetid: 521d95ea-2dcc-4da0-b5eb-ac3e57941446
ms.openlocfilehash: 13aa3d1f8e2993ca34163ecbc0515948db56eb79
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81328521"
---
# <a name="how-to-organize-project-output-files-for-builds"></a>Procedura: organizzare file di output dei progetti per le compilazioni

In questo argomento vengono descritte le procedure consigliate per l'organizzazione dei file di output dei progetti. Se i file di output dei progetti non vengono organizzati correttamente possono verificarsi errori. L'argomento descrive anche i vantaggi e gli svantaggi delle varie alternative per organizzare i file di output dei progetti.

## <a name="referencing-clr-assemblies"></a>Riferimento ad assembly CLR

#### <a name="to-reference-assemblies-with-using"></a>Per impostare il riferimento agli assembly con #using

1. È possibile fare riferimento a un assembly direttamente dal codice usando la direttiva #using, ad esempio `#using <System.Data.dll>`. Per altre informazioni, vedere [Direttiva #using](../preprocessor/hash-using-directive-cpp.md).

   Il file specificato può essere un file con estensione dll, exe, netmodule o obj, ma deve essere scritto in MSIL. Il componente di destinazione del riferimento può essere compilato in qualsiasi linguaggio. Con questa opzione si ha accesso a IntelliSense, perché i metadati vengono estratti dal codice MSIL. Il file in questione deve trovarsi nel percorso del progetto. In caso contrario il progetto non viene compilato e IntelliSense non è disponibile. Un metodo semplice per determinare se il file è incluso nel percorso consiste nel fare clic con il pulsante destro del mouse sulla riga #using e scegliere il comando **Apri documento**. Se il file non viene trovato si riceve una notifica.

   Se non si vuole indicare il percorso completo del file, è possibile usare l'opzione del compilatore **/AI** per modificare il percorso di ricerca per i riferimenti #using. Per altre informazioni, vedere [/AI (Specifica le directory di metadati)](reference/ai-specify-metadata-directories.md).

#### <a name="to-reference-assemblies-with-fu"></a>Per impostare il riferimento agli assembly con /FU

1. Anziché fare riferimento a un assembly direttamente da un file di codice come descritto sopra, è possibile usare l'opzione del compilatore **/FU**. Il vantaggio di questo metodo è che non è necessario aggiungere un'istruzione #using separata a ogni file che fa riferimento a un determinato assembly.

   Per impostare questa opzione, aprire **Pagine delle proprietà** per il progetto. Espandere il nodo **Proprietà di configurazione** nella struttura a sinistra, quindi espandere il nodo **C/C++** e selezionare **Avanzate**. Aggiungere gli assembly desiderati accanto a **Forza #using**. Per altre informazioni, vedere [/FU (Specifica file #using da utilizzare)](reference/fu-name-forced-hash-using-file.md).

#### <a name="to-reference-assemblies-with-add-new-reference"></a>Per impostare il riferimento agli assembly con Aggiungi nuovo riferimento

1. Questo è il modo più semplice per usare gli assembly CLR. In primo luogo verificare che il progetto sia compilato con l'opzione del compilatore **/clr**. Quindi fare clic con il pulsante destro del mouse sul progetto in **Esplora soluzioni** e selezionare **Aggiungi****Riferimenti**. Viene visualizzata la finestra di dialogo **Pagine delle proprietà**.

1. Nella finestra di dialogo **Pagine delle proprietà** selezionare **Aggiungi nuovo riferimento**. Viene visualizzata una finestra di dialogo che elenca tutti gli assembly .NET, COM e gli altri assembly disponibili nel progetto corrente. Selezionare l'assembly desiderato e scegliere **OK**.

   Dopo l'impostazione di un riferimento al progetto, le relative dipendenze vengono gestite automaticamente. Inoltre, poiché i metadati fanno parte di un assembly, non è necessario aggiungere un file di intestazione o creare un prototipo degli elementi usati dagli assembly gestiti.

## <a name="referencing-native-dlls-or-static-libraries"></a>Definizione di riferimenti a DLL native o librerie statiche

#### <a name="to-reference-native-dlls-or-static-libraries"></a>Per definire riferimenti a DLL native o librerie statiche

1. Definire un riferimento al file di intestazione appropriato nel codice, usando la direttiva #include. Il file di intestazione deve essere presente nel percorso di inclusione o appartenere al progetto corrente. Per altre informazioni, vedere [Direttiva #include (C/C++)](../preprocessor/hash-include-directive-c-cpp.md).

1. È anche possibile impostare le dipendenze di progetto. L'impostazione delle dipendenze del progetto offre due garanzie. In primo luogo garantisce che i progetti vengano compilati nell'ordine corretto e che un progetto sia sempre in grado di trovare i file dipendenti necessari. In secondo luogo, aggiunge implicitamente la directory di output del progetto dipendente al percorso in modo che i file possano essere facilmente individuati in fase di collegamento.

1. Per distribuire l'applicazione è necessario inserire la DLL in una posizione appropriata. I possibili valori sono i seguenti:

   1. Lo stesso percorso del file eseguibile.

   1. Una posizione qualsiasi nel percorso di sistema (variabile di ambiente **path**).

   1. L'assembly side-by-side. Per altre informazioni, vedere [Compilazione di assembly side-by-side C/C++](building-c-cpp-side-by-side-assemblies.md).

## <a name="working-with-multiple-projects"></a>Uso di più progetti

Per impostazione predefinita i progetti vengono compilati in modo che tutti i file di output vengano creati in una sottodirectory della directory del progetto. La directory viene denominata in base alla configurazione di compilazione (ad esempio Debug o Rilascio). Per impostare il riferimento reciproco tra progetti di pari livello, ogni progetto deve aggiungere esplicitamente al proprio percorso le directory di output dell'altro progetto, per garantire la riuscita del collegamento. Questa operazione viene eseguita automaticamente quando si impostano le dipendenze di progetto. Se tuttavia non si usano le dipendenze è necessario gestire con attenzione questa funzionalità perché la gestione delle compilazioni può diventare molto difficile. Ad esempio quando un progetto ha configurazioni Debug e Rilascio e include una libreria esterna da un progetto di pari livello, deve usare un file di libreria diverso a seconda della configurazione che viene compilata. Di conseguenza l'impostazione di questi percorsi come hardcoded può risultare difficile.

Tutti i file di output essenziali (come i file eseguibili, i file linker incrementali e i file PDB) vengono copiati in una directory comune della soluzione. Pertanto quando si usa una soluzione che contiene vari progetti C++ con configurazioni equivalenti, tutti i file di output vengono centralizzati per semplificare il collegamento e la distribuzione. È possibile assicurarsi che l'applicazione o la libreria funzionerà come previsto se questi file vengono mantenuti insieme (dato che la presenza dei file nel percorso è garantita).

Il percorso dei file di output può essere un problema di primaria importanza per la distribuzione in un ambiente di produzione. Durante l'esecuzione di progetti nell'IDE i percorsi delle librerie incluse non sono necessariamente uguali ai percorsi dell'ambiente di produzione. Se ad esempio nel codice si ha `#using "../../lib/debug/mylib.dll"` ma poi si distribuisce mylib.dll in una posizione relativa diversa, l'esecuzione dell'applicazione non riesce in fase di runtime. Per impedire che si verifichi questo problema, è consigliabile evitare di usare percorsi relativi nelle istruzioni #include del codice. È consigliabile accertarsi che i file necessari siano presenti nel percorso di compilazione del progetto e allo stesso modo verificare che i file di produzione corrispondenti siano posizionati correttamente.

#### <a name="how-to-specify-where-output-files-go"></a>Come specificare la destinazione dei file di output

1. Le impostazioni di output del progetto si trovano nelle **Pagine delle proprietà** del progetto stesso. Espandere il nodo accanto a **Proprietà di configurazione** e selezionare **Generali**. Il percorso di output è specificato accanto a **Directory di output**. Per altre informazioni, vedere [Pagina delle proprietà Generale (Progetto)](reference/general-property-page-project.md).

## <a name="see-also"></a>Vedere anche

[Tipi di progetto C++ in Visual Studio](reference/visual-cpp-project-types.md)
