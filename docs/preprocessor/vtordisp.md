---
title: vtordisp
ms.date: 10/18/2018
f1_keywords:
- vc-pragma.vtordisp
- vtordisp_CPP
helpviewer_keywords:
- pragmas, vtordisp
- vtordisp pragma
ms.assetid: 05b7d73c-43fa-4b62-8c8a-170a9e427391
ms.openlocfilehash: 67c6c329bcee75012f6075334760925eca945501
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62179452"
---
# <a name="vtordisp"></a>vtordisp

**Sezione specifica C++**

Controlla l'aggiunta del membro di spostamento di costruzione o distruzione nascosto vtordisp.

## <a name="syntax"></a>Sintassi

```cpp
#pragma vtordisp([push,] n)
#pragma vtordisp(pop)
#pragma vtordisp()
#pragma vtordisp([push,] {on | off})
```

### <a name="parameters"></a>Parametri

*push*<br/>
Inserisce l'impostazione corrente di vtordisp nello stack interno del compilatore e imposta la nuova impostazione di vtordisp *n*.  Se *n* non viene specificato, l'impostazione corrente di vtordisp non viene modificato.

*pop*<br/>
Rimuove il primo record dallo stack interno del compilatore e ripristina l'impostazione di vtordisp su valore rimosso.

*n*<br/>
Specifica il nuovo valore per l'impostazione di vtordisp. I valori possibili sono 0, 1 o 2, corrispondenti per il `/vd0`, `/vd1`, e `/vd2` opzioni del compilatore. Per altre informazioni, vedere [/vd (Disabilita spostamenti costruttori)](../build/reference/vd-disable-construction-displacements.md).

*on*<br/>
Equivalente a `#pragma vtordisp(1)`.

*off*<br/>
Equivalente a `#pragma vtordisp(0)`.

## <a name="remarks"></a>Note

Il **vtordisp** pragma è applicabile solo al codice che utilizza basi virtuali. Se una classe derivata esegue l'override di una funzione virtuale che eredita da una classe base virtuale e se un costruttore o distruttore della classe derivata chiama tale funzione utilizzando un puntatore a classe base virtuale, il compilatore potrebbe introdurre nascostiaggiuntive**vtordisp** campi nelle classi con basi virtuali.

Il **vtordisp** pragma influisce sul layout delle classi che lo seguono. Il `/vd0`, `/vd1`, e `/vd2` opzioni specificano lo stesso comportamento per moduli completi. Se si specifica 0 oppure *disattivata* sopprime nascosto **vtordisp** membri. Disattivare **vtordisp** solo se è presente alcuna possibilità che i costruttori e distruttori della classe chiamano virtuali non funzioni sull'oggetto a cui punta il **ciò** puntatore.

Specificare 1 o *sul*, l'impostazione predefinita, consente nascosto **vtordisp** membri in cui sono necessari.

Specificando 2 consente a nascosto **vtordisp** membri per tutte le basi virtuali con le funzioni virtuali.  `vtordisp(2)` potrebbe essere necessario per assicurare prestazioni corrette dei **dynamic_cast** su un oggetto parzialmente costruito. Per altre informazioni, vedere [avviso del compilatore (livello 1) C4436](../error-messages/compiler-warnings/compiler-warning-level-1-c4436.md).

`#pragma vtordisp()`, senza argomenti, ripristina l'impostazione di vtordisp sul valore iniziale.

```cpp
#pragma vtordisp(push, 2)
class GetReal : virtual public VBase { ... };
#pragma vtordisp(pop)
```

**Fine sezione specifica C++**

## <a name="see-also"></a>Vedere anche

[Direttive pragma e parola chiave __Pragma](../preprocessor/pragma-directives-and-the-pragma-keyword.md)