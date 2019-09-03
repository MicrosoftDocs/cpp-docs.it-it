---
title: Pragma vtordisp
ms.date: 08/29/2019
f1_keywords:
- vc-pragma.vtordisp
- vtordisp_CPP
helpviewer_keywords:
- pragmas, vtordisp
- vtordisp pragma
ms.assetid: 05b7d73c-43fa-4b62-8c8a-170a9e427391
ms.openlocfilehash: 3c676ab2bfee1b6cf3caff3ab456a4f23f2744c3
ms.sourcegitcommit: 6e1c1822e7bcf3d2ef23eb8fac6465f88743facf
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/03/2019
ms.locfileid: "70216489"
---
# <a name="vtordisp-pragma"></a>Pragma vtordisp

**C++Specifico**

Controlla l'aggiunta del membro di `vtordisp` spostamento di costruzione/distruzione nascosto.

## <a name="syntax"></a>Sintassi

> **#pragma vtordisp (** [ **push,** ] *n* **)** \
> **#pragma vtordisp (pop)** \
> **#pragma vtordisp ()** \
> **#pragma vtordisp (** [ **push,** ] { **on** | **off** } **)**

### <a name="parameters"></a>Parametri

**spingere**\
Inserisce l'impostazione corrente `vtordisp` nello stack interno del compilatore e imposta la nuova `vtordisp` impostazione su *n*.  Se *n* non è specificato, l' `vtordisp` impostazione corrente è invariata.

**popup**\
Rimuove il record superiore dallo stack interno del compilatore e ripristina l' `vtordisp` impostazione sul valore rimosso.

*n*\
Specifica il nuovo valore per l' `vtordisp` impostazione. I valori possibili sono 0, 1 o 2, corrispondenti alle `/vd0`opzioni `/vd1`del compilatore `/vd2` , e. Per ulteriori informazioni, vedere [/VD (Disabilita spostamenti costruzione)](../build/reference/vd-disable-construction-displacements.md).

**in**\
Equivalente a `#pragma vtordisp(1)`.

**off**\
Equivalente a `#pragma vtordisp(0)`.

## <a name="remarks"></a>Note

Il pragma **vtordisp** è applicabile solo al codice che usa basi virtuali. Se una classe derivata esegue l'override di una funzione virtuale che eredita da una classe base virtuale e se un costruttore o un distruttore per la classe derivata chiama tale funzione utilizzando un puntatore alla classe base virtuale, il compilatore potrebbe introdurre campi nascosti `vtordisp` aggiuntivi nelle classi con basi virtuali.

Il pragma **vtordisp** influiscono sul layout delle classi che lo seguono. Le `/vd0`opzioni `/vd1`, e`/vd2` specificano lo stesso comportamento per i moduli completi. Se si specifica 0 o **off** , i `vtordisp` membri nascosti vengono eliminati. Disattivare **vtordisp** solo se non è possibile che i costruttori e i distruttori della classe chiamino funzioni virtuali sull'oggetto a cui fa riferimento il `this` puntatore.

Se si specifica 1 o **on**, l'impostazione predefinita abilita `vtordisp` i membri nascosti laddove sono necessari.

Se si specifica 2, `vtordisp` vengono abilitati i membri nascosti per tutte le basi virtuali con funzioni virtuali.  `#pragma vtordisp(2)`potrebbe essere necessario per garantire le prestazioni corrette di **dynamic_cast** in un oggetto parzialmente costruito. Per altre informazioni, vedere [Avviso del compilatore (livello 1) C4436](../error-messages/compiler-warnings/compiler-warning-level-1-c4436.md).

`#pragma vtordisp()`, senza argomenti, ripristina l'impostazione iniziale dell' `vtordisp` impostazione.

```cpp
#pragma vtordisp(push, 2)
class GetReal : virtual public VBase { ... };
#pragma vtordisp(pop)
```

**Specifico C++ finale**

## <a name="see-also"></a>Vedere anche

[Direttive pragma e parola chiave __pragma](../preprocessor/pragma-directives-and-the-pragma-keyword.md)
