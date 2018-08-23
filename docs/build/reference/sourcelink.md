---
title: / SOURCELINK (Sourcelink includere file nel file PDB) | Microsoft Docs
ms.custom: ''
ms.date: 08/20/2018
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- /sourcelink
dev_langs:
- C++
helpviewer_keywords:
- /SOURCELINK linker option
- /SOURCELINK
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 876373b5646790f9f8de0042442b2ab56d9d2971
ms.sourcegitcommit: 7f3df9ff0310a4716b8136ca20deba699ca86c6c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/21/2018
ms.locfileid: "40242868"
---
# <a name="sourcelink-include-sourcelink-file-in-pdb"></a>/ SOURCELINK (Sourcelink includere file nel file PDB)

Specifica un file di configurazione SourceLink da includere nel file PDB generato dal linker.

## <a name="syntax"></a>Sintassi

> **/ SOURCELINK:**_nomefile_

## <a name="arguments"></a>Argomenti

*filename*  
Specifica un formato JSON file di configurazione che contiene un mapping semplice dei percorsi di file locali per gli URL in cui può essere recuperato il file di origine per la visualizzazione dal debugger. Per altre informazioni sul formato di questo file, vedere [Schema di origine collegamento JSON](https://github.com/dotnet/designs/blob/master/accepted/diagnostics/source-link.md#source-link-json-schema).

## <a name="remarks"></a>Note

SourceLink è un sistema indipendenti dal controllo del codice sorgente e del linguaggio per fornire l'origine di debug per i file binari. SourceLink è supportata per i file binari nativi C++, a partire da Visual Studio 2017 versione 15.8. Per una panoramica di SourceLink, vedere [collegamento all'origine](https://github.com/dotnet/designs/blob/master/accepted/diagnostics/source-link.md). Per informazioni su come usare SourceLink nei propri progetti e come generare il file SourceLink come parte del progetto, vedere [SourceLink con](https://github.com/dotnet/sourcelink#using-sourcelink).

### <a name="to-set-the-sourcelink-linker-option-in-visual-studio"></a>Per impostare l'opzione del linker /SOURCELINK in Visual Studio

1. Aprire il **pagine delle proprietà** finestra di dialogo per il progetto. Per altre informazioni, vedere [Uso delle proprietà del progetto](../../ide/working-with-project-properties.md).

1. Selezionare il **le proprietà di configurazione** > **Linker** > **della riga di comando** pagina delle proprietà.

1. Nel **opzioni aggiuntive** , aggiungere **/SOURCELINK:**_filename_ e quindi scegliere **OK** o **applica**per salvare le modifiche.

### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice  
  
- Questa opzione non ha un equivalente a livello di codice.

## <a name="see-also"></a>Vedere anche

[Impostazione delle opzioni del linker](../../build/reference/setting-linker-options.md)  
[Opzioni del linker](../../build/reference/linker-options.md)  
