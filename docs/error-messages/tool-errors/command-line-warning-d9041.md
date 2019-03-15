---
title: Avviso della riga di comando D9041
ms.date: 11/04/2016
f1_keywords:
- D9041
helpviewer_keywords:
- D9041
ms.assetid: ada8815f-4246-4e25-b57d-a7f16fa107cc
ms.openlocfilehash: 2311c61c4d661d58302308f06b08971f94cdacab
ms.sourcegitcommit: 8105b7003b89b73b4359644ff4281e1595352dda
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/14/2019
ms.locfileid: "57816308"
---
# <a name="command-line-warning-d9041"></a>Avviso della riga di comando D9041

valore non valido 'value' per '/Option'; Supponendo che "value"; aggiungere ' /ANALYZE ' alle opzioni della riga di comando quando si specifica questo avviso

È stato aggiunto un numero di avviso di analisi del codice per il **/wd**, **/we**, **/wo**, oppure **/wl** opzione della riga di comando senza specificare anche il **/ANALYZE** opzione della riga di comando. Per risolvere questo errore, aggiungere il **/ANALYZE** opzione della riga di comando oppure rimuovere il numero di avviso non valida dal appropriato **/w** opzione della riga di comando.

## <a name="example"></a>Esempio

Nell'esempio di riga di comando seguente genera l'avviso D9041:

```
cl /EHsc /LD /wd6001 filename.cpp
```

Per risolvere il problema, aggiungere il **/ANALYZE** opzione della riga di comando. Se **/ANALYZE** non è supportato nella versione del compilatore, rimuovere il numero di avviso non valida dalle **/wd** opzione.

## <a name="see-also"></a>Vedere anche

[Errori della riga di comando da D8000 a D9999](../../error-messages/tool-errors/command-line-errors-d8000-through-d9999.md)<br/>
[Opzioni del compilatore MSVC](../../build/reference/compiler-options.md)