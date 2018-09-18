---
title: Errore del compilatore C2026 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2026
dev_langs:
- C++
helpviewer_keywords:
- C2026
ms.assetid: 8e64b6e1-b967-479b-be97-d12dc4a8e389
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 055ac47d036a1027817aa6b3433bfe0e2e88570e
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46019549"
---
# <a name="compiler-error-c2026"></a>Errore del compilatore C2026

la stringa è troppo grande caratteri finali verranno troncati

La stringa è supera al limite di caratteri a byte singolo 16380.

Prima della concatenazione delle stringhe adiacenti, una stringa non può superare 16380 caratteri a byte singolo.

Una stringa Unicode di questa lunghezza di circa la metà anche genera questo errore.

Se si dispone di una stringa definita come indicato di seguito, viene generato C2026:

```
char sz[] =
"\
imagine a really, really \
long string here\
";
```

È possibile suddividere la come indicato di seguito:

```
char sz[] =
"\
imagine a really, really "
"long string here\
";
```

È possibile archiviare i valori letterali stringa eccezionalmente grandi (32 KB o superiore) in una risorsa personalizzata o un file esterno. Visualizzare [creazione di una nuova risorsa personalizzata o dati](../../windows/creating-a-new-custom-or-data-resource.md) per altre informazioni.