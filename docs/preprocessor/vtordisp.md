---
description: Altre informazioni su vtordisp pragma in Microsoft C++
title: vtordisp pragma
ms.date: 01/22/2021
f1_keywords:
- vc-pragma.vtordisp
- vtordisp_CPP
helpviewer_keywords:
- pragma, vtordisp
- vtordisp pragma
no-loc:
- pragma
ms.openlocfilehash: f8956aa892aae0472001b007137e6f978d91500e
ms.sourcegitcommit: a26a66a3cf479e0e827d549a9b850fad99b108d1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/22/2021
ms.locfileid: "98713142"
---
# <a name="vtordisp-no-locpragma"></a>`vtordisp` pragma

Controlla l'aggiunta del membro di `vtordisp` spostamento di costruzione/distruzione nascosto. `vtordisp` pragma È specifico di C++.

## <a name="syntax"></a>Sintassi

> **`#pragma vtordisp(`**[ **`push,`** ] *n***`)`**\
> **`#pragma vtordisp(pop)`**\
> **`#pragma vtordisp()`**\
> **`#pragma vtordisp(`** [ **`push,`** ] { **`on`** | **`off`** } **`)`**

### <a name="parameters"></a>Parametri

**`push`**\
Inserisce l'impostazione corrente nello `vtordisp` stack interno del compilatore e imposta la nuova impostazione su `vtordisp` *n*.  Se *n* non è specificato, l' `vtordisp` impostazione corrente è invariata.

**`pop`**\
Rimuove il record superiore dallo stack interno del compilatore e ripristina l' `vtordisp` impostazione sul valore rimosso.

*n*\
Specifica il nuovo valore per l' `vtordisp` impostazione. I valori possibili sono **`0`** , **`1`** o **`2`** , corrispondenti alle **`/vd0`** Opzioni del **`/vd1`** compilatore, e **`/vd2`** . Per ulteriori informazioni, vedere [ `/vd` (Disabilita spostamenti costruzione)](../build/reference/vd-disable-construction-displacements.md).

**`on`**\
Equivalente a `#pragma vtordisp(1)`.

**`off`**\
Equivalente a `#pragma vtordisp(0)`.

## <a name="remarks"></a>Osservazioni

**`vtordisp`** pragma È applicabile solo al codice che usa le basi virtuali. Se una classe derivata esegue l'override di una funzione virtuale che eredita da una classe base virtuale e se un costruttore o un distruttore per la classe derivata chiama tale funzione utilizzando un puntatore alla classe base virtuale, il compilatore potrebbe introdurre campi nascosti aggiuntivi `vtordisp` nelle classi con basi virtuali.

**`vtordisp`** pragma Influiscono sul layout delle classi che lo seguono. Le **`/vd0`** **`/vd1`** Opzioni del compilatore, e **`/vd2`** specificano lo stesso comportamento per i moduli completi. Specifica **`0`** o **`off`** Disattiva i membri nascosti `vtordisp` . Disattivare **`vtordisp`** solo se non è possibile che i costruttori e i distruttori della classe chiamino funzioni virtuali sull'oggetto a cui fa riferimento il **`this`** puntatore.

**`1`** **`on`** Se si specifica o, il valore predefinito Abilita i `vtordisp` membri nascosti laddove sono necessari.

**`2`** La specifica di Abilita i `vtordisp` membri nascosti per tutte le basi virtuali con funzioni virtuali. `#pragma vtordisp(2)` potrebbe essere necessario per garantire le prestazioni corrette di **`dynamic_cast`** su un oggetto costruito parzialmente. Per altre informazioni, vedere [Avviso del compilatore (livello 1) C4436](../error-messages/compiler-warnings/compiler-warning-level-1-c4436.md).

`#pragma vtordisp()`, senza argomenti, ripristina l'impostazione iniziale dell' `vtordisp` impostazione.

```cpp
#pragma vtordisp(push, 2)
class GetReal : virtual public VBase { ... };
#pragma vtordisp(pop)
```

## <a name="see-also"></a>Vedere anche

[Direttive pragma e `__pragma` `_Pragma` parole chiave e](./pragma-directives-and-the-pragma-keyword.md)
