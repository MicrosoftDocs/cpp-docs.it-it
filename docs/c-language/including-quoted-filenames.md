---
title: Inclusione di nomi file tra virgolette
ms.date: 11/04/2016
ms.assetid: 789a047e-ea38-4c99-b71d-a2ad9c81daee
ms.openlocfilehash: 11beaa3a91f476348c57b12ab3febad7cb9c89fc
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50656716"
---
# <a name="including-quoted-filenames"></a>Inclusione di nomi file tra virgolette

**ANSI 3.8.2** Supporto di nomi tra virgolette per i file di origine che è possibile includere

Se si specifica un percorso completo e non ambiguo per il file di inclusione tra due set di virgolette doppie (" "), il preprocessore esegue la ricerca solo in tale specifica del percorso e ignora le directory standard.

Per i file di inclusione specificati come [#include](../preprocessor/hash-include-directive-c-cpp.md) "path-spec", la ricerca nelle directory inizia con le directory del file padre e quindi procede nelle directory dei file padre del padre. Pertanto, la ricerca inizia in base alla directory che contiene il file di origine attualmente in fase di elaborazione. Se non è presente un file padre del padre e il file non è stato trovato, la ricerca prosegue come se il nome file fosse stato racchiuso tra parentesi angolari.

## <a name="see-also"></a>Vedere anche

[Direttive di pre-elaborazione](../c-language/preprocessing-directives.md)