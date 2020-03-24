---
title: Avviso del compilatore (livello 4) C4435
ms.date: 11/04/2016
f1_keywords:
- C4435
helpviewer_keywords:
- C4435
ms.assetid: a04524af-2b71-4ff9-9729-d9d1d1904ed7
ms.openlocfilehash: 8021b6e4650a03b16c96711b8afe4f5fa57d2f07
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80185347"
---
# <a name="compiler-warning-level-4-c4435"></a>Avviso del compilatore (livello 4) C4435

'classe1': il layout dell'oggetto in /vd2 verrà modificato a causa della base virtuale '%$S'

Per impostazione predefinita, questo avviso non è attivo. Per altre informazioni, vedere [Avvisi del compilatore disattivati per impostazione predefinita](../../preprocessor/compiler-warnings-that-are-off-by-default.md) .

Nell'opzione di compilazione predefinita di /vd1, la classe derivata non ha un campo `vtordisp` per la base virtuale indicata.  Se /vd2 o `#pragma vtordisp(2)` è attivo, verrà visualizzato un campo `vtordisp`, modificando il layout dell'oggetto.  Questo può causare problemi di compatibilità binaria se i moduli di interazione sono compilati con impostazioni `vtordisp` diverse.

## <a name="example"></a>Esempio

L'esempio seguente genera l'C4435.

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
