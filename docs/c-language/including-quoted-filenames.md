---
description: 'Altre informazioni su: inclusione di nomi file tra virgolette'
title: Inclusione di nomi file tra virgolette
ms.date: 11/04/2016
ms.assetid: 789a047e-ea38-4c99-b71d-a2ad9c81daee
ms.openlocfilehash: b07d8dc04106a330644c30bffd1e8f36fc81fb6d
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97137631"
---
# <a name="including-quoted-filenames"></a>Inclusione di nomi file tra virgolette

**ANSI 3.8.2** Supporto di nomi tra virgolette per i file di origine che è possibile includere

Se si specifica un percorso completo e non ambiguo per il file di inclusione tra due set di virgolette doppie (" "), il preprocessore esegue la ricerca solo in tale specifica del percorso e ignora le directory standard.

Per i file di inclusione specificati come [#include](../preprocessor/hash-include-directive-c-cpp.md) "path-spec", la ricerca nelle directory inizia con le directory del file padre e quindi procede nelle directory dei file padre del padre. Pertanto, la ricerca inizia in base alla directory che contiene il file di origine attualmente in fase di elaborazione. Se non è presente un file padre del padre e il file non è stato trovato, la ricerca prosegue come se il nome file fosse stato racchiuso tra parentesi angolari.

## <a name="see-also"></a>Vedi anche

[Direttive di pre-elaborazione](../c-language/preprocessing-directives.md)
