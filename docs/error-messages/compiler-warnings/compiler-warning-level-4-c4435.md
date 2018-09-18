---
title: Compilatore avviso (livello 4) C4435 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
dev_langs:
- C++
ms.assetid: a04524af-2b71-4ff9-9729-d9d1d1904ed7
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 7c9a69e0d899e1a79c1d91b7c18c0eacaf66d32a
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46027297"
---
# <a name="compiler-warning-level-4-c4435"></a>Avviso del compilatore (livello 4) C4435

'classe1': il layout dell'oggetto in /vd2 verrà modificato a causa della base virtuale '%$S'

Per impostazione predefinita, questo avviso non è attivo. Per altre informazioni, vedere [Avvisi del compilatore disattivati per impostazione predefinita](../../preprocessor/compiler-warnings-that-are-off-by-default.md) .

Nell'opzione di compilazione predefinita di /vd1, la classe derivata non ha un campo `vtordisp` per la base virtuale indicata.  Se /vd2 o `#pragma vtordisp(2)` è attivo, verrà visualizzato un campo `vtordisp`, modificando il layout dell'oggetto.  Questo può causare problemi di compatibilità binaria se i moduli di interazione sono compilati con impostazioni `vtordisp` diverse.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C4435.

```cpp
// C4435.cpp
// compile with: /c /W4
#pragma warning(default : 4435)
class A
{
public:
    virtual ~A() {}
};

class B : public virtual A  // C4435
{};
```

## <a name="see-also"></a>Vedere anche

[vtordisp](../../preprocessor/vtordisp.md)<br/>
[/vd (disabilita gli spostamenti dei costruttori)](../../build/reference/vd-disable-construction-displacements.md)