---
title: Errore degli strumenti del linker LNK1352
description: Errore degli strumenti del linker LNK1352 si verifica quando viene eseguito un tentativo di merge di una sezione non supportata.
ms.date: 09/10/2019
f1_keywords:
- LNK1352
helpviewer_keywords:
- LNK1352
ms.openlocfilehash: 38f773bfd669529dfb1ada9c7bb59e6f0962c9c7
ms.sourcegitcommit: 3caf5261b3ea80d9cf14038c116ba981d655cd13
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/11/2019
ms.locfileid: "70908382"
---
# <a name="linker-tools-error-lnk1352"></a>Errore degli strumenti del linker LNK1352

> non è possibile unire '*section_name_1*' è*section_name_2*' in sezioni diverse

## <a name="remarks"></a>Note

Il linker ha rilevato un merge di sezione non consentito, perché *section_name_1* e *section_name_2* devono essere Uniti nella stessa sezione. Questo errore si verifica, ad esempio, se il linker rileva un tentativo di `.stls` unire la sezione `.tls` e la sezione in sezioni diverse.

### <a name="to-correct-this-error"></a>Per correggere l'errore

Per questo problema, controllare l'opzione [/merge](../../build/reference/merge-combine-sections.md) nella riga di comando del linker.

## <a name="see-also"></a>Vedere anche

[Errori e avvisi degli strumenti del linkers](../../error-messages/tool-errors/linker-tools-errors-and-warnings.md)
