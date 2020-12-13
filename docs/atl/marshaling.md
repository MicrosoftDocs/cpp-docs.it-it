---
description: 'Altre informazioni su: marshalling'
title: Marshaling
ms.date: 11/04/2016
helpviewer_keywords:
- marshaling, COM interop
- marshaling
- COM interfaces, marshaling
ms.assetid: 40644b0a-1106-4fc8-9dfb-9bee9915d825
ms.openlocfilehash: 2931bd9ab5e2fb8376ced44dd519a6de107be88e
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97152633"
---
# <a name="marshaling"></a>Marshaling

La tecnica COM di marshalling consente alle interfacce esposte da un oggetto in un processo di essere utilizzate in un altro processo. Nel marshalling, COM fornisce il codice (o usa il codice fornito dall'implementatore di interfaccia) per comprimere i parametri di un metodo in un formato che può essere spostato tra i processi (oltre che attraverso la rete per i processi in esecuzione su altri computer) e per decomprimere tali parametri all'altra estremità. In modo analogo, COM deve eseguire gli stessi passaggi sul ritorno dalla chiamata.

> [!NOTE]
> Il marshalling non è in genere necessario quando un'interfaccia fornita da un oggetto viene utilizzata nello stesso processo dell'oggetto. Tuttavia, potrebbe essere necessario effettuare il marshalling tra thread.

## <a name="see-also"></a>Vedi anche

[Introduzione a COM](../atl/introduction-to-com.md)<br/>
[Dettagli del marshalling](/windows/win32/com/marshaling-details)
