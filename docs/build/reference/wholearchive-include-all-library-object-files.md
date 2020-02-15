---
title: /WHOLEARCHIVE (include tutti i file oggetto libreria)
ms.date: 02/12/2020
ms.assetid: ee92d12f-18af-4602-9683-d6223be62ac9
ms.openlocfilehash: 95685c9c0dfde45c42449bbcad67228a0e21b36a
ms.sourcegitcommit: 8414cd91297dea88c480e208c7b5301db9972f19
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/14/2020
ms.locfileid: "77257533"
---
# <a name="wholearchive-include-all-library-object-files"></a>/WHOLEARCHIVE (include tutti i file oggetto libreria)

Impone al linker di includere tutti i file oggetto nella libreria statica nell'eseguibile collegato.

## <a name="syntax"></a>Sintassi

> \ **/WHOLEARCHIVE**
> **/WHOLEARCHIVE:** _libreria_

### <a name="arguments"></a>Argomenti

*libreria*\
Percorso facoltativo di una libreria statica. Il linker include tutti i file oggetto da questa libreria.

## <a name="remarks"></a>Osservazioni

L'opzione/WHOLEARCHIVE impone al linker di includere tutti i file oggetto da una libreria statica specificata o, se non è specificata alcuna libreria, da tutte le librerie statiche specificate per il comando di collegamento. Per specificare l'opzione/WHOLEARCHIVE per più librerie, è possibile usare più di un'opzione/WHOLEARCHIVE nella riga di comando del linker. Per impostazione predefinita, il linker include i file oggetto nell'output collegato solo se esportano simboli a cui fanno riferimento altri file oggetto nell'eseguibile. L'opzione/WHOLEARCHIVE fa in modo che il linker consideri tutti i file oggetto archiviati in una libreria statica come se fossero specificati singolarmente nella riga di comando del linker.

L'opzione/WHOLEARCHIVE può essere usata per esportare nuovamente tutti i simboli da una libreria statica. Ciò consente di assicurarsi che tutti i codici, le risorse e i metadati della libreria siano inclusi quando si crea un componente da più di una libreria statica. Se viene visualizzato l'avviso LNK4264 quando si crea una libreria statica che contiene Windows Runtime componenti per l'esportazione, usare l'opzione/WHOLEARCHIVE per collegare tale libreria a un altro componente o un'altra app.

L'opzione/WHOLEARCHIVE è stata introdotta in Visual Studio 2015 Update 2.

### <a name="to-set-this-linker-option-in-visual-studio"></a>Per impostare questa opzione del linker in Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per altre informazioni, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Selezionare la pagina delle proprietà **riga di comando** in **proprietà di configurazione**, **linker**.

1. Aggiungere l'opzione/WHOLEARCHIVE alla casella di testo **Opzioni aggiuntive** .

## <a name="see-also"></a>Vedere anche

[Informazioni di riferimento sul linker MSVC](linking.md)<br/>
[Opzioni del linker MSVC](linker-options.md)
