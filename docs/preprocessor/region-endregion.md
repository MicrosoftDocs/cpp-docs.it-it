---
title: Pragma region, endregion
ms.date: 08/29/2019
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
ms.openlocfilehash: 4a01e04582ac81d678aa0702945c62ee974a4428
ms.sourcegitcommit: 6e1c1822e7bcf3d2ef23eb8fac6465f88743facf
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/03/2019
ms.locfileid: "70222372"
---
# <a name="region-endregion-pragmas"></a>Pragma region, endregion

`#pragma region`consente di specificare un blocco di codice che è possibile espandere o comprimere quando si usa la [funzionalità di struttura](/visualstudio/ide/outlining) dell'editor Visual Studio Code.

## <a name="syntax"></a>Sintassi

> **area #pragma** *nome*\
> **#pragma endregion** *Commento*

### <a name="parameters"></a>Parametri

*Commento*\
Opzionale Commento da visualizzare nell'editor di codice.

*nome*\
Opzionale Nome dell'area. Questo nome viene visualizzato nell'editor di codice.

## <a name="remarks"></a>Note

`#pragma endregion`contrassegna la fine di un `#pragma region` blocco.

Un `#region` blocco deve terminare con una `#pragma endregion` direttiva.

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

[Direttive pragma e parola chiave __pragma](../preprocessor/pragma-directives-and-the-pragma-keyword.md)
