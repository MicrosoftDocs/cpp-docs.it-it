---
title: Creazione di un file SBR
ms.date: 11/04/2016
helpviewer_keywords:
- SBR files
- BSCMAKE, input files
- .sbr files
- source browser files
- local symbols in browse information
- symbols
ms.assetid: bdb4b93c-a88a-441a-84fd-01087d03be25
ms.openlocfilehash: 6a2e685d33b108ce542fdc6e3e0565cc37299c1c
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62294070"
---
# <a name="creating-an-sbr-file"></a>Creazione di un file SBR

> [!WARNING]
> Sebbene BSCMAKE venga ancora installato con Visual Studio, non viene più usato dall'IDE. A partire da Visual Studio 2008, le informazioni di visualizzazione e sui simboli vengono automaticamente archiviate in un file sdf di SQL Server nella cartella della soluzione.

I file di input per BSCMAKE sono file SBR. Il compilatore crea un file sbr per ogni file oggetto (obj) venga compilato. Quando si compila o si aggiorna il file di informazioni, tutti i file sbr per il progetto devono essere disponibili sul disco.

Per creare un file sbr con tutte le informazioni possibili, specificare [/FR](fr-fr-create-dot-sbr-file.md).

Per creare un file sbr che non contiene simboli locali, specificare [/Fr](fr-fr-create-dot-sbr-file.md). Se i file SBR contengono simboli locali, è comunque possibile ometterli dal file BSC usando BSCMAKE [/El opzione](bscmake-options.md)`.`

È possibile creare un file sbr senza eseguire una compilazione completa. Ad esempio, è possibile specificare l'opzione /Zs al compilatore di eseguire un controllo della sintassi e comunque generare un file SBR se si specifica /FR o /Fr.

Il processo di compilazione può essere più efficiente se i file SBR prima vengono compressi per rimuovere le definizioni privo di riferimento. Il compilatore comprime automaticamente i file SBR.

## <a name="see-also"></a>Vedere anche

[Compilazione di un file BSC](building-a-dot-bsc-file.md)
