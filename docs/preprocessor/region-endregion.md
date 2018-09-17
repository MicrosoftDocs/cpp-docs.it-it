---
title: la regione, endregion | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- vc-pragma.endregion
- endregion_CPP
- region_CPP
- vc-pragma.region
dev_langs:
- C++
helpviewer_keywords:
- pragmas, region
- pragmas, endregion
- endregion pragma
- region pragma
ms.assetid: c697f807-622f-4796-851b-68a42bbecd84
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: dac2df26f393b7491d94abdb6d987a8e424723e1
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45715559"
---
# <a name="region-endregion"></a>region, endregion
`#pragma region` Consente di specificare un blocco di codice che è possibile espandere o comprimere durante l'uso di [funzionalità struttura](/visualstudio/ide/outlining) dell'Editor di codice di Visual Studio.  
  
## <a name="syntax"></a>Sintassi  
  
```  
#pragma region name  
#pragma endregion comment  
```  
  
### <a name="parameters"></a>Parametri  
*comment*  
(Facoltativo) Un commento che verrà visualizzato nell'editor del codice.  
  
*name*  
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