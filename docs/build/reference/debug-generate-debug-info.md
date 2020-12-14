---
description: Ulteriori informazioni su:/DEBUG (genera informazioni di debug)
title: /DEBUG (Genera informazioni di debug)
ms.date: 05/16/2019
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
ms.openlocfilehash: b0ef30fe7cb5eb5af0c46d6f6a8f3533d2e7d6ea
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97201820"
---
# <a name="debug-generate-debug-info"></a>/DEBUG (Genera informazioni di debug)

```
/DEBUG[:{FASTLINK|FULL|NONE}]
```

## <a name="remarks"></a>Commenti

L'opzione **/DEBUG** crea le informazioni di debug per l'eseguibile.

Il linker inserisce le informazioni di debug in un file di database di programma (PDB). Aggiorna il file PDB durante le successive compilazioni del programma.

Un eseguibile (file EXE o DLL) creato per il debug contiene il nome e il percorso del file PDB corrispondente. Il debugger legge il nome incorporato e usa il file PDB durante il debug del programma. Il linker usa il nome di base del programma e l'estensione pdb per assegnare un nome al database del programma e incorpora il percorso nella posizione in cui è stato creato. Per eseguire l'override di questa impostazione predefinita, impostare [/PDB](pdb-use-program-database.md) e specificare un nome file diverso.

L'opzione **/DEBUG:FASTLINK** è disponibile in Visual Studio 2017 e versioni successive. Questa opzione lascia le informazioni sui simboli privati nei singoli prodotti di compilazione usati per compilare l'eseguibile. Genera un file PDB limitato che effettua l'indicizzazione delle informazioni di debug nelle librerie e nei file oggetto usati per compilare l'eseguibile invece di creare una copia completa. Questa opzione è in grado di creare collegamenti da due a quattro volte più velocemente rispetto alla generazione del file PDB completo ed è consigliata quando si esegue il debug in locale e sono disponibili i prodotti di compilazione. Questo file PDB limitato non può essere usato per il debug quando i prodotti di compilazione necessari non sono disponibili, ad esempio quando l'eseguibile viene distribuito in un altro computer. In un prompt dei comandi per gli sviluppatori è possibile usare lo strumento mspdbcmf.exe per generare un file PDB completo da questo file PDB limitato. In Visual Studio, usare le voci di menu Progetto o Compila per generare un file PDB completo da usare per il progetto o la soluzione.

L'opzione **/DEBUG:FULL** sposta tutte le informazioni sui simboli privati dai singoli prodotti di compilazione (librerie e file oggetto) in un unico file PDB. Può essere la parte del collegamento che richiede più tempo. Tuttavia, il file PDB completo può essere usato per eseguire il debug dell'eseguibile quando non sono disponibili altri prodotti di compilazione, ad esempio quando l'eseguibile viene distribuito.

L'opzione **/DEBUG:NONE** non genera un file PDB.

Se si specifica **/DEBUG** senza altre opzioni, per impostazione predefinita il linker usa **/DEBUG:FULL** per la riga di comando e le compilazioni di makefile, per le compilazioni di rilascio nell'IDE di Visual Studio IDE e per le compilazioni di debug e di rilascio in Visual Studio 2015 e versioni precedenti. A partire da Visual Studio 2017, l'impostazione predefinita del sistema di compilazione nell'IDE è **/DEBUG:FASTLINK** quando si specifica l'opzione **/DEBUG** per le compilazioni di debug. Le altre impostazioni predefinite rimangono invariate per garantire la compatibilità con le versioni precedenti.

L'opzione del compilatore [Compatibile C7](z7-zi-zi-debug-information-format.md) (/Z7) fa in modo che il compilatore lasci le informazioni di debug nei file con estensione obj. Si può anche usare l'opzione del compilatore [Database di programma](z7-zi-zi-debug-information-format.md) (/Zi) per archiviare le informazioni di debug in un file PDB per il file con estensione obj. Il linker cerca il file PDB dell'oggetto prima nel percorso assoluto scritto nel file con estensione obj e quindi nella directory che lo contiene. Non è possibile specificare al linker il nome file o il percorso del file PDB di un oggetto.

[/INCREMENTAL](incremental-link-incrementally.md) è implicito quando si specifica /DEBUG.

/DEBUG cambia le impostazioni predefinite dell'opzione [/OPT](opt-optimizations.md) da REF a NOREF e da ICF a NOICF, quindi se si vogliono usare le impostazioni predefinite originali è necessario specificare in modo esplicito /OPT:REF o /OPT:ICF.

Non è possibile creare un file EXE o una DLL che contenga le informazioni di debug. Le informazioni di debug vengono sempre inserite in un file con estensione obj o pdb.

### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Fare clic sulla cartella **Linker**.

1. Fare clic sulla pagina delle proprietà **Debug**.

1. Modificare la proprietà **Genera informazioni di debug** per abilitare la generazione del file PDB. Viene abilitata l'opzione /DEBUG:FASTLINK per impostazione predefinita in Visual Studio 2017 e versioni successive.

1. Modificare la proprietà **Genera file di database completo del programma** per abilitare /DEBUG:FULL per la generazione del file PDB completo per ogni compilazione incrementale.

### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice

1. Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.GenerateDebugInformation%2A>.

## <a name="see-also"></a>Vedi anche

[Informazioni di riferimento sul linker MSVC](linking.md)<br/>
[Opzioni del linker MSVC](linker-options.md)
