---
title: Configurazione di un collegamento statico nel codice del Registrar (solo C++)
description: Come collegare in modo statico il codice C++ al codice del registrar ATL.
ms.date: 09/03/2020
helpviewer_keywords:
- statically linking to ATL Registrar code
- linking [C++], to ATL Registrar code
ms.assetid: 835f5885-87a6-48fa-91e6-60988ee65538
ms.openlocfilehash: f08f7d9433ae1344c7a98a5c52502d03bad21e91
ms.sourcegitcommit: 0df2b7ab4e81284c5248e4584767591dcc1950c3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/09/2020
ms.locfileid: "89609158"
---
# <a name="setting-up-a-static-link-to-the-registrar-code-c-only"></a>Impostazione di un collegamento statico al codice del registrar (solo C++)

I client C++ possono creare un collegamento statico al codice del registrar. Il collegamento statico del parser del Registrar aggiunge approssimativamente 5K a una build di rilascio.

Il modo più semplice per configurare il collegamento statico presuppone che sia stato specificato [`DECLARE_REGISTRY_RESOURCEID`](reference/registry-macros.md#declare_registry_resourceid) nella dichiarazione dell'oggetto. Si tratta della specifica predefinita utilizzata da ATL.

## <a name="to-create-a-static-link-using-declare_registry_resourceid"></a>Per creare un collegamento statico utilizzando `DECLARE_REGISTRY_RESOURCEID`

1. Specificare **`/D _ATL_STATIC_REGISTRY`** invece di **`/D _ATL_DLL`** nella riga di comando CL. Per altre informazioni, vedere [`/D`](../build/reference/d-preprocessor-definitions.md).

1. Ricompilare.

## <a name="see-also"></a>Vedi anche

[Componente registro di sistema (Registrar)](../atl/atl-registry-component-registrar.md)
