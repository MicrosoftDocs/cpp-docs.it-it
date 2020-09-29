---
title: Errore del compilatore C2026
description: Descrive l'errore del compilatore Microsoft C/C++ C2026, le sue cause e come risolverli.
ms.date: 09/25/2020
f1_keywords:
- C2026
helpviewer_keywords:
- C2026
ms.assetid: 8e64b6e1-b967-479b-be97-d12dc4a8e389
ms.openlocfilehash: 39195568f964f07c6131fa43ef4a0f06121795da
ms.sourcegitcommit: 94893973211d0b254c8bcdcf0779997dcc136b0c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/28/2020
ms.locfileid: "91414048"
---
# <a name="compiler-error-c2026"></a>Errore del compilatore C2026

> stringa troppo grande, caratteri finali troncati

La lunghezza della stringa è superiore al limite di 16380 caratteri a byte singolo.

## <a name="remarks"></a>Osservazioni

Prima che le stringhe adiacenti vengano concatenate, una stringa non può contenere più di 16380 caratteri a byte singolo.

Questo errore viene generato anche da una stringa Unicode pari a circa una metà di tale lunghezza.

## <a name="example"></a>Esempio

Se è presente una stringa definita come segue, viene generato C2026:

```C
char sz[] =
"\
imagine a really, really \
long string here\
";
```

È possibile suddividerlo come segue:

```C
char sz[] =
"\
imagine a really, really "
"long string here\
";
```

È possibile archiviare valori letterali stringa eccezionalmente grandi (32K o più) in una risorsa personalizzata o in un file esterno. Per ulteriori informazioni, vedere [per creare una nuova risorsa personalizzata o di dati](../../windows/binary-editor.md#to-create-a-new-custom-or-data-resource).
