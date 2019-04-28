---
title: Marshalling
ms.date: 11/04/2016
helpviewer_keywords:
- marshaling, COM interop
- marshaling
- COM interfaces, marshaling
ms.assetid: 40644b0a-1106-4fc8-9dfb-9bee9915d825
ms.openlocfilehash: 0661a4cdde0a3a875cf27221e884f6c65b9fea55
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62262398"
---
# <a name="marshaling"></a>Marshalling

La tecnica di COM del marshalling consente le interfacce esposte da un oggetto in un unico processo da usare in un altro processo. Effettuare il marshalling, COM fornisce il codice (o Usa il codice forniti dall'implementatore dell'interfaccia) per comprimere i parametri del metodo in un formato che può essere spostato tra processi (oltre che, attraverso la rete per i processi in esecuzione in altri computer) e la decompressione dei parametri a altra estremità. Analogamente, COM è necessario eseguire questi stessi passaggi del ritorno dalla chiamata.

> [!NOTE]
>  Marshalling in genere non è necessario quando un'interfaccia fornita da un oggetto viene usata nello stesso processo dell'oggetto. Tuttavia, il marshalling potrebbe essere necessario tra thread.

## <a name="see-also"></a>Vedere anche

[Introduzione a COM](../atl/introduction-to-com.md)<br/>
[Marshalling dei dettagli](/windows/desktop/com/marshaling-details)
