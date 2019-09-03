---
title: Convenzioni documento
ms.date: 08/29/2019
helpviewer_keywords:
- preprocessor
- preprocessor, conventions
ms.assetid: 469ce448-dc6c-4d0e-ba2b-e2e7a10155e1
ms.openlocfilehash: bb826b879b71edd3631c11a717320cee51c87175
ms.sourcegitcommit: 6e1c1822e7bcf3d2ef23eb8fac6465f88743facf
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/03/2019
ms.locfileid: "70220367"
---
# <a name="document-conventions"></a>Convenzioni documento

Le convenzioni utilizzano gli attributi del tipo di carattere differenti per i diversi componenti della sintassi. I simboli e i caratteri sono i seguenti:

| Attributo | Descrizione |
|---------------|-----------------|
| *non terminale* | Il tipo corsivo indica non terminali. |
| **#include** | I terminali in grassetto sono parole riservate letterali e simboli che devono essere inseriti come indicato. I caratteri in questo contesto fanno sempre distinzione tra maiuscole e minuscole. |
| <sub>opt</sub> | I non terminali seguiti da <sub>opt</sub> sono sempre facoltativi.|
| carattere tipografico predefinito | I caratteri nel set descritto o elencato in questo carattere tipografico possono essere utilizzati come terminali nelle istruzioni. |

I due punti ( **:** ) che seguono un non terminale introducono la definizione di questo. Le definizioni alternative sono elencate in righe separate.

Nei blocchi di sintassi del codice, questi simboli nel carattere tipografico predefinito hanno un significato speciale:

| Simbolo | DESCRIZIONE |
|---|---|
| \[ ] | Le parentesi quadre racchiudono un elemento facoltativo. |
| { \| } | Le parentesi graffe racchiudono elementi alternativi, separati da barre verticali. |
| ... | Indica che il modello di elemento precedente può essere ripetuto. |

Nei blocchi di sintassi del codice, le`,`virgole ()`.`, i punti (), i`;`punti e virgola (`:`), i due punti`( )`(), le parentesi (`"`), le virgolette doppie (`'`) e le virgolette singole () sono valori letterali.

## <a name="see-also"></a>Vedere anche

[Riepilogo della grammatica (CC++/)](../preprocessor/grammar-summary-c-cpp.md)
