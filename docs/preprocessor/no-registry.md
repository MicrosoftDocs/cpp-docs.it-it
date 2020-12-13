---
description: 'Altre informazioni su: no_registry attributo Import'
title: no_registry attributo Import
ms.date: 08/29/2019
f1_keywords:
- no_registry
helpviewer_keywords:
- no_registry attribute
ms.assetid: d30de4e2-551c-428c-98fd-951330d578d3
ms.openlocfilehash: fa33bf8096a92ec248b0a9d56e39fcc82f433206
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97333301"
---
# <a name="no_registry-import-attribute"></a>no_registry attributo Import

**no_registry** indica al compilatore di non eseguire ricerche nel registro di sistema per le librerie dei tipi importate con `#import` .

## <a name="syntax"></a>Sintassi

> **#import** **no_registry** della *libreria di tipi*

### <a name="parameters"></a>Parametri

*libreria di tipi*\
Una libreria dei tipi.

## <a name="remarks"></a>Commenti

Se nelle directory di inclusione non viene trovata una libreria dei tipi a cui viene fatto riferimento, la compilazione non riesce anche se la libreria dei tipi si trova nel registro di sistema.  **no_registry** viene propagata ad altre librerie dei tipi importate in modo implicito con `auto_search` .

Il compilatore non cerca mai nel registro di sistema le librerie dei tipi specificate dal nome file e passate direttamente a `#import` .

Quando `auto_search` si specifica, le `#import` direttive aggiuntive vengono generate usando l'impostazione **no_registry** dell'oggetto iniziale `#import` . Se la `#import` direttiva iniziale è stata **no_registry**, `auto_search` `#import` viene **no_registry** anche un oggetto generato da.

**no_registry** è utile se si desidera importare librerie di tipi a cui si fa riferimento incrociato. Impedisce al compilatore di trovare una versione precedente del file nel registro di sistema. **no_registry** è utile anche se la libreria dei tipi non è registrata.

## <a name="see-also"></a>Vedi anche

[attributi di #import](../preprocessor/hash-import-attributes-cpp.md)\
[#import (direttiva)](../preprocessor/hash-import-directive-cpp.md)
