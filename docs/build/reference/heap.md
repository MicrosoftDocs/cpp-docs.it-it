---
title: /HEAP
description: L'opzione MSVC linker o EDITBIN)/HEAP imposta le dimensioni totali dell'heap e, facoltativamente, le dimensioni dei blocchi heap aggiuntivi.
ms.date: 07/07/2020
f1_keywords:
- /heap
helpviewer_keywords:
- heap allocation, setting heap size
- HEAP editbin option
- -HEAP editbin option
- /HEAP editbin option
ms.assetid: 6ce759b5-75b7-44ff-a5fd-3a83a0ba9a48
ms.openlocfilehash: 7976ae2927ca731c83fa42e87da182fee4df3d7c
ms.sourcegitcommit: e17cc8a478b51739d67304d7d82422967b35f716
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/08/2020
ms.locfileid: "86127836"
---
# `/HEAP`

Consente di impostare la dimensione in byte dell'heap. Questa opzione si applica solo ai file eseguibili.

## <a name="syntax"></a>Sintassi

> **`/HEAP:`**_`reserve`_\[**`,`**_`commit`_]

## <a name="remarks"></a>Osservazioni

L' *`reserve`* argomento specifica l'allocazione totale iniziale dell'heap nella memoria virtuale. Il **`/HEAP`** linker o l'opzione [editbin)](editbin-reference.md) arrotonda il valore specificato al multiplo più vicino di 4 byte. Per impostazione predefinita, la dimensione dell'heap è 1 MB.

L' *`commit`* argomento facoltativo è soggetto all'interpretazione del sistema operativo. In un sistema operativo Windows specifica la quantità iniziale di memoria fisica da allocare. Specifica inoltre la quantità di memoria da allocare quando l'heap viene espanso. La memoria virtuale di cui è stato eseguito il commit causa la riservatezza dello spazio nel file di paging. Un valore più alto *`commit`* consente al sistema di allocare memoria meno spesso quando l'app necessita di più spazio heap, ma aumenta i requisiti di memoria ed eventualmente la durata di avvio dell'app. Il *`commit`* valore deve essere minore o uguale al *`reserve`* valore. Il valore predefinito è 4 KB.

Specificare i *`reserve`* *`commit`* valori e in notazione decimale, esadecimale del linguaggio C o ottale. Ad esempio, un valore di 1 MB può essere specificato come 1048576 in decimal o come 0x100000 esadecimale o come 04000000 in ottale. I valori predefiniti sono equivalenti all'opzione **`/HEAP:1048576,4096`** .

### <a name="example"></a>Esempio

Questo comando di collegamento di esempio crea un *main.exe* eseguibile con riserva heap di 2 MB. Le espansioni iniziali heap e heap successivi sono disponibili in blocchi di 64 KB:

**`link /heap:0x200000,0x10000 main.obj`**

### <a name="to-set-this-linker-option-in-visual-studio"></a>Per impostare questa opzione del linker in Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per altre informazioni, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Selezionare la **Configuration Properties**  >  pagina delle proprietà del sistema del**linker**proprietà di configurazione  >  **System** .

1. Impostare le proprietà **dimensioni riserva heap** e **dimensioni commit heap** , quindi scegliere **OK** o **applica** per salvare le modifiche.

## <a name="see-also"></a>Vedere anche

[Opzioni di EDITBIN)](editbin-options.md)\
[Opzioni del linker MSVC](linker-options.md)
