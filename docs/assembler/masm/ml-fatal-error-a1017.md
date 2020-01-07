---
title: Errore ML irreversibile A1017
ms.date: 12/17/2019
ms.custom: error-reference
f1_keywords:
- A1017
helpviewer_keywords:
- A1017
ms.assetid: bef0b312-5431-4e5a-b637-c19919acf01b
ms.openlocfilehash: 523fed26afae5a88c5f154283487d3453a2e48c7
ms.sourcegitcommit: 0781c69b22797c41630601a176b9ea541be4f2a3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/20/2019
ms.locfileid: "75318059"
---
# <a name="ml-fatal-error-a1017"></a>Errore ML irreversibile A1017

**nome file di origine mancante**

ML non è riuscito a trovare un file da assemblare o passare al linker.

Questo errore viene generato quando si assegnano le opzioni della riga di comando di ML senza specificare un nome file su cui agire. Per assemblare i file che non hanno un'estensione ASM, usare l'opzione della riga di comando **/TA** .

Questo errore può essere generato anche richiamando ML senza parametri se la variabile di ambiente ML contiene opzioni della riga di comando.

## <a name="see-also"></a>Vedere anche

[Messaggi di errore ML](ml-error-messages.md)
