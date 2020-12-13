---
description: 'Altre informazioni su: principi di progettazione per le interfacce di raccolta ed enumeratore'
title: Progettazione di interfacce di raccolta ed enumeratore (ATL)
ms.date: 11/04/2016
helpviewer_keywords:
- enumerator interfaces
- collection interfaces
ms.assetid: ea19a39e-6333-41a1-be62-5435c236640e
ms.openlocfilehash: effd2cce775ef926befc89bb6b72a976d85bdf23
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97148005"
---
# <a name="design-principles-for-collection-and-enumerator-interfaces"></a>Principi di progettazione per le interfacce di raccolta ed enumeratore

Esistono diversi principi di progettazione alla base di ogni tipo di interfaccia:

- Un'interfaccia di raccolta consente l'accesso *casuale* a un *singolo* elemento della raccolta tramite il `Item` metodo, consente ai client di individuare il numero di elementi presenti nella raccolta tramite la `Count` proprietà e spesso consente ai client di aggiungere e rimuovere elementi.

- Un'interfaccia di enumeratore fornisce l'accesso *seriale* a *più* elementi in una raccolta, non consente al client di individuare il numero di elementi presenti nella raccolta (fino a quando l'enumeratore non interrompe la restituzione degli elementi) e non fornisce alcun modo per aggiungere o rimuovere elementi.

Ogni tipo di interfaccia svolge un ruolo diverso per fornire l'accesso agli elementi di una raccolta.

## <a name="see-also"></a>Vedi anche

[Raccolte ed enumeratori](../atl/atl-collections-and-enumerators.md)
