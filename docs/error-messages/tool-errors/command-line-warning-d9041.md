---
title: Avviso della riga di comando D9041
ms.date: 11/04/2016
f1_keywords:
- D9041
helpviewer_keywords:
- D9041
ms.assetid: ada8815f-4246-4e25-b57d-a7f16fa107cc
ms.openlocfilehash: 7c685a1ca3195ad4ab52bab8b5d32b1a51534b24
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80196575"
---
# <a name="command-line-warning-d9041"></a>Avviso della riga di comando D9041

valore ' value ' non valido per '/opzione '; si presuppone ' value '; aggiungere '/analyze ' alle opzioni della riga di comando quando si specifica questo avviso

È stato aggiunto un numero di avviso di analisi del codice all'opzione della riga di comando **/WD.** , **/we**, **/wo**o **/WL** senza specificare anche l'opzione della riga di comando **/Analyze** . Per risolvere il problema, aggiungere l'opzione della riga di comando **/Analyze** oppure rimuovere il numero di avviso non valido dall'opzione della riga di comando **/w** appropriata.

## <a name="example"></a>Esempio

L'esempio di riga di comando seguente genera l'avviso D9041:

```
cl /EHsc /LD /wd6001 filename.cpp
```

Per risolvere il problema, aggiungere l'opzione della riga di comando **/Analyze** . Se **/Analyze** non è supportato nella versione del compilatore, rimuovere il numero di avviso non valido dall'opzione **/WD.** .

## <a name="see-also"></a>Vedere anche

[Errori della riga di comando da D8000 a D9999](../../error-messages/tool-errors/command-line-errors-d8000-through-d9999.md)<br/>
[Opzioni del compilatore MSVC](../../build/reference/compiler-options.md)
