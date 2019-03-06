---
title: /WHOLEARCHIVE (Include tutti i file oggetto della raccolta)
ms.date: 11/04/2016
ms.assetid: ee92d12f-18af-4602-9683-d6223be62ac9
ms.openlocfilehash: cc260f139a9312bbac7fed34471481401db770d4
ms.sourcegitcommit: bff17488ac5538b8eaac57156a4d6f06b37d6b7f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/05/2019
ms.locfileid: "57412913"
---
# <a name="wholearchive-include-all-library-object-files"></a>/WHOLEARCHIVE (Include tutti i file oggetto della raccolta)

Impone al linker di includere tutti i file oggetto della libreria statica nel file eseguibile collegato.

## <a name="syntax"></a>Sintassi

> /WHOLEARCHIVE[:*library*]

## <a name="remarks"></a>Note

L'opzione /WHOLEARCHIVE impone al linker di includere ogni file di oggetto da una libreria statica specificata o se non viene specificata alcuna libreria, da tutte le librerie statiche specificate al collegamento di comandi. Per specificare l'opzione /WHOLEARCHIVE per più raccolte, è possibile usare più di uno switch /WHOLEARCHIVE nella riga di comando del linker. Per impostazione predefinita, il linker include i file oggetto nell'output collegato solo se si Esporta simboli a cui fanno riferimento altri file oggetto nel file eseguibile. L'opzione /WHOLEARCHIVE rende il linker consideri tutti i file di oggetto archiviati in una libreria statica come se fossero stati specificati singolarmente nella riga di comando del linker.

L'opzione /WHOLEARCHIVE è utilizzabile per esportare nuovamente tutti i simboli da una libreria statica. In questo modo è possibile assicurarsi che tutti i codice di libreria, le risorse e i metadati sono inclusi quando si crea un componente da più di una libreria statica. Se viene visualizzato l'avviso LNK4264 quando si crea una libreria statica che contiene i componenti Windows Runtime per l'esportazione, usare l'opzione /WHOLEARCHIVE durante il collegamento di quella libreria in un altro componente o applicazione.

L'opzione /WHOLEARCHIVE è stata introdotta in Visual Studio 2015 Update 2.

### <a name="to-set-this-linker-option-in-visual-studio"></a>Per impostare questa opzione del linker in Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per altre informazioni, vedere [Uso delle proprietà del progetto](../../ide/working-with-project-properties.md).

1. Selezionare il **riga di comando** pagina delle proprietà sotto **delle proprietà di configurazione**, **Linker**.

1. Aggiungere l'opzione /WHOLEARCHIVE per il **opzioni aggiuntive** casella di testo.

## <a name="see-also"></a>Vedere anche

[Impostazione delle opzioni del linker](../../build/reference/setting-linker-options.md)<br/>
[Opzioni del linker](../../build/reference/linker-options.md)
