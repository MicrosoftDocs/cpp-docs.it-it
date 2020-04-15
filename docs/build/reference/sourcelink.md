---
title: /SOURCELINK (Include file Sourcelink in PDB)
description: Guida di riferimento per l'opzione del linker /SOURCELINK in Microsoft C.
ms.date: 03/31/2020
f1_keywords:
- /sourcelink
helpviewer_keywords:
- /SOURCELINK linker option
- /SOURCELINK
ms.openlocfilehash: bde55c401e17f7b3c84ffcdad29dda2badcc260b
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81336061"
---
# <a name="sourcelink-include-source-link-file-in-pdb"></a>/SOURCELINK (Includi file di collegamento di origine in PDB)

Specifica un file di configurazione collegamento di origine da includere nel file PDB generato dal linker.

## <a name="syntax"></a>Sintassi

> **`/SOURCELINK:`**_`filename`_

## <a name="arguments"></a>Argomenti

*Filename*<br/>
Specifica un file di configurazione in formato JSON che contiene un semplice mapping dei percorsi di file locali agli URL per i file di origine da visualizzare nel debugger. Per altre informazioni sul formato di questo file, vedere [Schema JSON](https://github.com/dotnet/designs/blob/master/accepted/2020/diagnostics/source-link.md#source-link-json-schema)del collegamento di origine .

## <a name="remarks"></a>Osservazioni

Collegamento di origine è un sistema indipendente dal linguaggio e dal controllo del codice sorgente per fornire il debug di origine per i file binari. Collegamento di origine è supportato per i file binari c'è nativo a partire da Visual Studio 2017 versione 15.8. Per una panoramica di Collegamento di origine, vedere [Collegamento di origine](https://github.com/dotnet/designs/blob/master/accepted/2020/diagnostics/source-link.md). Per informazioni su come utilizzare Collegamento origine nei progetti e su come generare il file SourceLink come parte del progetto, vedere Utilizzo del [collegamento di origine](https://github.com/dotnet/sourcelink#using-source-link-in-c-projects).

### <a name="to-set-the-sourcelink-linker-option-in-visual-studio"></a>Per impostare l'opzione del linker /SOURCELINK in Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** per il progetto. Per altre informazioni, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Selezionare la pagina delle proprietà**Riga di comando** del**linker** >  **delle proprietà** > di configurazione.

1. Nella casella **Opzioni** aggiuntive **`/SOURCELINK:`** _`filename`_ aggiungere e quindi scegliere **OK** o **Applica** per salvare le modifiche.

### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice

- Questa opzione non ha un equivalente a livello di codice.

## <a name="see-also"></a>Vedere anche

[Informazioni di riferimento sul linker MSVC](linking.md)<br/>
[Opzioni del linker MSVC](linker-options.md)
