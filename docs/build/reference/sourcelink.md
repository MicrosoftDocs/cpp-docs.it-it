---
title: / SOURCELINK (Sourcelink includere file nel file PDB)
ms.date: 08/20/2018
f1_keywords:
- /sourcelink
helpviewer_keywords:
- /SOURCELINK linker option
- /SOURCELINK
ms.openlocfilehash: 1643727d8f556a905eccbfa9626d1aaa8ea63cbf
ms.sourcegitcommit: 8105b7003b89b73b4359644ff4281e1595352dda
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/14/2019
ms.locfileid: "57816607"
---
# <a name="sourcelink-include-source-link-file-in-pdb"></a>/ SOURCELINK (file includono il collegamento all'origine nel file PDB)

Specifica un file di configurazione di collegamento all'origine da includere nel file PDB generato dal linker.

## <a name="syntax"></a>Sintassi

> **/ SOURCELINK:**_nomefile_

## <a name="arguments"></a>Argomenti

*filename*<br/>
Specifica un formato JSON file di configurazione che contiene un mapping semplice dei percorsi di file locali per gli URL in cui può essere recuperato il file di origine per la visualizzazione dal debugger. Per altre informazioni sul formato di questo file, vedere [Schema di origine collegamento JSON](https://github.com/dotnet/designs/blob/master/accepted/diagnostics/source-link.md#source-link-json-schema).

## <a name="remarks"></a>Note

Collegamento all'origine è un sistema indipendenti dal controllo del codice sorgente e del linguaggio per fornire l'origine di debug per i file binari. Collegamento di origine è supportato per i file binari nativi C++, a partire da Visual Studio 2017 versione 15.8. Per una panoramica del collegamento all'origine, vedere [collegamento all'origine](https://github.com/dotnet/designs/blob/master/accepted/diagnostics/source-link.md). Per informazioni su come usare il collegamento all'origine dei progetti e come generare il file SourceLink come parte del progetto, vedere [usando il collegamento all'origine](https://github.com/dotnet/sourcelink#using-source-link-in-c-projects).

### <a name="to-set-the-sourcelink-linker-option-in-visual-studio"></a>Per impostare l'opzione del linker /SOURCELINK in Visual Studio

1. Aprire il **pagine delle proprietà** finestra di dialogo per il progetto. Per altre informazioni, vedere [le proprietà del compilatore e compilazione impostare C++ in Visual Studio](../working-with-project-properties.md).

1. Selezionare il **le proprietà di configurazione** > **Linker** > **della riga di comando** pagina delle proprietà.

1. Nel **opzioni aggiuntive** , aggiungere **/SOURCELINK:**_filename_ e quindi scegliere **OK** o **applica**per salvare le modifiche.

### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice

- Questa opzione non ha un equivalente a livello di codice.

## <a name="see-also"></a>Vedere anche

[Riferimento del linker MSVC](linking.md)<br/>
[Opzioni del Linker MSVC](linker-options.md)
