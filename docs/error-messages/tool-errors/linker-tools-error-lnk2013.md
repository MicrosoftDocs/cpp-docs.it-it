---
title: Errore degli strumenti del linker LNK2013
ms.date: 11/04/2016
f1_keywords:
- LNK2013
helpviewer_keywords:
- LNK2013
ms.assetid: 21408e2d-3f56-4d1f-a031-00df70785ed4
ms.openlocfilehash: 4d932a89f1b0bde27f6de2f84b2ed103dab1b1b0
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50620727"
---
# <a name="linker-tools-error-lnk2013"></a>Errore degli strumenti del linker LNK2013

overflow della correzione del tipo di correzione. 'Symbol name' di destinazione è compreso nell'intervallo

Il linker non è idoneo per gli indirizzi necessari offset l'istruzione specificata perché il simbolo di destinazione è troppo distante dalla posizione dell'istruzione.

È possibile risolvere questo problema creando più immagini o tramite il [/ORDER](../../build/reference/order-put-functions-in-order.md) opzione in modo che l'istruzione e destinazione più vicini tra loro.

Quando il nome del simbolo è un simbolo definito dall'utente (e non è un simbolo generato dal compilatore), è anche possibile provare le azioni per risolvere l'errore seguente:

- Modificare la funzione statica per essere non statico.

- Rinominare la sezione di codice contenente la funzione statica per corrispondere a quello del chiamante.

Usare `DUMPBIN /SYMBOLS`, per verificare se una funzione è statica.