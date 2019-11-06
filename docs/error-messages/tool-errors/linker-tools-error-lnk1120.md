---
title: Errore degli strumenti del linker LNK1120
description: Viene descritto l'errore del linker LNK1120, che indica il numero di errori di simbolo esterno non risolto nel collegamento.
ms.date: 10/31/2019
f1_keywords:
- LNK1120
helpviewer_keywords:
- LNK1120
ms.assetid: 56aa7d36-921f-4daf-b44d-cca0d4fb1b51
ms.openlocfilehash: 21a1ede07a69cdc065dd897715e243115529600d
ms.sourcegitcommit: 0cfc43f90a6cc8b97b24c42efcf5fb9c18762a42
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/05/2019
ms.locfileid: "73626573"
---
# <a name="linker-tools-error-lnk1120"></a>Errore degli strumenti del linker LNK1120

> *numeri* esterni non risolti

Errore LNK1120 segnala il numero di errori di [simboli esterni non risolti](linker-tools-error-lnk2001.md#what-is-an-unresolved-external-symbol) nel collegamento corrente.

Ogni simbolo esterno non risolto viene innanzitutto segnalato da un errore [LNK2001](linker-tools-error-lnk2001.md) o [LNK2019](linker-tools-error-lnk2019.md) . Il messaggio LNK1120 viene visualizzato per ultimo e Mostra il numero di errori dei simboli non risolti.

> [!IMPORTANT]
> **Non è necessario correggere l'errore.** Questo errore si verifica quando si correggono tutti gli errori del linker LNK2001 e LNK2019 prima nell'output di compilazione. Correggere sempre i problemi a partire dal primo errore segnalato. Gli errori successivi potrebbero essere causati da quelli precedenti e scomparire quando gli errori precedenti sono corretti.
