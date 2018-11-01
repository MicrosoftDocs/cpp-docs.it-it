---
title: /MAP (Genera file MAP)
ms.date: 11/04/2016
f1_keywords:
- /map
- VC.Project.VCLinkerTool.MapFileName
- VC.Project.VCLinkerTool.GenerateMapFile
helpviewer_keywords:
- mapfiles, creating linker
- generate mapfile linker option
- mapfile linker option
- mapfiles, information about program being linked
- MAP linker option
- -MAP linker option
- mapfiles, specifying file name
- /MAP linker option
ms.assetid: 9ccce53d-4e36-43da-87b0-7603ddfdea63
ms.openlocfilehash: 8ff2a8f54caa54247050c607004ed328c0d1b11d
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50436454"
---
# <a name="map-generate-mapfile"></a>/MAP (Genera file MAP)

```
/MAP[:filename]
```

## <a name="arguments"></a>Argomenti

*filename*<br/>
Un nome specificato dall'utente per il file di mapping. Sostituisce il nome predefinito.

## <a name="remarks"></a>Note

L'opzione /MAP indica al linker di creare un file di mapping.

Per impostazione predefinita, il linker assegna un nome file di mapping con il nome base del programma e dall'estensione Map. L'opzione facoltativa *filename* consente di ignorare il nome predefinito per un file di mapping.

Un file di mapping è un file di testo che contiene le informazioni seguenti sul programma da collegare:

- Il nome del modulo, ovvero il nome del file base

- Timestamp dall'intestazione del file di programma (non dal file system)

- Un elenco di gruppi nel programma, con l'indirizzo iniziale di ogni gruppo (come *sezione*:*offset*), lunghezza e nome del gruppo di classe

- Un elenco di simboli pubblici, con ogni indirizzo (come *sezione*:*offset*), nome, indirizzo di tipo flat e file con estensione obj in cui è definito il simbolo di simboli

- Il punto di ingresso (come *sezione*:*offset*)

Il [/MAPINFO](../../build/reference/mapinfo-include-information-in-mapfile.md) opzione specifica informazioni aggiuntive da includere nel file di mapping.

### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [impostazione delle proprietà dei progetti Visual C++](../../ide/working-with-project-properties.md).

1. Scegliere il **Linker** cartella.

1. Scegliere il **Debug** pagina delle proprietà.

1. Modificare il **genera File Map** proprietà.

### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice

1. Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.GenerateMapFile%2A> e <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.MapFileName%2A>.

## <a name="see-also"></a>Vedere anche

[Impostazione delle opzioni del linker](../../build/reference/setting-linker-options.md)<br/>
[Opzioni del linker](../../build/reference/linker-options.md)