---
description: 'Altre informazioni su: Region, pragma endregion'
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
ms.openlocfilehash: a12305240f0c05913d16c5f26fb64661fc08e736
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97167422"
---
# <a name="region-endregion-pragmas"></a>Pragma region, endregion

`#pragma region` consente di specificare un blocco di codice che è possibile espandere o comprimere quando si usa la [funzionalità di struttura](/visualstudio/ide/outlining) dell'editor Visual Studio Code.

## <a name="syntax"></a>Sintassi

> *nome* **area #pragma**\
> **#pragma** *Commento* endregion

### <a name="parameters"></a>Parametri

*Commento*\
Opzionale Commento da visualizzare nell'editor di codice.

*nome*\
Opzionale Nome dell'area. Questo nome viene visualizzato nell'editor di codice.

## <a name="remarks"></a>Commenti

`#pragma endregion` contrassegna la fine di un `#pragma region` blocco.

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
