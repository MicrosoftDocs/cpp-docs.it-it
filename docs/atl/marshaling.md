---
title: Marshaling
ms.date: 11/04/2016
helpviewer_keywords:
- marshaling, COM interop
- marshaling
- COM interfaces, marshaling
ms.assetid: 40644b0a-1106-4fc8-9dfb-9bee9915d825
ms.openlocfilehash: 83cf29fb45347b7bfcfc1644546684f074061d25
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81319343"
---
# <a name="marshaling"></a>Marshaling

La tecnica COM di marshalling consente alle interfacce esposte da un oggetto in un processo di essere utilizzate in un altro processo. Nel marshalling, COM fornisce codice (o utilizza il codice fornito dall'implementatore dell'interfaccia) sia per comprimere i parametri di un metodo in un formato che può essere spostato tra i processi (così come, attraverso la rete per i processi in esecuzione su altri computer) sia per decomprimere i parametri all'altra estremità. Analogamente, COM deve eseguire gli stessi passaggi sul ritorno dalla chiamata.

> [!NOTE]
> Il marshalling non è in genere necessario quando un'interfaccia fornita da un oggetto viene utilizzata nello stesso processo dell'oggetto. Tuttavia, il marshalling potrebbe essere necessario tra i thread.

## <a name="see-also"></a>Vedere anche

[Introduzione a COM](../atl/introduction-to-com.md)<br/>
[Dettagli Marshalling](/windows/win32/com/marshaling-details)
