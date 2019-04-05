---
title: Avviso del compilatore (livello 4) C4435
ms.date: 11/04/2016
ms.assetid: a04524af-2b71-4ff9-9729-d9d1d1904ed7
ms.openlocfilehash: 43c13c484d6e9accee7c4d2c58b72a4539a75c4c
ms.sourcegitcommit: c7f90df497e6261764893f9cc04b5d1f1bf0b64b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/05/2019
ms.locfileid: "59041228"
---
# <a name="compiler-warning-level-4-c4435"></a>Avviso del compilatore (livello 4) C4435

'class1': Layout dell'oggetto in/vd2 verrà modificato a causa di base virtuale 'class2'

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
[/vd (Disabilita spostamenti costruttori)](../../build/reference/vd-disable-construction-displacements.md)