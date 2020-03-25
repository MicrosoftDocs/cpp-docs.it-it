---
title: Errore degli strumenti del linker LNK1223
ms.date: 11/04/2016
f1_keywords:
- LNK1223
helpviewer_keywords:
- LNK1223
ms.assetid: c4728c36-daee-462f-a1c7-8733dcdec88e
ms.openlocfilehash: 9c9d4c7224a7e65775354a86bd34fa9ea1b074af
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80195032"
---
# <a name="linker-tools-error-lnk1223"></a>Errore degli strumenti del linker LNK1223

file danneggiato o non valido: il file contiene contributi pdata non validi

Per le piattaforme RISC che usano pdata, questo errore si verifica se il compilatore ha generato una sezione pdata con voci non ordinate.

Per risolvere il problema, provare a eseguire la compilazione senza [/GL (ottimizzazione dell'intero programma)](../../error-messages/tool-errors/linker-tools-error-lnk1223.md) abilitata. Corpi di funzione vuota possono inoltre causare questo errore in alcuni casi.
