---
description: 'Altre informazioni su: creazione di un. File SBR'
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
ms.openlocfilehash: 7f3e056418fe1716dc0130330b09c369e9bdceff
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97196919"
---
# <a name="creating-an-sbr-file"></a>Creazione di un file SBR

> [!WARNING]
> Sebbene BSCMAKE venga ancora installato con Visual Studio, non viene più usato dall'IDE. A partire da Visual Studio 2008, le informazioni di visualizzazione e sui simboli vengono automaticamente archiviate in un file sdf di SQL Server nella cartella della soluzione.

I file di input per BSCMAKE sono file SBR. Il compilatore crea un file SBR per ogni file oggetto (. obj) compilato. Quando si compila o si aggiorna il file di informazioni di visualizzazione, tutti i file SBR per il progetto devono essere disponibili su disco.

Per creare un file SBR con tutte le informazioni possibili, specificare [/fr](fr-fr-create-dot-sbr-file.md).

Per creare un file SBR che non contiene simboli locali, specificare [/fr](fr-fr-create-dot-sbr-file.md). Se i file SBR contengono simboli locali, è comunque possibile ometterli dal file BSC usando l' [opzione/El](bscmake-options.md) di BSCMAKE`.`

È possibile creare un file SBR senza eseguire una compilazione completa. Ad esempio, è possibile specificare l'opzione/ZS per il compilatore per eseguire un controllo della sintassi e generare comunque un file SBR se si specifica/FR o/fr.

Il processo di compilazione può essere più efficiente se i file SBR vengono prima compressi per rimuovere le definizioni senza riferimenti. Il compilatore comprime automaticamente i file SBR.

## <a name="see-also"></a>Vedi anche

[Compilazione di un oggetto. File BSC](building-a-dot-bsc-file.md)
