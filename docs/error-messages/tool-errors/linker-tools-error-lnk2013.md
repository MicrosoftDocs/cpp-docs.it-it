---
description: 'Altre informazioni su: errore degli strumenti del linker LNK2013'
title: Errore degli strumenti del linker LNK2013
ms.date: 11/04/2016
f1_keywords:
- LNK2013
helpviewer_keywords:
- LNK2013
ms.assetid: 21408e2d-3f56-4d1f-a031-00df70785ed4
ms.openlocfilehash: 51b754e19656ad8ec7ef1686605086b6e4a41853
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97338457"
---
# <a name="linker-tools-error-lnk2013"></a>Errore degli strumenti del linker LNK2013

overflow della correzione del tipo di correzione. La destinazione ' symbol name ' non è compresa nell'intervallo

Il linker non può contenere l'indirizzo o l'offset necessario nell'istruzione specificata perché il simbolo di destinazione è troppo lontano dalla posizione dell'istruzione.

Per risolvere il problema, è possibile creare più immagini o utilizzare l'opzione [/Order](../../build/reference/order-put-functions-in-order.md) , in modo che l'istruzione e la destinazione siano più vicine.

Quando il nome del simbolo è un simbolo definito dall'utente (e non un simbolo generato dal compilatore), è anche possibile provare a eseguire le azioni seguenti per risolvere l'errore:

- Modificare la funzione statica in modo che sia non statica.

- Rinominare la sezione di codice che contiene la funzione statica in modo che corrisponda al chiamante.

Usare `DUMPBIN /SYMBOLS` per verificare se una funzione è statica.
