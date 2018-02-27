---
title: area geografica, endregion | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
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
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 1fda2aba5fdb0aa83066c1762822bfce5fc5f6b4
ms.sourcegitcommit: d51ed21ab2b434535f5c1d553b22e432073e1478
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/23/2018
---
# <a name="region-endregion"></a>region, endregion
**area #pragma** consente di specificare un blocco di codice che è possibile espandere o comprimere durante l'uso di [funzionalità struttura](/visualstudio/ide/outlining) dell'Editor di codice di Visual Studio.  
  
## <a name="syntax"></a>Sintassi  
  
```  
#pragma region name  
#pragma endregion comment  
```  
  
#### <a name="parameters"></a>Parametri  
 `comment`(facoltativo)  
 Un commento che verrà visualizzato nell'editor di codice.  
  
 *nome*(facoltativo)  
 Il nome dell'area.  Questo nome verrà visualizzato nell'editor di codice.  
  
## <a name="remarks"></a>Note  
 **endregion #pragma** contrassegna la fine di un **#pragma area** blocco.  
  
 Oggetto `#region` blocco deve terminare con **#pragma endregion**.  
  
## <a name="example"></a>Esempio  
  
```  
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