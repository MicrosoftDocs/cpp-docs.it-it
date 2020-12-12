---
description: Altre informazioni su:/MAP (genera file map)
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
ms.openlocfilehash: 28e3823099b4893dcf344a0b1aae99577d850821
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97176431"
---
# <a name="map-generate-mapfile"></a>/MAP (Genera file MAP)

```
/MAP[:filename]
```

## <a name="arguments"></a>Argomenti

*filename*<br/>
Nome specificato dall'utente per file map. Sostituisce il nome predefinito.

## <a name="remarks"></a>Commenti

L'opzione/MAP indica al linker di creare un file map.

Per impostazione predefinita, il linker denomina il file map con il nome di base del programma e l'estensione map. Il nome *file* facoltativo consente di eseguire l'override del nome predefinito per un file map.

Un file map è un file di testo che contiene le informazioni seguenti sul programma da collegare:

- Nome del modulo, che è il nome di base del file.

- Timestamp dell'intestazione del file di programma (non dal file system)

- Elenco di gruppi nel programma, con l'indirizzo iniziale di ogni gruppo (come *sezione*:*offset*), lunghezza, nome del gruppo e classe

- Elenco di simboli pubblici, con ogni indirizzo (come *sezione*:*offset*), il nome del simbolo, l'indirizzo flat e il file obj in cui è definito il simbolo

- Il punto di ingresso (come *sezione*:*offset*)

L'opzione [/MapInfo](mapinfo-include-information-in-mapfile.md) specifica informazioni aggiuntive da includere in file map.

### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Fare clic sulla cartella **Linker**.

1. Fare clic sulla pagina delle proprietà **debug** .

1. Modificare la proprietà **genera file di mappa** .

### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice

1. Controllare <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.GenerateMapFile%2A> e <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.MapFileName%2A>.

## <a name="see-also"></a>Vedi anche

[Informazioni di riferimento sul linker MSVC](linking.md)<br/>
[Opzioni del linker MSVC](linker-options.md)
