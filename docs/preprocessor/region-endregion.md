---
title: region, endregion
ms.date: 10/18/2018
f1_keywords:
- vc-pragma.endregion
- endregion_CPP
- region_CPP
- vc-pragma.region
helpviewer_keywords:
- pragmas, region
- pragmas, endregion
- endregion pragma
- region pragma
ms.assetid: c697f807-622f-4796-851b-68a42bbecd84
ms.openlocfilehash: c73a90aa2be83d643b74dde4645081e89da3ff73
ms.sourcegitcommit: c7f90df497e6261764893f9cc04b5d1f1bf0b64b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/05/2019
ms.locfileid: "59037931"
---
# <a name="region-endregion"></a>region, endregion

`#pragma region` Consente di specificare un blocco di codice che è possibile espandere o comprimere durante l'uso di [funzionalità struttura](/visualstudio/ide/outlining) dell'Editor di codice di Visual Studio.

## <a name="syntax"></a>Sintassi

```
#pragma region name
#pragma endregion comment
```

### <a name="parameters"></a>Parametri

*commento*<br/>
(Facoltativo) Un commento che verrà visualizzato nell'editor del codice.

*name*<br/>
(Facoltativo) Il nome dell'area.  Questo nome verrà visualizzato nell'editor di codice.

## <a name="remarks"></a>Note

`#pragma endregion` Contrassegna la fine di un `#pragma region` blocco.

Oggetto `#region` blocco deve terminare con `#pragma endregion`.

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

[Direttive pragma e parola chiave __Pragma](../preprocessor/pragma-directives-and-the-pragma-keyword.md)