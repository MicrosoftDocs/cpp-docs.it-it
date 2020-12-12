---
description: 'Altre informazioni su: Command-Line avviso D9041'
title: Avviso della riga di comando D9041
ms.date: 11/04/2016
f1_keywords:
- D9041
helpviewer_keywords:
- D9041
ms.assetid: ada8815f-4246-4e25-b57d-a7f16fa107cc
ms.openlocfilehash: d6226d4e5dd89176c0ed3722a9fd24e1244cacac
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97119762"
---
# <a name="command-line-warning-d9041"></a>Avviso della riga di comando D9041

> il valore '*option-value*' per '/*Option-Name*' non è valido; presumendo '*presupposto-value*'; aggiungere '/analyze ' alle opzioni della riga di comando quando si specifica questo avviso

È stato aggiunto un numero di avviso dell'analisi codice all' **`/wd`** **`/we`** opzione della riga di comando,, **`/wo`** o **`/wl`** senza specificare anche l' **`/analyze`** opzione della riga di comando. Per risolvere il problema, aggiungere l' **`/analyze`** opzione della riga di comando oppure rimuovere il numero di avviso non valido dall' **`/w`** opzione della riga di comando appropriata.

## <a name="example"></a>Esempio

L'esempio di riga di comando seguente genera l'avviso D9041:

```cmd
cl /EHsc /LD /wd6001 filename.cpp
```

Per risolvere il problema, aggiungere l' **`/analyze`** opzione della riga di comando. Se **`/analyze`** non è supportato nella versione del compilatore, rimuovere il numero di avviso non valido dall' **`/wd`** opzione.

## <a name="see-also"></a>Vedi anche

[Errori della riga di comando da D8000 a D9999](../../error-messages/tool-errors/command-line-errors-d8000-through-d9999.md)<br/>
[Opzioni del compilatore MSVC](../../build/reference/compiler-options.md)
