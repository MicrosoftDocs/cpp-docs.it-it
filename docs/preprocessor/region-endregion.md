---
description: Altre informazioni sulle direttive Region e endregion pragma in Microsoft C/C++
title: Region e endregion pragma
ms.date: 01/22/2021
f1_keywords:
- vc-pragma.endregion
- endregion_CPP
- region_CPP
- vc-pragma.region
helpviewer_keywords:
- pragma, region
- pragma, endregion
- endregion pragma
- region pragma
no-loc:
- pragma
ms.openlocfilehash: 68964cd2cab4ff344a8319f970f7ee94be4d378d
ms.sourcegitcommit: a26a66a3cf479e0e827d549a9b850fad99b108d1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/22/2021
ms.locfileid: "98713285"
---
# <a name="region-and-endregion-no-locpragma"></a>`region`e `endregion`pragma

`#pragma region` consente di specificare un blocco di codice che è possibile espandere o comprimere quando si usa la [funzionalità di struttura](/visualstudio/ide/outlining) dell'editor di Visual Studio.

## <a name="syntax"></a>Sintassi

> **`#pragma region`***nome*\
> **`#pragma endregion`***Commento*

### <a name="parameters"></a>Parametri

*Commento*\
Opzionale Commento da visualizzare nell'editor di codice.

*nome*\
Opzionale Nome dell'area. Questo nome viene visualizzato nell'editor di codice.

## <a name="remarks"></a>Osservazioni

`#pragma endregion` contrassegna la fine di un `#pragma region` blocco.

Un `#pragma region` blocco deve terminare con una `#pragma endregion` direttiva.

## <a name="example"></a>Esempio

```cpp
// pragma_directives_region.cpp
#pragma region Region_1
void Test() {}
void Test2() {}
void Test3() {}
#pragma endregion Region_1

int main() {}
```

## <a name="see-also"></a>Vedere anche

[Direttive pragma e `__pragma` `_Pragma` parole chiave e](./pragma-directives-and-the-pragma-keyword.md)
