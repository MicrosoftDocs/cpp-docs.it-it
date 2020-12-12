---
description: 'Altre informazioni su: errore degli strumenti del linker LNK2008'
title: Errore degli strumenti del linker LNK2008
ms.date: 11/04/2016
f1_keywords:
- LNK2008
helpviewer_keywords:
- LNK2008
ms.assetid: bbcd83c5-c8ae-439e-a033-63643a5bb373
ms.openlocfilehash: 1897756ec6d46734604f243f617d9ce5a6bc375e
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97338487"
---
# <a name="linker-tools-error-lnk2008"></a>Errore degli strumenti del linker LNK2008

La destinazione della correzione non è allineata ' symbol_name '

Il collegamento ha rilevato una destinazione di correzione nel file oggetto che non è stato allineato correttamente.

Questo errore può essere causato dall'allineamento l'personalizzato (ad esempio, #pragma [Pack](../../preprocessor/pack.md)), dal modificatore [align](../../cpp/align-cpp.md) o dal codice della lingua assembly che modifica l'allineamento di l'.

Se il codice non usa uno dei precedenti, il problema potrebbe essere causato dal compilatore.
