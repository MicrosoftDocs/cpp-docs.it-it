---
title: Errore del compilatore C2026
ms.date: 11/04/2016
f1_keywords:
- C2026
helpviewer_keywords:
- C2026
ms.assetid: 8e64b6e1-b967-479b-be97-d12dc4a8e389
ms.openlocfilehash: 9747b1edadc76ceeb502b2c6fd03496b91769f5a
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80208065"
---
# <a name="compiler-error-c2026"></a>Errore del compilatore C2026

stringa troppo grande, caratteri finali troncati

La lunghezza della stringa è superiore al limite di 16380 caratteri a byte singolo.

Prima di concatenare le stringhe adiacenti, una stringa non può contenere più di 16380 caratteri a byte singolo.

Questo errore viene generato anche da una stringa Unicode pari a circa una metà di tale lunghezza.

Se è presente una stringa definita come segue, viene generato C2026:

```
char sz[] =
"\
imagine a really, really \
long string here\
";
```

È possibile suddividerlo come segue:

```
char sz[] =
"\
imagine a really, really "
"long string here\
";
```

È possibile archiviare valori letterali stringa eccezionalmente grandi (32K o più) in una risorsa personalizzata o in un file esterno. Per ulteriori informazioni, vedere [creazione di una nuova risorsa personalizzata o di dati](../../windows/creating-a-new-custom-or-data-resource.md) .
