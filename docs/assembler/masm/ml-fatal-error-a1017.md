---
title: Errore ML irreversibile A1017
ms.date: 08/30/2018
ms.custom: error-reference
f1_keywords:
- A1017
helpviewer_keywords:
- A1017
ms.assetid: bef0b312-5431-4e5a-b637-c19919acf01b
ms.openlocfilehash: 6fb0835cca135fc994866dc2453734d7b3012a64
ms.sourcegitcommit: a6d63c07ab9ec251c48bc003ab2933cf01263f19
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/05/2019
ms.locfileid: "74856826"
---
# <a name="ml-fatal-error-a1017"></a>Errore ML irreversibile A1017

**nome file di origine mancante**

ML non è riuscito a trovare un file da assemblare o passare al linker.

Questo errore viene generato quando si assegnano le opzioni della riga di comando di ML senza specificare un nome file su cui agire. Per assemblare i file che non hanno un'estensione ASM, usare l'opzione della riga di comando **/TA** .

Questo errore può essere generato anche richiamando ML senza parametri se la variabile di ambiente ML contiene opzioni della riga di comando.

## <a name="see-also"></a>Vedere anche

[Messaggi di errore ML](../../assembler/masm/ml-error-messages.md)<br/>