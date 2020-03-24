---
title: Errore degli strumenti del linker LNK2008
ms.date: 11/04/2016
f1_keywords:
- LNK2008
helpviewer_keywords:
- LNK2008
ms.assetid: bbcd83c5-c8ae-439e-a033-63643a5bb373
ms.openlocfilehash: c7794d09f7eeb9dceba7098ca7af90ccf2eeccad
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80194824"
---
# <a name="linker-tools-error-lnk2008"></a>Errore degli strumenti del linker LNK2008

La destinazione della correzione non è allineata ' symbol_name '

Il collegamento ha rilevato una destinazione di correzione nel file oggetto che non è stato allineato correttamente.

Questo errore può essere causato dall'allineamento l'personalizzato (ad esempio, #pragma [Pack](../../preprocessor/pack.md)), dal modificatore [align](../../cpp/align-cpp.md) o dal codice della lingua assembly che modifica l'allineamento di l'.

Se il codice non usa uno dei precedenti, il problema potrebbe essere causato dal compilatore.
