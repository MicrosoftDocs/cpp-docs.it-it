---
title: /DEBUG (Genera informazioni di debug)
ms.date: 11/04/2016
f1_keywords:
- VC.Project.VCLinkerTool.GenerateDebugInformation
- /debug
helpviewer_keywords:
- DEBUG linker option
- /DEBUG linker option
- -DEBUG linker option
- PDB files
- debugging [C++], debug information files
- generate debug info linker option
- pdb files, generating debug info
- .pdb files, generating debug info
- debugging [C++], linker option
- program databases [C++]
ms.assetid: 1af389ae-3f8b-4d76-a087-1cdf861e9103
ms.openlocfilehash: ca7ef5d1935ddea0441f49e387e35184c6fd1fc6
ms.sourcegitcommit: 8105b7003b89b73b4359644ff4281e1595352dda
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/14/2019
ms.locfileid: "57810198"
---
# <a name="debug-generate-debug-info"></a>/DEBUG (Genera informazioni di debug)

```
/DEBUG[:{FASTLINK|FULL|NONE}]
```

## <a name="remarks"></a>Note

Il **/debug** opzione Crea informazioni di debug per il file eseguibile.

Il linker inserisce le informazioni di debug in un file di programma (PDB) del database. Aggiorna il file PDB durante le compilazioni successive del programma.

Un file eseguibile (file .exe o DLL) creato per il debug contiene il nome e percorso del file PDB corrispondente. Il debugger legge il nome incorporato e Usa il file PDB quando si esegue il debug del programma. Il linker Usa il nome di base del programma e dall'estensione PDB per assegnare un nome di database di programma e incorpora il percorso in cui è stato creato. Per eseguire l'override di questa impostazione predefinita, impostare [/PDB](pdb-use-program-database.md) e specificare un nome di file diverso.

Il **/debug: fastlink** opzione è disponibile in Visual Studio 2017 e versioni successive. Questa opzione lascia le informazioni sui simboli privati nei prodotti singoli compilazione usati per compilare l'eseguibile. Il monitoraggio genera un file PDB limitato che indicizza nelle informazioni di debug nel file oggetto e librerie usate per compilare l'eseguibile invece di effettuare una copia completa. Questa opzione può collegare da due a quattro volte più veloci delle generazione di PDB completo ed è consigliata quando si esegue il debug in locale e disporre i prodotti di compilazione disponibili. Questo PDB limitato non è utilizzabile per il debug quando i prodotti di compilazione necessari non sono disponibili, ad esempio quando il file eseguibile viene distribuito in un altro computer. In un prompt dei comandi per gli sviluppatori, è possibile utilizzare lo strumento mspdbcmf.exe per generare un file PDB completo da questo PDB limitato. In Visual Studio, usare le voci di menu progetto o di compilazione per la generazione di un file PDB completo per creare un file PDB completo per il progetto o soluzione.

Il **/debug: full** opzione Sposta tutte le informazioni sui simboli privati da prodotti singoli compilazione (file oggetto e librerie) in un file PDB singolo e possono essere la parte che richiedono più tempo del collegamento. Tuttavia, il file PDB completo utilizzabile per eseguire il debug dell'eseguibile quando nessun altri prodotti di compilazione sono disponibili, ad esempio quando viene distribuito il file eseguibile.

Il **/debug: Nessuno** opzione non genera un file PDB.

Quando si specifica **/debug** senza opzioni aggiuntive, per impostazione predefinita il linker **/debug: full** per la riga di comando e le compilazioni di makefile per versione build nell'IDE di Visual Studio e per debug e rilascio Compila in Visual Studio 2015 e versioni precedenti. A partire da Visual Studio 2017, il sistema di compilazione nell'IDE per impostazione predefinita **/debug: fastlink** quando si specifica il **/debug** opzione compilazioni di debug. Altre impostazioni predefinite sono gli stessi per mantenere la compatibilità con le versioni precedenti.

Il compilatore [compatibile C7](z7-zi-zi-debug-information-format.md) (/ Z7) opzione indica al compilatore di lasciare le informazioni sul debug nei file con estensione obj. È anche possibile usare la [Database di programma](z7-zi-zi-debug-information-format.md) opzione del compilatore (/Zi) per archiviare le informazioni di debug in un file PDB per il file con estensione obj. Il linker cerca PDB dell'oggetto prima di tutto il percorso assoluto scritti nel file obj, e quindi nella directory che contiene il file con estensione obj. È possibile specificare il nome del file PDB o percorso in cui il linker di un oggetto.

[/ INCREMENTALE](incremental-link-incrementally.md) è implicito quando si specifica.

/ DEBUG modifica i valori predefiniti per il [/zip](opt-optimizations.md) possibilità da REF in NOREF e da ICF NOICF, pertanto se si desidera che le impostazioni predefinite originali, è necessario specificare in modo esplicito /OPT: ICF o /OPT: REF.

Non è possibile creare un .exe o una DLL che contiene le informazioni di debug. Eseguire il debug sono sempre inserite in un file con estensione obj o con estensione pdb.

### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [le proprietà del compilatore e compilazione impostare C++ in Visual Studio](../working-with-project-properties.md).

1. Scegliere il **Linker** cartella.

1. Scegliere il **debug** pagina delle proprietà.

1. Modificare il **genera informazioni di Debug** proprietà per abilitare la generazione di PDB. In questo modo /debug: fastlink per impostazione predefinita in Visual Studio 2017.

1. Modificare il **genera File di Database di programma completo** proprietà per abilitare /debug: full per la generazione di PDB completa per ogni compilazione incrementale.

### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice

1. Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.GenerateDebugInformation%2A>.

## <a name="see-also"></a>Vedere anche

[Riferimento del linker MSVC](linking.md)<br/>
[Opzioni del Linker MSVC](linker-options.md)
