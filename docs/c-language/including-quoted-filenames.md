---
title: Inclusione di nomi file tra virgolette
ms.date: 11/04/2016
ms.assetid: 789a047e-ea38-4c99-b71d-a2ad9c81daee
ms.openlocfilehash: 4083519d6f6b9b4d037b0c2998737f3a5062c6cf
ms.sourcegitcommit: f4be868c0d1d78e550fba105d4d3c993743a1f4b
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 02/12/2019
ms.locfileid: "56149869"
---
# <a name="including-quoted-filenames"></a>Inclusione di nomi file tra virgolette

**ANSI 3.8.2** Supporto di nomi tra virgolette per i file di origine che è possibile includere

Se si specifica un percorso completo e non ambiguo per il file di inclusione tra due set di virgolette doppie (" "), il preprocessore esegue la ricerca solo in tale specifica del percorso e ignora le directory standard.

Per i file di inclusione specificati come [#include](../preprocessor/hash-include-directive-c-cpp.md) "path-spec", la ricerca nelle directory inizia con le directory del file padre e quindi procede nelle directory dei file padre del padre. Pertanto, la ricerca inizia in base alla directory che contiene il file di origine attualmente in fase di elaborazione. Se non è presente un file padre del padre e il file non è stato trovato, la ricerca prosegue come se il nome file fosse stato racchiuso tra parentesi angolari.

## <a name="see-also"></a>Vedere anche

[Direttive di pre-elaborazione](../c-language/preprocessing-directives.md)
