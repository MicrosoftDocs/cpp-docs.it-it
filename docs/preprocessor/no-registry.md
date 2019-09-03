---
title: attributo di importazione no_registry
ms.date: 08/29/2019
f1_keywords:
- no_registry
helpviewer_keywords:
- no_registry attribute
ms.assetid: d30de4e2-551c-428c-98fd-951330d578d3
ms.openlocfilehash: 7c81cc2f570cb9ac4e977dac6d55cb69e491d3b2
ms.sourcegitcommit: 6e1c1822e7bcf3d2ef23eb8fac6465f88743facf
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/03/2019
ms.locfileid: "70220719"
---
# <a name="no_registry-import-attribute"></a>attributo di importazione no_registry

**no_registry** indica al compilatore di non eseguire ricerche nel registro di sistema per le `#import`librerie dei tipi importate con.

## <a name="syntax"></a>Sintassi

> **#import** *libreria di tipi* **no_registry**

### <a name="parameters"></a>Parametri

*libreria di tipi*\
Una libreria dei tipi.

## <a name="remarks"></a>Note

Se nelle directory di inclusione non viene trovata una libreria dei tipi a cui viene fatto riferimento, la compilazione non riesce anche se la libreria dei tipi si trova nel registro di sistema.  **no_registry** viene propagato ad altre librerie dei tipi importate in modo implicito con `auto_search`.

Il compilatore non cerca mai nel registro di sistema le librerie dei tipi specificate dal nome file e passate `#import`direttamente a.

Quando `auto_search` si specifica, le direttive aggiuntive `#import` vengono generate usando l'impostazione **no_registry** dell'iniziale `#import`. Se la direttiva `#import` iniziale era **no_registry**, anche `auto_search`un oggetto `#import` generato da è **no_registry**.

**no_registry** è utile se si desidera importare librerie di tipi a cui si fa riferimento incrociato. Impedisce al compilatore di trovare una versione precedente del file nel registro di sistema. **no_registry** è utile anche se la libreria dei tipi non è registrata.

## <a name="see-also"></a>Vedere anche

[attributi di #import](../preprocessor/hash-import-attributes-cpp.md)\
[#import (direttiva)](../preprocessor/hash-import-directive-cpp.md)
