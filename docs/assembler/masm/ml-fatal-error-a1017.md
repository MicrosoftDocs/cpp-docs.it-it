---
description: 'Altre informazioni su: ML errore irreversibile A1017'
title: Errore ML irreversibile A1017
ms.date: 12/17/2019
ms.custom: error-reference
f1_keywords:
- A1017
helpviewer_keywords:
- A1017
ms.assetid: bef0b312-5431-4e5a-b637-c19919acf01b
ms.openlocfilehash: f15896e18721ef149cabd178bca433844a6edef5
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97129441"
---
# <a name="ml-fatal-error-a1017"></a>Errore ML irreversibile A1017

**nome file di origine mancante**

ML non è riuscito a trovare un file da assemblare o passare al linker.

Questo errore viene generato quando si assegnano le opzioni della riga di comando di ML senza specificare un nome file su cui agire. Per assemblare i file che non hanno un'estensione ASM, usare l'opzione della riga di comando **/TA** .

Questo errore può essere generato anche richiamando ML senza parametri se la variabile di ambiente ML contiene opzioni della riga di comando.

## <a name="see-also"></a>Vedi anche

[Messaggi di errore ML](ml-error-messages.md)
